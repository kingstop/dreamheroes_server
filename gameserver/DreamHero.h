#pragma once
class DreamHero : public EventableObject
{
public:
	typedef std::map<u64, message::MsgEquipData> HEROEQUIPS;
public:
	DreamHero();
	virtual ~DreamHero();
	message::MsgHeroData get_info();
	u64 get_account();
	void set_account(u64 account);
	void set_info(const message::MsgHeroData* info);
	void modify_suit(int suit_config, const char* szname);

	void set_session(Session* session);
	void set_level(int level);
	void set_name(const char* name);
	int get_level();
	const char* get_name();
	Session* get_session();
	void SaveHero();
	void StartSave();
	void StopSave();
	void LoadFromConfig();
	void SendClientInit();
protected:
	void sendPBMessage(google::protobuf::Message* p);

protected:
	message::MsgHeroData _info;
	HEROEQUIPS _hero_equips;
	u64 _account;
	Session* _session;
};

