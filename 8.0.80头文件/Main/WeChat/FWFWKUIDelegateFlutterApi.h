@interface FWFWKUIDelegateFlutterApi : NSObject
{
    NSObject<FlutterBinaryMessenger> * _binaryMessenger; // +0x8
}
- (id)initWithBinaryMessenger:(id)arg1;
- (void)onCreateWebViewForDelegateWithIdentifier:(long long)arg1 webViewIdentifier:(long long)arg2 configurationIdentifier:(long long)arg3 navigationAction:(id)arg4 completion:(id /* block */)arg5;
- (void)requestMediaCapturePermissionForDelegateWithIdentifier:(long long)arg1 webViewIdentifier:(long long)arg2 origin:(id)arg3 frame:(id)arg4 type:(id)arg5 completion:(id /* block */)arg6;
- (void)runJavaScriptAlertPanelForDelegateWithIdentifier:(long long)arg1 message:(id)arg2 frame:(id)arg3 completion:(id /* block */)arg4;
- (void)runJavaScriptConfirmPanelForDelegateWithIdentifier:(long long)arg1 message:(id)arg2 frame:(id)arg3 completion:(id /* block */)arg4;
- (void)runJavaScriptTextInputPanelForDelegateWithIdentifier:(long long)arg1 prompt:(id)arg2 defaultText:(id)arg3 frame:(id)arg4 completion:(id /* block */)arg5;
- (id)binaryMessenger;
- (void)setBinaryMessenger:(id)arg1;
- (void).cxx_destruct;
@end
