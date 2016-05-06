#include "stdafx.h"
#include "db_quest.h"
#include "game_session.h"
#include <stdlib.h>
#include <stdio.h>
#include <boost/uuid/uuid.hpp>
#include <boost/uuid/uuid_generators.hpp>
#include <boost/uuid/uuid_io.hpp>
const char* newGUID()  
{  
	static std::string stc_string;
	static char buf[64] = {0};
	using namespace std;
	using namespace boost::uuids;
	random_generator gen;
	uuid ranuuid = gen();
	stringstream ss;
	ss << ranuuid;
	ss >> stc_string;
	return stc_string.c_str();  
} 
enum
{
	_QUERY_HERO_INFO_ = _NORMAL_THREAD + 1,
	_QUERY_HERO_MAP_INFO_,
	_SAVE_HERO_INFO_

};
struct tgHeroData
{
	tgHeroData(account_type acc, tran_id_type tran, u16 gs)
	{
		account = acc;
		tranid = tran;
		gsid = gs;
	}
	tgHeroData(tgHeroData* hero)
	{
		account = hero->account;
		tranid = hero->tranid;
		info = hero->info;
		gsid = hero->gsid;
	}
	account_type account;
	tran_id_type tranid;
	message::MsgHeroDataDB2GS info;
	u16 gsid;
};

DBQuestManager::DBQuestManager()
{

}

DBQuestManager::~DBQuestManager()
{

}

void DBQuestManager::saveHeroMap(message::MsgSaveHeroDataGS2DB* msg)
{
	//account_type acc = msg->account();
	//char sz_temp[512];
	//message::MsgHeroData* heroData = msg->mutable_data();
	//sprintf(sz_temp, "replace into `character`(`account`, `level`, `name`, `action_point`) values (%llu, %d, '%s', %d)", );		
	//sprintf(sz_temp, "replace into `dream_hero`(`account_id`,`hero_id`,`hero_hp`,`hero_speed`, `hero_damage`, `hero_name`) VALUES (%llu, %llu, %d, %d, %d, '%s');", 
	//	acc, acc, heroData->hp(), heroData->speed(), heroData->attack(), heroData->hero_name().c_str());
	//gDBCharDatabase.addSQueryTask(this, &DBQuestManager::dbCallNothing, sz_temp, 0, NULL, _SAVE_HERO_INFO_);
	//std::string str_sql_head = "replace into `dream_hero_map`(`account_id`,`map_index`,`version`,`mapdata`) VALUES";
	//std::string str_excute;
	//int size_temp = msg->maps_size();
	//int count = 0;
	//for (int i = 0; i < size_temp; i ++)
	//{
	//	if (count != 0)
	//	{
	//		str_excute += ",";
	//	}
	//	else
	//	{
	//		str_excute += str_sql_head;
	//	}
	//	message::MsgBaseMap temp = msg->maps(i);
	//	sprintf(sz_temp, "(%llu, '%s', '%s', '%s')", acc, temp.index().c_str(), temp.version().c_str(), temp.data().c_str());
	//	str_excute += sz_temp;
	//	if (count >= 5)
	//	{
	//		count = 0;
	//		gDBCharDatabase.addSQueryTask(this, &DBQuestManager::dbCallNothing, str_excute.c_str(), 0, NULL, _SAVE_HERO_INFO_);
	//		str_excute.clear();
	//	}
	//}
	//if (str_excute.empty() == false)
	//{
	//	gDBCharDatabase.addSQueryTask(this, &DBQuestManager::dbCallNothing, str_excute.c_str(), 0, NULL, _SAVE_HERO_INFO_);
	//	str_excute.clear();
	//}
}

void DBQuestManager::queryHeroInfo(account_type a, tran_id_type t, u16 gs)
{
	//DBQParms parms;
	
	char sz_sql[256];
	sprintf(sz_sql, "select * from `character` where `account_id`=%llu;",a);
	gDBCharDatabase.addSQueryTask(this, &DBQuestManager::dbDoQueryHeroInfo, sz_sql, 0, new tgHeroData(a, t, gs), _QUERY_HERO_INFO_);
	//gDBCharDatabase.addSQueryTask(this, &DBQuestManager::dbDoQueryRelation,  sql, &parms, new TSPlayerServerData(t, gs, guid), _RELATION_THREAD_);
}

void DBQuestManager::saveSqlData(const char* sql)
{
	std::string str_excute = sql;
	gDBCharDatabase.addSQueryTask(this, &DBQuestManager::dbCallNothing, str_excute.c_str(), 0, NULL, _SAVE_HERO_INFO_);
}


void DBQuestManager::dbDoQueryHeroEquips(const SDBResult* r, const void* d, bool s)
{
	if (r != NULL)
	{
		tgHeroData* pkParm = static_cast<tgHeroData*>(const_cast<void*>(d));
		if (!pkParm)
		{
			return;
		}
		const SDBResult& result = *r;
		for (int i = 0; i < result.num_rows(); i++)
		{
			const mysqlpp::Row row = result[i];
			message::MsgEquipData* eqiup = pkParm->info.add_equips();
			eqiup->set_id(row["equip_id"]);
			eqiup->set_equip_id(row["equip_config_id"]);
			eqiup->set_equipped((bool)row["equipped"]);
			eqiup->set_level(row["level"]);
			eqiup->set_client_save_flag(row["client_save_flag"]);
			eqiup->set_count(row["equip_count"]);
		}
		gDBGameManager.sendMessage(&pkParm->info, pkParm->tranid, pkParm->gsid);
	}

}


void DBQuestManager::dbDoQueryHeroInfo(const SDBResult* r, const void* d, bool s)
{
	tgHeroData* pkParm = static_cast<tgHeroData*>(const_cast<void*>(d));
	if (!pkParm)
	{
		return;
	}

	bool need_create = true;
	if (r != NULL)
	{
		const SDBResult& result = *r;
		if (result.num_rows() > 0)
		{

			const mysqlpp::Row row = result[0];
			account_type acc = row["account_id"];
			pkParm->info.set_account(acc);
			message::MsgHeroData* data = pkParm->info.mutable_data();
			data->set_level(row["level"]);
			std::string name_temp = row["name"].c_str();
			data->set_name(name_temp.c_str());
			data->set_action_point(row["action_point"]);
			data->set_gold(row["gold"]);
			data->set_diamand(row["diamand"]);
			data->set_account(acc);
			std::string sql_suits_name = row["suits_name"].c_str();
			std::vector<std::string> vc_str;
			std::vector<std::string> vc_suit_info;
			
			SplitStringA(sql_suits_name, ":", vc_str);
			std::vector<std::string>::iterator it_vc_str = vc_str.begin();
			for (; it_vc_str != vc_str.end(); ++ it_vc_str)
			{
				std::string str_temp = (*it_vc_str);
				SplitStringA(str_temp, ",", vc_suit_info);
				if (vc_suit_info.size() >= 2)
				{
					int id_suits = 0;
					std::string id_suits_name;
					
					if (isIntger(vc_suit_info[0].c_str()) == true)
					{
						id_suits = atoi(vc_suit_info[0].c_str());
						id_suits_name = vc_suit_info[1].c_str();
						message::MsgSuitData* suit_data = data->add_suits();
						suit_data->set_suit_id(id_suits);
						suit_data->set_suit_name(id_suits_name.c_str());												
						int siez_temp = vc_suit_info.size();
						for (int i = 2; i < siez_temp; i ++)
						{
							u64 equip_id_temp = _atoi64(vc_suit_info[0].c_str());							
							suit_data->add_equip_ids(equip_id_temp);
						}
					}
				}

			}

			need_create = false;
			//const char* sql = "select * from `character_equip` where `account`=%llu;";
			char sztemp[256];
			sprintf(sztemp, "select * from `character_equip` where `account_id`=%llu;", acc);
			gDBCharDatabase.addSQueryTask(this, &DBQuestManager::dbDoQueryHeroEquips, sztemp, 0, new tgHeroData(pkParm), _QUERY_HERO_INFO_);
			
			//message::MsgHeroDataDB2GS msg;
			//msg.set_account(pkParm->info.account());		
			//msg.mutable_data()->CopyFrom(pkParm->info);
			//gDBGameManager.sendMessage(&msg, pkParm->tranid, pkParm->gsid);
		}
	}

	if (need_create)
	{
		message::MsgNeedCreateHeroDB2GS msg;
		gDBGameManager.sendMessage(&msg, pkParm->tranid, pkParm->gsid);
	}

}
/*

void DBQuestManager::dbDoQueryHeroInfo(DBQuery*p, const void* d)
{
	tgHeroData* pkParm = static_cast<tgHeroData*>(const_cast<void*>(d));
	if (!pkParm || !p |)
	{
		return;
	}

	const CharInfo& info = pkParm->pcd->charinfo();
	DBQuery& query = *p;
	DBQParms parms;
	parms << info.name();
	parms << info.head();
	parms << info.sex();
	parms << (u8)info.chartype();
	parms << (u32)info.user_account();
	parms << pkParm->pcd->mapid();
	parms << pkParm->pcd->cityid();
	query << "CALL CreatePlayer(%0q,%1,%2,%3,%4,%5,%6)";
	query.parse();
	SDBResult sResult = query.store(parms);
	if (sResult.num_rows() > 0)
	{
		DBRow& row = sResult[0];
		u32 error_code = row["error_code"];
		if (TSCreatePlayerInfo::_no_error_ == error_code)
		{
			pkParm->pinfo = getPlayerInfo(query.store_next());
		}
	}
	FREESTOREPROCEDURE(query);
}
*/


//
//
//enum
//{
//	_QUERY_SAVE_PLAYER_ = _NORMAL_THREAD + 1,
//	_CREATE_PLAYER_,
//	_RELATION_THREAD_,
//	_MAIL_THREAD_,
//};
//struct TSQueryPlayerInfo
//{
//
//
//	TSQueryPlayerInfo(account_type a, tran_id_type t, u16 gs)
//	{
//		account = a;
//		tranid = t;
//		gsid = gs;
//		p = NULL;
//	}
//	~TSQueryPlayerInfo()
//	{
//		if (p)
//		{
//			delete p;
//		}
//	}
//
//	account_type account;
//	tran_id_type tranid;
//	msgs2s::PlayerInfo* p;
//	u16 gsid;
//
//};
//struct TSCreatePlayerInfo
//{
//	enum
//	{
//		_no_error_,
//		_has_char_,
//		_name_error_,
//	};
//
//	TSCreatePlayerInfo(tran_id_type t, clientmsg::CreateChar* p, u16 gs)
//	{
//		tranid = t;
//		gsid = gs;
//		pcd = new clientmsg::CreateChar(*p);
//		pinfo = NULL;
//		error_code = _no_error_;
//	}
//	~TSCreatePlayerInfo()
//	{
//		delete pcd;
//		if (pinfo)
//		{
//			delete pinfo;
//		}
//	}
//
//	tran_id_type tranid;
//	u16 error_code;
//	u16 gsid;
//	clientmsg::CreateChar* pcd;
//	msgs2s::PlayerInfo* pinfo;
//};
//
//struct TSPlayerServerData
//{
//	TSPlayerServerData(tran_id_type t, u16 gs, u32 g)
//	{
//		tranid = t;
//		gsid = gs;
//		guid = g;
//	}
//
//	u32 guid;
//	tran_id_type tranid;
//	u16 gsid;
//};
//void DBQuestManager::savePlayerInfo(const msgs2s::PlayerInfo& info)
//{
//	const msgs2s::PlayerSCData& sc = info.sc_data();
//	const msgs2s::PlayerSSData& ss = info.ss_data();
//	DBQParms parms;
//	parms << sc.guid();
//	parms << ss.account();
//	parms << sc.name();
//	parms << sc.sex();
//	parms << sc.type();
//	parms << sc.head();
//	parms << sc.city();
//	parms << sc.mapid();
//	parms << sc.posx();
//	parms << sc.posy();
//	parms << sc.dir();
//	parms << ss.flag();
//	const char* sql = "UPDATE  `characters` SET `account` = %1, `name` = %2q, `sex` = %3, `type` = %4, `head`=%5, `city`=%6,`mapid`=%7,`posx`=%8,`posy`=%9,`dir`=%10,`flag`=%11 WHERE `guid`=%0";
//	gDBCharDatabase.addSQueryTask(this, &DBQuestManager::dbCallNothing, sql, &parms, NULL, _QUERY_SAVE_PLAYER_);
//}
//void DBQuestManager::queryPlayerRelation(u32 guid, tran_id_type t, u16 gs)
//{
//	// 	DBQParms parms;
//	// 	parms << guid;
//	// 	const char* sql =  "CALL QueryRelation(%0)";
//	// 	gDBCharDatabase.addSQueryTask(this, &DBQuestManager::dbDoQueryRelation,  sql, &parms, new TSPlayerServerData(t, gs, guid), _RELATION_THREAD_);
//}
//void DBQuestManager::queryPlayerMail(u32 guid, tran_id_type t, u16 gs)
//{
//	DBQParms parms;
//	parms << guid;
//	const char* sql = "SELECT * FROM `character_mail` WHERE `reciver` = %0 AND `del_flag` = 0";
//	gDBCharDatabase.addSQueryTask(this, &DBQuestManager::dbCallQueryMail, sql, &parms, new TSPlayerServerData(t, gs, guid), _MAIL_THREAD_);
//}
//void DBQuestManager::addMail(msgs2s::PlayerMail* p)
//{
//	DBQParms parms;
//	parms << p->mailid();
//	parms << p->sender();
//	parms << p->sendername();
//	parms << p->reciver();
//	parms << p->mailtype();
//	parms << p->content();
//	parms << p->flag();
//	const char* sql = "INSETR INTO `character_mail` VALUES(%0, %1, %2q, %3,%4, %5q,NOW(), %6, 0)";
//	gDBCharDatabase.addSQueryTask(this, &DBQuestManager::dbCallNothing, sql, &parms, NULL, _MAIL_THREAD_);
//}
//void DBQuestManager::mailRead(u32 mailid, u32 flag)
//{
//	DBQParms parms;
//	parms << mailid;
//	parms << flag;
//	const char* sql = "UPDATE `character_mail` set `read_flag` = %1 WHERE mail_id = %0";
//	gDBCharDatabase.addSQueryTask(this, &DBQuestManager::dbCallNothing, sql, &parms, NULL, _MAIL_THREAD_);
//}
//void DBQuestManager::mailDelete(u32 mailid)
//{
//	DBQParms parms;
//	parms << mailid;
//	const char* sql = "UPDATE `character_mail` set `del_flag` = 1 WHERE mail_id = %0";
//	gDBCharDatabase.addSQueryTask(this, &DBQuestManager::dbCallNothing, sql, &parms, NULL, _MAIL_THREAD_);
//}
//void DBQuestManager::createPlayer(tran_id_type t, clientmsg::CreateChar* p, u16 gs)
//{
//	gDBCharDatabase.addBatchTask(this, &DBQuestManager::dbDoCreateChar, &DBQuestManager::dbCallCreateChar, new TSCreatePlayerInfo(t, p, gs), "create char info"/*, _CREATE_PLAYER_*/);
//}
//void DBQuestManager::queryPlayerInfo(account_type a, tran_id_type t, u16 gs)
//{
//	gDBCharDatabase.addBatchTask(this, &DBQuestManager::dbDoQueryChar, &DBQuestManager::dbCallQueryChar, new TSQueryPlayerInfo(a, t, gs), "query char info"/*, _QUERY_SAVE_PLAYER_*/);
//}
//void DBQuestManager::dbDoQueryChar(DBQuery*p, const void* d)
//{
//	TSQueryPlayerInfo* pkParm = static_cast<TSQueryPlayerInfo*>(const_cast<void*>(d));
//	if (!pkParm || !p)
//	{
//		return;
//	}
//
//	DBQuery& query = *p;
//	DBQParms parms;
//	parms << pkParm->account;
//	query << "CALL QueryPlayerByAccount(%0)";
//	query.parse();
//	pkParm->p = getPlayerInfo(query.store(parms));
//	FREESTOREPROCEDURE(query);
//}
//void DBQuestManager::dbCallQueryChar(const void* d, bool s)
//{
//	TSQueryPlayerInfo* pkdata = static_cast<TSQueryPlayerInfo*>(const_cast<void*>(d));
//	if (!pkdata)
//	{
//		return;
//	}
//
//	if (s)
//	{
//
//		if (NULL != pkdata->p)
//		{
//			PlayerData* d = gDBCache.addCacheData(pkdata->p, INVALID_GAME_ID);
//			GameSession* p = gDBGameManager.getGameClient(pkdata->gsid);
//			if (p)
//			{
//				p->checkPlayerData(d, pkdata->tranid);
//			}
//			else
//			{
//				Mylog::log_server(LOG_ERROR, "db server error!!");
//			}
//		}
//		else
//		{
//			msgs2s::MsgDB2GSQueryCharResult msg;
//			msg.clear_info();
//			msg.set_result(_DB_NOT_FOUND_PLAYERINFO_);
//			gDBGameManager.sendMessage(&msg, pkdata->tranid, pkdata->gsid);
//		}
//	}
//	delete pkdata;
//}
//msgs2s::PlayerInfo* DBQuestManager::getPlayerInfo(SDBResult& sResult)
//{
//	if (sResult.num_rows() > 0)
//	{
//		DBRow& row = sResult[0];
//		msgs2s::PlayerInfo* p = new msgs2s::PlayerInfo;
//		msgs2s::PlayerSCData* sc = p->mutable_sc_data();
//		msgs2s::PlayerSSData* ss = p->mutable_ss_data();
//		sc->set_guid(row["guid"]);
//		sc->set_name(row["name"]);
//		sc->set_sex(row["sex"]);
//		sc->set_type(row["type"]);
//		sc->set_head(row["head"]);
//		sc->set_mapid(row["mapid"]);
//		sc->set_city(row["city"]);
//		sc->set_posx(row["posx"]);
//		sc->set_posy(row["posy"]);
//		sc->set_dir(row["dir"]);
//		ss->set_account(row["account"]);
//		ss->set_flag(row["flag"]);
//		ss->set_createtime(DBDateTime2U32(row["createtime"]));
//		// Mylog::log_player(LOG_DEBUG, "find player by account:[%u] sucess", ss->account());
//		return p;
//	}
//	return NULL;
//}
//void DBQuestManager::dbDoCreateChar(DBQuery*p, const void* d)
//{
//	TSCreatePlayerInfo* pkParm = static_cast<TSCreatePlayerInfo*>(const_cast<void*>(d));
//	if (!pkParm || !p || !pkParm->pcd || !pkParm->pcd->has_charinfo())
//	{
//		return;
//	}
//
//	const CharInfo& info = pkParm->pcd->charinfo();
//	DBQuery& query = *p;
//	DBQParms parms;
//	parms << info.name();
//	parms << info.head();
//	parms << info.sex();
//	parms << (u8)info.chartype();
//	parms << (u32)info.user_account();
//	parms << pkParm->pcd->mapid();
//	parms << pkParm->pcd->cityid();
//	query << "CALL CreatePlayer(%0q,%1,%2,%3,%4,%5,%6)";
//	query.parse();
//	SDBResult sResult = query.store(parms);
//	if (sResult.num_rows() > 0)
//	{
//		DBRow& row = sResult[0];
//		u32 error_code = row["error_code"];
//		if (TSCreatePlayerInfo::_no_error_ == error_code)
//		{
//			pkParm->pinfo = getPlayerInfo(query.store_next());
//		}
//	}
//	FREESTOREPROCEDURE(query);
//}
//void DBQuestManager::dbCallCreateChar(const void* d, bool s)
//{
//	TSCreatePlayerInfo* pkdata = static_cast<TSCreatePlayerInfo*>(const_cast<void*>(d));
//	if (!pkdata)
//	{
//		return;
//	}
//
//	if (s)
//	{
//		if (TSCreatePlayerInfo::_no_error_ == pkdata->error_code && NULL != pkdata->pinfo)
//		{
//			PlayerData* d = gDBCache.addCacheData(pkdata->pinfo, INVALID_GAME_ID);
//			GameSession* p = gDBGameManager.getGameClient(pkdata->gsid);
//			if (p)
//			{
//				p->checkPlayerData(d, pkdata->tranid);
//			}
//			else
//			{
//				Mylog::log_server(LOG_ERROR, "db server error!!");
//			}
//
//
//		}
//		else
//		{
//			msgs2c::MsgS2CCreatePlayerError msg;
//			msg.set_result((msgs2c::enumCreateCharResult) pkdata->error_code);
//			gDBGameManager.sendMessage(&msg, pkdata->tranid, pkdata->gsid);
//		}
//	}
//	delete pkdata;
//}
//void DBQuestManager::dbCallQueryMail(const SDBResult* r, const void* d, bool s)
//{
//	TSPlayerServerData* pkParm = static_cast<TSPlayerServerData*>(const_cast<void*>(d));
//	if (!pkParm)
//	{
//		return;
//	}
//	const SDBResult& result = *r;
//	MailData* p = new MailData;
//	p->guid = pkParm->guid;
//	for (u16 i = 0; i < result.num_rows(); ++i)
//	{
//		DBRow row = result[i];
//		msgs2s::PlayerMail* pMail = new msgs2s::PlayerMail;
//		pMail->set_mailid(row["mail_id"]);
//		pMail->set_sender(row["sender"]);
//		pMail->set_sendername(row["name"]);
//		pMail->set_reciver(pkParm->guid);
//		pMail->set_mailtype(row["mail_type"]);
//		pMail->set_content(row["content"]);
//		pMail->set_flag(row["read_flag"]);
//		pMail->set_createtime(DBDateTime2U32(row["create_time"]));
//		p->mails.push_back(pMail);
//	}
//
//	MailData* pkMailData = gDBMailMgr.addMailData(pkParm->guid, p);
//	if (p != pkMailData)
//	{
//		delete p;
//	}
//
//	GameSession* pkSession = gDBGameManager.getGameClient(pkParm->gsid);
//	if (pkSession)
//	{
//		pkSession->checkMailData(pkMailData, pkParm->tranid);
//	}
//
//	// tell client mail list
//	delete pkParm;
//}