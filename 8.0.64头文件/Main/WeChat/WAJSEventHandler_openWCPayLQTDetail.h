@interface WAJSEventHandler_openWCPayLQTDetail : WAJSEventHandler_BaseEvent <WCPayJSOpenLQTDetailLogicDelegate>
- (void)handleJSEvent:(id)arg1;
- (void)onOk;
- (void)onFail;
- (void)onWCPayJSOpenLQTDetailLogicOk;
- (void)onWCPayJSOpenLQTDetailLogicFail;
@end
