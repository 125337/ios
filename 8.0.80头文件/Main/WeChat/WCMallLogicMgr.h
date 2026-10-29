@interface WCMallLogicMgr : MMUserService <MMServiceProtocol, WCMallNetworkHelperDelegate, IMsgExt, JSEventExt>
{
    WCMallNetworkHelper * m_oWCMallNetworkHelper; // +0x8
    NSDictionary * m_oBufferFunctionList; // +0x10
    BOOL m_bGetFunctionList; // +0x18
}
- (id)init;
- (void)dealloc;
- (void)OnHandlerFunctionListComeBack:(id)arg1 Request:(id)arg2 Response:(id)arg3 FromCache:(BOOL)arg4;
- (void)OnCallBackGetWCMallFunctionList:(id)arg1 Request:(id)arg2 Error:(id)arg3;
- (void)OnCallPayChargeProxy:(id)arg1 Request:(id)arg2 Error:(id)arg3;
- (void)GetWCMallFunctionList;
- (void)GetWCMallFunctionList:(id)arg1;
- (void)GetWCMallPayChargeProxyRequest:(id)arg1 CMDID:(unsigned int)arg2;
- (void)GetWCMallPayFunctionListRequest:(id)arg1;
- (void)sendDeleteChargeHistoryRequest:(id)arg1;
- (BOOL)IsUsedWCMallPayTelephone;
- (void)SetUsedWCMallPayTelephone;
- (id)GetWCMallOldTelehoneArray;
- (void)SetWCMallOldTelephone:(id)arg1 UserName:(id)arg2;
- (void)ClearWCMallOldTelephone;
- (unsigned int)getLatestActivityIDShowedTips;
- (void)setLatestActivityIDShowedTips:(unsigned int)arg1;
- (void)saveAllTicket:(id)arg1;
- (id)getAllTicket;
- (BOOL)isNeedShowProductActivity:(id)arg1 ActivityID:(id)arg2;
- (void)setShowProductActivity:(id)arg1 ActivityID:(id)arg2 Showed:(BOOL)arg3;
- (BOOL)isNeedShowProductBannerActivity:(id)arg1 ActivityID:(id)arg2;
- (void)setShowProductBannerActivity:(id)arg1 ActivityID:(id)arg2 Showed:(BOOL)arg3;
- (BOOL)isNeedShowNewInMoreView;
- (BOOL)checkIsRedDotOrNewOverTime;
- (void)clearAllNewOrRedDot;
- (void)setRedDotOrNewLastUpdateTime;
- (BOOL)isNeedShowRedCodeInMoreView;
- (void)setNeedShowNewInMoreView:(BOOL)arg1;
- (void)setNeedShowRedCodeInMoreView:(BOOL)arg1;
- (void)handleActivityType:(id)arg1 ShowedType:(id)arg2 FunctionId:(id)arg3 ActivityId:(id)arg4 Ticket:(id)arg5 WalletRegion:(int)arg6;
- (void)HandleWCMallActivityUpdate:(id)arg1;
- (void)OnGetNewXmlMsg:(id)arg1 Type:(id)arg2 MsgWrap:(id)arg3;
- (void)jsJumpWCMall:(id)arg1;
- (BOOL)isNeedShowRecommendViewWithId:(id)arg1;
- (void)setRecommendIdHasShowed:(id)arg1;
- (void).cxx_destruct;
@end
