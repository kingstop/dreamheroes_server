#pragma once

class CharDatabase : public Database
{
public:
	CharDatabase();
	virtual ~CharDatabase();
public:
	virtual void onStop();
	void set_close_gs_id(u16 gs_id);
	bool is_can_stop();

protected:
	u16 _close_gs_id;
	bool _can_stop;
};

