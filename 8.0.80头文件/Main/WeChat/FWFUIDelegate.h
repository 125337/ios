@interface FWFUIDelegate : FWFObject <WKUIDelegate>
{
    FWFUIDelegateFlutterApiImpl * _UIDelegateAPI; // +0x8
}
- (id)initWithBinaryMessenger:(id)arg1 instanceManager:(id)arg2;
- (id)webView:(id)arg1 createWebViewWithConfiguration:(id)arg2 forNavigationAction:(id)arg3 windowFeatures:(id)arg4;
- (void)webView:(id)arg1 requestMediaCapturePermissionForOrigin:(id)arg2 initiatedByFrame:(id)arg3 type:(long long)arg4 decisionHandler:(id /* block */)arg5;
- (void)webView:(id)arg1 runJavaScriptAlertPanelWithMessage:(id)arg2 initiatedByFrame:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)webView:(id)arg1 runJavaScriptConfirmPanelWithMessage:(id)arg2 initiatedByFrame:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)webView:(id)arg1 runJavaScriptTextInputPanelWithPrompt:(id)arg2 defaultText:(id)arg3 initiatedByFrame:(id)arg4 completionHandler:(id /* block */)arg5;
- (id)UIDelegateAPI;
- (void).cxx_destruct;
@end
