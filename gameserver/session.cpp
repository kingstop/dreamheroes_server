#include "stdafx.h"
#include "session.h"
#include "DreamHero.h"
//#include "player.h"
//#include "message/girls.pb.h"
//#include "FRWorld.h"

/************************************************************************/

/*                          ע����Ϣʵ��                                */  

/*  message::MsgDB2GSQueryCharResult ע��ص�    prasePBTest             */

/************************************************************************/
typedef void(Session::*pn_msg_cb)(google::protobuf::Message*);
static std::map<std::string, pn_msg_cb > static_session_cb_funs;
static void registerCBFun(std::string str, pn_msg_cb fun)
{
    static_session_cb_funs.insert(std::make_pair(str, fun));
}

void Session::prasePBDefault(google::protobuf::Message* p)
{
     Mylog::log_server(LOG_INFO, "Parse message name [%s]", p->GetTypeName().c_str());
}

//���︺��ע����Ϣ
void Session::registerPBCall()
{
	//registerCBFun(PROTOCO_NAME(message::SignRequest), &Session::parseSignRequest);

}

void Session::parsePBMessage(google::protobuf::Message* p)
{
    std::map<std::string, pn_msg_cb >::iterator it = static_session_cb_funs.find(p->GetTypeName());
    if (it != static_session_cb_funs.end())
    {
        pn_msg_cb fun = boost::ref( it->second);
        if ( NULL != fun )
        {
            (this->*fun)(p);
            return ;
        }
    }
    prasePBDefault(p);
}

//////////////////////////////////////////////////////////////////////////

Session::Session(tran_id_type t, account_type a, u16 gate)
    :m_tranid(t), m_account(a), m_gate(gate),m_state(_session_online_), _dream_hero(NULL)
{
	DreamHero* heros = gDreamHeroManager.GetHero(m_account);
	if (heros != NULL)
	{
		_dream_hero = heros;
	}
	else
	{
		message::MsgReqHeroDataGS2DB msg;
		msg.set_account(m_account);
		gGSDBClient.sendPBMessage(&msg, m_tranid);
	}

}

Session::~Session()
{

}

void Session::close()
{

}

void Session::setReconnet()
{
    m_state = _session_online_;
}

void Session::setWaitReconnet()
{
    m_state = _session_offline_;
}

void Session::sendPBMessage(google::protobuf::Message* p)
{
    if (m_state == _session_online_)
    {
	    gGSGateManager.sendMessage(p, m_tranid, m_gate);
    }
	else
    {

    }
}

void Session::parseDBQueryNeedCreateHero()
{
	_dream_hero = gDreamHeroManager.CreateHero(m_account, this);
	if (_dream_hero)
	{
		_dream_hero->SendClientInit();
	}
}

void Session::praseDBQueryHeroInfo(message::MsgHeroDataDB2GS* HeroDataMsg)
{
	if (HeroDataMsg)
	{
		_dream_hero = gDreamHeroManager.CreateHero(HeroDataMsg, m_account, this);
		if (_dream_hero)
		{
			_dream_hero->SendClientInit();
		}		
	}
}

DreamHero* Session::get_dream_hero()
{
	return _dream_hero;
}
