@interface WAJSEventHandler_requestPayment : WAJSEventHandler_BaseEvent <WCPayPayJSApiLogicParamDelegate, IWCPayJSApiMgrExt, IWCPayPayMoneyLogicExt>
{
    WAAppIdToUsernameTransfer * _appID2UserNameTransfer; // +0x8
    BOOL _finallyUseCustomAppId; // +0x10
    int _requestId; // +0x14
    NSMutableDictionary * _dic; // +0x18
    NSString * _customUsrName; // +0x20
    NSString * _customPath; // +0x28
    NSDictionary * _resultForAppBack; // +0x30
}
- (void)handleJSEvent:(id)arg1;
- (void)dealloc;
- (void)reportScanPosPay:(id)arg1 action:(int)arg2;
- (void)handleJSEventImpl:(id)arg1 scene:(id)arg2 amount:(id)arg3;
- (id)getWCPayPayParam;
- (id)getTinyappUserName;
- (id)getTinyappPath;
- (id)getCustomAppIdFromDic:(id)arg1;
- (void)onWCPayResultBeforeUserInteractionEnd:(id)arg1;
- (void)onWCPayPayMoneySuccess:(id)arg1;
- (void)onWCPayJSApiResult:(id)arg1 needCloseWebview:(BOOL)arg2;
- (void)onWCPayJSApiResult:(id)arg1 needCloseWebview:(BOOL)arg2 tinyappUsername:(id)arg3 tinyappPath:(id)arg4;
- (void)endWithResult:(id)arg1;
- (BOOL)checkWaitAppBack:(id)arg1;
- (void)onApplicationDidBecomeActive:(id)arg1;
- (id)dic;
- (void)setDic:(id)arg1;
- (BOOL)finallyUseCustomAppId;
- (void)setFinallyUseCustomAppId:(BOOL)arg1;
- (id)customUsrName;
- (void)setCustomUsrName:(id)arg1;
- (id)customPath;
- (void)setCustomPath:(id)arg1;
- (int)requestId;
- (void)setRequestId:(int)arg1;
- (id)resultForAppBack;
- (void)setResultForAppBack:(id)arg1;
- (void).cxx_destruct;
@end
