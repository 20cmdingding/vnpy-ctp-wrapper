#pragma once

#include "ThostFtdcUserApiDataType.h"

#define THOST_FTDC_LCKT_Lock '1'
///?a??
#define THOST_FTDC_LCKT_Unlock '2'

typedef char TThostFtdcLockTypeType;

#define THOST_FTDC_IVLV_FirstLevel '1'
///?t??��?����??
#define THOST_FTDC_IVLV_SecondLevel '2'
///��y??��?����??
#define THOST_FTDC_IVLV_ThirdLevel '3'

typedef char TThostFtdcLevelTypeType;


struct CThostFtdcInputLockField
{
	///?-?��1???�䨲??
	TThostFtdcBrokerIDType	BrokerID;
	///��?����??�䨲??
	TThostFtdcInvestorIDType	InvestorID;
	///o???�䨲??
	TThostFtdcInstrumentIDType	InstrumentID;
	///???����y��?
	TThostFtdcOrderRefType	LockRef;
	///��??��䨲??
	TThostFtdcUserIDType	UserID;
	///��y��?
	TThostFtdcVolumeType	Volume;
	///???������o?
	TThostFtdcRequestIDType	RequestID;
	///����??�̣�?a
	TThostFtdcBusinessUnitType	BusinessUnit;
	///???������D��
	TThostFtdcLockTypeType	LockType;
	///??����?���䨲??
	TThostFtdcExchangeIDType	ExchangeID;
};


struct CThostFtdcLockField
{
	///?-?��1???�䨲??
	TThostFtdcBrokerIDType	BrokerID;
	///��?����??�䨲??
	TThostFtdcInvestorIDType	InvestorID;
	///o???�䨲??
	TThostFtdcInstrumentIDType	InstrumentID;
	///???����y��?
	TThostFtdcOrderRefType	LockRef;
	///��??��䨲??
	TThostFtdcUserIDType	UserID;
	///��y��?
	TThostFtdcVolumeType	Volume;
	///???������o?
	TThostFtdcRequestIDType	RequestID;
	///����??�̣�?a
	TThostFtdcBusinessUnitType	BusinessUnit;
	///???������D��
	TThostFtdcLockTypeType	LockType;
	///��?��????������o?
	TThostFtdcOrderLocalIDType	LockLocalID;
	///??����?���䨲??
	TThostFtdcExchangeIDType	ExchangeID;
	///?��?���䨲??
	TThostFtdcParticipantIDType	ParticipantID;
	///?��?��䨲??
	TThostFtdcClientIDType	ClientID;
	///o????��??����?����?�䨲??
	TThostFtdcExchangeInstIDType	ExchangeInstID;
	///??����?��??����?���䨲??
	TThostFtdcTraderIDType	TraderID;
	///��2�������o?
	TThostFtdcInstallIDType	InstallID;
	///?��DDD???����??���䨬?
	TThostFtdcOrderSubmitStatusType	OrderSubmitStatus;
	///�����̣�������?D��o?
	TThostFtdcSequenceNoType	NotifySequence;
	///??������?
	TThostFtdcDateType	TradingDay;
	///?��??����o?
	TThostFtdcSettlementIDType	SettlementID;
	///???������o?
	TThostFtdcOrderSysIDType	LockSysID;
	///�����̣���??��
	TThostFtdcDateType	InsertDate;
	///2?��?����??
	TThostFtdcTimeType	InsertTime;
	///3��?������??
	TThostFtdcTimeType	CancelTime;
	///???�����䨬?
	TThostFtdcOrderActionStatusType	LockStatus;
	///?��???��?������o?
	TThostFtdcParticipantIDType	ClearingPartID;
	///D��o?
	TThostFtdcSequenceNoType	SequenceNo;
	///?��??����o?
	TThostFtdcFrontIDType	FrontID;
	///?��?�����o?
	TThostFtdcSessionIDType	SessionID;
	///��??��??2��?��D??��
	TThostFtdcProductInfoType	UserProductInfo;
	///���䨬?D??��
	TThostFtdcErrorMsgType	StatusMsg;
	///2�����¨�??��䨲??
	TThostFtdcUserIDType	ActiveUserID;
	///?-?��1???�����̣�����o?
	TThostFtdcSequenceNoType	BrokerLockSeq;
	///��a����2?����o?
	TThostFtdcBranchIDType	BranchID;
};

struct CThostFtdcLockPositionField
{
	///?-?��1???�䨲??
	TThostFtdcBrokerIDType	BrokerID;
	///��?����??�䨲??
	TThostFtdcInvestorIDType	InvestorID;
	///o???�䨲??
	TThostFtdcInstrumentIDType	InstrumentID;
	///??����?���䨲??
	TThostFtdcExchangeIDType	ExchangeID;
	///��y��?
	TThostFtdcVolumeType	Volume;
	///?3?����y��?
	TThostFtdcVolumeType	FrozenVolume;
};

struct CThostFtdcQryLockPositionField
{
	///?-?��1???�䨲??
	TThostFtdcBrokerIDType	BrokerID;
	///��?����??�䨲??
	TThostFtdcInvestorIDType	InvestorID;
	///o???�䨲??
	TThostFtdcInstrumentIDType	InstrumentID;
	///??����?���䨲??
	TThostFtdcExchangeIDType	ExchangeID;
};

struct CThostFtdcInvestorLevelField
{
	///?-?��1???�䨲??
	TThostFtdcBrokerIDType	BrokerID;
	///��?����??�䨲??
	TThostFtdcInvestorIDType	InvestorID;
	///??����?���䨲??
	TThostFtdcExchangeIDType	ExchangeID;
	///��?����??��???����D��
	TThostFtdcLevelTypeType	LevelType;
};

struct CThostFtdcQryInvestorLevelField
{
	///?-?��1???�䨲??
	TThostFtdcBrokerIDType	BrokerID;
	///��?����??�䨲??
	TThostFtdcInvestorIDType	InvestorID;
	///??����?���䨲??
	TThostFtdcExchangeIDType	ExchangeID;
};

struct CThostFtdcExecFreezeField
{
	///������?o???�䨲??
	TThostFtdcInstrumentIDType	InstrumentID;
	///??����?���䨲??
	TThostFtdcExchangeIDType	ExchangeID;
	///?-?��1???�䨲??
	TThostFtdcBrokerIDType	BrokerID;
	///��?����??�䨲??
	TThostFtdcInvestorIDType	InvestorID;
	///3?2??��??��??��
	TThostFtdcPosiDirectionType	PosiDirection;
	///?����������D��
	TThostFtdcOptionsTypeType	OptionsType;
	///?3?����?��y��?_�̣�??1��
	TThostFtdcVolumeType	Volume;
	///?3?��?e??
	TThostFtdcMoneyType	FrozenAmount;
};

struct CThostFtdcQryLockField
{
	///?-?��1???�䨲??
	TThostFtdcBrokerIDType	BrokerID;
	///��?����??�䨲??
	TThostFtdcInvestorIDType	InvestorID;
	///o???�䨲??
	TThostFtdcInstrumentIDType	InstrumentID;
	///??����?���䨲??
	TThostFtdcExchangeIDType	ExchangeID;
	///???������o?
	TThostFtdcOrderSysIDType	LockSysID;
	///?a��?����??
	TThostFtdcTimeType	InsertTimeStart;
	///?����?����??
	TThostFtdcTimeType	InsertTimeEnd;
};

struct CThostFtdcQryExecFreezeField
{
	///?-?��1???�䨲??
	TThostFtdcBrokerIDType	BrokerID;
	///��?����??�䨲??
	TThostFtdcInvestorIDType	InvestorID;
	///o???�䨲??
	TThostFtdcInstrumentIDType	InstrumentID;
	///??����?���䨲??
	TThostFtdcExchangeIDType	ExchangeID;
};
