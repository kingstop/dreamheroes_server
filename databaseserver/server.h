#ifndef __server_h__
#define __server_h__
#include "common_type.h"
#include "Server_Frame.h"
#include "common_template.h"



class DBServer : public ServerFrame

{

public:

	virtual bool init() ;

	virtual bool onKey() ;

	virtual void runOnce(u32 nDiff) ;

	virtual void shutDown() ;

	virtual void memoryLog() ;

	virtual void setStop(); 

	virtual void checkStop();



	bool initDataFromDatabase(DBQuery* query, const void* data);

	bool initDataFromCharDB(DBQuery* p, const void* data);

	bool initDataFromWorldDB(DBQuery* p, const void* data);



	u16  getCityGS(u32 city);

private:

	obj_map<u32, u16>m_cityServers;

protected:

	DataBaseConfig m_world_db_conf;

private:

};

#endif