@interface WCCanvasJSLogic : LocalJSLogicBase <YYWebViewDelegate>
{
    BOOL _hasInjected; // +0x10
    id <WCCanvasJSLogicDelegate> _delegate; // +0x18
    id <YYWebViewDelegate> _wvDelegate; // +0x20
}
- (id)initWithWebView:(id)arg1 wvDelegate:(id)arg2;
- (unsigned long long)getLocalJSBusinessType;
- (void)tryInjectWeixinJSBridge:(id)arg1;
- (void)functionCall:(id)arg1 withParams:(id)arg2 withCallbackID:(id)arg3;
- (void)sendCallback:(id)arg1 ret:(int)arg2 error:(id)arg3 data:(id)arg4;
- (BOOL)webView:(id)arg1 shouldStartLoadWithRequest:(id)arg2 navigationType:(long long)arg3 isMainFrame:(BOOL)arg4 navigationAction:(id)arg5;
- (void)webViewDidStartLoad:(id)arg1 navigation:(id)arg2;
- (void)webViewDidFinishLoad:(id)arg1 navigation:(id)arg2;
- (void)webView:(id)arg1 didFailLoadWithError:(id)arg2 navigation:(id)arg3;
- (void)webviewDidReceiveScriptMessage:(id)arg1 handler:(id)arg2 rawMessage:(id)arg3;
- (BOOL)dispatchJSEvent:(id)arg1 param:(id)arg2 callbackID:(id)arg3;
- (BOOL)hasInjected;
- (void)setHasInjected:(BOOL)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)wvDelegate;
- (void)setWvDelegate:(id)arg1;
- (void).cxx_destruct;
@end
