@interface FWFNavigationDelegate : FWFObject <WKNavigationDelegate>
{
    FWFNavigationDelegateFlutterApiImpl * _navigationDelegateAPI; // +0x8
}
- (id)initWithBinaryMessenger:(id)arg1 instanceManager:(id)arg2;
- (void)webView:(id)arg1 didFinishNavigation:(id)arg2;
- (void)webView:(id)arg1 didStartProvisionalNavigation:(id)arg2;
- (void)webView:(id)arg1 decidePolicyForNavigationAction:(id)arg2 decisionHandler:(id /* block */)arg3;
- (void)webView:(id)arg1 didFailNavigation:(id)arg2 withError:(id)arg3;
- (void)webView:(id)arg1 didFailProvisionalNavigation:(id)arg2 withError:(id)arg3;
- (void)webViewWebContentProcessDidTerminate:(id)arg1;
- (void)webView:(id)arg1 didReceiveAuthenticationChallenge:(id)arg2 completionHandler:(id /* block */)arg3;
- (id)navigationDelegateAPI;
- (void).cxx_destruct;
@end
