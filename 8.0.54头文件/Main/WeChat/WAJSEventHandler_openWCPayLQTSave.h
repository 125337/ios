@interface WAJSEventHandler_openWCPayLQTSave : WAJSEventHandler_BaseEvent <WCPayJSOpenLQTSaveLogicDelegate>
- (void)handleJSEvent:(id)arg1;
- (void)onOk;
- (void)onFail;
- (void)onWCPayJSOpenLQTSaveLogicOk;
- (void)onWCPayJSOpenLQTSaveLogicFail;
@end

