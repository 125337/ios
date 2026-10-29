@interface WOAPPrivacyConfirmLogic : MMObject <PBMessageObserverDelegate, MMWebViewDelegate>
{
    id /* block */ _completionBlock; // +0x8
    UIViewController * _viewController; // +0x10
    MMWebViewController * _privacyWebView; // +0x18
    WOAPObject * _requestObj; // +0x20
}
+ (void)setForcePrivacyConfirmRequirement;
+ (BOOL)isNeedPrivacyConfirm;
- (void)requestPrivacyConfirmrequirement:(id)arg1 viewController:(id)arg2 completion:(id /* block */)arg3;
- (void)reqeustSetGDPRPrivacyConfirmState:(id)arg1;
- (void)dealloc;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)handleGetGDRPAuthResponse:(id)arg1;
- (void)handleSetGDRPAuthResponse:(id)arg1;
- (void)showPrivacyViewController;
- (void)onWebViewClickClose;
- (id)onWebViewPassParams:(id)arg1 Webview:(id)arg2;
- (void)completionPrivacyConfirmLogicWithResult:(long long)arg1;
- (id)bizStringFromWOAPObjectType:(long long)arg1;
- (id /* block */)completionBlock;
- (void)setCompletionBlock:(id /* block */)arg1;
- (id)viewController;
- (void)setViewController:(id)arg1;
- (id)privacyWebView;
- (void)setPrivacyWebView:(id)arg1;
- (id)requestObj;
- (void)setRequestObj:(id)arg1;
- (void).cxx_destruct;
@end

