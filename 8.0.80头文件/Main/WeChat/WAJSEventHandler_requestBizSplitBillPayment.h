@interface WAJSEventHandler_requestBizSplitBillPayment : WAJSEventHandler_BaseEvent <WCPayJSLaunchGroupPayPfLogicDelegate>
- (void)handleJSEvent:(id)arg1;
- (void)onOK;
- (void)onFail;
- (void)onLaunchGroupPayPfOk;
- (void)onLaunchGroupPayPfFail;
@end
