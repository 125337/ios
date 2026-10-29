@interface FWFNavigationDelegateFlutterApiImpl : FWFWKNavigationDelegateFlutterApi
{
    id <FlutterBinaryMessenger> _binaryMessenger; // +0x8
    FWFInstanceManager * _instanceManager; // +0x10
}
- (id)initWithBinaryMessenger:(id)arg1 instanceManager:(id)arg2;
- (long long)identifierForDelegate:(id)arg1;
- (void)didFinishNavigationForDelegate:(id)arg1 webView:(id)arg2 URL:(id)arg3 completion:(id /* block */)arg4;
- (void)didStartProvisionalNavigationForDelegate:(id)arg1 webView:(id)arg2 URL:(id)arg3 completion:(id /* block */)arg4;
- (void)decidePolicyForNavigationActionForDelegate:(id)arg1 webView:(id)arg2 navigationAction:(id)arg3 completion:(id /* block */)arg4;
- (void)didFailNavigationForDelegate:(id)arg1 webView:(id)arg2 error:(id)arg3 completion:(id /* block */)arg4;
- (void)didFailProvisionalNavigationForDelegate:(id)arg1 webView:(id)arg2 error:(id)arg3 completion:(id /* block */)arg4;
- (void)webViewWebContentProcessDidTerminateForDelegate:(id)arg1 webView:(id)arg2 completion:(id /* block */)arg3;
- (void)didReceiveAuthenticationChallengeForDelegate:(id)arg1 webView:(id)arg2 challenge:(id)arg3 completion:(id /* block */)arg4;
- (id)binaryMessenger;
- (void)setBinaryMessenger:(id)arg1;
- (id)instanceManager;
- (void)setInstanceManager:(id)arg1;
- (void).cxx_destruct;
@end
