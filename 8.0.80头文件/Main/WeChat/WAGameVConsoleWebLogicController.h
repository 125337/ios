@interface WAGameVConsoleWebLogicController : MMObject <WAVConsoleJSLogicImplDelegate, YYWebViewDelegate>
{
    unsigned int _webviewId; // +0x8
    WAVConsoleJSLogicImpl * _vConsoleJSLogicImpl; // +0x10
    YYBaseWebView * _debugWebView; // +0x18
    id <WAGameVConsoleWebLogicDelegate> _delegate; // +0x20
}
- (void)init:(unsigned int)arg1 delegate:(id)arg2;
- (id)getDebugWebView;
- (void)injectVConsole:(id)arg1;
- (void)initVConsoleJSLogic;
- (void)onDomReady;
- (id)fetchPublicResLogic;
- (void)onWebInvokeAppService:(id)arg1;
- (void)webViewDidFinishLoad:(id)arg1 navigation:(id)arg2;
- (void)webviewDidReceiveScriptMessage:(id)arg1 handler:(id)arg2 rawMessage:(id)arg3;
- (id)vConsoleJSLogicImpl;
- (void)setVConsoleJSLogicImpl:(id)arg1;
- (id)debugWebView;
- (void)setDebugWebView:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (unsigned int)webviewId;
- (void)setWebviewId:(unsigned int)arg1;
- (void).cxx_destruct;
@end
