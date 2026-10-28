@interface WSTemplateJSLogicImpl : LocalJSLogicBase <YYWebViewDelegate>
{
    id <WSTemplateJSLogicImplDelegate> _handlerDelegate; // +0x10
}
- (id)initWithWebView:(id)arg1 handler:(id)arg2;
- (void)dealloc;
- (void)functionCall:(id)arg1 withParams:(id)arg2 withCallbackID:(id)arg3;
- (void)showWebview:(id)arg1;
- (BOOL)canUseClassHandleJSAPI:(id)arg1;
- (unsigned long long)getLocalJSBusinessType;
- (BOOL)webView:(id)arg1 shouldStartLoadWithRequest:(id)arg2 navigationType:(long long)arg3 isMainFrame:(BOOL)arg4 navigationAction:(id)arg5;
- (void)webViewDidStartLoad:(id)arg1 navigation:(id)arg2;
- (void)webViewDidFinishLoad:(id)arg1 navigation:(id)arg2;
- (void)webView:(id)arg1 didFailLoadWithError:(id)arg2 navigation:(id)arg3;
- (void)webviewDidReceiveScriptMessage:(id)arg1 handler:(id)arg2 rawMessage:(id)arg3;
- (void)webViewContentProcessDidTerminate:(id)arg1;
- (id)handlerDelegate;
- (void)setHandlerDelegate:(id)arg1;
- (void).cxx_destruct;
@end
