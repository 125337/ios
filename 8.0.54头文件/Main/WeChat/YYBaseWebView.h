@interface YYBaseWebView : WKWebView <WKScriptMessageHandlerWithReply, WKDownloadDelegate, WKNavigationDelegate, WKUIDelegate, WKScriptMessageHandler, YYWebViewInterface>
{
    BOOL disablePreviewElement; // +0x8
    BOOL _bDisablePopup; // +0x9
    BOOL _hasCheckLocalStorageAlive; // +0xa
    BOOL _didCheckLocalStorageAlive; // +0xb
    BOOL _needReportLocalStorageRecovery; // +0xc
    id <YYWebViewDelegate> wvDelegate; // +0x10
    YYWKWebViewScriptMessageHandler * _scriptMessageHandler; // +0x18
    YYWKWebViewScriptMessageReplyHandler * _scriptMessageReplyHandler; // +0x20
    NSMutableArray * _customScriptHandlerArray; // +0x28
    long long _enableCheckLocalStorageAliveType; // +0x30
    unsigned long long _checkAliveTs; // +0x38
}
+ (id)processPool;
- (id)defaultConfigurationWithPreInjectJSStr:(id)arg1 hookJSStr:(id)arg2 arrCookies:(id)arg3;
- (void)configurationWillCreate:(id)arg1;
- (id)initWithFrame:(CGRect)arg1;
- (id)initWithFrame:(CGRect)arg1 delegate:(id)arg2;
- (void)setFrame:(CGRect)arg1;
- (void)dealloc;
- (id)request;
- (void)evaluateJavaScriptFromString:(id)arg1 completionBlock:(id /* block */)arg2;
- (void)enableJavaScriptPopup:(BOOL)arg1;
- (id)currentProcessPool;
- (void)makeAllowDecision:(id /* block */)arg1;
- (void)makeDownloadDecision:(id /* block */)arg1;
- (void)webView:(id)arg1 decidePolicyForNavigationAction:(id)arg2 decisionHandler:(id /* block */)arg3;
- (void)webView:(id)arg1 didStartProvisionalNavigation:(id)arg2;
- (void)webView:(id)arg1 didFailProvisionalNavigation:(id)arg2 withError:(id)arg3;
- (void)webView:(id)arg1 didReceiveServerRedirectForProvisionalNavigation:(id)arg2;
- (void)webView:(id)arg1 didCommitNavigation:(id)arg2;
- (void)webView:(id)arg1 didFinishNavigation:(id)arg2;
- (void)webView:(id)arg1 didFailNavigation:(id)arg2 withError:(id)arg3;
- (void)webView:(id)arg1 decidePolicyForNavigationResponse:(id)arg2 decisionHandler:(id /* block */)arg3;
- (long long)wkNavigationTypeToYYWebViewNavigationType:(long long)arg1;
- (void)webViewWebContentProcessDidTerminate:(id)arg1;
- (BOOL)webView:(id)arg1 shouldPreviewElement:(id)arg2;
- (void)userContentController:(id)arg1 didReceiveScriptMessage:(id)arg2;
- (void)userContentController:(id)arg1 didReceiveScriptMessage:(id)arg2 replyHandler:(id /* block */)arg3;
- (void)addScriptMessageHandlerName:(id)arg1;
- (void)LoadRequest:(id)arg1;
- (void)LoadHTMLString:(id)arg1 baseURL:(id)arg2;
- (id)reload;
- (id)webView:(id)arg1 createWebViewWithConfiguration:(id)arg2 forNavigationAction:(id)arg3 windowFeatures:(id)arg4;
- (void)webView:(id)arg1 navigationAction:(id)arg2 didBecomeDownload:(id)arg3;
- (void)webView:(id)arg1 navigationResponse:(id)arg2 didBecomeDownload:(id)arg3;
- (void)_webView:(id)arg1 navigation:(id)arg2 didSameDocumentNavigation:(long long)arg3;
- (void)_webViewWebProcessDidBecomeUnresponsive:(id)arg1;
- (void)checkLocalStorageApiAlive;
- (void)setNeedReportXPCRecovery;
- (void)checkNeedReportXPCIssue;
- (id)wvDelegate;
- (void)setWvDelegate:(id)arg1;
- (BOOL)disablePreviewElement;
- (void)setDisablePreviewElement:(BOOL)arg1;
- (BOOL)bDisablePopup;
- (void)setBDisablePopup:(BOOL)arg1;
- (id)scriptMessageHandler;
- (void)setScriptMessageHandler:(id)arg1;
- (id)scriptMessageReplyHandler;
- (void)setScriptMessageReplyHandler:(id)arg1;
- (id)customScriptHandlerArray;
- (void)setCustomScriptHandlerArray:(id)arg1;
- (long long)enableCheckLocalStorageAliveType;
- (void)setEnableCheckLocalStorageAliveType:(long long)arg1;
- (unsigned long long)checkAliveTs;
- (void)setCheckAliveTs:(unsigned long long)arg1;
- (BOOL)hasCheckLocalStorageAlive;
- (void)setHasCheckLocalStorageAlive:(BOOL)arg1;
- (BOOL)didCheckLocalStorageAlive;
- (void)setDidCheckLocalStorageAlive:(BOOL)arg1;
- (BOOL)needReportLocalStorageRecovery;
- (void)setNeedReportLocalStorageRecovery:(BOOL)arg1;
- (void).cxx_destruct;
@end

