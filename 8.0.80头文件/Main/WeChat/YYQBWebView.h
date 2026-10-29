@interface YYQBWebView : QBWKWebView <WKNavigationDelegate, WKUIDelegate, WKScriptMessageHandler, YYWebViewInterface>
{
    BOOL disablePreviewElement; // +0x8
    BOOL _bDisablePopup; // +0x9
    id <YYWebViewDelegate> wvDelegate; // +0x10
    YYQBWebViewScriptMessageHandler * _scriptMessageHandler; // +0x18
    NSArray * _customScriptHandlerArray; // +0x20
}
+ (void)checkIfCurrentUserNeedNewProcessPool:(id)arg1;
- (id)defaultConfigurationWithPreInjectJSStr:(id)arg1;
- (id)initWithFrame:(CGRect)arg1;
- (id)initWithFrame:(CGRect)arg1 delegate:(id)arg2;
- (id)initWithFrame:(CGRect)arg1 delegate:(id)arg2 customScript:(id)arg3;
- (void)setFrame:(CGRect)arg1;
- (void)dealloc;
- (id)request;
- (void)evaluateJavaScriptFromString:(id)arg1 completionBlock:(id /* block */)arg2;
- (void)enableJavaScriptPopup:(BOOL)arg1;
- (void)webView:(id)arg1 decidePolicyForNavigationAction:(id)arg2 decisionHandler:(id /* block */)arg3;
- (void)webView:(id)arg1 didStartProvisionalNavigation:(id)arg2;
- (void)webView:(id)arg1 didFailProvisionalNavigation:(id)arg2 withError:(id)arg3;
- (void)webView:(id)arg1 didReceiveServerRedirectForProvisionalNavigation:(id)arg2;
- (void)webView:(id)arg1 didCommitNavigation:(id)arg2;
- (void)webView:(id)arg1 decidePolicyForNavigationResponse:(id)arg2 decisionHandler:(id /* block */)arg3;
- (void)webView:(id)arg1 didFinishNavigation:(id)arg2;
- (void)webView:(id)arg1 didFailNavigation:(id)arg2 withError:(id)arg3;
- (long long)wkNavigationTypeToYYWebViewNavigationType:(long long)arg1;
- (void)webViewWebContentProcessDidTerminate:(id)arg1;
- (void)webView:(id)arg1 runJavaScriptAlertPanelWithMessage:(id)arg2 initiatedByFrame:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)showTipView:(id)arg1;
- (BOOL)canShowAlertInCurrentWebViewController;
- (void)webView:(id)arg1 runJavaScriptConfirmPanelWithMessage:(id)arg2 initiatedByFrame:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)webView:(id)arg1 runJavaScriptTextInputPanelWithPrompt:(id)arg2 defaultText:(id)arg3 initiatedByFrame:(id)arg4 completionHandler:(id /* block */)arg5;
- (BOOL)webView:(id)arg1 shouldPreviewElement:(id)arg2;
- (void)userContentController:(id)arg1 didReceiveScriptMessage:(id)arg2;
- (void)LoadRequest:(id)arg1;
- (void)LoadHTMLString:(id)arg1 baseURL:(id)arg2;
- (void)addDebugInfoView;
- (void)addScriptMessageHandlerName:(id)arg1;
- (id)webView:(id)arg1 createWebViewWithConfiguration:(id)arg2 forNavigationAction:(id)arg3 windowFeatures:(id)arg4;
- (id)wvDelegate;
- (void)setWvDelegate:(id)arg1;
- (BOOL)disablePreviewElement;
- (void)setDisablePreviewElement:(BOOL)arg1;
- (BOOL)bDisablePopup;
- (void)setBDisablePopup:(BOOL)arg1;
- (id)scriptMessageHandler;
- (void)setScriptMessageHandler:(id)arg1;
- (id)customScriptHandlerArray;
- (void)setCustomScriptHandlerArray:(id)arg1;
- (void).cxx_destruct;
@end
