@interface WAAppOpenParameter : MMObject
{
    BOOL _m_bRuntimeLifecycleManagedByOpener; // +0x8
    BOOL _m_bUpdateAndForceReloadTask; // +0x9
    BOOL _m_bForceFullScreen; // +0xa
    BOOL _m_bIsSilentOpen; // +0xb
    BOOL _m_uSilentOpenShouldShowModalOrError; // +0xc
    BOOL _m_bDisableDetectWhiteScreen; // +0xd
    BOOL _m_bIsOpenOnBluetoothDeviceMonitored; // +0xe
    BOOL _passForwardLifeCycleEventToPreviousTask; // +0xf
    BOOL _m_bForbidUsePreloadTask; // +0x10
    BOOL _m_bIsCustomLoading; // +0x11
    BOOL _m_bIsDirectGame; // +0x12
    BOOL _disableRelayoutOnRotate; // +0x13
    BOOL _disableReOpenOnContainerSizeChange; // +0x14
    BOOL _m_bEnableWebViewBottomBar; // +0x15
    BOOL _m_bIsHideNavLeftButton; // +0x16
    BOOL _m_bForceSyncUpdateContact; // +0x17
    unsigned int _m_uiVersion; // +0x18
    unsigned int _m_secFlagForSinglePageMode; // +0x1c
    NSString * _m_nsUserName; // +0x20
    NSString * _m_nsAppId; // +0x28
    WAContact * _m_contact; // +0x30
    NSString * _m_nsPagePath; // +0x38
    unsigned long long _m_uiDebugMode; // +0x40
    UINavigationController * _m_navigationController; // +0x48
    UIViewController * _m_presentingViewController; // +0x50
    long long _m_appServiceType; // +0x58
    unsigned long long _m_uiScene; // +0x60
    NSString * _m_nsSceneNote; // +0x68
    unsigned long long _m_uiPreScene; // +0x70
    NSString * _m_nsPreSceneNote; // +0x78
    unsigned long long _m_uiChatType; // +0x80
    unsigned long long _m_uiCodeScene; // +0x88
    unsigned long long _m_uiTaskReloadReason; // +0x90
    NSString * _m_nsInstanceIdBeforeReload; // +0x98
    NSString * _m_lastAppId; // +0xa0
    NSArray * _m_arrEntryPackages; // +0xa8
    unsigned long long _m_taskMinimizedMode; // +0xb0
    NSDictionary * _m_nsExtraParamInfo; // +0xb8
    NSDictionary * _hostExtraData; // +0xc0
    NSString * _m_nsDebugLaunchInfo; // +0xc8
    NSString * _m_nsChatroomUsername; // +0xd0
    NSString * _m_nsChatUsername; // +0xd8
    NSString * _m_nsSenderUsername; // +0xe0
    unsigned long long _m_launchMode; // +0xe8
    unsigned long long _m_stackMode; // +0xf0
    unsigned long long _m_uSilentOpenType; // +0xf8
    WARunningModeParameter * _m_runningModeParams; // +0x100
    WAProvideApiConfig * _provideApiCfg; // +0x108
    WAAppOpenSheetModeParameter * _m_sheetModeParameter; // +0x110
    NSString * _m_nsMPShortLink; // +0x118
    MiniTaskTransitionContext * _m_miniTaskVCAnimationContext; // +0x120
    WAAppOpenExtJSParameter * _m_extJSParameter; // +0x128
    NSDictionary * _m_miniToolParam; // +0x130
    NSString * _m_migrateFromUsername; // +0x138
    unsigned long long _matrixUserType; // +0x140
    WAAppOpenCustomLoadingParameter * _m_customLoadingParameter; // +0x148
    unsigned long long _m_uiCapsuleMenuType; // +0x150
    WAAppOpenCustomUIParameter * _m_customUIParameter; // +0x158
    UIView * _containerView; // +0x160
    WAAppOpenDebugModeParameter * _m_debugModeParameter; // +0x168
}
- (id)initWithWeAppUsername:(id)arg1;
- (BOOL)hasUsrName;
- (BOOL)isParameterValid;
- (id)m_sheetModeParameter;
- (id)m_extJSParameter;
- (id)m_customUIParameter;
- (id)m_debugModeParameter;
- (id)m_customLoadingParameter;
- (id)m_runningModeParams;
- (id)m_nsUserName;
- (void)setM_nsUserName:(id)arg1;
- (id)m_nsAppId;
- (void)setM_nsAppId:(id)arg1;
- (id)m_contact;
- (void)setM_contact:(id)arg1;
- (id)m_nsPagePath;
- (void)setM_nsPagePath:(id)arg1;
- (unsigned int)m_uiVersion;
- (void)setM_uiVersion:(unsigned int)arg1;
- (unsigned long long)m_uiDebugMode;
- (void)setM_uiDebugMode:(unsigned long long)arg1;
- (id)m_navigationController;
- (void)setM_navigationController:(id)arg1;
- (id)m_presentingViewController;
- (void)setM_presentingViewController:(id)arg1;
- (long long)m_appServiceType;
- (void)setM_appServiceType:(long long)arg1;
- (unsigned long long)m_uiScene;
- (void)setM_uiScene:(unsigned long long)arg1;
- (BOOL)m_bRuntimeLifecycleManagedByOpener;
- (void)setM_bRuntimeLifecycleManagedByOpener:(BOOL)arg1;
- (id)m_nsSceneNote;
- (void)setM_nsSceneNote:(id)arg1;
- (unsigned long long)m_uiPreScene;
- (void)setM_uiPreScene:(unsigned long long)arg1;
- (id)m_nsPreSceneNote;
- (void)setM_nsPreSceneNote:(id)arg1;
- (unsigned long long)m_uiChatType;
- (void)setM_uiChatType:(unsigned long long)arg1;
- (unsigned long long)m_uiCodeScene;
- (void)setM_uiCodeScene:(unsigned long long)arg1;
- (BOOL)m_bUpdateAndForceReloadTask;
- (void)setM_bUpdateAndForceReloadTask:(BOOL)arg1;
- (unsigned long long)m_uiTaskReloadReason;
- (void)setM_uiTaskReloadReason:(unsigned long long)arg1;
- (id)m_nsInstanceIdBeforeReload;
- (void)setM_nsInstanceIdBeforeReload:(id)arg1;
- (id)m_lastAppId;
- (void)setM_lastAppId:(id)arg1;
- (id)m_arrEntryPackages;
- (void)setM_arrEntryPackages:(id)arg1;
- (unsigned long long)m_taskMinimizedMode;
- (void)setM_taskMinimizedMode:(unsigned long long)arg1;
- (id)m_nsExtraParamInfo;
- (void)setM_nsExtraParamInfo:(id)arg1;
- (id)hostExtraData;
- (void)setHostExtraData:(id)arg1;
- (id)m_nsDebugLaunchInfo;
- (void)setM_nsDebugLaunchInfo:(id)arg1;
- (id)m_nsChatroomUsername;
- (void)setM_nsChatroomUsername:(id)arg1;
- (id)m_nsChatUsername;
- (void)setM_nsChatUsername:(id)arg1;
- (id)m_nsSenderUsername;
- (void)setM_nsSenderUsername:(id)arg1;
- (unsigned long long)m_launchMode;
- (void)setM_launchMode:(unsigned long long)arg1;
- (BOOL)m_bForceFullScreen;
- (void)setM_bForceFullScreen:(BOOL)arg1;
- (unsigned long long)m_stackMode;
- (void)setM_stackMode:(unsigned long long)arg1;
- (BOOL)m_bIsSilentOpen;
- (void)setM_bIsSilentOpen:(BOOL)arg1;
- (unsigned long long)m_uSilentOpenType;
- (void)setM_uSilentOpenType:(unsigned long long)arg1;
- (BOOL)m_uSilentOpenShouldShowModalOrError;
- (void)setM_uSilentOpenShouldShowModalOrError:(BOOL)arg1;
- (BOOL)m_bDisableDetectWhiteScreen;
- (void)setM_bDisableDetectWhiteScreen:(BOOL)arg1;
- (void)setM_runningModeParams:(id)arg1;
- (id)provideApiCfg;
- (void)setProvideApiCfg:(id)arg1;
- (BOOL)m_bIsOpenOnBluetoothDeviceMonitored;
- (void)setM_bIsOpenOnBluetoothDeviceMonitored:(BOOL)arg1;
- (void)setM_sheetModeParameter:(id)arg1;
- (BOOL)passForwardLifeCycleEventToPreviousTask;
- (void)setPassForwardLifeCycleEventToPreviousTask:(BOOL)arg1;
- (id)m_nsMPShortLink;
- (void)setM_nsMPShortLink:(id)arg1;
- (id)m_miniTaskVCAnimationContext;
- (void)setM_miniTaskVCAnimationContext:(id)arg1;
- (void)setM_extJSParameter:(id)arg1;
- (BOOL)m_bForbidUsePreloadTask;
- (void)setM_bForbidUsePreloadTask:(BOOL)arg1;
- (unsigned int)m_secFlagForSinglePageMode;
- (void)setM_secFlagForSinglePageMode:(unsigned int)arg1;
- (id)m_miniToolParam;
- (void)setM_miniToolParam:(id)arg1;
- (id)m_migrateFromUsername;
- (void)setM_migrateFromUsername:(id)arg1;
- (BOOL)m_bIsCustomLoading;
- (void)setM_bIsCustomLoading:(BOOL)arg1;
- (unsigned long long)matrixUserType;
- (void)setMatrixUserType:(unsigned long long)arg1;
- (void)setM_customLoadingParameter:(id)arg1;
- (unsigned long long)m_uiCapsuleMenuType;
- (void)setM_uiCapsuleMenuType:(unsigned long long)arg1;
- (BOOL)m_bIsDirectGame;
- (void)setM_bIsDirectGame:(BOOL)arg1;
- (void)setM_customUIParameter:(id)arg1;
- (id)containerView;
- (void)setContainerView:(id)arg1;
- (BOOL)disableRelayoutOnRotate;
- (void)setDisableRelayoutOnRotate:(BOOL)arg1;
- (BOOL)disableReOpenOnContainerSizeChange;
- (void)setDisableReOpenOnContainerSizeChange:(BOOL)arg1;
- (BOOL)m_bEnableWebViewBottomBar;
- (void)setM_bEnableWebViewBottomBar:(BOOL)arg1;
- (BOOL)m_bIsHideNavLeftButton;
- (void)setM_bIsHideNavLeftButton:(BOOL)arg1;
- (void)setM_debugModeParameter:(id)arg1;
- (BOOL)m_bForceSyncUpdateContact;
- (void)setM_bForceSyncUpdateContact:(BOOL)arg1;
- (void).cxx_destruct;
@end
