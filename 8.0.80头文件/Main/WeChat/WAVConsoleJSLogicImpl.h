@interface WAVConsoleJSLogicImpl : MMObject
{
    YYBaseWebView * _webView; // +0x8
    id <WAVConsoleJSLogicImplDelegate> _delegate; // +0x10
    NSString * _curRandomUUID; // +0x18
    NSString * _curContextUUID; // +0x20
}
- (id)init;
- (id)weixinJSBridge;
- (id)fetchPublicResLogic;
- (void)handleJSApiDispatchMessage:(id)arg1 webviewId:(unsigned int)arg2;
- (void)handleJSApiDispatchMessageWithFuncName:(id)arg1 webviewId:(unsigned int)arg2 funcNameRequired:(id)arg3;
- (void)endEventWithResult:(id)arg1 callbackID:(id)arg2;
- (void)tryInjectWeixinJSBridge:(id)arg1;
- (void)tryInjectWeixinJSBridgeWithoutVConsole:(id)arg1;
- (void)resetSysInitMarkIfNeeded;
- (void)sysInitDocument:(id)arg1;
- (void)injectWeixinJSBridge:(BOOL)arg1;
- (void)injectVConsole;
- (void)sendMessageToJSBridge:(id)arg1 completionBlock:(id /* block */)arg2;
- (void)sendEventToJSBridge:(id)arg1 params:(id)arg2 completionBlock:(id /* block */)arg3;
- (id)webView;
- (void)setWebView:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)curRandomUUID;
- (void)setCurRandomUUID:(id)arg1;
- (id)curContextUUID;
- (void)setCurContextUUID:(id)arg1;
- (void).cxx_destruct;
@end
