#include "stdafx.h"
#include "CharDatabase.h"


CharDatabase::CharDatabase()
{
	_can_stop = false;
}


CharDatabase::~CharDatabase()
{
}

void CharDatabase::onStop()
{

	Mylog::log_server(LOG_INFO, "character database is stopped!");
	_can_stop = true;
}


void CharDatabase::set_close_gs_id(u16 gs_id)
{
	_close_gs_id = gs_id;
}

bool CharDatabase::is_can_stop()
{
	return _can_stop;
}