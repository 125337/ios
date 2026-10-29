@interface OpenFinderBindHandler : OpenFinderBaseHandler <WCFinderSDKAuthorViewControllerDelegate>
{
    WCFinderSDKAuthorViewController * _bindVC; // +0x8
}
- (void)createOpenUrl;
- (void)cancelHandler;
- (void)onAuthDidFail;
- (void)onAuthDidCancel;
- (void)onAuthDidSuccessWithResult:(id)arg1;
- (void)finderSDKAuthorViewControllerDenyAction:(id)arg1;
- (id)extMsg;
- (void)finderSDKAuthorViewController:(id)arg1 comfirmSuccessful:(id)arg2;
- (void)finderSDKAuthorViewController:(id)arg1 comfirmFailure:(id)arg2;
- (id)bindVC;
- (void)setBindVC:(id)arg1;
- (void).cxx_destruct;
@end

