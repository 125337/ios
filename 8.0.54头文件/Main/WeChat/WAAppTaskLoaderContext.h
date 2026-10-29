@interface WAAppTaskLoaderContext : NSObject
{
    BOOL _isGameApp; // +0x8
    BOOL _isPopParent; // +0x9
    BOOL _isPopAllParent; // +0xa
    BOOL _bReloadFirstPage; // +0xb
    BOOL _bNeedShowReloadLoading; // +0xc
    BOOL _isUpdateAndForceReloadTask; // +0xd
    BOOL _infoDataPrecheckTriggered; // +0xe
    BOOL _infoDataPreChecked; // +0xf
    BOOL _loadingPresentCompleted; // +0x10
    BOOL _isNeedRelaunchToLatestVersion; // +0x11
    BOOL _isNeedRelaunchToMigrateTargetWeApp; // +0x12
    BOOL _isSinglePageMode; // +0x13
    BOOL _isGameFunctionalPage; // +0x14
    BOOL _isSilentOpen; // +0x15
    BOOL _useSimulatedNativeLoadingView; // +0x16
    BOOL _simulatedNativeSheetModeShouldHideLeftReturnButton; // +0x17
    BOOL _noLaunchAnimation; // +0x18
    BOOL _forbidEntryAnimation; // +0x19
    BOOL _keepContextView; // +0x1a
    BOOL _isPagePushTimeout; // +0x1b
    BOOL _isPagePushed; // +0x1c
    unsigned int _launchMode; // +0x20
    unsigned long long _contextType; // +0x28
    WAContact * _contact; // +0x30
    WAPackageConfig * _packageConfig; // +0x38
    UINavigationController * _weakNavigationController; // +0x40
    UINavigationController * _weakPresentingNavigationController; // +0x48
    WALoadingViewController * _weakLoadingViewController; // +0x50
    WAPermissionHandler * _permissionHandler; // +0x58
    WAAppTaskLoader * _weakTaskLoader; // +0x60
    NSString * _relativeURL; // +0x68
    NSDictionary * _dicFirstExtraInfo; // +0x70
    NSDictionary * _dicChildExtraInfo; // +0x78
    WAWebViewController * _parentWebView; // +0x80
    NSDictionary * _dicContextData; // +0x88
    WAAppTaskExtInfo * _taskExtInfo; // +0x90
    unsigned long long _taskReloadReason; // +0x98
    WAAppTansitionController * _appTransitionController; // +0xa0
    id <WAMinimizeDelegate> _minimizeDelegate; // +0xa8
    NSMutableArray * _needDownloadInfoDatas; // +0xb0
    NSMutableArray * _relyPluginInfoDatas; // +0xb8
    NSString * _migrateTargetWeAppId; // +0xc0
    unsigned long long _darkmodeSpecificType; // +0xc8
    Class _customLoadingClass; // +0xd0
    NSString * _customLoadingExtraData; // +0xd8
    NSArray * _arrEntryPackages; // +0xe0
    UIView * _containerView; // +0xe8
    unsigned long long _loadingDarkmodeSpecificType; // +0xf0
    UIColor * _loadingBackgroundColor; // +0xf8
    UIColor * _loadingForegroundTextColor; // +0x100
    NSString * _appID; // +0x108
    WACacheVersionChecker * _cacheVersionChecker; // +0x110
    id <WAAppTaskLoaderContextDelegate> _contextDelegate; // +0x118
    WAWebViewController * _webView; // +0x120
    NSArray * _arrIgnoreOtherWebViewDidAppeaerOnReloadFirstPage; // +0x128
    id <IWAPrivacyConfirmService> _privacyConfirmProxy; // +0x130
}
- (void)dealloc;
- (void)onTaskLoaderEnd;
- (unsigned long long)contextType;
- (void)setContextType:(unsigned long long)arg1;
- (id)contact;
- (void)setContact:(id)arg1;
- (id)packageConfig;
- (void)setPackageConfig:(id)arg1;
- (id)weakNavigationController;
- (void)setWeakNavigationController:(id)arg1;
- (id)weakPresentingNavigationController;
- (void)setWeakPresentingNavigationController:(id)arg1;
- (id)weakLoadingViewController;
- (void)setWeakLoadingViewController:(id)arg1;
- (id)permissionHandler;
- (void)setPermissionHandler:(id)arg1;
- (id)weakTaskLoader;
- (void)setWeakTaskLoader:(id)arg1;
- (BOOL)isGameApp;
- (void)setIsGameApp:(BOOL)arg1;
- (id)relativeURL;
- (void)setRelativeURL:(id)arg1;
- (id)dicFirstExtraInfo;
- (void)setDicFirstExtraInfo:(id)arg1;
- (id)dicChildExtraInfo;
- (void)setDicChildExtraInfo:(id)arg1;
- (id)parentWebView;
- (void)setParentWebView:(id)arg1;
- (BOOL)isPopParent;
- (void)setIsPopParent:(BOOL)arg1;
- (BOOL)isPopAllParent;
- (void)setIsPopAllParent:(BOOL)arg1;
- (BOOL)bReloadFirstPage;
- (void)setBReloadFirstPage:(BOOL)arg1;
- (BOOL)bNeedShowReloadLoading;
- (void)setBNeedShowReloadLoading:(BOOL)arg1;
- (id)dicContextData;
- (void)setDicContextData:(id)arg1;
- (id)taskExtInfo;
- (void)setTaskExtInfo:(id)arg1;
- (BOOL)isUpdateAndForceReloadTask;
- (void)setIsUpdateAndForceReloadTask:(BOOL)arg1;
- (unsigned long long)taskReloadReason;
- (void)setTaskReloadReason:(unsigned long long)arg1;
- (id)appTransitionController;
- (void)setAppTransitionController:(id)arg1;
- (id)minimizeDelegate;
- (void)setMinimizeDelegate:(id)arg1;
- (BOOL)infoDataPrecheckTriggered;
- (void)setInfoDataPrecheckTriggered:(BOOL)arg1;
- (BOOL)infoDataPreChecked;
- (void)setInfoDataPreChecked:(BOOL)arg1;
- (id)needDownloadInfoDatas;
- (void)setNeedDownloadInfoDatas:(id)arg1;
- (id)relyPluginInfoDatas;
- (void)setRelyPluginInfoDatas:(id)arg1;
- (BOOL)loadingPresentCompleted;
- (void)setLoadingPresentCompleted:(BOOL)arg1;
- (BOOL)isNeedRelaunchToLatestVersion;
- (void)setIsNeedRelaunchToLatestVersion:(BOOL)arg1;
- (BOOL)isNeedRelaunchToMigrateTargetWeApp;
- (void)setIsNeedRelaunchToMigrateTargetWeApp:(BOOL)arg1;
- (id)migrateTargetWeAppId;
- (void)setMigrateTargetWeAppId:(id)arg1;
- (BOOL)isSinglePageMode;
- (void)setIsSinglePageMode:(BOOL)arg1;
- (BOOL)isGameFunctionalPage;
- (void)setIsGameFunctionalPage:(BOOL)arg1;
- (unsigned int)launchMode;
- (void)setLaunchMode:(unsigned int)arg1;
- (BOOL)isSilentOpen;
- (void)setIsSilentOpen:(BOOL)arg1;
- (unsigned long long)darkmodeSpecificType;
- (void)setDarkmodeSpecificType:(unsigned long long)arg1;
- (BOOL)useSimulatedNativeLoadingView;
- (void)setUseSimulatedNativeLoadingView:(BOOL)arg1;
- (BOOL)simulatedNativeSheetModeShouldHideLeftReturnButton;
- (void)setSimulatedNativeSheetModeShouldHideLeftReturnButton:(BOOL)arg1;
- (Class)customLoadingClass;
- (void)setCustomLoadingClass:(Class)arg1;
- (id)customLoadingExtraData;
- (void)setCustomLoadingExtraData:(id)arg1;
- (id)arrEntryPackages;
- (void)setArrEntryPackages:(id)arg1;
- (BOOL)noLaunchAnimation;
- (void)setNoLaunchAnimation:(BOOL)arg1;
- (BOOL)forbidEntryAnimation;
- (void)setForbidEntryAnimation:(BOOL)arg1;
- (BOOL)keepContextView;
- (void)setKeepContextView:(BOOL)arg1;
- (id)containerView;
- (void)setContainerView:(id)arg1;
- (unsigned long long)loadingDarkmodeSpecificType;
- (void)setLoadingDarkmodeSpecificType:(unsigned long long)arg1;
- (id)loadingBackgroundColor;
- (void)setLoadingBackgroundColor:(id)arg1;
- (id)loadingForegroundTextColor;
- (void)setLoadingForegroundTextColor:(id)arg1;
- (id)appID;
- (void)setAppID:(id)arg1;
- (id)cacheVersionChecker;
- (void)setCacheVersionChecker:(id)arg1;
- (id)contextDelegate;
- (void)setContextDelegate:(id)arg1;
- (id)webView;
- (void)setWebView:(id)arg1;
- (BOOL)isPagePushTimeout;
- (void)setIsPagePushTimeout:(BOOL)arg1;
- (BOOL)isPagePushed;
- (void)setIsPagePushed:(BOOL)arg1;
- (id)arrIgnoreOtherWebViewDidAppeaerOnReloadFirstPage;
- (void)setArrIgnoreOtherWebViewDidAppeaerOnReloadFirstPage:(id)arg1;
- (id)privacyConfirmProxy;
- (void)setPrivacyConfirmProxy:(id)arg1;
- (void).cxx_destruct;
@end

