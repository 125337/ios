@interface JITRuntimeView : WKWebView <WKScriptMessageHandler, WKUIDelegate, WKNavigationDelegate, XHRRequestTaskDelegate, WKURLSchemeHandler>
{
    BOOL _forbidMetalCPP; // +0x8
    unsigned int _jitLiteMode; // +0xc
    id <JITRuntimeViewDelegate> _delegate; // +0x10
    NSString * _baseUrl; // +0x18
    id /* block */ _iOS16StringFixBlock; // +0x20
    JITRuntimeMessageHandler * _messageHandler; // +0x28
    JITRuntimeURLSchemeHandler * _urlHandler; // +0x30
    id /* block */ _loadResolver; // +0x38
    NSMutableDictionary * _tasks; // +0x40
}
- (id)initWithFrame:(CGRect)arg1 delegate:(id)arg2 confDict:(id)arg3;
- (void)configurationWillCreate:(id)arg1 liteMode:(unsigned int)arg2;
- (void)destroy;
- (void)dealloc;
- (void)evaluate:(id)arg1 handler:(id /* block */)arg2;
- (void)evaluateInvoker:(id)arg1;
- (void)onTaskFinished:(id)arg1;
- (void)webView:(id)arg1 startURLSchemeTask:(id)arg2;
- (void)webView:(id)arg1 stopURLSchemeTask:(id)arg2;
- (void)webView:(id)arg1 runJavaScriptTextInputPanelWithPrompt:(id)arg2 defaultText:(id)arg3 initiatedByFrame:(id)arg4 completionHandler:(id /* block */)arg5;
- (void)userContentController:(id)arg1 didReceiveScriptMessage:(id)arg2;
- (void)webView:(id)arg1 runJavaScriptAlertPanelWithMessage:(id)arg2 initiatedByFrame:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)webView:(id)arg1 didFinishNavigation:(id)arg2;
- (void)webView:(id)arg1 didFailNavigation:(id)arg2 withError:(id)arg3;
- (void)webView:(id)arg1 didFailProvisionalNavigation:(id)arg2 withError:(id)arg3;
- (void)resize:(CGSize)arg1;
- (void)webViewWebContentProcessDidTerminate:(id)arg1;
- (void)loadHTML:(id)arg1 baseURL:(id)arg2 withResolverBlock:(id /* block */)arg3;
- (void)jitTriggerGC;
- (void)jitSimulateFullGC;
- (void)jitSimulateFullGCWithDeleteAllCode;
- (void)jitSimulateLowMemory;
- (void)jitDumpGCHeap;
- (unsigned int)getJITLiteMode;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)baseUrl;
- (void)setBaseUrl:(id)arg1;
- (id /* block */)iOS16StringFixBlock;
- (void)setIOS16StringFixBlock:(id /* block */)arg1;
- (BOOL)forbidMetalCPP;
- (id)messageHandler;
- (void)setMessageHandler:(id)arg1;
- (id)urlHandler;
- (void)setUrlHandler:(id)arg1;
- (id /* block */)loadResolver;
- (void)setLoadResolver:(id /* block */)arg1;
- (id)tasks;
- (void)setTasks:(id)arg1;
- (unsigned int)jitLiteMode;
- (void)setJitLiteMode:(unsigned int)arg1;
- (void).cxx_destruct;
@end
