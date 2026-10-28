@interface WAUserAuthorizeLogic : MMObject <WAPageSheetDelegate, WAAuthorizePageSheetDelegate, WAAuthorizeViewControllerDelegate, WAPopInteractiveTransitionDelegate, UIViewControllerTransitioningDelegate>
{
    NSMutableArray * _scopeInfoList; // +0x8
    NSString * _appID; // +0x10
    NSString * _appName; // +0x18
    NSString * _appIconUrl; // +0x20
    NSString * _applyWording; // +0x28
    NSString * _cancelWording; // +0x30
    NSString * _allowWording; // +0x38
    UserAvatarInfo * _avatarInfo; // +0x40
    AlertPrivacyInfo * _privacyInfo; // +0x48
    NSMutableArray * _riskInfo; // +0x50
    id <WAAuthorizeDelegate> _delegate; // +0x58
    UserPrivacyProtectInfo * _privacyProtectInfo; // +0x60
    id <IWAAuthorizePage> _pageSheet; // +0x68
    UINavigationController * _nextNav; // +0x70
    WAMenuPopInteractiveTransition * _interactiveTransition; // +0x78
    UIScreenEdgePanGestureRecognizer * _popBackGesture; // +0x80
    unsigned long long _currentScopeIndex; // +0x88
}
- (id)init;
- (id)currentScopeInfo;
- (BOOL)tryShowConfirmView:(id)arg1 Error:(id *)arg2 UIStyle:(unsigned long long)arg3;
- (BOOL)handleShowHalfScreenConfirmViewWithAppID:(id)arg1 Error:(id *)arg2;
- (BOOL)handleShowFullScreenConfirmViewWithAppID:(id)arg1 Error:(id *)arg2;
- (void)showFullScreenNormalVC;
- (void)showFullScreenNicknameAndAvatarVC;
- (BOOL)shouldPassAuthorize:(id)arg1;
- (BOOL)tryShowLocationConfirmView:(id)arg1 Error:(id *)arg2;
- (BOOL)canShowBackgroundLocationConfimView;
- (void)showLocationConfirmView:(id)arg1;
- (BOOL)tryShowFuzzyLocationConfirmView:(id)arg1 Error:(id *)arg2;
- (void)showFuzzyLocationConfirmView:(id)arg1;
- (BOOL)tryShowBluetoothConfirmView:(id)arg1 Error:(id *)arg2;
- (BOOL)canShowBackgroundBluetoothConfimView;
- (void)showBluetoothConfirmView:(id)arg1;
- (BOOL)tryShowNicknameAndHeadConfirmView;
- (BOOL)tryShowCameraConfirmView;
- (BOOL)tryShowNormalConfirmView;
- (void)showPageSheet:(id)arg1;
- (BOOL)fillBasicAuthorizeSheetInfo:(id)arg1;
- (void)authorizeAccept:(id)arg1;
- (void)showVoipAuthSuccessTipsWithCompleteAction:(id /* block */)arg1;
- (void)authorizeReject:(id)arg1;
- (void)dismissAndRecoverPopGesture;
- (BOOL)authorizeRequestWithAppID:(id)arg1 permissionAppID:(id)arg2 JsApiName:(id)arg3 Scope:(id)arg4 VersionType:(unsigned int)arg5 ExternalInfo:(id)arg6 PluginInfo:(id)arg7;
- (BOOL)confirmRequestWithAppID:(id)arg1 Scope:(id)arg2 AllowAuth:(BOOL)arg3 VersionType:(unsigned int)arg4 AcceptProtocol:(BOOL)arg5 ExternalInfo:(id)arg6;
- (void)onCgiResponse:(id)arg1 forEvent:(unsigned int)arg2;
- (void)onAuthorizeResponse:(id)arg1;
- (void)onConfirmResponse:(id)arg1;
- (void)pageSheet:(id)arg1 needToPushViewController:(id)arg2;
- (void)_pushNewPageViewController:(id)arg1;
- (id)animationControllerForPresentedController:(id)arg1 presentingController:(id)arg2 sourceController:(id)arg3;
- (id)animationControllerForDismissedController:(id)arg1;
- (id)interactionControllerForDismissal:(id)arg1;
- (void)onPopBackInteractiveTransitionBegin:(id)arg1;
- (id)scopeInfoList;
- (void)setScopeInfoList:(id)arg1;
- (id)appID;
- (void)setAppID:(id)arg1;
- (id)appName;
- (void)setAppName:(id)arg1;
- (id)appIconUrl;
- (void)setAppIconUrl:(id)arg1;
- (id)applyWording;
- (void)setApplyWording:(id)arg1;
- (id)cancelWording;
- (void)setCancelWording:(id)arg1;
- (id)allowWording;
- (void)setAllowWording:(id)arg1;
- (id)avatarInfo;
- (void)setAvatarInfo:(id)arg1;
- (id)privacyInfo;
- (void)setPrivacyInfo:(id)arg1;
- (id)riskInfo;
- (void)setRiskInfo:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)privacyProtectInfo;
- (void)setPrivacyProtectInfo:(id)arg1;
- (id)pageSheet;
- (void)setPageSheet:(id)arg1;
- (id)nextNav;
- (void)setNextNav:(id)arg1;
- (id)interactiveTransition;
- (void)setInteractiveTransition:(id)arg1;
- (id)popBackGesture;
- (void)setPopBackGesture:(id)arg1;
- (unsigned long long)currentScopeIndex;
- (void)setCurrentScopeIndex:(unsigned long long)arg1;
- (void).cxx_destruct;
@end
