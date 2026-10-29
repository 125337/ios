@interface UPWKWebViewJavascriptBridge : NSObject <WKNavigationDelegate, UPWebViewJavascriptBridgeBaseDelegate>
{
    WKWebView * _webView; // +0x8
    id <WKNavigationDelegate> _webViewDelegate; // +0x10
    long long _uniqueId; // +0x18
    UPWebViewJavascriptBridgeBase * _base; // +0x20
}
+ (void)enableLogging;
+ (id)bridgeForWebView:(id)arg1;
- (void)send:(id)arg1;
- (void)send:(id)arg1 responseCallback:(id /* block */)arg2;
- (void)callHandler:(id)arg1;
- (void)callHandler:(id)arg1 data:(id)arg2;
- (void)callHandler:(id)arg1 data:(id)arg2 responseCallback:(id /* block */)arg3;
- (void)registerHandler:(id)arg1 handler:(id /* block */)arg2;
- (void)removeHandler:(id)arg1;
- (void)reset;
- (void)setWebViewDelegate:(id)arg1;
- (void)disableJavscriptAlertBoxSafetyTimeout;
- (void)dealloc;
- (void)_setupInstance:(id)arg1;
- (void)WKFlushMessageQueue;
- (void)webView:(id)arg1 didFinishNavigation:(id)arg2;
- (void)webView:(id)arg1 decidePolicyForNavigationResponse:(id)arg2 decisionHandler:(id /* block */)arg3;
- (void)webView:(id)arg1 didReceiveAuthenticationChallenge:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)webView:(id)arg1 decidePolicyForNavigationAction:(id)arg2 decisionHandler:(id /* block */)arg3;
- (void)webView:(id)arg1 didStartProvisionalNavigation:(id)arg2;
- (void)webView:(id)arg1 didFailNavigation:(id)arg2 withError:(id)arg3;
- (void)webView:(id)arg1 didFailProvisionalNavigation:(id)arg2 withError:(id)arg3;
- (id)_evaluateJavascript:(id)arg1;
- (void).cxx_destruct;
@end

