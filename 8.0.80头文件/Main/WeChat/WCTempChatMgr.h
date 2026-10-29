@interface WCTempChatMgr : MMUserService <IContactMgrExt, IMMNewSessionMgrExt, PBMessageObserverDelegate, MMServiceProtocol, IMsgExt, IWCBusinessJumpExt>
{
    NSMutableSet * _tempSessionUsrNameSet; // +0x8
    NSMutableDictionary * _getContactInfoDict; // +0x10
    NSMutableDictionary * _dictCallBackInfo; // +0x18
    NSMutableDictionary * _dictMsgControllerInfo; // +0x20
    MMShowWeixinCustomerHelper * _customerHelperShower; // +0x28
}
- (void)onServiceInit;
- (void)initData;
- (void)startTempSessionFromJSApi:(id)arg1 params:(id)arg2 parentViewController:(id)arg3 scene:(unsigned int)arg4;
- (void)realCreateTempSession:(id)arg1 sceneValue:(long long)arg2 sessionFrom:(id)arg3 parentViewController:(id)arg4 callBackInfo:(id)arg5;
- (void)pushMsgControllerByContact:(id)arg1 parentController:(id)arg2;
- (BOOL)isTempChatForUserName:(id)arg1;
- (BOOL)isFromBusinessJump:(id)arg1;
- (long long)getJumpSceneValue:(id)arg1;
- (void)handleJumpCallBack:(id)arg1;
- (BOOL)isShowChatMode:(id)arg1;
- (BOOL)isShowMenuMode:(id)arg1;
- (void)asyncSaveTempChatUsrNames;
- (void)startEnterTempSessionLogicWithQueryDict:(id)arg1 parentController:(id)arg2 originUrl:(id)arg3 translateInfo:(id)arg4;
- (void)processTranslateResultWithPath:(id)arg1 queryDict:(id)arg2 parentController:(id)arg3 originUrl:(id)arg4 translateInfo:(id)arg5 jumpController:(id)arg6;
- (void)doProcessTranslateResultWithPath:(id)arg1 queryDict:(id)arg2 parentController:(id)arg3 originUrl:(id)arg4 translateInfo:(id)arg5 jumpController:(id)arg6;
- (void)onModifyContact:(id)arg1;
- (void)onFailedToGetContactsFromSvr;
- (void)onDeleteSessionOfUser:(id)arg1;
- (void)OnAddMsg:(id)arg1 MsgWrap:(id)arg2;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (id)pathForUserNameSet;
- (void)sendDelTempSessionReq:(id)arg1;
- (void)sendEnterTempSessionReqForNativeEntryWithBizUsrName:(id)arg1;
- (void)sendEnterTempSessionReq:(long long)arg1 sessionFrom:(id)arg2 bizUsrName:(id)arg3 userInfo:(id)arg4;
- (void).cxx_destruct;
@end
