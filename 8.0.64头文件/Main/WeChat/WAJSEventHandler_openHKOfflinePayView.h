@interface WAJSEventHandler_openHKOfflinePayView : WAJSEventHandler_BaseEvent <WCPayJSOpenHKOfflinePayLogicDelegate>
- (void)handleJSEvent:(id)arg1;
- (void)onOpenHKOfflinePaySucc;
- (void)onOpenHKOfflinePayFail;
@end
