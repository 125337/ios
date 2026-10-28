@interface FWFWKNavigationDelegateFlutterApi : NSObject
{
    NSObject<FlutterBinaryMessenger> * _binaryMessenger; // +0x8
}
- (id)initWithBinaryMessenger:(id)arg1;
- (void)didFinishNavigationForDelegateWithIdentifier:(long long)arg1 webViewIdentifier:(long long)arg2 URL:(id)arg3 completion:(id /* block */)arg4;
- (void)didStartProvisionalNavigationForDelegateWithIdentifier:(long long)arg1 webViewIdentifier:(long long)arg2 URL:(id)arg3 completion:(id /* block */)arg4;
- (void)decidePolicyForNavigationActionForDelegateWithIdentifier:(long long)arg1 webViewIdentifier:(long long)arg2 navigationAction:(id)arg3 completion:(id /* block */)arg4;
- (void)didFailNavigationForDelegateWithIdentifier:(long long)arg1 webViewIdentifier:(long long)arg2 error:(id)arg3 completion:(id /* block */)arg4;
- (void)didFailProvisionalNavigationForDelegateWithIdentifier:(long long)arg1 webViewIdentifier:(long long)arg2 error:(id)arg3 completion:(id /* block */)arg4;
- (void)webViewWebContentProcessDidTerminateForDelegateWithIdentifier:(long long)arg1 webViewIdentifier:(long long)arg2 completion:(id /* block */)arg3;
- (void)didReceiveAuthenticationChallengeForDelegateWithIdentifier:(long long)arg1 webViewIdentifier:(long long)arg2 challengeIdentifier:(long long)arg3 completion:(id /* block */)arg4;
- (id)binaryMessenger;
- (void)setBinaryMessenger:(id)arg1;
- (void).cxx_destruct;
@end
