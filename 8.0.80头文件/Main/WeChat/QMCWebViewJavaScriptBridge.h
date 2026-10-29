@interface QMCWebViewJavaScriptBridge : QMCBaseJavaScriptBridge <WKScriptMessageHandler>
{
    WKWebView * _webView; // +0x8
}
- (id)initWithWebView:(id)arg1;
- (void)injectJSBridge:(id)arg1;
- (void)userContentController:(id)arg1 didReceiveScriptMessage:(id)arg2;
- (void)evaluateJavascript:(id)arg1;
- (void).cxx_destruct;
@end
