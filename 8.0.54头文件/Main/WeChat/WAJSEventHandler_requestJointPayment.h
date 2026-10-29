@interface WAJSEventHandler_requestJointPayment : WAJSEventHandler_BaseEvent <WCPayPayJSApiLogicParamDelegate, IWCPayJSApiMgrExt, IWCPayPayMoneyLogicExt>
{
    NSMutableDictionary * _dic; // +0x8
}
- (void)handleJSEvent:(id)arg1;
- (id)getWCPayPayParam;
- (id)getTinyappUserName;
- (id)getTinyappPath;
- (void)onWCPayPayMoneySuccess:(id)arg1;
- (void)onWCPayJSApiResult:(id)arg1 needCloseWebview:(BOOL)arg2;
- (void)onWCPayJSApiResult:(id)arg1 needCloseWebview:(BOOL)arg2 tinyappUsername:(id)arg3 tinyappPath:(id)arg4;
- (id)dic;
- (void)setDic:(id)arg1;
- (void).cxx_destruct;
@end

