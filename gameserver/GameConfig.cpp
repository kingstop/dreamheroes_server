#include "stdafx.h"
#include "GameConfig.h"


GameConfig::GameConfig()
{
	_generate_id = 0;
}


GameConfig::~GameConfig()
{
}


HeroConfig GameConfig::getHeroConfig()
{
	return _hero_config;
}

u64 GameConfig::generateEquipID()
{
	_generate_id++;
	return _generate_id;
}



void GameConfig::set_generate_equip_id(u64 equpid)
{
	_generate_id = equpid;
}

void GameConfig::Load(DBQuery* p)
{

	if (p)
	{
		DBQuery& query = *p;
		query << "select * from `hero_info`;";
		SDBResult sResult = query.store();
		if (sResult.num_rows() > 0)
		{
			DBRow& row = sResult[0];
			_hero_config.gold = row["hero_gold"];
			_hero_config.diamond = row["hero_diamond"];
			_hero_config.level = row["hero_level"];
		}

		query.reset();
		sResult.clear();
		query << "select * from `hero_equip`;";
		sResult = query.store();
		for (int i = 0; i < sResult.num_rows(); i++)
		{
			DBRow& row = sResult[i];
			HeroEquipConfig entry;
			entry.equip_config_id = row["equip_config_id"];
			entry.equip_conut = row["equip_count"];
			entry.equip_level = row["equip_level"];
			_hero_config.equips.push_back(entry);
		}
		sResult.clear();
		query.reset();

	}	

}