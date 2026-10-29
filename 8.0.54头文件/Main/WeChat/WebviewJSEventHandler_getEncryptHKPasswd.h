@interface WebviewJSEventHandler_getEncryptHKPasswd : WebviewJSEventHandlerBase <WCPayJSGetEncryptHKPasswdLogicDelegate>
{
    JSEvent * _jsEvent; // +0x8
}
- (void)handleJSEvent:(id)arg1 HandlerFacade:(id)arg2 ExtraData:(id)arg3;
- (void)onGetEncryptHKPasswdSucc:(id)arg1 signature:(id)arg2;
- (void)onGetEncryptHKPasswdFail:(BOOL)arg1;
- (id)jsEvent;
- (void)setJsEvent:(id)arg1;
- (void).cxx_destruct;
@end

