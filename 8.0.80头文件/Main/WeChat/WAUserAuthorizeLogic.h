@interface WAUserAuthorizeLogic : MMObject <WAPageSheetDelegate, WAAuthorizePageSheetDelegate, WAAuthorizeViewControllerDelegate, WAPopInteractiveTransitionDelegate, UIViewControllerTransitioningDelegate>
{
    BOOL _showInContainerVCViewWhenNavNil; // +0x8
    BOOL _fromAgentRuntime; // +0x9
    NSMutableArray * _scopeInfoList; // +0x10
    NSString * _appID; // +0x18
    NSString * _appName; // +0x20
    NSString * _appIconUrl; // +0x28
    NSString * _applyWording; // +0x30
    NSString * _cancelWording; // +0x38
    NSString * _allowWording; // +0x40
    UserAvatarInfo * _avatarInfo; // +0x48
    AlertPrivacyInfo * _privacyInfo; // +0x50
    NSMutableArray * _riskInfo; // +0x58
    id <WAAuthorizeDelegate> _delegate; // +0x60
    UserPrivacyProtectInfo * _privacyProtectInfo; // +0x68
    id /* block */ _agentCardConfirmCompletion; // +0x70
    id <IWAAuthorizePage> _pageSheet; // +0x78
    UINavigationController * _nextNav; // +0x80
    WAMenuPopInteractiveTransition * _interactiveTransition; // +0x88
    UIScreenEdgePanGestureRecognizer * _popBackGesture; // +0x90
    unsigned long long _currentScopeIndex; // +0x98
}
- (id)init;
- (id)currentScopeInfo;
- (BOOL)tryShowConfirmView:(id)arg1 Error:(id *)arg2 UIStyle:(unsigned long long)arg3;
- (BOOL)handleShowHalfScreenConfirmViewWithAppID:(id)arg1 Error:(id *)arg2;
- (BOOL)handleShowFullScreenConfirmViewWithAppID:(id)arg1 Error:(id *)arg2;
- (void)showFullScreenNormalVC;
- (void)showFullScreenNicknameAndAvatarVC;
- (BOOL)shouldPassAuthorize:(id)arg1;
- (BOOL)isAgentRelatedScene;
- (BOOL)isAgentPreRenderScene;
- (BOOL)isLocationScope;
- (void)directPassAuthorizeWithSheetInfo:(id)arg1;
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
- (void)notifyAgentCardConfirmCompletion:(BOOL)arg1;
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
- (BOOL)showInContainerVCViewWhenNavNil;
- (void)setShowInContainerVCViewWhenNavNil:(BOOL)arg1;
- (BOOL)fromAgentRuntime;
- (void)setFromAgentRuntime:(BOOL)arg1;
- (id /* block */)agentCardConfirmCompletion;
- (void)setAgentCardConfirmCompletion:(id /* block */)arg1;
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
