@interface WAAppOpenParameter : MMObject
{
    BOOL _m_bUpdateAndForceReloadTask; // +0x8
    BOOL _m_bIsSilentOpen; // +0x9
    BOOL _m_bIsOpenOnBluetoothDeviceMonitored; // +0xa
    BOOL _passForwardLifeCycleEventToPreviousTask; // +0xb
    BOOL _m_bForbidUsePreloadTask; // +0xc
    BOOL _m_bIsCustomLoading; // +0xd
    unsigned int _m_uiVersion; // +0x10
    unsigned int _m_secFlagForSinglePageMode; // +0x14
    NSString * _m_nsUserName; // +0x18
    NSString * _m_nsAppId; // +0x20
    WAContact * _m_contact; // +0x28
    NSString * _m_nsPagePath; // +0x30
    unsigned long long _m_uiDebugMode; // +0x38
    UINavigationController * _m_navigationController; // +0x40
    UIViewController * _m_presentingViewController; // +0x48
    long long _m_appServiceType; // +0x50
    unsigned long long _m_uiScene; // +0x58
    NSString * _m_nsSceneNote; // +0x60
    unsigned long long _m_uiPreScene; // +0x68
    NSString * _m_nsPreSceneNote; // +0x70
    unsigned long long _m_uiChatType; // +0x78
    unsigned long long _m_uiCodeScene; // +0x80
    unsigned long long _m_uiTaskReloadReason; // +0x88
    NSString * _m_nsInstanceIdBeforeReload; // +0x90
    NSString * _m_lastAppId; // +0x98
    NSArray * _m_arrEntryPackages; // +0xa0
    unsigned long long _m_taskMinimizedMode; // +0xa8
    NSDictionary * _m_nsExtraParamInfo; // +0xb0
    NSDictionary * _hostExtraData; // +0xb8
    NSString * _m_nsDebugLaunchInfo; // +0xc0
    NSString * _m_nsChatroomUsername; // +0xc8
    NSString * _m_nsChatUsername; // +0xd0
    unsigned long long _m_launchMode; // +0xd8
    unsigned long long _m_stackMode; // +0xe0
    unsigned long long _m_uSilentOpenType; // +0xe8
    WARunningModeParameter * _m_runningModeParams; // +0xf0
    WAProvideApiConfig * _provideApiCfg; // +0xf8
    WAAppOpenSheetModeParameter * _m_sheetModeParameter; // +0x100
    NSString * _m_nsMPShortLink; // +0x108
    MiniTaskTransitionContext * _m_miniTaskVCAnimationContext; // +0x110
    WAAppOpenExtJSParameter * _m_extJSParameter; // +0x118
    NSString * _m_migrateFromUsername; // +0x120
    unsigned long long _matrixUserType; // +0x128
    WAAppOpenCustomLoadingParameter * _m_customLoadingParameter; // +0x130
    unsigned long long _m_uiCapsuleMenuType; // +0x138
    WAAppOpenCustomUIParameter * _m_customUIParameter; // +0x140
    UIView * _containerView; // +0x148
    WAAppOpenDebugModeParameter * _m_debugModeParameter; // +0x150
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
- (unsigned long long)m_launchMode;
- (void)setM_launchMode:(unsigned long long)arg1;
- (unsigned long long)m_stackMode;
- (void)setM_stackMode:(unsigned long long)arg1;
- (BOOL)m_bIsSilentOpen;
- (void)setM_bIsSilentOpen:(BOOL)arg1;
- (unsigned long long)m_uSilentOpenType;
- (void)setM_uSilentOpenType:(unsigned long long)arg1;
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
- (id)m_migrateFromUsername;
- (void)setM_migrateFromUsername:(id)arg1;
- (BOOL)m_bIsCustomLoading;
- (void)setM_bIsCustomLoading:(BOOL)arg1;
- (unsigned long long)matrixUserType;
- (void)setMatrixUserType:(unsigned long long)arg1;
- (void)setM_customLoadingParameter:(id)arg1;
- (unsigned long long)m_uiCapsuleMenuType;
- (void)setM_uiCapsuleMenuType:(unsigned long long)arg1;
- (void)setM_customUIParameter:(id)arg1;
- (id)containerView;
- (void)setContainerView:(id)arg1;
- (void)setM_debugModeParameter:(id)arg1;
- (void).cxx_destruct;
@end
