@interface QBWKWebViewProxy : NSObject <QBScriptMessageHandlerDelegate, WKNavigationDelegate, WKUIDelegate>
{
    QBScriptMessageHandler * _scriptMessageHandler; // +0x8
    NSString * _selectedString; // +0x10
    QBProtocolCallback * _callback; // +0x18
    NSURL * _currentURL; // +0x20
    NSURL * _currentMainURL; // +0x28
    NSURL * _currentMutableMainURL; // +0x30
    BOOL _isNewPageRequest; // +0x38
    BOOL isULinkSwitchOn; // +0x39
    BOOL _needInjectJsInNetwork; // +0x3a
    BOOL _isSelfProxyEnabled; // +0x3b
    id <WKNavigationDelegate> _navigationDelegate; // +0x40
    id <WKUIDelegate> _UIDelegate; // +0x48
    NSOperationQueue * _cookieQueue; // +0x50
}
- (id)init;
- (void)addAllScriptMsgHandle:(id)arg1;
- (void)removeAllScriptMsgHandle:(id)arg1;
- (void)webview:(id)arg1 beginLoadRequest:(id)arg2;
- (void)webview:(id)arg1 beginReloadWithURL:(id)arg2;
- (void)dealloc;
- (BOOL)respondsToSelector:(SEL)arg1;
- (id)forwardingTargetForSelector:(SEL)arg1;
- (void)webView:(id)arg1 decidePolicyForNavigationAction:(id)arg2 decisionHandler:(id /* block */)arg3;
- (void)webView:(id)arg1 decidePolicyForNavigationResponse:(id)arg2 decisionHandler:(id /* block */)arg3;
- (void)webView:(id)arg1 didStartProvisionalNavigation:(id)arg2;
- (void)webView:(id)arg1 didReceiveServerRedirectForProvisionalNavigation:(id)arg2;
- (void)webView:(id)arg1 didFailProvisionalNavigation:(id)arg2 withError:(id)arg3;
- (void)webView:(id)arg1 didCommitNavigation:(id)arg2;
- (void)webView:(id)arg1 didFinishNavigation:(id)arg2;
- (void)webView:(id)arg1 didFailNavigation:(id)arg2 withError:(id)arg3;
- (void)webView:(id)arg1 didReceiveAuthenticationChallenge:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)webViewWebContentProcessDidTerminate:(id)arg1;
- (id)webView:(id)arg1 createWebViewWithConfiguration:(id)arg2 forNavigationAction:(id)arg3 windowFeatures:(id)arg4;
- (void)webViewDidClose:(id)arg1;
- (void)webView:(id)arg1 runJavaScriptAlertPanelWithMessage:(id)arg2 initiatedByFrame:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)webView:(id)arg1 runJavaScriptConfirmPanelWithMessage:(id)arg2 initiatedByFrame:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)webView:(id)arg1 runJavaScriptTextInputPanelWithPrompt:(id)arg2 defaultText:(id)arg3 initiatedByFrame:(id)arg4 completionHandler:(id /* block */)arg5;
- (void)handler:(id)arg1 didReceiveScriptMessage:(id)arg2;
- (void)updateSelectedString:(id)arg1;
- (id)selectedString;
- (void)updateLocalCK:(id)arg1 inWkWebView:(id)arg2 withURL:(id)arg3;
- (id)absoluteURLFromPostURLString:(id)arg1 baseURL:(id)arg2 locationString:(id)arg3 frameURL:(id)arg4;
- (void)processForXhr:(id)arg1 inWkWebView:(id)arg2 forFrameInfo:(id)arg3;
- (BOOL)isMainRequest:(id)arg1 navigationType:(long long)arg2;
- (id)cookieQueue;
- (void).cxx_destruct;
- (id)navigationDelegate;
- (void)setNavigationDelegate:(id)arg1;
- (id)UIDelegate;
- (void)setUIDelegate:(id)arg1;
- (BOOL)needInjectJsInNetwork;
- (void)setNeedInjectJsInNetwork:(BOOL)arg1;
- (BOOL)isSelfProxyEnabled;
- (void)setIsSelfProxyEnabled:(BOOL)arg1;
- (void)setCookieQueue:(id)arg1;
@end

