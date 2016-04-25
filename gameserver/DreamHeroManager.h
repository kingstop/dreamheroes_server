#pragma once

class DreamHero;
class DreamHeroManager
{
public:
	typedef std::map<u64, DreamHero*> MAPHEROS;
public:
	DreamHeroManager();
	virtual ~DreamHeroManager();
	DreamHero* GetHero(u64 account);
	DreamHero* CreateHero(message::MsgHeroDataDB2GS* HeroDataMsg, account_type acc, Session* session);
	DreamHero* CreateHero(account_type acc, Session* session);
protected:
	MAPHEROS _heros;
};

