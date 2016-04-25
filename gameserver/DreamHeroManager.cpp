#include "stdafx.h"
#include "DreamHeroManager.h"
#include "DreamHero.h"

DreamHeroManager::DreamHeroManager()
{
}


DreamHeroManager::~DreamHeroManager()
{
}


DreamHero* DreamHeroManager::GetHero(u64 account)
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