@interface WeAppWorkerManager : MMUserService <WKUIDelegate, WKNavigationDelegate, WKURLSchemeHandler, MMServiceProtocol>
{
    NSMutableDictionary * _noRetainingDelegate; // +0x8
    NSMutableSet * _waitingDelegate; // +0x10
    unsigned int _workerId; // +0x18
    BOOL _isCompatible; // +0x1c
    BOOL _loaded; // +0x1d
    WAWorkerRuntime * _workerRuntime; // +0x20
}
- (id)createWorkerRuntime:(id)arg1 view:(id)arg2 delegate:(id)arg3;
- (void)activeWorker:(id)arg1;
- (void)clearCachedWorker;
- (void)notifyComplete:(id)arg1;
- (void)destroyWorker:(unsigned int)arg1;
- (void)webView:(id)arg1 startURLSchemeTask:(id)arg2;
- (void)webView:(id)arg1 stopURLSchemeTask:(id)arg2;
- (void)webView:(id)arg1 didFinishNavigation:(id)arg2;
- (void)webView:(id)arg1 runJavaScriptAlertPanelWithMessage:(id)arg2 initiatedByFrame:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)webView:(id)arg1 runJavaScriptTextInputPanelWithPrompt:(id)arg2 defaultText:(id)arg3 initiatedByFrame:(id)arg4 completionHandler:(id /* block */)arg5;
- (void)destroyWeApp:(id)arg1;
- (void)webViewWebContentProcessDidTerminate:(id)arg1;
- (void)onServiceMemoryWarning;
- (BOOL)isCompatible;
- (void)setIsCompatible:(BOOL)arg1;
- (id)workerRuntime;
- (void)setWorkerRuntime:(id)arg1;
- (BOOL)loaded;
- (void)setLoaded:(BOOL)arg1;
- (void).cxx_destruct;
@end

