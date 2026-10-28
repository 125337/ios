@interface FWFUIDelegateFlutterApiImpl : FWFWKUIDelegateFlutterApi
{
    FWFWebViewConfigurationFlutterApiImpl * _webViewConfigurationFlutterApi; // +0x8
    id <FlutterBinaryMessenger> _binaryMessenger; // +0x10
    FWFInstanceManager * _instanceManager; // +0x18
}
- (id)initWithBinaryMessenger:(id)arg1 instanceManager:(id)arg2;
- (long long)identifierForDelegate:(id)arg1;
- (void)onCreateWebViewForDelegate:(id)arg1 webView:(id)arg2 configuration:(id)arg3 navigationAction:(id)arg4 completion:(id /* block */)arg5;
- (void)requestMediaCapturePermissionForDelegateWithIdentifier:(id)arg1 webView:(id)arg2 origin:(id)arg3 frame:(id)arg4 type:(long long)arg5 completion:(id /* block */)arg6;
- (void)runJavaScriptAlertPanelForDelegateWithIdentifier:(id)arg1 message:(id)arg2 frame:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)runJavaScriptConfirmPanelForDelegateWithIdentifier:(id)arg1 message:(id)arg2 frame:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)runJavaScriptTextInputPanelForDelegateWithIdentifier:(id)arg1 prompt:(id)arg2 defaultText:(id)arg3 frame:(id)arg4 completionHandler:(id /* block */)arg5;
- (id)webViewConfigurationFlutterApi;
- (id)binaryMessenger;
- (void)setBinaryMessenger:(id)arg1;
- (id)instanceManager;
- (void)setInstanceManager:(id)arg1;
- (void).cxx_destruct;
@end
