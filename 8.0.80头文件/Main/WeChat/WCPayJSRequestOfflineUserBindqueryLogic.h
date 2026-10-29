@interface WCPayJSRequestOfflineUserBindqueryLogic : WCPayJSAuthBaseLogic <WCPayOfflineLogicExt>
{
    id <WCPayJSRequestOfflineUserBindqueryLogicDelegate> _delegate; // +0x38
    KindaJSEvent * _jsEvent; // +0x40
}
- (id)initWithJSEvent:(id)arg1 param:(id)arg2 delegate:(id)arg3;
- (void)authOk;
- (void)authFail;
- (void)onOfflineLogicHandleRequestUserBindqueryJSAPIRet:(BOOL)arg1;
- (BOOL)checkIsKindaOfflinePay;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)jsEvent;
- (void)setJsEvent:(id)arg1;
- (void).cxx_destruct;
@end
