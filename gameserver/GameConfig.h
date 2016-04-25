#pragma once
#include <vector>

struct HeroEquipConfig
{
	int equip_config_id;
	int equip_level;
	int equip_conut;
};

struct HeroConfig
{
	int gold;
	int diamond;
	int level;
	std::vector<HeroEquipConfig> equips;
};

class GameConfig
{
public:
	GameConfig();
	virtual ~GameConfig();
	void Load(DBQuery* p);
	void set_generate_equip_id(u64 equpid);
	u64 generateEquipID();

public:
	HeroConfig getHeroConfig();
protected:
	HeroConfig _hero_config;
	u64 _generate_id;
};

