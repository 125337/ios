@interface WSWebViewLogic : WXSearchJSLogicImpl <YYWebViewDelegate>
- (id)initWithWebView:(id)arg1;
- (void)loadFile:(id)arg1;
- (BOOL)onWebView:(id)arg1 shouldStartLoadWithRequest:(id)arg2 navigationType:(long long)arg3;
- (void)onWebViewStartLoad:(id)arg1;
- (void)onWebViewFinishedLoad:(id)arg1;
- (void)onWebViewFailLoad:(id)arg1 withError:(id)arg2;
- (void)onWebViewTerminal:(id)arg1;
- (id)curLang;
- (double)curFontRatio;
- (unsigned int)curSearchScene;
- (unsigned int)curVersion;
- (void)showWebview:(id)arg1;
- (BOOL)webView:(id)arg1 shouldStartLoadWithRequest:(id)arg2 navigationType:(long long)arg3 isMainFrame:(BOOL)arg4 navigationAction:(id)arg5;
- (void)webViewDidStartLoad:(id)arg1 navigation:(id)arg2;
- (void)webViewDidFinishLoad:(id)arg1 navigation:(id)arg2;
- (void)webView:(id)arg1 didFailLoadWithError:(id)arg2 navigation:(id)arg3;
- (void)webviewDidReceiveScriptMessage:(id)arg1 handler:(id)arg2 rawMessage:(id)arg3;
- (void)webViewContentProcessDidTerminate:(id)arg1;
@end
