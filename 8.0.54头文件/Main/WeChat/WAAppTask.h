@interface WAAppTask : NSObject <WAMenuAnimatedTransitionProtocol, WASkylineRuntimeDelegate, WASplashADViewControllerDelegate, WCMainWindowExt, WACapsuleMenuDelegate, WAUINavigationControllerDelegate, WABrandTitleBarDelegate, WAPackageUpdateExt, WAWebViewPageMgrDelegate, _TtP9WeAppCore28WAAfterLaunchHandlerDelegate_, WAAppTansitionControllerDelegate, WAJavaScriptContextExtension, WAAppDetailInfoManagerExtension, WAAppTaskVersionFallBackExt, WAAppTaskLoaderDelegate, WAWebViewDelegate, WAJSCoreServiceDelegate, WAPermissionHandlerDelegate, MMTipsViewControllerDelegate, WAContactMgrExtension, WABackgroundFetchExt, WAMinimizeDelegate>
{
    BOOL _hasActivateMinimizeArea; // +0x8
    BOOL _forceCancelMinimize; // +0x9
    NSString * _appID; // +0x10
    WAAppTaskReferrerInfo * _backToWeAppReferrerInfo; // +0x18
    WAContact * _contact; // +0x20
    WAPackageConfig * _packageConfig; // +0x28
    unsigned int _debugModeType; // +0x30
    NSDictionary * _dicExtraInfo; // +0x38
    WAAppTaskShowFromBackgroundContext * _showFromBackgroundContext; // +0x40
    BOOL _isDebugAndVConsoleOpen; // +0x48
    WxaExternalInfo * _wxaExternalInfo; // +0x50
    WAWebViewController * _preloadWebView; // +0x58
    WAWebViewController * _preloadSkyline; // +0x60
    WAJSCoreService * _appService; // +0x68
    WARemoteDebugger * _remoteDebugger; // +0x70
    WAAppTaskReferrerInfo * _referrerInfo; // +0x78
    NSString * _lastLaunchNativcePageString; // +0x80
    BOOL _isBackgroundOnLaunchNativePage; // +0x88
    double _beginOpenTime; // +0x90
    WAWebViewController * _curAppRouteWebView; // +0x98
    WAWebViewController * _currentAppRouteDoneWebView; // +0xa0
    WAWebViewController * _currentSkylineRouteDoneWebview; // +0xa8
    UIView<IWASkylineView><YYWebViewInterface> * _lastRemovedSkylineView; // +0xb0
    BOOL _isPopParent; // +0xb8
    BOOL _isPopAllParent; // +0xb9
    BOOL _isEnableClose; // +0xba
    BOOL _isWebViewAppear; // +0xbb
    BOOL _isAlreadyLaunchOpenURL; // +0xbc
    BOOL _isAlreadyLaunchOpenRetryPage; // +0xbd
    BOOL _isAlreadyLaunchAlertMsg; // +0xbe
    BOOL _isEnterforegroundReload; // +0xbf
    BOOL _isNeedCheckLaunchAction; // +0xc0
    unsigned int _webViewMaxDepth; // +0xc4
    unsigned int _actualWebviewDepth; // +0xc8
    unsigned int _backgroundTaskMaxTimeout; // +0xcc
    NSString * _refererHost; // +0xd0
    unsigned int _lifeSpanBeforeSuspend; // +0xd8
    unsigned int _lifeSpanAfterSuspend; // +0xdc
    BOOL _resetTaskWhenEnterForeground; // +0xe0
    unsigned int _afterCloseUserGuideDialog; // +0xe4
    MMTimer * _suspendTimer; // +0xe8
    BOOL _isSuspendTimerWorking; // +0xf0
    unsigned long long _weixinAppPlatformState; // +0xf8
    unsigned long long _taskPlatformState; // +0x100
    unsigned long long _runningState; // +0x108
    shared_ptr<WxCronetGlobalCallback> m_wxCronetGlobalCallback; // +0x110
    BOOL _isRecording; // +0x120
    BOOL _isLivePushing; // +0x121
    BOOL _isLivePlaying; // +0x122
    BOOL _isMediaPlaying; // +0x123
    BOOL _hasJoinWxaVoip; // +0x124
    BOOL _isWxaVoipWaiting; // +0x125
    NSMutableSet * _setLoadedModuleName; // +0x128
    BOOL _isGameAppOrientationPortrait; // +0x130
    PriorityArray * _backgroundStateStack; // +0x138
    NSMutableDictionary * _dictMenuStateUIParameter; // +0x140
    BOOL _bIsUpdatingPkg; // +0x148
    BOOL _bIsNextLaunchNeedRelaunch; // +0x149
    WAIpadAdaptLogic * _ipadAdaptLogic; // +0x150
    BOOL _bShowMaskWindowAboveWebviewForIpad; // +0x158
    long long _reportPerformanceInterval; // +0x160
    WAFPSMonitor * _fpsMonitor; // +0x168
    long long _initMemory; // +0x170
    long long _initMemoryInFootprint; // +0x178
    WAPerformanceIndexObject * _performanceIndexObject; // +0x180
    unsigned long long _closeTimeStampInMs; // +0x188
    BOOL _isTaskPreload; // +0x190
    WAPreloadAppTask * _preloadAppTask; // +0x198
    WAAppTaskCapsuleMenu * _capsuleMenu; // +0x1a0
    WABrandTitleBar * _sheetModeBrandTitleBar; // +0x1a8
    WABrandTitleBar * _embedModeHeaderBrandTitleBar; // +0x1b0
    WAAppTaskSystemCoverView * _systemCoverView; // +0x1b8
    WMPFLaunchTipView * _wmpfLaunchTipView; // +0x1c0
    BOOL _isLoadingViewDidShow; // +0x1c8
    BOOL _isTaskUseLazyLoad; // +0x1c9
    BOOL _sheetModeExpanded; // +0x1ca
    BOOL _sheetModeFullScreen; // +0x1cb
    unsigned long long _sheetModeContentState; // +0x1d0
    BOOL _sheetModeForceEnableExpand; // +0x1d8
    BOOL _isSheetModeDragging; // +0x1d9
    BOOL _isRunningChatTool; // +0x1da
    NSString * _chatToolUsername; // +0x1e0
    BOOL _backgroundMusic; // +0x1e8
    BOOL _firstRenderCompleted; // +0x1e9
    BOOL _firstRenderFullCompleted; // +0x1ea
    BOOL _shouldRoute13542To27220; // +0x1eb
    BOOL _versionFallbackDying; // +0x1ec
    BOOL _screenBrightnessBeenSetByJsApi; // +0x1ed
    BOOL _didAppearInForeground; // +0x1ee
    BOOL _embedModeExpanded; // +0x1ef
    BOOL _embedModeExpanding; // +0x1f0
    BOOL _bgAudioMode; // +0x1f1
    BOOL _bgVoipMode; // +0x1f2
    BOOL _launchActionShouldUpdateInBackground; // +0x1f3
    BOOL _updateReadyAfterContactUpdated; // +0x1f4
    BOOL _updateInBackgroundTipsShowing; // +0x1f5
    BOOL _clientNetworkInWeakNet; // +0x1f6
    BOOL _weappCronetNetworkInWeakNet; // +0x1f7
    BOOL _serverModeToggled; // +0x1f8
    BOOL _reportedServiceCheckAliveFailed; // +0x1f9
    BOOL _reportedServiceCheckAliveFailedThenAlive; // +0x1fa
    BOOL _isSplashADFinished; // +0x1fb
    BOOL _hasBeenFullLaunched; // +0x1fc
    BOOL _viewEmbeddedModeRotating; // +0x1fd
    BOOL _isSkylineValid; // +0x1fe
    BOOL _isSkylineDefault; // +0x1ff
    BOOL _canSwitchRender; // +0x200
    BOOL _launchVcInited; // +0x201
    BOOL _opConfigSkylinePathAll; // +0x202
    BOOL _isIgnoreOpConfigAtLeastOnePage; // +0x203
    BOOL _hasCalculateIgnoreOpConfigAtLeastOnePage; // +0x204
    unsigned int _timeEnterBackground; // +0x208
    unsigned int _launchScene; // +0x20c
    unsigned int _enterScene; // +0x210
    unsigned int _originScene; // +0x214
    unsigned int _preloadType; // +0x218
    unsigned int _gcTimes; // +0x21c
    unsigned int _gcDuration; // +0x220
    unsigned int _wxDataMaxDataSizeInKB; // +0x224
    unsigned int _networkStatusType; // +0x228
    unsigned int _serviceCheckAliveFailedCount; // +0x22c
    unsigned int _lastSceneWithout1038; // +0x230
    id <WAAppTaskDelegate> delegate; // +0x238
    WAApptaskPublicResLogic * _publicResLogic; // +0x240
    WAUINavigationController * _weakNavigationController; // +0x248
    UIVisualEffectView * _backgroundVisualEffectView; // +0x250
    unsigned long long _matrixUserType; // +0x258
    WAAppTaskExtInfo * _taskExtInfo; // +0x260
    WAAppOpenParameter * _taskOpenInfo; // +0x268
    id <IWASkylineRuntime> _skylineRuntime; // +0x270
    double _openTaskTime; // +0x278
    NSString * _instanceId; // +0x280
    unsigned long long _appLaunchTimeInMs; // +0x288
    unsigned long long _beginInitServiceTimeInMs; // +0x290
    WAAppTansitionController * _appTransitionController; // +0x298
    unsigned long long _currentMemoryLevel; // +0x2a0
    double _screenBrightnessRecordByLaunch; // +0x2a8
    double _screenBrightnessRecordByJsApi; // +0x2b0
    NSMutableArray * _needAcceptPrivacyAuthScopeList; // +0x2b8
    NSMutableArray * _needAcceptPrivacyPipelineList; // +0x2c0
    NSMutableArray * _needAcceptPrivacyJsApiList; // +0x2c8
    id /* block */ _waitSplashAdCompleteHandler; // +0x2d0
    NSDictionary * _rewriteQRCodeIdentifyCtrl; // +0x2d8
    NSMutableArray * _cachedPerformanceMetric; // +0x2e0
    WAAppOpenParameter * _lastOpenParameter; // +0x2e8
    NSMutableDictionary * _customUIWidgetDic; // +0x2f0
    UIView * _embedModeBackgroundView; // +0x2f8
    CustomVisualEffectView * _embedModeBackgroundBlurView; // +0x300
    NSString * _presentedSheetWeAppTaskAppId; // +0x308
    NSString * _tempRemainPresentedSheetWeAppTaskAppIdWhenCapsuleExit; // +0x310
    WAColdLaunchPreFetchCGILogic * _coldLaunchPreFetchCGILogic; // +0x318
    NSMutableDictionary * _dicLoadedPlugin; // +0x320
    WAThreadSafeMutableDictionary * _serviceRouteCgiMap; // +0x328
    WAAppTaskLifeCycleRecord * _lifeCycleRecord; // +0x330
    unsigned long long _serviceLastAliveTimeStampInMs; // +0x338
    unsigned long long _serviceLastAliveFailedTimeStampInMs; // +0x340
    NSMutableArray * _actionAfterSplashAD; // +0x348
    NSMutableSet * _downloadedPluginAppid; // +0x350
    _TtC9WeAppCore20WAAfterLaunchHandler * _afterLaunchHandler; // +0x358
    NSMutableDictionary * _dicJSEventListened; // +0x360
    WAAppTaskLoader * _childPageAppLoader; // +0x368
    WAAppTaskLoader * _forceReloadAppLoader; // +0x370
    WAAppTaskLoader * _relaunchAppLoader; // +0x378
    NSMutableArray * _arrAppServiceCacheEventData; // +0x380
    WAPopOverTaskBarlogic * _popOverLogic; // +0x388
    WAPopOverView * _popOverView; // +0x390
    UINavigationController * _weakPresentingNavigationController; // +0x398
    NSMutableArray * _arrStackInstances; // +0x3a0
    WAAppOpenParameter * _fullLaunchOpenParameter; // +0x3a8
    WAAppTaskExtInfo * _fullLaunchTaskExtInfo; // +0x3b0
    WAAppTaskHandlerWrapper * _fullLaunchHandlerWrapper; // +0x3b8
    WAAppTaskLoader * _appLoader; // +0x3c0
    WAAppTaskHandlerWrapper * _handlerWrapper; // +0x3c8
    WAPermissionHandler * _permissionHandler; // +0x3d0
    WAAppTaskRunningStateEnterBackgroundContext * _enterBackgroundContext; // +0x3d8
    WAWebViewPageMgr * _pageMgr; // +0x3e0
    NSCondition * _launchVcCondition; // +0x3e8
    NSMutableSet * _opConfigSkylinePathSet; // +0x3f0
    NSMutableDictionary * _bizDataPipeHandlerDic; // +0x3f8
}
+ (id)appIdWithWeAppNavigationController:(id)arg1;
+ (id)appIDListFromViewController:(id)arg1;
+ (id)rootPresentingViewControllerWithViewController:(id)arg1;
+ (BOOL)splashAD_isDarkMode;
+ (BOOL)splashAD_verifyEnterScene:(unsigned int)arg1;
+ (id)convertADSceneToString:(unsigned long long)arg1;
+ (id)permissionLaunchParamenterFromTaskExtInfo:(id)arg1 openInfo:(id)arg2;
- (void)checkAndRecoverScreenBrightnessIfNeeded;
- (void)initBackgroundVisualEffectViewIfNeeded;
- (void)applyBackgroundVisualEffectIfNeeded;
- (void)removeBackgroundVisualEffectViewIfHave;
- (unsigned long long)releaseBackgroundPages;
- (unsigned long long)releaseForegroundPage;
- (unsigned long long)releasePreloadPage;
- (id)getFloatVideoPlugin;
- (void)handleNavigateToEventWithWebview:(id)arg1 dic:(id)arg2 completion:(id /* block */)arg3;
- (void)animBeforeTransition:(id)arg1 type:(long long)arg2;
- (void)setIsDisplay:(BOOL)arg1;
- (void)setNoConfirmedCount:(unsigned int)arg1;
- (void)setNoSendCount:(unsigned int)arg1;
- (void)setSendLength:(id)arg1;
- (void)setSendCount:(unsigned int)arg1;
- (void)setRecvLength:(id)arg1;
- (void)setRecvCount:(unsigned int)arg1;
- (void)setConnectString:(id)arg1;
- (void)setServerString:(id)arg1;
- (void)showMaskView:(id)arg1 isButtonHidden:(BOOL)arg2;
- (void)dismissMaskView;
- (void)consoleLog:(id)arg1 isSendout:(BOOL)arg2;
- (void)setupSkylineRuntime;
- (void)initRuntimeInfo;
- (void)initSkylineValid;
- (id)waitForLaunchWebView;
- (void)webViewDidInternalInit:(id)arg1;
- (void)parseOpConfig;
- (BOOL)useSkyline;
- (BOOL)useSkylineForDefault;
- (BOOL)useSkylineForPage:(id)arg1;
- (void)calculateIgnoreOpConfigAtLeastOnePageIfNeeded;
- (BOOL)isIgnoreOpConfigWithPath:(id)arg1;
- (BOOL)isEnoughMemWithPath:(id)arg1;
- (BOOL)isOpConfigEnableSkylineWithPath:(id)arg1;
- (BOOL)allPagesUseWebview;
- (id)popWebViewSkylineCount:(int)arg1 fromWebView:(id)arg2 completion:(id /* block */)arg3;
- (BOOL)skylineDisableSwipeBack:(id)arg1;
- (void)runAnyBlock:(id /* block */)arg1;
- (BOOL)hasSkylineRuntime;
- (unsigned int)skylineViewCnt;
- (unsigned long long)differentSkylineViewCnt;
- (void)updateSkylineDarkMode;
- (void)sendWebviewEventToSkylineService:(id)arg1 eventParam:(id)arg2 dstWebView:(id)arg3;
- (void)onRunServiceBlock:(id /* block */)arg1;
- (id)onLoadPubResource:(id)arg1;
- (id)onLoadUsrResource:(id)arg1;
- (void)onSkylineRuntimeLaunch;
- (void)onSkylineRuntimeReady;
- (void)onUpdateMapCustomCallout:(long long)arg1 markerId:(long long)arg2 anchorX:(double)arg3 anchorY:(double)arg4 alwaysDisplay:(BOOL)arg5 imgData:(id)arg6;
- (void)onFirstSkylineWillLoad:(id)arg1;
- (void)onSkylineWindowReady:(id)arg1;
- (void)onSkylineRouteDone:(id)arg1;
- (void)onSkylineNavigateBack:(id)arg1;
- (void)onSkylineNavigateBackDone:(id)arg1;
- (void)setBluetoothSuspendTimer:(id)arg1;
- (id)bluetoothSuspendTimer;
- (void)setBluetoothAppBackgroundTimer:(id)arg1;
- (id)bluetoothAppBackgroundTimer;
- (BOOL)isBluetoothBackgroundModeEnabled;
- (BOOL)hasBluetoothConnection;
- (void)bluetooth_handleDidSuspend;
- (void)bluetooth_handleDidEnterBackground;
- (void)bluetooth_handleDidEnterForeground;
- (void)bluetooth_handleAppDidEnterBackground;
- (void)bluetooth_handleAppDidEnterForeground;
- (BOOL)canKeepAliveByBluetooth;
- (id)getBluetoothPermissionDescription;
- (void)didEnableBackgroundBluetooth;
- (void)didDisableBackgroundBluetooth;
- (id)bleInstance;
- (void)disallowBluetoothBackground;
- (void)forceStopBluetoothBackgroundKeepAlive;
- (void)forceStopBluetooth;
- (void)bluetooth_didLostAllConnection;
- (void)bluetooth_didConnectDevice;
- (void)didBluetoothBackgroundKeepAliveTimeout;
- (void)didBluetoothAppBackgroundTimeout;
- (void)bluetooth_didModifyAppAuth:(BOOL)arg1 authDataList:(id)arg2;
- (void)sendOnMonitoredBluetoothDeviceFoundJSEvent:(id)arg1;
- (void)setIsSilentOpenByBluetoothMonitor:(BOOL)arg1;
- (BOOL)isSilentOpenByBluetoothMonitor;
- (void)tryCloseSelfIfNeverEnterForeground;
- (BOOL)isCGFloatEqual:(double)arg1 And:(double)arg2;
- (BOOL)currentWebviewNeedNotifyResizedLater:(id)arg1;
- (BOOL)trySendOnAppRouteResizedEvent:(id)arg1;
- (BOOL)currentWebviewNeedResize:(id)arg1;
- (void)webviewDidResize:(id)arg1;
- (void)trySendWebviewResizeEvent:(id)arg1;
- (id)getResizeParam:(id)arg1;
- (BOOL)isUpdatingLocation;
- (BOOL)isUpdatingForegroundLocation;
- (BOOL)isUpdatingBackgroundLocation;
- (void)forceStopLocating;
- (void)forceStopForegroundLocating;
- (void)forceStopBackgroundLocating;
- (BOOL)canKeepAliveByLocating;
- (BOOL)canKeeyAliveByLocatingForAllDebugMode;
- (BOOL)canKeepAliveByLocatingForReleaseMode;
- (BOOL)isRegisteredLocationBackgroundMode;
- (id)getLocationPermisstionDescription;
- (id)getFuzzyLocationPermisstionDescription;
- (void)backgroundLocatingDidStart;
- (void)backgroundLocatingDidStop;
- (void)navigateBackWeApp:(id)arg1 privateExtraData:(id)arg2;
- (void)passJumpBackRefererInfoAndRemoveJumpRelation:(id)arg1;
- (void)passJumpBackRefererInfoAndRemoveJumpRelation:(id)arg1 privateExtraData:(id)arg2;
- (void)removeJumpWeAppListAndCheckBackgroundStatus;
- (void)checkRemovedJumpInfoBackgroundStatus:(id)arg1;
- (void)setBackWeAppReferrerInfo:(id)arg1;
- (void)dismissMyselfAndPresentedTasks;
- (void)processSelfPresentedStateOnOpen:(id *)arg1 isSilentOpen:(BOOL)arg2 Completion:(id /* block */)arg3;
- (void)processSelfPresentedStateOnOpen2:(id *)arg1;
- (void)enterBackgroundWithDismissAppIDList:(id)arg1;
- (void)checkChangeNavigationControllerBeforeDismiss:(id *)arg1;
- (void)updateMinimizationDataIfNeedWhenTaskClosed:(unsigned long long)arg1;
- (void)updatePassiveMinimizationViewWhenEnterForeground;
- (void)updatePassiveMinimizationViewWhenEnterBackground;
- (void)updatePassiveMinimizationViewWhenStateChanged;
- (void)tryMinimizeCurTaskIfNeededInBackground;
- (void)tryMinimizeCurTaskIfNeeded;
- (void)internalTryMinimizeCurTaskIfNeeded;
- (void)updateMinimizeSnapShotImg;
- (BOOL)isCurTaskSupportMinimization;
- (BOOL)isCurTaskMinimized;
- (BOOL)isCurTaskManuallyMinimized;
- (BOOL)canMinimizedCurTaskOrShowTips;
- (BOOL)minimizedCurTaskManually:(BOOL)arg1 generateType:(unsigned long long)arg2;
- (void)unminimizedCurTask;
- (void)onMinimizeInteractiveTransitionBegin:(id)arg1 panGesture:(id)arg2;
- (void)onMinimizeInteractiveTransitionChange:(id)arg1 withProgress:(double)arg2 panGesture:(id)arg3;
- (void)onMinimizeInteractiveTransitionWillEnd:(id)arg1 isComplete:(BOOL)arg2 panGesture:(id)arg3 percent:(double)arg4;
- (void)onMinimizeInteractiveTransitionDidEnd:(id)arg1 isComplete:(BOOL)arg2 panGesture:(id)arg3 miniTaskVCAnimationContext:(id)arg4;
- (void)beginOtherPageMinimizationTansitionAnimation:(id)arg1 WithGesture:(id)arg2 percent:(double)arg3;
- (void)beginFirstPageMinimizationTansitionAnimationWithGesture:(id)arg1 percent:(double)arg2 manually:(BOOL)arg3;
- (void)delayShow:(id)arg1;
- (id)fakeWindowVC;
- (void)setFakeWindowVC:(id)arg1;
- (void)forceRelaunchTaskAfterFirstWebViewAppearWithFakeLoading;
- (void)directlyDoRelaunchAction:(BOOL)arg1 isNeedFakeLoading:(BOOL)arg2;
- (void)forceRelaunchToFallbackVersionInScene:(unsigned long long)arg1;
- (void)reportFallbackToLocalContact:(id)arg1 openInfo:(id)arg2 scene:(unsigned long long)arg3;
- (BOOL)forceRelaunchToLatestVersionWithIsNeedFakeLoading:(BOOL)arg1 isSync:(BOOL)arg2;
- (BOOL)forceRelaunchWithIsNeedFakeLoading:(BOOL)arg1;
- (void)forceRelaunchToMigrateTargetWeAppId:(id)arg1 needFakeLoading:(BOOL)arg2;
- (BOOL)isRegisterForHandleWeAppHotspotCommand;
- (void)handleWeAppHotspotCommand:(id)arg1;
- (id)wifiPlugin;
- (void)setSplashADConfig:(id)arg1;
- (id)splashADConfig;
- (void)splashAD_handleWillShowLoadingWithPresentingViewController:(id)arg1;
- (void)splashAD_handleDidInjectAdWorker;
- (void)splashAD_handleDidHotStart;
- (BOOL)splashAD_sendShouldShowIfAllowed;
- (void)splashAD_handleDidShowLoadingWithPresentingViewController:(id)arg1;
- (void)splashAD_handleSplashADContainerIsPreload:(BOOL)arg1;
- (void)mainThread_splashAD_handleSplashADContainerIsPreload:(BOOL)arg1;
- (void)splashAD_forceRemoveSplashAdIfNeeded;
- (void)splashAD_handleShouldShowEvent;
- (void)splashAD_createSplashADWindow;
- (void)splashAD_removeSplashADWindow:(BOOL)arg1 customAnimEndCenter:(CGPoint)arg2 customAnimEndHeight:(double)arg3 completion:(id /* block */)arg4;
- (void)splashAD_removeSplashADWindow:(BOOL)arg1 completion:(id /* block */)arg2;
- (void)hideAndReleaseSplashAdWindow;
- (void)splashAD_showMenuSplashADViewControllerWithNavigationController:(id)arg1 completion:(id /* block */)arg2;
- (void)splashAD_closeMenuSplashADViewController:(BOOL)arg1 completion:(id /* block */)arg2;
- (void)splashAD_handleDidSuspend:(unsigned long long)arg1;
- (void)splashAD_clearLastSuspendTime;
- (void)onSplashADViewControllerCloseButtonClicked:(id)arg1;
- (void)onSplashADViewControllerMenuButtonClicked:(id)arg1;
- (void)onSplashADViewControllerViewDidLoad:(id)arg1;
- (void)onSplashADViewControllerViewWillLayoutSubviews:(id)arg1;
- (void)onSplashADViewControllerWillAppear:(id)arg1;
- (void)onSplashADViewControllerDidAppear:(id)arg1;
- (void)splashAD_recordLaunchDidAppear;
- (void)splashAD_recordLaunchShowEvent;
- (void)splashAD_sendLaunchSceneOnSplashADShowIfPossible;
- (void)splashAD_setAllowHotStartSplashAD:(BOOL)arg1 interval:(unsigned long long)arg2;
- (void)onSplashADViewControllerWillDisappear:(id)arg1;
- (void)onSplashADViewControllerDidDisappear:(id)arg1;
- (void)onSplashADViewControllerDidClosed:(id)arg1;
- (void)onSplashADViewControllerWillEnterForeground:(id)arg1;
- (void)onSplashADViewControllerDidEnterBackground:(id)arg1;
- (void)splashAD_handleSplashADButtonClickedEventWithScene:(unsigned long long)arg1 buttonType:(unsigned long long)arg2;
- (void)sendSplashADJSEventToService:(id)arg1 params:(id)arg2;
- (id)generateShouldShowEventParamsWithSplashADScene:(unsigned long long)arg1;
- (id)initWithAppID:(id)arg1 debugModeType:(unsigned int)arg2;
- (void)dealloc;
- (id)description;
- (id)appID;
- (id)username;
- (unsigned long long)appServiceType;
- (id)contact;
- (id)pkgConfig;
- (id)launchPagePath;
- (id)currentAppInfo;
- (unsigned int)debugModeType;
- (unsigned int)appVersion;
- (id)getTaskOpenInfo;
- (id)getTaskExtInfo;
- (BOOL)isSimulatedNativeWeApp;
- (BOOL)isGameApp;
- (BOOL)isNormalWeAppWithGameRuntime;
- (unsigned int)engineType;
- (BOOL)bytecodeEnbaled;
- (unsigned int)codecacheVersion;
- (unsigned int)gameRenderMode;
- (long long)initMemoryInFootprint;
- (unsigned long long)weixinAppPlatformState;
- (id)getStrListUseCodeCacheFileNamePubLib;
- (id)getStrListUseCodeCacheFileNameUsr;
- (unsigned long long)webViewInNavigationCount;
- (BOOL)isShowOnForeground;
- (BOOL)isForeground;
- (BOOL)isFirstWebViewInNavigator;
- (unsigned int)backgroundTaskMaxTimeout;
- (BOOL)shouldForbidEntryAnimation;
- (BOOL)shouldKeepContextView;
- (BOOL)readIsTransparentBackgroundSupport;
- (BOOL)checkCurrentPageIdentical:(id)arg1 webView:(id)arg2;
- (void)recoverTask;
- (void)openWithContact:(id)arg1 openInfo:(id)arg2 taskExtInfo:(id)arg3 handlerWrapper:(id)arg4;
- (void)openWithContact:(id)arg1 openInfo:(id)arg2 taskExtInfo:(id)arg3 errorHandler:(id /* block */)arg4 successHandler:(id /* block */)arg5 cancelHandler:(id /* block */)arg6;
- (void)fillTaskExtInfoFromTaskOpenInfo;
- (void)openWithContactAfterProcessPresentState:(id)arg1 openInfo:(id)arg2 taskExtInfo:(id)arg3 errorHandler:(id /* block */)arg4 successHandler:(id /* block */)arg5 cancelHandler:(id /* block */)arg6 PresentingNavigationController:(id)arg7;
- (id)constructColdLaunchTaskLoader;
- (void)reInitPermissionHandlerIfNeeded;
- (void)reportColdLaunchFromOpenSdkAdTraceIfNeeded;
- (void)tryReportWmpfUserCloseWeAppWhenLoading;
- (void)startProvideApi:(id)arg1 openInfo:(id)arg2 handlerWrapper:(id)arg3;
- (BOOL)shouldRelaunchWhenOpenInfoChangedFromOldInfo:(id)arg1 toNewInfo:(id)arg2 lastNeedRelaunchFlag:(BOOL)arg3;
- (BOOL)shouldRelaunchWithEnterScene:(unsigned int)arg1 lastEnterScene:(unsigned int)arg2 relativeUrl:(id)arg3 isSimulated:(BOOL)arg4 isGame:(BOOL)arg5;
- (BOOL)shouldEnterSceneKeepLastPage:(unsigned int)arg1;
- (void)openChildWebViewWithRelativeURL:(id)arg1 childExtraInfo:(id)arg2 fromParent:(id)arg3 isPopParent:(BOOL)arg4 completeHandler:(id /* block */)arg5;
- (void)openChildWebViewWithRelativeURL:(id)arg1 childExtraInfo:(id)arg2 fromParent:(id)arg3 isPopAllParent:(BOOL)arg4 completeHandler:(id /* block */)arg5;
- (void)openFirstWebViewWithRelativeURL:(id)arg1 childExtraInfo:(id)arg2 loaderContextData:(id)arg3 navigationController:(id)arg4 errorHandler:(id /* block */)arg5 successHandler:(id /* block */)arg6;
- (void)openChildWebViewWithRelativeURL:(id)arg1 childExtraInfo:(id)arg2 fromParent:(id)arg3 isPopParent:(BOOL)arg4 isPopAllParent:(BOOL)arg5 completeHandler:(id /* block */)arg6;
- (BOOL)isExceedMaxWebViewDepthAfterPush:(id)arg1;
- (unsigned int)actualWebViewMaxDepth;
- (void)sendJSEventToWebView:(id)arg1 param:(id)arg2 toWebviews:(id)arg3;
- (void)sendJSEventToWebView:(id)arg1 event:(id)arg2 param:(id)arg3 whenInWebviewList:(id)arg4;
- (void)syncSendJSEventToWebView:(id)arg1 param:(id)arg2 toWebView:(unsigned int)arg3 eventId:(unsigned int)arg4;
- (id)getAllWebViews;
- (id)getAllWebViewsIncludingPreloadWebView;
- (id)getWebViewListInNavigation;
- (id)getFirstWebView;
- (id)getCurrentWebView;
- (BOOL)isInjectPubliclibFinished;
- (id)getWebViewByID:(unsigned long long)arg1;
- (BOOL)isWebViewIdValid:(unsigned long long)arg1;
- (id)getNavigationController;
- (void)setWeakNavigationController:(id)arg1;
- (void)addSystemCoverViewIfNeeded;
- (void)addWmpfLaunchTipViewIfNeeded;
- (void)animateHideWmpfLaunchTipViewIfNeeded;
- (void)asyncReportColdLaunchPermissonInfoIfNeeded;
- (void)removeSystemCoverView;
- (void)onTapEmbedWeAppTaskBackground:(id)arg1;
- (void)addEmbedModeBackgroundViewIfNeeded;
- (void)removeEmbedModeBackgroundView;
- (void)addBrandTitleBarIfNeeded;
- (void)removeBrandTitleBar;
- (void)updateBrandTitleBarFrame;
- (void)brandTitleBarOnClickShareButton:(id)arg1;
- (void)brandTitleBarOnClickHeader:(id)arg1;
- (void)brandTitleBarOnClickCloseButton:(id)arg1;
- (BOOL)brandTitleBarShouldHideShareButton:(id)arg1;
- (void)onJumpingEmbedWeAppExpandToFullScreen;
- (void)removeUnNeedCustomUIWidgetViewThatAlreadyAdded;
- (void)applyCustomUIWidgetViewInOpenParameter;
- (void)addCustomUIWidgetViewInOpenParameterIfNeeded;
- (void)addCustomUIWidgetViewFromJSAPI:(id)arg1;
- (void)applyCustomUIWidget:(id)arg1;
- (void)layoutCustomUIWidget:(id)arg1;
- (void)removeAllCustomUIWidgetViewWithSource:(unsigned long long)arg1;
- (id)customUIWidgetDic;
- (void)addCapsuleMenuIfNeeded;
- (void)resetCapsuleMenuType;
- (void)updateSheetBrandTitleBarIfNeedByContact:(id)arg1;
- (BOOL)canKeepAliveInBackground;
- (BOOL)shouldForbidDarkMode;
- (unsigned long long)darkmodeSpecificType;
- (BOOL)launchParameterShouldUseSimulatedNativeLoading;
- (id)getCurrentCaptureImage:(BOOL)arg1;
- (void)onOpenJumpingEmbedAppTaskProfile;
- (BOOL)shouldTerminateByBluetoothLogicWhenSuspend;
- (id)getHomePage;
- (void)didTakeScreenshot:(id)arg1;
- (void)setFirstRenderCompleted:(BOOL)arg1;
- (void)setFirstRenderFullCompleted:(BOOL)arg1;
- (void)updateTaskSessionInfo:(id)arg1;
- (void)markTaskHomePageEntryVisible:(BOOL)arg1;
- (void)setEnterScene:(unsigned int)arg1;
- (id)preprocessPagePath:(id)arg1;
- (BOOL)isPagePathTabPage:(id)arg1;
- (BOOL)currentHasTabPage;
- (BOOL)isLoading;
- (BOOL)isColdLaunchLoading;
- (BOOL)isRelaunchLoading;
- (BOOL)isChildPageLoading;
- (id)getLoadingViewController;
- (id)getCustomLoadingViewController;
- (id)popAppLoader;
- (id)popRelaunchAppLoader;
- (void)onDidPresentWithPresentingViewController:(id)arg1;
- (void)onWillShowLoadingWithPresentingViewController:(id)arg1;
- (void)onDidShowLoadingWithPresentingViewController:(id)arg1;
- (void)onLibWorkerCreatedWithType:(id)arg1;
- (void)navigationControllerDidChangeTo:(id)arg1 shouldRestoreCurrentNavigationController:(BOOL)arg2;
- (void)fetchPreloadAppServiceIfPossibleWithContact:(id)arg1;
- (id)fetchPreloadAppTaskIfPossibleWithAppID:(id)arg1;
- (void)detachPreloadAppTaskIfPossible:(id)arg1;
- (void)setupTaskForSpecificPageMode;
- (BOOL)shouldColdLaunchUseWeakLoading;
- (BOOL)webViewShouldColdLaunchUseWeakLoading:(id)arg1;
- (void)onCustomLoadingVCRequestFullScreen:(id)arg1;
- (void)onCustomLoadingVCViewSizeTransitionStart:(id)arg1;
- (void)onCustomLoadingVCViewSizeTransitionComplete:(id)arg1;
- (BOOL)setupAppServiceAndWebViewWithAppID:(id)arg1 contact:(id)arg2 packageConfig:(id)arg3 baseURL:(id)arg4 pageRelativeURL:(id)arg5 getWebView:(id *)arg6;
- (void)getChildWebView:(id *)arg1 withRelativeURL:(id)arg2 childExtraInfo:(id)arg3 fromParentWebView:(id)arg4;
- (void)removeChildWebView:(id)arg1 fromParentWebView:(id)arg2;
- (void)removeParentWebView:(id)arg1 fromChildWebView:(id)arg2;
- (void)removeAllParentWebViewFromChild:(id)arg1 andGetRemovedWebView:(id *)arg2;
- (id)getIgnoreOtherWebViewListOnReloadFirstPage;
- (void)launchWebViewDidAppear;
- (void)setWaitingSplashAdBlock:(id /* block */)arg1;
- (void)willStartHotLaunch:(id)arg1;
- (void)doHotLaunchWithContext:(id)arg1 completion:(id /* block */)arg2;
- (void)doRelaunchWithContext:(id)arg1 completion:(id /* block */)arg2;
- (void)willStartReLaunch:(id)arg1;
- (void)willStartColdLaunch;
- (void)doColdLaunchWithCompletion:(id /* block */)arg1;
- (void)willStartLaunch;
- (void)resetScreenBrightnessSetByJsapiAndRecordLaunchScreenBrightness;
- (void)recordCurrentScreenBrightness;
- (void)resetScreenBrightnessSetByJsapi;
- (void)mergeNewUserType:(unsigned long long)arg1;
- (void)fetchConfigExptInfo;
- (void)detectCurrentNetType;
- (void)asyncPrefetchBackgroundFetchDataIfNeeded;
- (void)webviewDidShowFromBackground;
- (void)didFinishReLaunch;
- (void)didFinishColdLaunch;
- (void)didFinishHotLaunch;
- (void)didFinishLaunch;
- (void)checkUpdateManager;
- (void)saveBackUpContact:(id)arg1;
- (void)cancelVersionFallbackLogic;
- (void)tryAsyncUpdateContact;
- (void)tryAsyncUpdateAppConfig;
- (void)sendCacheChannelMsgsIfHave;
- (void)didFinishCheckInfoDatasWithResult:(id)arg1;
- (void)noticePerformanceMetricForDownloadedInfoData:(id)arg1;
- (void)notifyServiceWithNewXmlPushLibsMsg;
- (void)didFinishSetupService;
- (void)reportPubLibUsageIfNeeded;
- (void)updateLifeCycleBaseRecord;
- (void)updateLifeCyclePageStackRecord;
- (void)updateLifeCyclePageJsError:(id)arg1 forPage:(id)arg2;
- (void)updateLifeCyclePageRouteWithDownloadedModules:(id)arg1 forPage:(id)arg2;
- (void)updateLifeCycleColdLaunchWithDownloadedModules:(id)arg1;
- (id)getLifeCyclePageDownloadedModulesForPage:(id)arg1;
- (void)updateLifeCycleServiceJSError:(id)arg1;
- (void)updateLifeCyclePageDetectedWhiteScreen:(id)arg1 subType:(unsigned long long)arg2 doubleCheckScene:(unsigned long long)arg3 doubleCheckReason:(unsigned long long)arg4;
- (void)updateLifeCycleDetectedCrash:(id)arg1 subType:(unsigned long long)arg2;
- (void)doubleCheckWhiteScreenForPageIfNeeded:(id)arg1 scene:(unsigned long long)arg2;
- (void)tryDoRecoverWhenWebviewAliveFailed;
- (void)tryDoRecoverWhenServiceAliveFailed;
- (void)updateLifeCycleDetectedPageRecoverReloadedForPage:(id)arg1;
- (void)updateLifeCycleTaskDidDieWithReason:(unsigned long long)arg1;
- (void)reportLifeCycleDetectedQualityIssueType:(unsigned int)arg1 subType:(unsigned int)arg2 inPage:(id)arg3 doubleCheckScene:(unsigned long long)arg4 doubleCheckReason:(unsigned long long)arg5;
- (void)saveLifeCycleRecord;
- (void)deleteLifeCycleRecord;
- (void)packageCheckedSuccess:(BOOL)arg1 downloadedInfoDatas:(id)arg2;
- (BOOL)relativeURLShouldUseLazyLoad:(id)arg1;
- (BOOL)setupConfigDataWithAppID:(id)arg1 contact:(id)arg2 packageConfig:(id)arg3 relativeURL:(id)arg4 relyPluginInfoDatas:(id)arg5 isLazyLoad:(BOOL)arg6 entryPackages:(id)arg7;
- (void)setupCertFileAndPredownloadGameWithAppID:(id)arg1 contact:(id)arg2 packageConfig:(id)arg3 isLazyLoad:(BOOL)arg4;
- (BOOL)relaunchToLatestVersionWithFakeLoading;
- (void)relaunchToMigrateTargetWeAppIdWithFakeLoading:(id)arg1;
- (void)relaunchToCurrentVersion;
- (void)setupAppConfig;
- (BOOL)loadAppConfig:(id)arg1;
- (BOOL)loadPackageConfigWithContact:(id)arg1 getError:(id *)arg2;
- (BOOL)isWeAppUseModule;
- (void)showWebViewFromBackground:(id)arg1 completion:(id /* block */)arg2;
- (void)sendUIEventAfterShowFromBackground:(id)arg1;
- (void)removeWebViewFromNavigationController:(BOOL)arg1 completion:(id /* block */)arg2;
- (void)dismissTaskPage:(BOOL)arg1 completion:(id /* block */)arg2;
- (void)closePresentedViewController;
- (BOOL)shouldReportPubLibCoverage;
- (void)reportPubLibCoverageIfNeeded;
- (void)addWebView:(id)arg1;
- (void)reportColdLaunchEvaluateResult;
- (id)getAllFileEvaluateDetailBase64:(id)arg1;
- (void)removeWebView:(id)arg1;
- (void)removeDissociativeWebView:(id)arg1;
- (void)leaveWebView:(id)arg1;
- (void)pageStackDidUpdate;
- (unsigned long long)currentStackMode;
- (BOOL)shouldAddNewStackWhenAppRouteOnPage:(id)arg1;
- (id)getPagesRecordFromPageMgr;
- (void)checkBackgroundStatus;
- (void)clearAndPopAllWebViewIgnoreTab;
- (void)_removeAllParentWebViewFromChild:(id)arg1 andGetRemovedWebView:(id *)arg2;
- (void)popAllAndSwitchTab:(id)arg1 fromVC:(id)arg2;
- (void)directlyManipualtePageMgrWithNavigateBack;
- (id)getNewWebViewControllerWithContact:(id)arg1 appID:(id)arg2 baseURL:(id)arg3 pageRelativeURL:(id)arg4 webviewId:(unsigned int)arg5 preloadedWebview:(id)arg6;
- (id)getChildWebViewWithRelativeURL:(id)arg1 childExtraInfo:(id)arg2 fromParentWebView:(id)arg3;
- (id)getTabChildWebViewWithRelativeURL:(id)arg1 fromParentWebView:(id)arg2;
- (unsigned int)getRenderTypeOfWebView:(id)arg1;
- (id)generateExtraInfoWithContact:(id)arg1;
- (void)updateAllWebView;
- (void)releasePreloadedWebViewForReason:(unsigned long long)arg1;
- (void)setupPreloadWebViewFromWebView:(id)arg1 isSkyline:(BOOL)arg2;
- (id)getAndDeletePreLoadWebView:(id)arg1;
- (void)registerPerformanceIndex;
- (BOOL)isNavBottomStackInstances:(id)arg1;
- (BOOL)hasMultiStackInstances;
- (id)getBeforeNavInStackInstances:(id)arg1;
- (BOOL)isNavAlreadyInStackInstance:(id)arg1;
- (id)getStackIntanceForNav:(id)arg1;
- (void)popStackInstanceToNav:(id)arg1;
- (void)getAllVMJSFootprintMemoryInBytesWithCompletion:(id /* block */)arg1;
- (void)getMainVMJSFootprintMemoryInBytesWithCompletion:(id /* block */)arg1;
- (void)getWorkersVMJSFootprintMemoryInBytesWithCompletion:(id /* block */)arg1;
- (void)getAllVMJSFootprintMemoryInMBWithCompletion:(id /* block */)arg1;
- (void)getMainVMJSFootprintMemoryInMBWithCompletion:(id /* block */)arg1;
- (void)getWorkersVMJSFootprintMemoryInMBWithCompletion:(id /* block */)arg1;
- (unsigned long long)getAllVMJSFootprintMemoryInMB;
- (unsigned long long)getMainVMJSFootprintMemoryInMB;
- (BOOL)isForegroundMemoryIncreasementAbNormal;
- (id)getFootprintMemoryPerformanceIndex;
- (id)getPerformanceIndexWithType:(unsigned long long)arg1;
- (void)webViewWillAppear:(id)arg1;
- (void)webViewDidAppear:(id)arg1;
- (void)webViewDidFirstAppear:(id)arg1;
- (void)webViewDidDisappear:(id)arg1;
- (void)webViewWillBePoped:(id)arg1;
- (void)webViewDidBePoped:(id)arg1;
- (void)webViewDidBeDismissed:(id)arg1;
- (void)webViewWillPush:(id)arg1;
- (void)webViewDidPush:(id)arg1;
- (void)webViewDidBePresentd:(id)arg1;
- (void)webView:(id)arg1 didPresent:(id)arg2;
- (void)webviewDidLayout:(id)arg1;
- (void)processPushOrPresentAViewController:(id)arg1;
- (void)webViewOnBeforeEveluateIndexData:(id)arg1;
- (unsigned int)webViewCapsuleMenuType:(id)arg1;
- (BOOL)webViewIsCoveredByTemplateNav:(id)arg1;
- (id)getTabChildWebViewWithRelativeURL:(id)arg1 fromWebView:(id)arg2;
- (id)getPreviousWebViewFromWebView:(id)arg1;
- (void)webViewDidSwitchTab:(id)arg1;
- (void)webView:(id)arg1 didScroll:(id)arg2;
- (void)webView:(id)arg1 willBeginDragging:(id)arg2;
- (void)webView:(id)arg1 willEndDragging:(id)arg2 withVelocity:(CGPoint)arg3 targetContentOffset:(CGPoint *)arg4;
- (void)webView:(id)arg1 didEndDragging:(id)arg2;
- (BOOL)webViewShouldInitFullWebView:(id)arg1;
- (void)webViewDidNavigateTo:(id)arg1;
- (void)webviewIneractivePopBackDidBegin:(id)arg1;
- (void)webview:(id)arg1 interactivePopBackDidChangeProgress:(double)arg2;
- (void)webview:(id)arg1 interactivePopBackWillEnd:(BOOL)arg2;
- (void)webview:(id)arg1 interactivePopBackDidEnd:(BOOL)arg2;
- (double)webViewGetStatusBarHeight:(id)arg1;
- (CGSize)webviewPreferSize:(id)arg1;
- (void)webview:(id)arg1 rotateToOrientation:(long long)arg2;
- (BOOL)isLandscape;
- (BOOL)isCurrentOrientationDifferentWithDeviceOrientation;
- (long long)webviewGetCurrentOrientation:(id)arg1;
- (id)extJSModels;
- (void)popToFirstWebViewFrom:(id)arg1 animated:(BOOL)arg2;
- (void)popToFirstWebViewFrom:(id)arg1 animated:(BOOL)arg2 completion:(id /* block */)arg3;
- (void)popToWebView:(id)arg1 fromWebView:(id)arg2 completion:(id /* block */)arg3;
- (id)popWebViewCount:(int)arg1 fromWebView:(id)arg2 completion:(id /* block */)arg3;
- (id)popWebViewCount:(int)arg1 fromWebView:(id)arg2 animated:(BOOL)arg3 completion:(id /* block */)arg4;
- (void)onOrientationDidChangeTo:(long long)arg1;
- (void)enterBackgroundAndDismissPages:(BOOL)arg1;
- (void)enterBackgroundAndDismissPages:(BOOL)arg1 completion:(id /* block */)arg2;
- (void)enterBackgroundState;
- (void)enterBackgroundWithMode:(long long)arg1 action:(long long)arg2 animate:(BOOL)arg3 completion:(id /* block */)arg4;
- (void)killAppFrom:(id)arg1 animate:(BOOL)arg2;
- (void)killAppFrom:(id)arg1 animate:(BOOL)arg2 reason:(long long)arg3;
- (BOOL)isForceEnableClose;
- (BOOL)isNeedWriteEvaluateBeforeExit;
- (BOOL)isNeedWriteGameEvaluateBeforeExit;
- (BOOL)isNeedWriteGameReviewBeforeExit;
- (void)makeWebViewEnableClose:(BOOL)arg1;
- (void)webViewBeforeClickReturnButton:(id)arg1;
- (void)exitToBackgroundFromWebView:(id)arg1 action:(long long)arg2;
- (void)reportEmbedExitReason:(unsigned int)arg1;
- (void)webViewClickCustomRightButton:(id)arg1;
- (BOOL)isPresentedBySupportLandscapeViewController:(id)arg1;
- (void)firstPageWebViewDidSweepBack:(id)arg1;
- (BOOL)webViewIsFirstPage:(id)arg1;
- (id)getFirstWebViewFrom:(id)arg1;
- (id)getLastWebViewFrom:(id)arg1;
- (unsigned long long)getWebViewDepthInStack;
- (id)getPermissionResultWithJSAPI:(id)arg1;
- (id)getPermissionResultWithJSAPI:(id)arg1 withAppId:(id)arg2 fromWebView:(id)arg3 byTempPermission:(id)arg4;
- (BOOL)isJsApiPermissionAutoGrantedInWebViewEnvironment:(id)arg1;
- (void)checkUserAuthWithJSAPI:(id)arg1 permissionAppID:(id)arg2 model:(id)arg3 handler:(id /* block */)arg4 failHandler:(id /* block */)arg5 transferHandler:(id /* block */)arg6 fromWebView:(id)arg7;
- (BOOL)hasPermissionToShowActionSheetMenuType:(unsigned int)arg1;
- (BOOL)checkServiceRunMode:(id)arg1;
- (BOOL)checkServiceRunInMainThread:(id)arg1;
- (BOOL)checkWebViewRunMode:(id)arg1;
- (void)publishPostMessage:(id)arg1 fromWebView:(id)arg2;
- (void)returnSyncPostMessage:(id)arg1 fromWebView:(id)arg2;
- (void)sendJSEventToService:(id)arg1 param:(id)arg2 fromWebView:(id)arg3;
- (void)sendJSEventToWorker:(id)arg1 param:(id)arg2 workerId:(unsigned int)arg3;
- (void)updateListenJSEventInfo:(id)arg1 info:(id)arg2;
- (BOOL)sendJSEventIfListened:(id)arg1 param:(id)arg2 workerId:(unsigned int)arg3;
- (void)webviewApiResult:(id)arg1;
- (void)reportWKWebViewTerminateAction:(id)arg1 type:(unsigned long long)arg2;
- (BOOL)isPreloadCacheWebview:(id)arg1;
- (BOOL)isWebViewOnDisplaying:(id)arg1;
- (BOOL)isTaskOnDisplaying;
- (void)webViewDidTerminateInContentProcess:(id)arg1;
- (void)webViewDidBecomeUnresponsible:(id)arg1;
- (void)webViewDidBecomeResponsible:(id)arg1;
- (void)reloadTerminatedWebViewIfNeeded;
- (void)webViewOnPageReload:(id)arg1 withRouteInfo:(id)arg2;
- (void)webViewInjectScriptFail:(id)arg1;
- (void)routeToHomePageWhenWebViewDidAppearWithNewSessionInfo:(id)arg1;
- (void)reboot;
- (void)triggerTaskRouteToHomePage;
- (void)routeToPagePathWhenInForground:(id)arg1;
- (BOOL)isRemoteDebugMode;
- (BOOL)isIgnoreRemoteCheckDomain;
- (void)remoteDomEvent:(id)arg1 webViewID:(unsigned int)arg2;
- (void)remoteNetworkRequest:(id)arg1 taskID:(id)arg2 header:(id)arg3;
- (void)webviewDidShow404ErrorView:(id)arg1;
- (void)webview:(id)arg1 didFailEvaluateJS:(id)arg2 withError:(id)arg3;
- (void)webView:(id)arg1 didReceiveInitReady:(BOOL)arg2;
- (BOOL)isRunningInViewEmbeddedMode;
- (id)ViewEmbeddedModeContainerView;
- (void)webViewDidReceiveInitReadyAfterRenderingCache:(id)arg1;
- (BOOL)isRunningInSheetMode;
- (BOOL)isEmbedModeExpandedToFullScreen;
- (BOOL)isRunningInKeepContextView;
- (BOOL)isRunningInTransparentBackgroud;
- (BOOL)isRunningInEmbedMode;
- (BOOL)embedModeAllowFullScreen;
- (void)configChatToolModeWhenLaunch;
- (BOOL)isRunningInChatTool;
- (void)openChatTool:(id)arg1 pagePath:(id)arg2;
- (void)exitChatTool;
- (id)bindingChatUsername;
- (BOOL)hasJumpingEmbedWeAppTask;
- (id)jumpingSheetWeAppTaskAppid;
- (id)jumpFromWeAppTaskAppid;
- (void)destroyJumpingEmbedRelation;
- (void)jumpingEmbedWeAppTaskInteractivePopBackDidBegin;
- (void)jumpingEmbedWeAppTaskInteractivePopBackProgressing:(double)arg1;
- (void)jumpingEmbedWeAppTaskInteractivePopBackWillEnd:(BOOL)arg1;
- (void)jumpingEmbedWeAppTaskInteractivePopBackDidEnd:(BOOL)arg1;
- (void)expandToFullScreenInSheetMode:(unsigned long long)arg1;
- (void)recoverHalfScreenInSheetMode;
- (BOOL)shouldAddPopBackInteractivePopGestureForWebView:(id)arg1;
- (BOOL)isEnableSheetModeFullScreenGesture;
- (BOOL)isForbidSheetModeFullScreenDragUpGesture;
- (BOOL)isSheetModeDragGestureDragging;
- (BOOL)isSheetModeAlreadyDragToExpanded;
- (BOOL)isSheetModeAlreadyDragToFullScreen;
- (BOOL)isSheetModeExpandedToStatusBarTop;
- (BOOL)isSimulatedNativeSheetModeShouldHideLeftReturnButton;
- (BOOL)canShowControlByteMenuItem:(unsigned long long)arg1;
- (BOOL)canSelectControlByteMenuItem:(unsigned long long)arg1;
- (unsigned int)getControlByteWithMenuItem:(unsigned long long)arg1;
- (BOOL)controlByteMenuItemShouldBanInEmbedMode:(unsigned long long)arg1;
- (unsigned long long)capsuleMenuType;
- (long long)currentMenuStateForWebView:(id)arg1;
- (unsigned long long)supportedInterfaceOrientationInSheetMode;
- (id)getNavAlertTitleForWebview:(id)arg1;
- (void)webView:(id)arg1 shareMenuShowIntentionDidChanged:(BOOL)arg2;
- (void)webview:(id)arg1 preferredStatusBarColorChanged:(BOOL)arg2;
- (void)clearAppService:(BOOL)arg1;
- (void)setupAppServiceWithContact:(id)arg1 extraInfo:(id)arg2 preloadedAppService:(id)arg3;
- (void)willSendOnAppRouteEventForWebView:(id)arg1 openType:(unsigned long long)arg2 param:(id)arg3;
- (void)didSendOnAppRouteEventForWebView:(id)arg1 param:(id)arg2;
- (void)detectAppRouteWhiteScreenAndReportForWebviewId:(id)arg1;
- (void)detectInitReadyWhiteScreenAndReportForWebviewId:(id)arg1;
- (void)detectInitReadyWhiteScreenDurationForWebViewId:(id)arg1;
- (void)detectWhiteScreenForWebView:(id)arg1 scene:(unsigned long long)arg2 withCompletion:(id /* block */)arg3;
- (void)didDetectedWhiteScreenInWebView:(id)arg1 scene:(unsigned long long)arg2;
- (void)schedulePeriodCheckAliveForWebView:(id)arg1;
- (void)webView:(id)arg1 didCheckAlive:(unsigned long long)arg2;
- (void)serviceDidCheckAlive:(BOOL)arg1;
- (void)sendAppRouteEventFromWebView:(id)arg1 openType:(unsigned long long)arg2;
- (void)sendSkylineRouteDoneWithWebview:(id)arg1;
- (void)sendOnAppRouteDoneWithWebView:(id)arg1;
- (void)fillQualityDataInAppRouteParams:(id)arg1 forPage:(id)arg2;
- (void)logAppRouteAction:(unsigned long long)arg1 webviewID:(unsigned long long)arg2;
- (BOOL)reportPerformance;
- (void)logAppRoutePerformance:(long long)arg1 time:(unsigned int)arg2;
- (id)getStrForOpenType:(unsigned long long)arg1 webviewID:(unsigned long long)arg2;
- (void)appServiceSendOnEnterForeground:(id)arg1 isFromSystemAwake:(BOOL)arg2;
- (void)appServiceSendOnEnterBackground:(long long)arg1;
- (void)setAppServiceCurrentWebView:(id)arg1;
- (id)getPermissionResultWithJSAPI:(id)arg1 withAppId:(id)arg2 byTempPermission:(id)arg3;
- (void)runActionAfterSplashAD:(id /* block */)arg1;
- (void)splashAD_didFinished;
- (void)asyncUpdateAfterLaunchInfo;
- (void)onCommentUpdateMenu:(id)arg1 iconUrlInDarkMode:(id)arg2 text:(id)arg3 showDuration:(double)arg4;
- (void)layoutCapsuleMenu;
- (void)layoutWmpfLaunchView;
- (void)showSystemSheetMenu:(unsigned long long)arg1;
- (id)getPermissionResultWithJSAPI:(id)arg1 fromAppService:(id)arg2 withAppId:(id)arg3 byTempPermission:(id)arg4;
- (id)getPermissionDict;
- (id)getSystemInfo;
- (unsigned int)getPreloadType;
- (void)abandonCachedPrefretchPreloadTaskBeforeServiceLaunching;
- (void)checkUserAuthWithJSAPI:(id)arg1 permissionAppID:(id)arg2 model:(id)arg3 handler:(id /* block */)arg4 failHandler:(id /* block */)arg5 transferHandler:(id /* block */)arg6 fromAppService:(id)arg7;
- (void)service:(id)arg1 didFailEvaluateJS:(id)arg2 withError:(id)arg3;
- (unsigned long long)currentLaunchMode;
- (void)validateAndResetLaunchModeIfNeeded;
- (id)getServerModeInfo;
- (id)currentAppearance;
- (id)appearanceForLaunchMode:(unsigned long long)arg1;
- (void)triggerStrictBanMode:(id)arg1;
- (void)mainThreadTriggerStrictBanMode:(id)arg1;
- (void)onSystemWillResignActive:(id)arg1;
- (void)onSystemDidBecomeActive:(id)arg1;
- (void)onSystemEnterBackground:(id)arg1;
- (void)onSystemEnterForeground:(id)arg1;
- (void)taskEnterForeground:(long long)arg1;
- (void)taskEnterBackground:(long long)arg1;
- (void)taskEnterBackground:(long long)arg1 action:(long long)arg2;
- (void)tryShowUserGuideDialog:(long long)arg1;
- (BOOL)getIsForeground;
- (void)checkForegound;
- (void)enterBackgroundOnOpenNativePage:(id)arg1;
- (void)enterBackgroundOnOpenH5Page:(id)arg1;
- (void)enterBackgroundOnJumpOtherWeApp:(id)arg1;
- (BOOL)isFirstWebViewOnForeground;
- (BOOL)shouldSendEnterForegroundEventToServiceWhenHotLaunch;
- (BOOL)shouldEnterForeground;
- (void)enterForegroundIfNeed;
- (void)setWeixinAppPlatformState:(unsigned long long)arg1 reason:(unsigned int)arg2;
- (void)setTaskPlatformState:(unsigned long long)arg1 reason:(unsigned int)arg2;
- (void)silentOpenServiceTriggerEnterBackground;
- (id)genSilentOpenServiceEvent;
- (id)genStateChangedEventWithPlatformType:(unsigned long long)arg1 direction:(unsigned long long)arg2 reason:(unsigned int)arg3;
- (id)genSuspendTimerEvent;
- (id)genBackgroundCheckEvent;
- (id)genCloseTaskEventWithReason:(unsigned long long)arg1;
- (id)genUniqueResourceTakeOverEventWithType:(unsigned long long)arg1;
- (id)genUniqueResourceReTakeEventWithType:(unsigned long long)arg1;
- (id)genSharedResourceRecoverEventWithType:(unsigned long long)arg1;
- (void)notifyEvent:(id)arg1;
- (void)initStateReceiveEvent:(id)arg1;
- (void)foregroundReceiveEvent:(id)arg1;
- (void)backgroundReceiveEvent:(id)arg1;
- (void)suspendReceiveEvent:(id)arg1;
- (void)updateRunningState:(unsigned long long)arg1 byEvent:(id)arg2;
- (BOOL)checkAndScheduleSuspendTimerIfNeeded;
- (unsigned long long)getTaskRunningStatus;
- (void)onTaskRunningStateWillChangeTo:(unsigned long long)arg1 byEvent:(id)arg2;
- (void)onTaskRunningStateDidChangeTo:(unsigned long long)arg1 byEvent:(id)arg2;
- (unsigned long long)getEnterBackgroundReasonByEvent:(id)arg1;
- (id)notificationUserInfo;
- (void)onTaskWillEnterBackground;
- (void)onTaskDidEnterBackgroundWithReason:(unsigned long long)arg1;
- (void)onTaskDidEnterForeground;
- (void)onTaskWillEnterForeground;
- (BOOL)isTaskRunning;
- (BOOL)isUsingSinglePageMode;
- (BOOL)isUsingCustomLoading;
- (unsigned int)getSecFlagForSinglePageMode;
- (BOOL)isRestrictedBySecurityFlag;
- (BOOL)isGameFunctionalPage;
- (void)closeTask;
- (void)closeTaskWithReason:(unsigned long long)arg1;
- (void)softCloseTask;
- (void)softCloseTaskWithReason:(unsigned long long)arg1;
- (BOOL)isTaskInteractingExists;
- (void)onTaskWillBeClosed:(unsigned long long)arg1;
- (void)onTaskDidBeClosed:(unsigned long long)arg1;
- (void)registerLeakDetector:(unsigned long long)arg1;
- (void)resetTask:(BOOL)arg1;
- (id)GetWeAppPluginByName:(id)arg1;
- (void)printConsoleLog:(id)arg1;
- (void)releaseCronetGlobalCallback;
- (void)setCronetGloableCallBack;
- (BOOL)DoDnsResolve:(const void *)arg1 result:(void *)arg2;
- (void)onSystemInfoReachabilityChanged:(unsigned int)arg1 networkType:(id)arg2 isReachable:(BOOL)arg3;
- (void)NotifyWeakOrGoodNet:(BOOL)arg1;
- (void)onClientNetworkWeakChanged:(BOOL)arg1;
- (void)setNetworkStatusType:(unsigned int)arg1;
- (void)setWeappCronetNetworkInWeakNet:(BOOL)arg1;
- (void)setClientNetworkInWeakNet:(BOOL)arg1;
- (void)detectServiceServerMode;
- (void)setServerModeToggled:(BOOL)arg1;
- (void)serviceDidAppendRuntimeContext:(id)arg1;
- (id)getDnsArrayFromLocal:(id)arg1;
- (BOOL)isInServiceServerMode;
- (void)sendCgiToService:(id)arg1 eventId:(unsigned int)arg2 completion:(id /* block */)arg3;
- (void)onServiceRouteCgiResponseData:(id)arg1 eventId:(unsigned int)arg2 support:(BOOL)arg3;
- (id)serviceRouteCgiMap;
- (void)onUserAuthOKWithJSAPI:(id)arg1 handler:(id /* block */)arg2 scene:(unsigned long long)arg3;
- (void)onUserAuthFailWithJSAPI:(id)arg1 failHandler:(id /* block */)arg2 errMsg:(id)arg3 errNo:(unsigned int)arg4 scene:(unsigned long long)arg5;
- (void)onUserTransferAuthDidCompeleteWithJSAPIName:(id)arg1 transferHandler:(id /* block */)arg2 result:(id)arg3 scene:(unsigned long long)arg4;
- (void)onLaunchPermissionInfoUpdate;
- (void)onPluginPermissionInfoUpdate;
- (void)notifyServiceEventOnLaunchPermissionUpdate;
- (id)getGameExtraInfo;
- (id)currentLaunchAction;
- (BOOL)shouldUpdateInHistoryList;
- (void)checkLaunchAction;
- (void)checkBackgroundUpdateLaunchAction;
- (void)checkOpConfig;
- (void)checkPluginPermission;
- (void)closeTaskAndJumpToURL:(id)arg1;
- (void)closeTaskAndJumpToRetryPage:(id)arg1;
- (void)jumpToVCAfterCloseTask:(id)arg1 navigationController:(id)arg2;
- (void)closeTaskAndAlertMsg:(id)arg1 title:(id)arg2 confirmBtnTitle:(id)arg3;
- (void)setupInstanceId;
- (void)registerColdLaunchExtensions;
- (void)fillColdLaunchConfigurations;
- (void)initPredownloadReport;
- (void)markNeedShowUserGuide:(unsigned int)arg1;
- (void)prepareVConsoleConfiguration;
- (void)pageFlowReportWeAppBecomeActive;
- (void)doColdLaunchPreFetchCGIData;
- (void)getColdLaunchPreFetchCGIDataWithFetchType:(unsigned int)arg1 completion:(id /* block */)arg2;
- (void)prefetchDNSDomainIfNeeded;
- (void)showTipsViewWithTitle:(id)arg1 content:(id)arg2 confirmBtnTitle:(id)arg3 tipsTag:(long long)arg4 delegate:(id)arg5;
- (void)onClickTipsBtn:(id)arg1 Index:(long long)arg2 tipTag:(long long)arg3;
- (void)scheduleSuspendStatusTimer;
- (unsigned int)getSuspendTimerTickForBackgroundContext:(id)arg1;
- (void)invalidateSuspendStatusTimer;
- (void)triggerSuspendTimer:(id)arg1;
- (unsigned int)maxWxDataSizeInKB;
- (void)updateStorage;
- (void)processWillTriggerSuspendTimer;
- (void)reportEnterForeground;
- (void)reportEnterForegroundIfBackFromNativePage;
- (void)markEnterBackgroundOnLaunchNativePage:(id)arg1 isWebPage:(BOOL)arg2;
- (void)reportForceAsyncUpdateLaunchWithReason:(unsigned long long)arg1 appid:(id)arg2 debugMode:(unsigned long long)arg3 appVersion:(unsigned int)arg4;
- (void)reportTradeCommentAction:(unsigned int)arg1 type:(unsigned int)arg2;
- (void)reportKoubeiEvent:(long long)arg1;
- (void)reportKoubeiEvent:(long long)arg1 source:(unsigned long long)arg2;
- (void)onPowerStateChange:(BOOL)arg1;
- (void)onNetworkStatusChange:(unsigned int)arg1;
- (void)onChatToolStatusChange:(id)arg1 appearance:(id)arg2;
- (void)taskDidResignSharedBackgroundResouce:(unsigned long long)arg1;
- (BOOL)canContinueShowLocationConfirmView;
- (BOOL)needShowPrivacyProtectInfoWhenAuthorizeScopes:(id)arg1;
- (BOOL)needShowPrivacyProtectInfoWhenAuthorizeJsApi:(id)arg1;
- (BOOL)needShowPrivacyProtectInfoWhenAuthorizePipelineApi:(id)arg1;
- (id)permisstionDescriptionForScope:(id)arg1;
- (BOOL)canKeepAliveByAudioPlay;
- (BOOL)canKeeyAliveByAudioPlayForAllDebugMode;
- (BOOL)canKeepAliveByAudioPlayForReleaseMode;
- (void)taskDidKickedOutMusicPlayerByOtherSource:(id)arg1;
- (void)taskDidResumeMusicPlayer;
- (BOOL)isTingPlayTaskActive;
- (void)setRecordState:(BOOL)arg1;
- (BOOL)isRecording;
- (void)setLivePusherState:(BOOL)arg1;
- (BOOL)isLivePushing;
- (void)setLivePlayingState:(BOOL)arg1;
- (BOOL)isLivePlaying;
- (void)setAppMediaPlaying:(BOOL)arg1;
- (BOOL)isAppMediaPlaying;
- (void)onSystemPrivacyLocationChanged;
- (void)onSystemPrivacyLocationBackgroundChanged;
- (void)onSystemPrivacyRecordChanged;
- (void)registerCustomBackgroundState:(unsigned long long)arg1 isLowPriority:(BOOL)arg2;
- (long long)stateToPriorityMap:(unsigned long long)arg1 isLowPriority:(BOOL)arg2;
- (void)registerBackgroundState:(unsigned long long)arg1;
- (void)unregisterBackgroundState:(unsigned long long)arg1;
- (void)refreshCapsuleMenuState;
- (void)setCapsuleMenuState:(long long)arg1;
- (void)handleCapsuleStateInterrupted:(long long)arg1;
- (void)delayUnregisterMenuStateIfNeeded:(id)arg1;
- (void)configCapsuleMenuIconUrl:(id)arg1 iconUrlInDarkMode:(id)arg2 text:(id)arg3 duration:(double)arg4 needToPutBackIfInterrupted:(BOOL)arg5 forBackgroundState:(unsigned long long)arg6;
- (void)refreshJumpFromAppTaskCapsuleMenuStateIfNeeded;
- (BOOL)jumpingEmbedWeAppTaskIsStating;
- (long long)menuState;
- (long long)transferBackgroundStateToMenuState:(unsigned long long)arg1;
- (void)showThirdBusiTipsBannerIfNeeded;
- (void)onSystemScreenCapturedChanged:(id)arg1;
- (void)showVoipChattingMinimizationWindowIfNeeded;
- (void)hideVoipChattingMinimizationWindowIfNeeded;
- (id)minimizationHost;
- (id)chattingVoipMinimizationItemInfo;
- (BOOL)isWXVoIPChatting;
- (BOOL)isVoIPChatting;
- (BOOL)isVoIPChattingMute;
- (void)setWxaVoipWaiting:(BOOL)arg1;
- (BOOL)isWxaVoipWaiting;
- (void)taskDidAttemptToJoinVoip;
- (void)taskDidKickedOutVoip;
- (void)stopAllBackgroundSharedResourceActivity;
- (BOOL)hasBackgroundSharedResourceActivity;
- (BOOL)shouldMinimizeCurTaskByBackgroundResource;
- (BOOL)canKeepAliveByBackgroundResourceForDebugMode:(id)arg1;
- (BOOL)canKeepAliveByBackgroundResourceForReleaseMode:(id)arg1;
- (BOOL)isWeAppWindowResizableForIpad;
- (BOOL)isInnerAudioPlaying;
- (BOOL)isWxAudioPlaying;
- (BOOL)isWeMediaPlaying;
- (void)redirectToRelativePath:(id)arg1 extraInfo:(id)arg2 fromWebView:(id)arg3 completeHandler:(id /* block */)arg4;
- (void)addLoadedModuleName:(id)arg1;
- (BOOL)isModuleLoadedWithName:(id)arg1;
- (void)addDownloadedPluginAppid:(id)arg1;
- (BOOL)isPluginDownloaedWithAppId:(id)arg1;
- (void)injectEntryPackagesIfNeeded;
- (BOOL)isModuleNameValid:(id)arg1;
- (BOOL)createLoadSubPackageTasks:(id)arg1 completeHandler:(id /* block */)arg2 progressHandler:(id /* block */)arg3;
- (void)checkCacheReadyForRelativeURL:(id)arg1 entryPackages:(id)arg2 syncType:(int)arg3 inScene:(unsigned long long)arg4 completeHandler:(id /* block */)arg5 progressHandler:(id /* block */)arg6;
- (void)addLoadedPlugin:(id)arg1;
- (id)dicLoadedPlugin;
- (void)webView:(id)arg1 pageRouteDownloadedInfoDatas:(id)arg2;
- (unsigned int)getInnerVersionForLoadedPluginAppid:(id)arg1;
- (unsigned int)getPluginInnerVersionFromContactForPluginAppid:(id)arg1;
- (unsigned int)getInnerVersionFromLoadedPluginInfoDataForPluginAppid:(id)arg1;
- (void)tryLoadConfigForPlugin:(id)arg1;
- (void)onJSInjected:(id)arg1;
- (void)sendJSEventWhenServiceWasReady:(long long)arg1 param:(id)arg2 webviewID:(unsigned long long)arg3;
- (void)sendJSStringEventWhenServiceWasReady:(id)arg1 param:(id)arg2 webviewID:(unsigned long long)arg3;
- (void)onUpdateWeAppContactFailedWithKey:(id)arg1 type:(unsigned long long)arg2 errMsg:(id)arg3;
- (void)onUpdateWeAppContactSuccess:(id)arg1;
- (void)onModifyWeAppContact:(id)arg1;
- (void)actionAfterAsyncUpdateContactCallBackType:(unsigned long long)arg1 withContact:(id)arg2;
- (void)forceRelaunchWithContact:(id)arg1;
- (void)sendMemoryWarningEvent;
- (void)sendPageTerminatedBySystemEventWithWebView:(id)arg1;
- (id)getFileData:(id)arg1;
- (id)getPackageFileData:(id)arg1;
- (BOOL)shouldForbidShadowInTransition;
- (id)currentTaskFirstWebView;
- (id)currentTaskNavigationStackFirstWebView;
- (id)currentTaskWebView;
- (BOOL)presentationControllerNeedZoom;
- (BOOL)presentationControllerNeedMask;
- (BOOL)dismissControllerNeedZoom;
- (BOOL)dismissControllerNeedMask;
- (void)onPresentationControllerDragToDismiss;
- (void)onPresentationControllerWillDragToExpand:(BOOL)arg1;
- (void)onPresentationControllerDragToExpand:(BOOL)arg1;
- (void)onEmbedModeWillExpandToFullScreen;
- (void)onEmbedModeExpandToFullScreen;
- (BOOL)shouldDisableExpandButton;
- (void)onPresentationControllerDragToNormalAfterExpand;
- (void)onTapPresentationControllerContainerBackground;
- (CGSize)sheetSizeInSheetLaunchMode;
- (void)sheetFrameDidChange:(CGRect)arg1;
- (unsigned long long)sheetLaunchMode;
- (id)sheetModeParameter;
- (double)sheetExpandedHeightInSheetLaunchMode;
- (CGSize)landscapeSheetSizeInSheetLaunchMode;
- (unsigned long long)sheetRectCornerInSheetLaunchMode;
- (double)sheetCornerRadiusInSheetLaunchMode;
- (unsigned long long)dismissType;
- (BOOL)sheetShouldRespondsToDragGestureInSheetLaunchMode:(id)arg1;
- (BOOL)sheetShouldForbidDragUpGestureInSheetLaunchMode:(id)arg1;
- (BOOL)sheetShouldForbidDragDownGestureInSheetLaunchMode:(id)arg1;
- (BOOL)sheetShouldRespondsToTapGestureInSheetLaunchMode:(id)arg1;
- (BOOL)sheetCanDragToExpandInSheetLaunchMode;
- (BOOL)sheetCanExpandToStatusBarAreaInSheetLaunchMode;
- (void)sheetContentYDidChangeInSheetLaunchMode:(double)arg1;
- (void)sheetDragGestureInSheetLaunchModeDidBegin:(id)arg1;
- (void)sheetDragGestureInSheetLaunchModeDidEnd:(id)arg1;
- (id)sheetBackgroundColorInSheetLaunchMode;
- (BOOL)sheetBackgroundShouldBlurInSheetLaunchMode;
- (BOOL)sheetBackgroundUserInteractionEnabledInSheetLaunchMode;
- (id)sheetHeaderViewInSheetLaunchMode;
- (BOOL)sheetShouldUseDraggingBarHeaderView;
- (BOOL)sheetShouldForbidDragDownGestureAfterExpand;
- (BOOL)sheetCanRecoverAfterExpand;
- (id)getJumpFromAppTask;
- (id)getJumpingEmbedWeAppTask;
- (void)callJumpFromTaskWillPresentSheetWeAppTaskIfNeeded;
- (void)callJumpFromTaskDidPresentSheetWeAppTaskIfNeeded;
- (void)callJumpFromTaskWillDismissSheetWeAppTaskIfNeeded;
- (void)callJumpFromTaskDidDismissSheetWeAppTaskIfNeeded;
- (void)callJumpFromTaskWillKillSheetWeAppTaskIfNeeded;
- (void)willPresentSheetWeAppTask:(id)arg1;
- (void)animateShowEmbedModeBackgroundView;
- (void)didPresentSheetWeAppTask:(id)arg1;
- (void)willDismissSheetWeAppTask:(id)arg1;
- (void)didDismissSheetWeAppTask:(id)arg1;
- (void)willKillSheetWeAppTask:(id)arg1;
- (void)sheetPresentationTransitionWillBegin;
- (void)sheetPresentationTransitionDidEnd:(BOOL)arg1;
- (void)sheetDismissalTransitionWillBegin;
- (void)sheetDismissalTransitionDidEnd:(BOOL)arg1;
- (void)sheetContentWillShow;
- (void)sheetContentDidShow;
- (void)sheetContentDidReturnToNormalAfterExpand;
- (void)callHandlerWrapperNavigationLifeCycleEventIfNeededWithType:(unsigned long long)arg1;
- (void)sheetContentWillHide;
- (void)sheetContentDidHide;
- (void)onBackgroundFetchDataReturn:(id)arg1 FetchType:(id)arg2 FetchData:(id)arg3 FetchRequestParam:(id)arg4;
- (void)startMonitorFPS;
- (void)stopMonitorFPS;
- (void)initPerformanceReportIfNeeded;
- (void)reportPerformanceInfo;
- (void)sendBizCompleteWithParam:(id)arg1;
- (void)navigateToTargetMiniProgramWillBeDismissed;
- (void)callbackWXNativeBizDataPipeFromJSToNaviteWithParam:(id)arg1;
- (void)postWXNativeBizDataFromNativeToJSWithParam:(id)arg1;
- (void)onModAppAuthInfoListWithAppid:(id)arg1 errorCode:(int)arg2;
- (void)onAppAuthInfoListModifyEnd:(BOOL)arg1 AuthDataList:(id)arg2;
- (void)onUpdateWeAppPackageNoNeedUpdate:(id)arg1;
- (void)onUpdateWeAppPackageStartDownload:(id)arg1;
- (void)onUpdateWeAppPackage:(id)arg1 updateResult:(BOOL)arg2;
- (void)sendUpdateManagerEventStatusChangeWithState:(unsigned long long)arg1 appVersion:(unsigned int)arg2 customVersion:(id)arg3 contactPassThroughInfo:(id)arg4 stablePassThroughInfo:(id)arg5;
- (void)sendUpdateManagerEventPluginStatusChangeWithPluginAppid:(id)arg1 state:(unsigned long long)arg2 pluginVersion:(unsigned int)arg3 customVersion:(id)arg4;
- (id)getUpdateMangerStateStr:(unsigned long long)arg1;
- (id)pagesStatusDescription;
- (unsigned int)contentProcessTerminatedPagesCount;
- (unsigned int)manuallyTerminatedPagesCount;
- (unsigned int)healthyPagesCount;
- (unsigned int)allPagesCount;
- (unsigned int)stackPagesCount;
- (id)backgroundPages;
- (id)foregroundPage;
- (BOOL)isTaskUsePreload;
- (BOOL)taskUseLazyLoad;
- (BOOL)isLoadingTaskForSilentOpen;
- (BOOL)webview:(id)arg1 isModuleLoaded:(id)arg2;
- (BOOL)isNativeWeApp;
- (BOOL)isSilentOpen;
- (BOOL)hasWebViewId:(unsigned long long)arg1;
- (void)restartAppTaskWithMode:(unsigned long long)arg1 pagePath:(id)arg2 referrerInfo:(id)arg3 scene:(unsigned int)arg4 sceneNote:(id)arg5;
- (unsigned long long)templateNavShowTypeInSheetMode;
- (BOOL)shouldShowTemplateNav;
- (BOOL)isSilentOpenOnlyService;
- (unsigned long long)silentOpenType;
- (void)mm_traitCollectionDidChange:(id)arg1;
- (long long)getRunDuration;
- (double)statusBarHeightInCurrentLaunchMode;
- (double)navigationbarHeightInCurrentLaunchMode;
- (void)onMenuTranslate;
- (void)onMenuTranslateDoing;
- (void)onMenuMore;
- (void)onMenuExit:(long long)arg1;
- (void)onMenuDisappear;
- (void)cancelAllTaskLoaderIfHaveWithMessage:(id)arg1;
- (void)onMenuLongPressMore;
- (void)onMenuLongPressExit;
- (void)notifyShareMenuShowStateForWebView:(id)arg1;
- (void)onMenuExpandToFullScreen;
- (void)onCapsuleViewMutationChange:(unsigned long long)arg1;
- (void)reportCapsuleMutationEventWhenClick;
- (void)reportCapsuleMutationAction:(long long)arg1 type:(long long)arg2;
- (void)updateCapsuleMenuHiddenForViewController:(id)arg1;
- (BOOL)capsuleMenuShouldHideForViewController:(id)arg1;
- (void)updateCapsuleMenuFrameForViewController:(id)arg1;
- (void)updateCapsuleMenuStyleForViewController:(id)arg1;
- (void)updateCapsuleMenuForViewController:(id)arg1;
- (void)updateSystemCoverViewForViewController:(id)arg1 fromWillShow:(BOOL)arg2;
- (void)updateSystemCoverViewHiddenForViewController:(id)arg1 fromWillShow:(BOOL)arg2;
- (BOOL)systemCoverViewShouldHideForViewController:(id)arg1;
- (void)navigationController:(id)arg1 willShowViewController:(id)arg2 animated:(BOOL)arg3;
- (void)navigationController:(id)arg1 didShowViewController:(id)arg2 animated:(BOOL)arg3;
- (BOOL)navigationControllerShouldForceLightMode:(id)arg1;
- (BOOL)navigationController:(id)arg1 shouldUsePresentWhenPushViewController:(id)arg2 animated:(BOOL)arg3 scene:(unsigned long long)arg4;
- (void)navigationController:(id)arg1 navigationViewWillAppear:(BOOL)arg2;
- (void)navigationController:(id)arg1 navigationViewDidAppear:(BOOL)arg2;
- (void)navigationController:(id)arg1 navigationViewWillDisappear:(BOOL)arg2;
- (void)navigationController:(id)arg1 navigationViewDidDisappear:(BOOL)arg2;
- (CGSize)navigationControllerPreferredSize:(id)arg1;
- (void)navigationControllerViewDidLayout:(id)arg1;
- (void)callNavigationViewDidAppearQueue;
- (id)ipadCompatibleModeBottomViewBackgroundColorForNavigationController:(id)arg1;
- (CGRect)getCapsuleMenuOriginalFrameRelativeToView:(id)arg1;
- (id)getCapsuleMenu;
- (double)webViewCapsuleMenuWidth;
- (double)webViewCapsuleMenuHeight;
- (id)getSystemCoverView;
- (unsigned long long)permissionToShowShareWework;
- (unsigned long long)permissionToShowShareToFriend;
- (unsigned long long)permissionToShowCopyMpLink;
- (id)getNativeInputAccessoryView;
- (void)onTaskVersionFallBackTickWithUsername:(id)arg1 appid:(id)arg2 reason:(unsigned long long)arg3;
- (void)onBeginQuickReplyMsg;
- (void)onFinishQuickReplyMsg;
- (int)wmpfHostScene;
- (void)markGCStatsStart;
- (void)markGCStatsEnd;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)publicResLogic;
- (void)setPublicResLogic:(id)arg1;
- (id)weakNavigationController;
- (id)backgroundVisualEffectView;
- (void)setBackgroundVisualEffectView:(id)arg1;
- (unsigned int)timeEnterBackground;
- (void)setTimeEnterBackground:(unsigned int)arg1;
- (BOOL)backgroundMusic;
- (void)setBackgroundMusic:(BOOL)arg1;
- (unsigned int)launchScene;
- (void)setLaunchScene:(unsigned int)arg1;
- (unsigned int)enterScene;
- (unsigned int)originScene;
- (void)setOriginScene:(unsigned int)arg1;
- (unsigned long long)matrixUserType;
- (void)setMatrixUserType:(unsigned long long)arg1;
- (id)taskExtInfo;
- (void)setTaskExtInfo:(id)arg1;
- (id)taskOpenInfo;
- (void)setTaskOpenInfo:(id)arg1;
- (id)appService;
- (id)skylineRuntime;
- (void)setSkylineRuntime:(id)arg1;
- (double)openTaskTime;
- (void)setOpenTaskTime:(double)arg1;
- (id)instanceId;
- (void)setInstanceId:(id)arg1;
- (unsigned long long)appLaunchTimeInMs;
- (void)setAppLaunchTimeInMs:(unsigned long long)arg1;
- (unsigned long long)beginInitServiceTimeInMs;
- (void)setBeginInitServiceTimeInMs:(unsigned long long)arg1;
- (BOOL)firstRenderCompleted;
- (BOOL)firstRenderFullCompleted;
- (id)appTransitionController;
- (void)setAppTransitionController:(id)arg1;
- (BOOL)shouldRoute13542To27220;
- (void)setShouldRoute13542To27220:(BOOL)arg1;
- (unsigned long long)currentMemoryLevel;
- (void)setCurrentMemoryLevel:(unsigned long long)arg1;
- (unsigned int)preloadType;
- (void)setPreloadType:(unsigned int)arg1;
- (BOOL)versionFallbackDying;
- (void)setVersionFallbackDying:(BOOL)arg1;
- (double)screenBrightnessRecordByLaunch;
- (void)setScreenBrightnessRecordByLaunch:(double)arg1;
- (BOOL)screenBrightnessBeenSetByJsApi;
- (void)setScreenBrightnessBeenSetByJsApi:(BOOL)arg1;
- (double)screenBrightnessRecordByJsApi;
- (void)setScreenBrightnessRecordByJsApi:(double)arg1;
- (BOOL)didAppearInForeground;
- (void)setDidAppearInForeground:(BOOL)arg1;
- (BOOL)embedModeExpanded;
- (void)setEmbedModeExpanded:(BOOL)arg1;
- (BOOL)embedModeExpanding;
- (void)setEmbedModeExpanding:(BOOL)arg1;
- (id)needAcceptPrivacyAuthScopeList;
- (void)setNeedAcceptPrivacyAuthScopeList:(id)arg1;
- (id)needAcceptPrivacyPipelineList;
- (void)setNeedAcceptPrivacyPipelineList:(id)arg1;
- (id)needAcceptPrivacyJsApiList;
- (void)setNeedAcceptPrivacyJsApiList:(id)arg1;
- (unsigned int)gcTimes;
- (void)setGcTimes:(unsigned int)arg1;
- (unsigned int)gcDuration;
- (void)setGcDuration:(unsigned int)arg1;
- (id /* block */)waitSplashAdCompleteHandler;
- (void)setWaitSplashAdCompleteHandler:(id /* block */)arg1;
- (id)rewriteQRCodeIdentifyCtrl;
- (void)setRewriteQRCodeIdentifyCtrl:(id)arg1;
- (id)cachedPerformanceMetric;
- (void)setCachedPerformanceMetric:(id)arg1;
- (BOOL)bgAudioMode;
- (void)setBgAudioMode:(BOOL)arg1;
- (BOOL)bgVoipMode;
- (void)setBgVoipMode:(BOOL)arg1;
- (id)lastOpenParameter;
- (void)setLastOpenParameter:(id)arg1;
- (void)setCustomUIWidgetDic:(id)arg1;
- (id)embedModeBackgroundView;
- (void)setEmbedModeBackgroundView:(id)arg1;
- (id)embedModeBackgroundBlurView;
- (void)setEmbedModeBackgroundBlurView:(id)arg1;
- (id)presentedSheetWeAppTaskAppId;
- (void)setPresentedSheetWeAppTaskAppId:(id)arg1;
- (id)tempRemainPresentedSheetWeAppTaskAppIdWhenCapsuleExit;
- (void)setTempRemainPresentedSheetWeAppTaskAppIdWhenCapsuleExit:(id)arg1;
- (BOOL)launchActionShouldUpdateInBackground;
- (void)setLaunchActionShouldUpdateInBackground:(BOOL)arg1;
- (BOOL)updateReadyAfterContactUpdated;
- (void)setUpdateReadyAfterContactUpdated:(BOOL)arg1;
- (BOOL)updateInBackgroundTipsShowing;
- (void)setUpdateInBackgroundTipsShowing:(BOOL)arg1;
- (id)coldLaunchPreFetchCGILogic;
- (void)setColdLaunchPreFetchCGILogic:(id)arg1;
- (void)setDicLoadedPlugin:(id)arg1;
- (unsigned int)wxDataMaxDataSizeInKB;
- (void)setWxDataMaxDataSizeInKB:(unsigned int)arg1;
- (unsigned int)networkStatusType;
- (BOOL)clientNetworkInWeakNet;
- (BOOL)weappCronetNetworkInWeakNet;
- (BOOL)serverModeToggled;
- (void)setServiceRouteCgiMap:(id)arg1;
- (id)lifeCycleRecord;
- (void)setLifeCycleRecord:(id)arg1;
- (unsigned int)serviceCheckAliveFailedCount;
- (void)setServiceCheckAliveFailedCount:(unsigned int)arg1;
- (BOOL)reportedServiceCheckAliveFailed;
- (void)setReportedServiceCheckAliveFailed:(BOOL)arg1;
- (BOOL)reportedServiceCheckAliveFailedThenAlive;
- (void)setReportedServiceCheckAliveFailedThenAlive:(BOOL)arg1;
- (unsigned long long)serviceLastAliveTimeStampInMs;
- (void)setServiceLastAliveTimeStampInMs:(unsigned long long)arg1;
- (unsigned long long)serviceLastAliveFailedTimeStampInMs;
- (void)setServiceLastAliveFailedTimeStampInMs:(unsigned long long)arg1;
- (BOOL)isSplashADFinished;
- (void)setIsSplashADFinished:(BOOL)arg1;
- (id)actionAfterSplashAD;
- (void)setActionAfterSplashAD:(id)arg1;
- (BOOL)hasBeenFullLaunched;
- (void)setHasBeenFullLaunched:(BOOL)arg1;
- (id)downloadedPluginAppid;
- (void)setDownloadedPluginAppid:(id)arg1;
- (id)afterLaunchHandler;
- (void)setAfterLaunchHandler:(id)arg1;
- (id)dicJSEventListened;
- (void)setDicJSEventListened:(id)arg1;
- (id)childPageAppLoader;
- (void)setChildPageAppLoader:(id)arg1;
- (id)forceReloadAppLoader;
- (void)setForceReloadAppLoader:(id)arg1;
- (id)relaunchAppLoader;
- (void)setRelaunchAppLoader:(id)arg1;
- (id)arrAppServiceCacheEventData;
- (void)setArrAppServiceCacheEventData:(id)arg1;
- (unsigned int)lastSceneWithout1038;
- (id)popOverLogic;
- (void)setPopOverLogic:(id)arg1;
- (id)popOverView;
- (void)setPopOverView:(id)arg1;
- (id)weakPresentingNavigationController;
- (void)setWeakPresentingNavigationController:(id)arg1;
- (id)arrStackInstances;
- (void)setArrStackInstances:(id)arg1;
- (id)fullLaunchOpenParameter;
- (void)setFullLaunchOpenParameter:(id)arg1;
- (id)fullLaunchTaskExtInfo;
- (void)setFullLaunchTaskExtInfo:(id)arg1;
- (id)fullLaunchHandlerWrapper;
- (void)setFullLaunchHandlerWrapper:(id)arg1;
- (id)appLoader;
- (void)setAppLoader:(id)arg1;
- (id)handlerWrapper;
- (void)setHandlerWrapper:(id)arg1;
- (id)permissionHandler;
- (void)setPermissionHandler:(id)arg1;
- (id)enterBackgroundContext;
- (void)setEnterBackgroundContext:(id)arg1;
- (id)pageMgr;
- (void)setPageMgr:(id)arg1;
- (BOOL)viewEmbeddedModeRotating;
- (void)setViewEmbeddedModeRotating:(BOOL)arg1;
- (BOOL)isSkylineValid;
- (void)setIsSkylineValid:(BOOL)arg1;
- (BOOL)isSkylineDefault;
- (void)setIsSkylineDefault:(BOOL)arg1;
- (BOOL)canSwitchRender;
- (void)setCanSwitchRender:(BOOL)arg1;
- (id)launchVcCondition;
- (void)setLaunchVcCondition:(id)arg1;
- (BOOL)launchVcInited;
- (void)setLaunchVcInited:(BOOL)arg1;
- (BOOL)opConfigSkylinePathAll;
- (void)setOpConfigSkylinePathAll:(BOOL)arg1;
- (id)opConfigSkylinePathSet;
- (void)setOpConfigSkylinePathSet:(id)arg1;
- (BOOL)isIgnoreOpConfigAtLeastOnePage;
- (void)setIsIgnoreOpConfigAtLeastOnePage:(BOOL)arg1;
- (BOOL)hasCalculateIgnoreOpConfigAtLeastOnePage;
- (void)setHasCalculateIgnoreOpConfigAtLeastOnePage:(BOOL)arg1;
- (id)bizDataPipeHandlerDic;
- (void)setBizDataPipeHandlerDic:(id)arg1;
- (void).cxx_destruct;
- (id).cxx_construct;
@end

