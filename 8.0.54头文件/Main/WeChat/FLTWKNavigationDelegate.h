@interface FLTWKNavigationDelegate : NSObject <WKNavigationDelegate>
{
    FlutterMethodChannel * _methodChannel; // +0x8
    BOOL _hasDartNavigationDelegate; // +0x10
    BOOL _shouldEnableZoom; // +0x11
}
+ (id)errorCodeToString:(unsigned long long)arg1;
- (id)initWithChannel:(id)arg1;
- (void)webView:(id)arg1 didStartProvisionalNavigation:(id)arg2;
- (void)webView:(id)arg1 decidePolicyForNavigationAction:(id)arg2 decisionHandler:(id /* block */)arg3;
- (void)webView:(id)arg1 didFinishNavigation:(id)arg2;
- (void)onWebResourceError:(id)arg1;
- (void)webView:(id)arg1 didFailNavigation:(id)arg2 withError:(id)arg3;
- (void)webView:(id)arg1 didFailProvisionalNavigation:(id)arg2 withError:(id)arg3;
- (void)webViewWebContentProcessDidTerminate:(id)arg1;
- (BOOL)hasDartNavigationDelegate;
- (void)setHasDartNavigationDelegate:(BOOL)arg1;
- (BOOL)shouldEnableZoom;
- (void)setShouldEnableZoom:(BOOL)arg1;
- (void).cxx_destruct;
@end

