@interface MMLiteAppMgr : MMUserService <MMKernelExt, INewSyncExt, IMsgExt, IMMFontMgrExt, MMPageSheetAdapterDelegate, UIGestureRecognizerDelegate, MMLiteAppDownloadMgrDelegate, WxaRouterFlutterEngineDelegate, MMPageSheetGestureRecognizerDelegate, INetworkStatusMgrExt, MMServiceProtocol>
{
    NSMutableDictionary * _configKV; // +0x8
    NSMutableDictionary * _startReports; // +0x10
    NSMutableDictionary * _checkFromDic; // +0x18
    NSMutableDictionary * _checkStartTimeDic; // +0x20
    NSMutableDictionary * _checkDownloadItemDic; // +0x28
    NSMutableDictionary * _createLiteAppCallbacks; // +0x30
    NSMutableDictionary * _createLiteAppstoreInfos; // +0x38
    NSMutableDictionary * _getOfflineResourceCallbacks; // +0x40
    NSMutableDictionary * _customLiteAppViewControllerClassDic; // +0x48
    NSMutableDictionary * _preloadTimers; // +0x50
    NSMutableDictionary * _scheduleTimers; // +0x58
    NSMutableDictionary * _preloadedAppId; // +0x60
    NSMutableDictionary * _sessionIdList; // +0x68
    NSMutableDictionary * _audioBindings; // +0x70
    NSMutableDictionary * _cameras; // +0x78
    NSMutableSet * _liteAppUDRCheckList; // +0x80
    NSMutableDictionary * _openLiteAppList; // +0x88
    NSMutableDictionary * _containGlobalPkgs; // +0x90
    NSMutableDictionary * _downloadItemWithError; // +0x98
    NSMutableDictionary * _batchCheckLiteAppBlockDic; // +0xa0
    MMLiteAppDeeplinkHandler * _deeplinkHandler; // +0xa8
    BOOL _isGestureEnable; // +0xb0
    BOOL _isExecutingLiteAppCode; // +0xb1
    BOOL _isAllowCreateLiteApp; // +0xb2
    BOOL _payLiteAppCanRetry; // +0xb3
    BOOL _payLiteAppUseBackUp; // +0xb4
    BOOL _emoticnStoreCreated; // +0xb5
    BOOL _isWeakNet; // +0xb6
    unsigned int _currentRTT; // +0xb8
    NSMutableDictionary * _configCGI; // +0xc0
    WxaRouterConfig * _config; // +0xc8
    MMLiteAppDownloadMgr * _downloadMgr; // +0xd0
    NSString * _currentAppId; // +0xd8
    NSMutableArray * _halfScreenStatusStack; // +0xe0
    MMLiteAppInfoItem * _lastOpenLiteAppInfo; // +0xe8
    NSMutableDictionary * _payLiteAppResourceCgiDic; // +0xf0
    NSMutableDictionary * _payLiteAppResourceBatchCgiDic; // +0xf8
    NSMutableDictionary * _checkIlinkReporterDic; // +0x100
    NSMutableDictionary * _periodCheckReporterDic; // +0x108
    NSMutableDictionary * _checkPayDevopsReporterDic; // +0x110
    NSMutableDictionary * _batchCheckPayDevopsReporterDic; // +0x118
    NSMutableDictionary * _createGameLiteAppReporterDic; // +0x120
    NSMutableDictionary * _checkLiteAppBlockDic; // +0x128
    NSMutableDictionary * _bundleLiteApps; // +0x130
    NSMutableDictionary * _cacheInfos; // +0x138
    NSPointerArray * _gameHalfScreenViews; // +0x140
    MMLiteAppDownloadItem * _payDownloadItem; // +0x148
    UINavigationController * _imagePickerNavigator; // +0x150
}
+ (id)makeLiteAppDownloadFilePath:(id)arg1;
+ (unsigned long long)preGetLiteAppImageCacheSize;
+ (unsigned long long)cleanLiteAppImageCacheSize;
+ (unsigned long long)preGetLiteAppPackageSize;
+ (unsigned long long)cleanLiteAppPackage;
+ (id)requiredFilePathList;
- (void)prepareLiteApp:(BOOL)arg1;
- (void)releasePrepareLiteApp;
- (id)getSessionIdListByAppId:(id)arg1;
- (BOOL)preloadLiteApp:(id)arg1 onlyPreLoadBaseLib:(BOOL)arg2;
- (void)releaseAllPreloadInfo:(BOOL)arg1;
- (id)clearPreloadLiteApp:(id)arg1 page:(id)arg2;
- (void)releasePreloadLiteApp:(id)arg1 page:(id)arg2;
- (void)clearPreloadOnUpdate:(id)arg1;
- (void)clearMemoryCache;
- (void)onServiceClearMemoryCache:(unsigned long long)arg1 addedUserType:(unsigned long long)arg2;
- (void)onServiceClearMemoryCacheInBackground;
- (void)startPreloadTimer:(id)arg1 page:(id)arg2;
- (void)stopPreloadTimer:(id)arg1 page:(id)arg2;
- (void)createViewControllerTimeout:(id)arg1 sync:(BOOL)arg2 callback:(id /* block */)arg3 info:(id)arg4 reporter:(id)arg5;
- (BOOL)hasKeepAlive:(id)arg1;
- (void)releaseKeepAlive:(id)arg1;
- (void)releaseKeepAlive:(id)arg1 page:(id)arg2 query:(id)arg3 group:(long long)arg4;
- (int)getCacheTimeSeconds:(long long)arg1 originSeconds:(int)arg2;
- (int)getCacheCountLimit:(long long)arg1;
- (id)getCacheInfo:(id)arg1;
- (void)addCacheInfo:(id)arg1;
- (void)removeCacheInfo:(id)arg1;
- (id)createLiteApp:(id)arg1 path:(id)arg2 signatureKey:(id)arg3 reporter:(id)arg4;
- (void)startKeepAlive:(id)arg1 vc:(id)arg2 openInfo:(id)arg3;
- (void)keepAlive:(id)arg1 openInfo:(id)arg2;
- (void)asyncCreateLiteApp:(id)arg1 callbackBlock:(id /* block */)arg2;
- (void)asyncCreateLiteApp:(id)arg1 viewCallbackBlock:(id /* block */)arg2;
- (void)asyncCreateGameLiteApp:(id)arg1 pkgId:(id)arg2 storeData:(id)arg3 preloadImgUrls:(id)arg4 callbackBlock:(id /* block */)arg5;
- (Class)fetchLiteAppViewControllerClass:(id)arg1;
- (id)createLiteAppViewController:(id)arg1 localFilePath:(id)arg2 signatureKey:(id)arg3 reporter:(id)arg4;
- (id)createLiteAppViewController:(id)arg1 localFilePath:(id)arg2 signatureKey:(id)arg3;
- (id)createLiteAppViewHalfScreen:(id)arg1 localFilePath:(id)arg2 signatureKey:(id)arg3;
- (id)createLiteAppEmbedView:(id)arg1 path:(id)arg2 signatureKey:(id)arg3;
- (id)getLiteAppStartReport:(id)arg1;
- (id)getLiteAppReporter:(id)arg1;
- (id)getLiteAppVersionInDB:(id)arg1;
- (id)getLiteAppVersion:(id)arg1;
- (BOOL)checkClientVersion:(id)arg1 scene:(long long)arg2;
- (id)internalAppIdList;
- (id)getFilePathByBothLocalId:(id)arg1 appUuid:(unsigned int)arg2 localId:(id)arg3;
- (id)generateLiteAppLocalId:(id)arg1 appUuid:(unsigned int)arg2 filePath:(id)arg3;
- (id)createLiteAppViewController:(id)arg1 localFilePath:(id)arg2 signatureKey:(id)arg3 isHalfScreen:(BOOL)arg4 reporter:(id)arg5;
- (id)createLiteAppViewHalfScreen:(id)arg1 localFilePath:(id)arg2 signatureKey:(id)arg3 reporter:(id)arg4;
- (id)newCreateLiteAppViewHalfScreen:(id)arg1 localFilePath:(id)arg2 signatureKey:(id)arg3 reporter:(id)arg4;
- (id)createLiteAppEmbedView:(id)arg1 path:(id)arg2 signatureKey:(id)arg3 reporter:(id)arg4;
- (id)createLiteAppView;
- (id)createLiteAppView:(id)arg1;
- (void)startLiteAppView:(id)arg1 openInfo:(id)arg2 callbackBlock:(id /* block */)arg3;
- (id)getViewController:(unsigned int)arg1;
- (id)getStore:(id)arg1;
- (id)halfScreenStatusStackTop;
- (id)halfScreeStatusOf:(id)arg1;
- (void)showLiteAppHalfScreenWithAnimated:(BOOL)arg1;
- (void)showLiteAppHalfScreenByWindowWithAnimated:(BOOL)arg1;
- (void)showLiteAppHalfScreenIn:(id)arg1 animated:(BOOL)arg2;
- (void)updateLiteAppHalfScreenHeight:(double)arg1 animated:(BOOL)arg2;
- (void)dismissLiteAppHalfScreenWithAnimated:(BOOL)arg1;
- (void)dismissLiteAppHalfScreenWithAppUuid:(unsigned int)arg1 animated:(BOOL)arg2;
- (void)dismissLiteAppHalfScreenOnlyLiteAppWithAppUuid:(unsigned int)arg1;
- (void)dismissClosedLiteAppHalfScreenWithAnimated:(BOOL)arg1;
- (void)dismissClosedLiteAppHalfScreenWithAdapter:(id)arg1;
- (void)pushLiteAppHalfScreenFromSheet:(id)arg1 animated:(BOOL)arg2;
- (id)getLiteAppHalfScreenConfig;
- (id)getLiteAppHalfScreenAdapter;
- (void)ensureLiteAppHalfScreenDealloc;
- (void)ensureLiteAppHalfScreenDeallocWithAdapter:(id)arg1;
- (void)pageSheetWillClose:(id)arg1 isManualTrigger:(BOOL)arg2;
- (void)pageSheetDidClose:(id)arg1 isManualTrigger:(BOOL)arg2;
- (void)pageSheetPresentAnimateWillBegin:(id)arg1;
- (void)pageSheetPresentAnimateDidEnd:(id)arg1;
- (void)pageSheetDidChangeVisibleHeight:(id)arg1 toHeight:(double)arg2;
- (BOOL)gestureRecognizerShouldBegin:(id)arg1;
- (BOOL)isGlobalLiteAppEnable;
- (BOOL)isLiteAppCanOpen:(id)arg1 checkCrash:(BOOL)arg2;
- (id)checkAndGetAppInfo:(id)arg1 checkCrash:(BOOL)arg2 forOpen:(BOOL)arg3;
- (BOOL)canDownloadLiteApp:(id)arg1;
- (BOOL)getLiteAppSwitch:(id)arg1;
- (BOOL)isLiteAppSwitchOn:(id)arg1;
- (BOOL)isLiteAppSwitchOn:(id)arg1 forOpen:(BOOL)arg2;
- (void)updateOpenLiteAppANR;
- (BOOL)isOpenLiteAppANR;
- (id)getAuthUrl:(id)arg1 path:(id)arg2 signatureKey:(id)arg3 preAuth:(BOOL)arg4;
- (id)getAuthUrl:(id)arg1;
- (id)getLiteAppLatestBaseLibInfo;
- (id)getLiteAppInfoItemByAppId:(id)arg1 forOpen:(BOOL)arg2;
- (void)initLiteAppUDRCheckList;
- (id)getUDRCheckLiteAppList;
- (void)addUDRCheckLiteApp:(id)arg1;
- (void)onCallBackStartPeriodAsync:(id)arg1;
- (void)onCallBackCheckSuccessAsync:(id)arg1 name:(id)arg2 version:(int)arg3 scene:(int)arg4;
- (void)onCallBackSuccessAsync:(id)arg1 name:(id)arg2 version:(int)arg3 scene:(int)arg4;
- (void)onCallBackFailAsync:(int)arg1 errCode:(int)arg2 projectId:(id)arg3 name:(id)arg4 version:(int)arg5 scene:(int)arg6;
- (void)postProcessFromUDRCheck:(id)arg1;
- (void)startCheckUpdate;
- (void)startClearPackage;
- (void)startSchedule:(long long)arg1;
- (void)checkSchedule;
- (void)checkLiteApp:(id)arg1 block:(id /* block */)arg2;
- (void)batchCheckUdrLiteAppIgnoreFail:(id)arg1 block:(id /* block */)arg2;
- (void)checkLiteApp:(id)arg1 updateInterval:(long long)arg2;
- (BOOL)isNeedCheck:(id)arg1;
- (void)checkLiteApp:(id)arg1 updateInterval:(long long)arg2 ignoreSwitch:(BOOL)arg3 from:(unsigned long long)arg4 reporter:(id)arg5;
- (void)createEmoticonPersistentStore;
- (id)preparedRouter;
- (void)loadBaseLib;
- (void)releaseBaseLib;
- (BOOL)isPopGestureEnable;
- (void)handleUniversalLiteAppRequest:(id)arg1 isSyncCheck:(BOOL)arg2 scene:(long long)arg3;
- (void)onDevQrCodeScaned:(id)arg1 scene:(long long)arg2;
- (void)updateLiteApp:(id)arg1;
- (void)onServiceInit;
- (void)onceInit;
- (void)onServiceEnterForeground;
- (void)onServiceEnterBackground;
- (void)onServiceTerminate;
- (void)onServiceClearData;
- (void)onAuthOK;
- (void)onNewSyncIPXX:(id)arg1;
- (BOOL)CheckGlobalMsgScene:(id)arg1;
- (BOOL)CheckGlobalMsgDevice:(id)arg1;
- (void)ParseGlobalMsg:(id)arg1;
- (void)OnGetNewXmlMsg:(id)arg1 Type:(id)arg2 MsgWrap:(id)arg3;
- (void)processPayMsg:(id)arg1 sysMsgNode:(XmlReaderNode_t *)arg2;
- (void)onAuthOKWithPlistVesionChangeFrom:(unsigned int)arg1 to:(unsigned int)arg2;
- (id)copyBundleBaseLib:(id)arg1;
- (id)getBundleLiteAppVersion:(id)arg1;
- (id)copyBundlePackage:(id)arg1 reporter:(id)arg2;
- (void)onFontSizeChange;
- (id)resolveRendererType:(id)arg1 localFilePath:(id)arg2;
- (id)createWebRenderViewController:(id)arg1 localFilePath:(id)arg2;
- (id)createCustomRendererViewControllerIfNeeded:(id)arg1 localFilePath:(id)arg2;
- (void)startDownloadWithItem:(id)arg1 reporter:(id)arg2;
- (void)updateLiteAppTable;
- (void)checkLiteAppBaseLib:(long long)arg1 from:(unsigned long long)arg2 reporter:(id)arg3;
- (BOOL)reduplicatedRequest:(id)arg1 page:(id)arg2 query:(id)arg3;
- (void)onDownloadTaskCompletion:(id)arg1 errType:(unsigned long long)arg2 errCode:(int)arg3;
- (void)handlePayCdnPkgFailover:(id)arg1 openInfo:(id)arg2 reporter:(id)arg3;
- (void)releaseFlutterEngine;
- (void)onLiteAppTransition:(id)arg1 orientation:(long long)arg2;
- (void)onSignalCrash;
- (void)onEnterLiteApp:(id)arg1;
- (void)onExitLiteApp:(id)arg1;
- (BOOL)isReleaseDefaultEngine;
- (void)onUpdateFinish:(id)arg1 appId:(id)arg2 from:(unsigned long long)arg3 checkUpdateFrom:(long long)arg4;
- (void)onUpdateFinish:(id)arg1 appId:(id)arg2 downloadItem:(id)arg3 from:(unsigned long long)arg4 checkUpdateFrom:(long long)arg5;
- (void)onUpdateFinish:(id)arg1 appId:(id)arg2 downloadItem:(id)arg3 from:(unsigned long long)arg4 checkUpdateFrom:(long long)arg5 forceFail:(BOOL)arg6;
- (void)onUpdateBatchCheck:(id)arg1;
- (void)onUpdateCallback:(unsigned long long)arg1 appId:(id)arg2 appInfo:(id)arg3 from:(unsigned long long)arg4 reporter:(id)arg5;
- (id)_getQueryDict:(id)arg1;
- (void)dataReporting:(id)arg1 data:(id)arg2 appId:(id)arg3;
- (void)dataReporting:(id)arg1 dictData:(id)arg2 appId:(id)arg3;
- (void)reportCheckLiteApp:(id)arg1 type:(id)arg2 isBatch:(BOOL)arg3;
- (void)reportOpenLiteApp:(id)arg1 switchClose:(BOOL)arg2 withPkg:(BOOL)arg3 type:(unsigned long long)arg4 time:(unsigned long long)arg5;
- (void)reportUpdateTime:(id)arg1 appId:(id)arg2 costTime:(unsigned long long)arg3 downloadItem:(id)arg4 from:(unsigned long long)arg5;
- (void)runOnMainThread:(id /* block */)arg1;
- (void)createStore:(id)arg1 aliveSeconds:(int)arg2 waitDownload:(BOOL)arg3 callbackBlock:(id /* block */)arg4;
- (void)createStore:(id)arg1 aliveSeconds:(int)arg2 pkgPath:(id)arg3;
- (void)releaseStore:(id)arg1;
- (BOOL)storeIsAlive:(id)arg1;
- (int)dispatchStore:(id)arg1 actionName:(id)arg2 json:(id)arg3;
- (int)dispatchStore:(id)arg1 actionName:(id)arg2 obj:(id)arg3;
- (int)subscribeStore:(id)arg1 pointers:(id)arg2;
- (int)unsubscribeStore:(id)arg1 pointers:(id)arg2;
- (void)onStoreSendResult:(id)arg1 callbackId:(int)arg2 resultType:(id)arg3 result:(id)arg4;
- (void)onStoreSetData:(id)arg1 changes:(id)arg2;
- (id)generateEntryPointArgs;
- (void)preloadData:(id)arg1 urls:(id)arg2 preloadImages:(id)arg3;
- (id)getFormatPath:(id)arg1;
- (id)getSavePath:(id)arg1;
- (BOOL)preloadVideo:(id)arg1 ratio:(int)arg2;
- (void)registerGetOfflineResourceExt:(id)arg1 target:(id)arg2;
- (void)unregisterGetOfflineResourceExt:(id)arg1 target:(id)arg2;
- (id)getOfflineResource:(id)arg1 tag:(id)arg2 url:(id)arg3;
- (void)registerCustomLiteAppViewControllerClass:(id)arg1 withClass:(Class)arg2;
- (void)addGlobalStore:(id)arg1 clz:(Class)arg2;
- (void)addGlobalStore:(id)arg1 store:(id)arg2;
- (void)removeGlobalStore:(id)arg1;
- (void)publishGlobalEventToAll:(id)arg1 params:(id)arg2;
- (void)publishGlobalEventToAll:(id)arg1 event:(id)arg2 params:(id)arg3;
- (void)publishGlobalEvent:(unsigned int)arg1 pageId:(unsigned long long)arg2 event:(id)arg3 params:(id)arg4;
- (void)publishGlobalEventToTopPage:(unsigned int)arg1 event:(id)arg2 params:(id)arg3;
- (void)publishEventToTopPage:(unsigned int)arg1 nodeId:(int)arg2 event:(id)arg3 params:(id)arg4;
- (void)innerPublishEventToTopPage:(unsigned int)arg1 nodeId:(int)arg2 event:(id)arg3 params:(id)arg4;
- (void)publishEventToNode:(unsigned int)arg1 pageId:(unsigned long long)arg2 nodeId:(int)arg3 event:(id)arg4 params:(id)arg5;
- (void)publishOverlayEvent:(unsigned int)arg1 pageId:(unsigned long long)arg2 source:(id)arg3 type:(id)arg4;
- (id)getResourcePath:(id)arg1 uuid:(unsigned int)arg2 pageId:(unsigned long long)arg3 ids:(id)arg4;
- (void)triggerLiteAppEvent:(id)arg1 targetAppId:(id)arg2 conditions:(id)arg3 eventInfos:(id)arg4;
- (void)triggerLiteAppEventByEventName:(id)arg1 conditions:(id)arg2 eventInfos:(id)arg3;
- (void)onCheckFinish:(id)arg1 checkUpdateResult:(long long)arg2 errorCode:(unsigned long long)arg3 errorNo:(unsigned long long)arg4 checkUpdateFrom:(long long)arg5 downloadFrom:(unsigned long long)arg6 reporter:(id)arg7;
- (BOOL)preCheckPayLiteAppInfo:(id)arg1 callbackBlock:(id /* block */)arg2 reporter:(id)arg3;
- (void)startPayLiteApp:(id)arg1 callbackBlock:(id /* block */)arg2 reporter:(id)arg3;
- (void)checkAndOpenPayLiteApp:(id)arg1 appInfo:(id)arg2 callbackBlock:(id /* block */)arg3 reporter:(id)arg4;
- (void)checkPayLiteApp:(id)arg1 appInfo:(id)arg2 from:(unsigned long long)arg3 reporter:(id)arg4;
- (void)doPayLiteAppCheck:(id)arg1 resourceName:(id)arg2 localResources:(id)arg3 reporter:(id)arg4;
- (void)batchCheckPayLiteApp:(id)arg1 from:(unsigned long long)arg2;
- (void)doPayLiteAppBatchCheck:(id)arg1 pkgList:(id)arg2;
- (void)onPayCheckSuccess:(id)arg1 resourceList:(id)arg2 reporter:(id)arg3;
- (void)onPayCheckSuccess:(id)arg1 resourceList:(id)arg2 reporter:(id)arg3 isPushResource:(BOOL)arg4;
- (void)onPayLiteCheckFailed:(id)arg1 errorCode:(long long)arg2 errorMsg:(id)arg3 reporter:(id)arg4;
- (id)generateAAD:(id)arg1;
- (void)decryptFileWithSm4Gcm:(id)arg1 metaData:(id)arg2 error:(id)arg3;
- (BOOL)isPayLiteAppId:(id)arg1;
- (BOOL)refuseWxpayKitAppId:(id)arg1 action:(id)arg2;
- (id)getTopViewController;
- (BOOL)shouldShowDownloadLoading:(id)arg1 topViewController:(id)arg2;
- (id)provideFlutterEngineWithEntrypoint:(id)arg1 libraryURI:(id)arg2 initialRoute:(id)arg3 entrypointArgs:(id)arg4;
- (void)setLocaleDelegateWithEngine:(id)arg1;
- (void)updateCheckUpdateTimeStamp:(id)arg1;
- (id)getCheckUpdateFromText:(long long)arg1;
- (long long)getCheckUpdateFromByAppId:(id)arg1;
- (id)getReporter:(id)arg1 checkUpdateFrom:(long long)arg2 needRemove:(BOOL)arg3;
- (BOOL)hasCheckingReporter:(id)arg1;
- (void)onInitAudioBinding:(id)arg1 appUuid:(unsigned int)arg2 binding:(id)arg3;
- (void)onPreReleaseLiteApp:(id)arg1 appUuid:(unsigned int)arg2 sessionId:(id)arg3 inJSThread:(BOOL)arg4;
- (void)initJSContext:(unsigned long long)arg1 dirPath:(id)arg2;
- (void)setJsApiViewController:(id)arg1 forAppId:(id)arg2;
- (void)removeJsApiViewControllerForAppId:(id)arg1;
- (void)setScheduleWakeUp:(id)arg1 interval:(int)arg2 repeat:(int)arg3 actionName:(id)arg4 payload:(id)arg5 forceDispatch:(BOOL)arg6 aliveDurationSeconds:(int)arg7;
- (void)clearScheduleWakeUp:(id)arg1;
- (id)getScheduleWakeUpInfo:(id)arg1;
- (void)runSchedule:(id)arg1 scheduleData:(id)arg2;
- (void)reportRunSchedule:(id)arg1 scheduleData:(id)arg2;
- (void)pushHalfScreenView:(id)arg1;
- (void)popHalfScreenView:(id)arg1;
- (void)dragHalfScreenView:(id)arg1 isStart:(BOOL)arg2 isDragDone:(BOOL)arg3 isHide:(BOOL)arg4;
- (id)getRealGameAppId:(id)arg1;
- (id)createCameraComponent:(id)arg1 appUuid:(unsigned long long)arg2 pageId:(unsigned long long)arg3 isDestroyed:(BOOL)arg4 contentView:(id)arg5 arguments:(id)arg6;
- (id)callCameraMethod:(unsigned long long)arg1 pageId:(unsigned long long)arg2 method:(id)arg3 param:(id)arg4 complete:(id /* block */)arg5;
- (id)checkGlobalPkgAndVersion:(id)arg1 infoArray:(id)arg2;
- (void)onGlobalPkgFinish:(id)arg1 errorCode:(unsigned long long)arg2;
- (void)checkIsGlobalPkg:(id)arg1;
- (BOOL)isLocalId:(id)arg1;
- (BOOL)pageSheetGestureRecognizerShouldBegin:(id)arg1;
- (void)onNetworkStatusChange:(unsigned int)arg1;
- (void)onNetworkWeakChanged:(BOOL)arg1 currentRTT:(unsigned int)arg2;
- (void)ReachabilityChange:(unsigned int)arg1;
- (id)getNetworkInfoObj:(BOOL)arg1;
- (id)getNetworkInfo;
- (void)publishNetworkInfoChangeEvent;
- (id)deeplinkHandler;
- (void)addLiteAppDeeplinkDelegate:(id)arg1;
- (void)handleLiteAppURL:(id)arg1;
- (BOOL)isLiteAppDeeplinkURL:(id)arg1;
- (id)GetInProcessAppIds;
- (BOOL)isBaseLibVersionGreater:(id)arg1;
- (id)processQuery:(id)arg1;
- (id)processQuery:(id)arg1 additionalQuery:(id)arg2;
- (void)onOpenLiteAppEvent:(id)arg1 path:(id)arg2 signatureKey:(id)arg3;
- (id)getImagePickerNavigator;
- (void)setImagePickerNavigator:(id)arg1;
- (void)setTestServiceEnable:(BOOL)arg1;
- (void)applicationDidEnterBackground:(id)arg1;
- (id)configCGI;
- (void)setConfigCGI:(id)arg1;
- (id)config;
- (void)setConfig:(id)arg1;
- (id)downloadMgr;
- (void)setDownloadMgr:(id)arg1;
- (BOOL)isGestureEnable;
- (void)setIsGestureEnable:(BOOL)arg1;
- (BOOL)isExecutingLiteAppCode;
- (void)setIsExecutingLiteAppCode:(BOOL)arg1;
- (id)currentAppId;
- (void)setCurrentAppId:(id)arg1;
- (id)halfScreenStatusStack;
- (void)setHalfScreenStatusStack:(id)arg1;
- (BOOL)isAllowCreateLiteApp;
- (void)setIsAllowCreateLiteApp:(BOOL)arg1;
- (id)lastOpenLiteAppInfo;
- (void)setLastOpenLiteAppInfo:(id)arg1;
- (id)payLiteAppResourceCgiDic;
- (void)setPayLiteAppResourceCgiDic:(id)arg1;
- (id)payLiteAppResourceBatchCgiDic;
- (void)setPayLiteAppResourceBatchCgiDic:(id)arg1;
- (id)checkIlinkReporterDic;
- (void)setCheckIlinkReporterDic:(id)arg1;
- (id)periodCheckReporterDic;
- (void)setPeriodCheckReporterDic:(id)arg1;
- (id)checkPayDevopsReporterDic;
- (void)setCheckPayDevopsReporterDic:(id)arg1;
- (id)batchCheckPayDevopsReporterDic;
- (void)setBatchCheckPayDevopsReporterDic:(id)arg1;
- (id)createGameLiteAppReporterDic;
- (void)setCreateGameLiteAppReporterDic:(id)arg1;
- (id)checkLiteAppBlockDic;
- (void)setCheckLiteAppBlockDic:(id)arg1;
- (id)bundleLiteApps;
- (void)setBundleLiteApps:(id)arg1;
- (id)cacheInfos;
- (void)setCacheInfos:(id)arg1;
- (id)gameHalfScreenViews;
- (void)setGameHalfScreenViews:(id)arg1;
- (BOOL)payLiteAppCanRetry;
- (void)setPayLiteAppCanRetry:(BOOL)arg1;
- (BOOL)payLiteAppUseBackUp;
- (void)setPayLiteAppUseBackUp:(BOOL)arg1;
- (id)payDownloadItem;
- (void)setPayDownloadItem:(id)arg1;
- (BOOL)emoticnStoreCreated;
- (void)setEmoticnStoreCreated:(BOOL)arg1;
- (BOOL)isWeakNet;
- (void)setIsWeakNet:(BOOL)arg1;
- (unsigned int)currentRTT;
- (void)setCurrentRTT:(unsigned int)arg1;
- (void)setDeeplinkHandler:(id)arg1;
- (id)imagePickerNavigator;
- (void).cxx_destruct;
@end
