#include "stdafx.h"
#include "DreamHeroManager.h"
#include "DreamHero.h"

DreamHeroManager::DreamHeroManager()
{
	_save_all_heroes_ok = false;
}


DreamHeroManager::~DreamHeroManager()
{
}


DreamHero* DreamHeroManager::GetHero(account_type account)
{
	DreamHero* hero = NULL;
	MAPHEROS::iterator it = _heros.find(account);
	if (it != _heros.end())
	{
		hero = it->second;
	}
	return hero;
}

DreamHero* DreamHeroManager::CreateHero(message::MsgHeroDataDB2GS* HeroDataMsg, account_type acc, Session* session)
{
	DreamHero* hero = GetHero(acc);
	if (hero == NULL)
	{
		hero = new DreamHero();
		const message::MsgHeroData* entry_msg = HeroDataMsg->mutable_data();
		hero->set_info(HeroDataMsg->mutable_data());
		hero->set_account(acc);
		_heros.insert(MAPHEROS::value_type(hero->get_account(), hero));
	}	
	hero->set_session(session);
	hero->set_account(acc);
	return hero;
}

DreamHero* DreamHeroManager::CreateHero(account_type acc, Session* session)
{
	DreamHero* hero = GetHero(acc);
	if (hero == NULL)
	{
		hero = new DreamHero();
		hero->LoadFromConfig();
	}
	hero->set_session(session);
	hero->set_account(acc);
	return hero;
}

void DreamHeroManager::SaveDreamHeroes()
{
	MAPHEROS::iterator it = _heros.begin();
	for (; it != _heros.end(); ++ it)
	{
		DreamHero* hero = it->second;
		hero->SaveHero();
	}
	Mylog::log_server(LOG_INFO, "game server save all heroes count[%d]!", _heros.size());
	message::MsgSaveAllHeroesGS2DB msg;
	gGSDBClient.sendPBMessage(&msg, 0);	
}


bool DreamHeroManager::is_save_all_heroes_ok()
{
	return _save_all_heroes_ok;
}

void DreamHeroManager::save_all_heroes_ok()
{
	_save_all_heroes_ok = true;
}
