#include "stdafx.h"
#include "DreamHero.h"
#include "session.h"
#define _SAVE_PLAYER_TIME_  (10 * _TIME_SECOND_MSEL_)
DreamHero::DreamHero()
{
	_info.set_action_point(0);
	_info.set_diamand(0);
	_info.set_gold(0);
	_info.set_level(1);
	_info.set_name("test");
}


DreamHero::~DreamHero()
{
	StopSave();
}


message::MsgHeroData DreamHero::get_info()
{
	return _info;
}


u64 DreamHero::get_account()
{
	return _account;
}

void DreamHero::set_account(u64 account)
{
	_account = account;
	_info.set_account(_account);
}

void DreamHero::set_info(const message::MsgHeroData* info)
{
	_info.CopyFrom(*info);	
}


void DreamHero::set_session(Session* session)
{
	_session = session;
}

Session* DreamHero::get_session()
{
	return _session;
}

int SplitStringA(const std::string& strIn, const std::string& strDelimiter, std::vector<std::string>& ret)
{
	ret.clear();

	int iPos = 0;
	int newPos = -1;
	int delimiterLength = strDelimiter.size();
	int strInLength = strIn.size();

	if (delimiterLength == 0 || strInLength == 0)
		return 0;

	std::vector<int> positions;

	newPos = strIn.find(strDelimiter, 0);

	if (newPos < 0)
	{
		ret.push_back(strIn);
		return 1;
	}

	int numFound = 0;

	while (newPos >= iPos)
	{
		numFound++;
		positions.push_back(newPos);
		iPos = newPos;
		newPos = strIn.find(strDelimiter, iPos + delimiterLength);
	}

	for (size_t i = 0; i <= positions.size(); ++i)
	{
		std::string s("");
		if (i == 0)
		{
			s = strIn.substr(i, positions[i]);
		}
		else
		{
			int offset = positions[i - 1] + delimiterLength;
			if (offset < strInLength)
			{
				if (i == positions.size())
				{
					s = strIn.substr(offset);
				}
				else
				{
					s = strIn.substr(offset, positions[i] - positions[i - 1] - delimiterLength);
				}
			}
		}

		if (s.size() > 0)
		{
			ret.push_back(s);
		}
	}
	return numFound;
}
bool isIntger(std::string str)
{
	std::stringstream sin(str);
	int number;
	if (!(sin >> number))
		return false;
	return true;
}

std::vector<int> MapVersionFormat(std::string cur_version)
{
	std::vector<std::string> vcstr;
	std::vector<int> vcret;
	SplitStringA(cur_version, ".", vcstr);
	for (int i = 0; i < vcstr.size(); i ++)
	{
		if (isIntger(vcstr[i].c_str()))
		{
			vcret.push_back(atoi(vcstr[i].c_str()));
		}
		else
		{
			break;
		}
	}
	return vcret;
}

void DreamHero::set_level(int level)
{
	_info.set_level(level);
}

void DreamHero::StartSave()
{

	if (gEventMgr.hasEvent(this, EVENT_SAVE_PLAYER_DATA_) == false)
	{
		gEventMgr.addEvent(this, &DreamHero::SaveHero, EVENT_SAVE_PLAYER_DATA_, _SAVE_PLAYER_TIME_, 99999999, 0);
	}
}

void DreamHero::StopSave()
{
	if (gEventMgr.hasEvent(this, EVENT_SAVE_PLAYER_DATA_) == true)
	{
		gEventMgr.removeEvents(this, EVENT_SAVE_PLAYER_DATA_);
	}
}

void DreamHero::SendClientInit()
{
	StartSave();
	message::S2CMsgHeroInit msg;
	msg.mutable_hero()->CopyFrom(_info);
	//sendPBMessage(&msg);
	int max_count = 40;
	int current_count = 0;

	message::S2CMsgEquipInit equip_msg;
	message::S2CMsgHeroEquip* equip_temp = NULL;
	equip_msg.mutable_equip();
	HEROEQUIPS::iterator it_temp = _hero_equips.begin();
	int max_count_equip = _hero_equips.size();
	int current_equip_count = 0;
	for (current_equip_count = 1; it_temp != _hero_equips.end(); ++ it_temp, current_count ++, current_equip_count ++)
	{
		if (current_count == 0)
		{
			equip_temp = equip_msg.mutable_equip();			
		}
		message::MsgEquipData* equip_data = equip_temp->add_equips();
		equip_temp->CopyFrom(it_temp->second);
		if (current_equip_count == 1)
		{
			equip_temp->set_begin(true);
		}
		if (current_equip_count == max_count_equip)
		{
			equip_temp->set_end(true);
		}

		if (current_count >= max_count)
		{
			sendPBMessage(&equip_msg);
			equip_msg.clear_equip();
		}				
	}

	if (equip_msg.mutable_equip()->equips_size() > 0)
	{
		sendPBMessage(&equip_msg);
	}
	
	//msg.mutable_info()->CopyFrom(_dream_hero->get_info());
	sendPBMessage(&msg);
}


void DreamHero::LoadFromConfig()
{
	_info.set_diamand(gGameConfig.getHeroConfig().diamond);
	_info.set_level(gGameConfig.getHeroConfig().level);
	_info.set_gold(gGameConfig.getHeroConfig().gold);
	if (gGameConfig.getHeroConfig().equips.empty() == false)
	{
		std::vector<HeroEquipConfig>::iterator it = gGameConfig.getHeroConfig().equips.begin();
		for (; it != gGameConfig.getHeroConfig().equips.end(); ++it)
		{
			HeroEquipConfig entry_equip_config = (*it);
			message::MsgEquipData entry;
			entry.set_id(gGameConfig.generateEquipID());
			entry.set_equipped(true);
			entry.set_client_save_flag(0);
			entry.set_level(entry_equip_config.equip_level);
			entry.set_equip_id(entry_equip_config.equip_config_id);
			_hero_equips[entry.id()] = entry;
		}
	}
}

void DreamHero::SaveHero()
{
	std::string sql_temp;

	
	char temp[1024];
	sprintf(temp, "replace into `character`(`account_id`, `level`, `name`,`action_point`, `diamand`, `gold`) values(%lu, %d, '%s', %d, %d, %d);",
		_info.account(), _info.level(), _info.name().c_str(), _info.action_point(), _info.diamand(), _info.gold());
	sql_temp += temp;
	message::MsgSaveDataGS2DB msg_db;
	msg_db.set_sql(sql_temp.c_str());
	sql_temp.clear();
 
	gGSDBClient.sendPBMessage(&msg_db, _session->getTranId());
	//gGSDBClient.parseQueryChar()
	if (_hero_equips.size() != 0)
	{
		std::string sql_item = "replace into `character_equip`(`equip_id`, `account_id`, `equip_config_id`, `level`, `equipped`, `client_save_fiag`) values";
		HEROEQUIPS::iterator it = _hero_equips.begin();
		int item_count = 0;
		for (; it != _hero_equips.end(); ++ it)
		{
			if (item_count >= 20)
			{
				msg_db.clear_sql();
				msg_db.set_sql(sql_temp.c_str());
				gGSDBClient.sendPBMessage(&msg_db, _session->getTranId());
				item_count = 0;
			}

			if (item_count == 0)
			{
				sql_temp += sql_item;
			}
			else
			{
				sql_temp += ",";
			}
			message::MsgEquipData entry = it->second; 
			sprintf(temp, "(%lu, %lu, %d, %d, %d, %d)", entry.id(), _info.account(), entry.equip_id(), entry.level(), (int)entry.equipped(), entry.client_save_flag());
			sql_temp += temp;
		}

		if (sql_temp.empty() == false)
		{
			msg_db.clear_sql();
			msg_db.set_sql(sql_temp.c_str());
			gGSDBClient.sendPBMessage(&msg_db, _session->getTranId());
		}
	}
}

void DreamHero::set_name(const char* name)
{
	_info.set_name(name);
}

int DreamHero::get_level()
{
	return _info.level();
}
const char* DreamHero::get_name()
{
	return _info.name().c_str();
}




void DreamHero::sendPBMessage(google::protobuf::Message* p)
{
	if (_session)
	{
		_session->sendPBMessage(p);
	}
	
}
