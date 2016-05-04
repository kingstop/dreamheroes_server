#pragma once

class DreamHero;
class DreamHeroManager
{
public:
	typedef std::map<account_type, DreamHero*> MAPHEROS;
public:
	DreamHeroManager();
	virtual ~DreamHeroManager();
	DreamHero* GetHero(account_type account);
	DreamHero* CreateHero(message::MsgHeroDataDB2GS* HeroDataMsg, account_type acc, Session* session);
	DreamHero* CreateHero(account_type acc, Session* session);
	void SaveDreamHeroes();
protected:
	MAPHEROS _heros;
};

