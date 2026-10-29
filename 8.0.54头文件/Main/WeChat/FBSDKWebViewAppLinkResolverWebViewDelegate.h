@interface FBSDKWebViewAppLinkResolverWebViewDelegate : NSObject <WKNavigationDelegate>
{
    BOOL _hasLoaded; // +0x8
    id /* block */ _didFinishLoad; // +0x10
    id /* block */ _didFailLoadWithError; // +0x18
}
- (void)webView:(id)arg1 didFinishNavigation:(id)arg2;
- (void)webView:(id)arg1 didFailNavigation:(id)arg2 withError:(id)arg3;
- (void)webView:(id)arg1 decidePolicyForNavigationAction:(id)arg2 decisionHandler:(id /* block */)arg3;
- (id /* block */)didFinishLoad;
- (void)setDidFinishLoad:(id /* block */)arg1;
- (id /* block */)didFailLoadWithError;
- (void)setDidFailLoadWithError:(id /* block */)arg1;
- (BOOL)hasLoaded;
- (void)setHasLoaded:(BOOL)arg1;
- (void).cxx_destruct;
@end

