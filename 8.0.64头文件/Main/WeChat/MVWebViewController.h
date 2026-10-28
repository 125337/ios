@interface MVWebViewController : MMWebViewController
{
    BOOL _webviewDidFinishLoad; // +0x168
    BOOL _hasGetFirstA8Key; // +0x169
    id /* block */ _webViewDidScrollCallBack; // +0x170
    id /* block */ _onGetA8KeyFinishCallBack; // +0x178
    id /* block */ _onWebviewReceiveNavigationResponseCallBack; // +0x180
    NSURL * _initialUrl; // +0x188
}
- (id)initWithURL:(id)arg1 presentModal:(BOOL)arg2 extraInfo:(id)arg3 presetUI:(id)arg4;
- (void)setupContentBlocker;
- (void)scrollViewDidScroll:(id)arg1;
- (void)webViewDidFinishLoad:(id)arg1 navigation:(id)arg2;
- (void)onGetA8KeyWithRequestUrl:(id)arg1 fullUrl:(id)arg2 header:(id)arg3;
- (void)onGetA8KeyFinishWithRequestUrl:(id)arg1 response:(id)arg2 reason:(int)arg3;
- (void)webViewDidReceiveNavigationResponse:(id)arg1 andGetIsCancelNavigation:(BOOL *)arg2;
- (BOOL)webView:(id)arg1 shouldStartLoadWithRequest:(id)arg2 navigationType:(long long)arg3 isMainFrame:(BOOL)arg4 navigationAction:(id)arg5;
- (id)trimmedUrlPath:(id)arg1;
- (BOOL)isSameUrlWithLeft:(id)arg1 right:(id)arg2;
- (BOOL)judgeAllowsAutoMediaPlay;
- (id /* block */)webViewDidScrollCallBack;
- (void)setWebViewDidScrollCallBack:(id /* block */)arg1;
- (id /* block */)onGetA8KeyFinishCallBack;
- (void)setOnGetA8KeyFinishCallBack:(id /* block */)arg1;
- (id /* block */)onWebviewReceiveNavigationResponseCallBack;
- (void)setOnWebviewReceiveNavigationResponseCallBack:(id /* block */)arg1;
- (id)initialUrl;
- (void)setInitialUrl:(id)arg1;
- (BOOL)webviewDidFinishLoad;
- (void)setWebviewDidFinishLoad:(BOOL)arg1;
- (BOOL)hasGetFirstA8Key;
- (void)setHasGetFirstA8Key:(BOOL)arg1;
- (void).cxx_destruct;
@end
