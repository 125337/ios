@interface WAJSEventHandler_getSetting : WAJSEventHandler_BaseEvent <WAAppDetailInfoManagerExtension>
- (void)handleJSEvent:(id)arg1;
- (void)onGetAppAuthInfo:(id)arg1 appid:(id)arg2 errorCode:(int)arg3;
@end
