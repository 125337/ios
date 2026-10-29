@interface WAJSEventHandler_getEncryptHKPasswd : WAJSEventHandler_BaseEvent <WCPayJSGetEncryptHKPasswdLogicDelegate>
- (void)handleJSEvent:(id)arg1;
- (void)onGetEncryptHKPasswdSucc:(id)arg1 signature:(id)arg2;
- (void)onGetEncryptHKPasswdFail:(BOOL)arg1;
@end
