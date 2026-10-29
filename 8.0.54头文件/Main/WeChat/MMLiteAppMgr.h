@interface MMLiteAppMgr : MMUserService <MMKernelExt, INewSyncExt, IMsgExt, IMMFontMgrExt, MMPageSheetAdapterDelegate, UIGestureRecognizerDelegate, MMLiteAppDownloadMgrDelegate, MMIlinkCheckResourceMgrDelegate, IUdrResourceCallback, WxaRouterFlutterEngineDelegate, MMServiceProtocol>
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
    NSMutableDictionary * _preloadedAppId; // +0x58
    NSMutableDictionary * _audioBindings; // +0x60
    NSMutableDictionary * _cameras; // +0x68
    NSMutableArray * _liteAppUDRCheckList; // +0x70
    NSMutableArray * _openLiteAppList; // +0x78
    NSMutableDictionary * _containGlobalPkgs; // +0x80
    NSMutableDictionary * _downloadItemWithError; // +0x88
    BOOL _isGestureEnable; // +0x90
    BOOL _isExecutingLiteAppCode; // +0x91
    BOOL _didPushSelfInPageSheet; // +0x92
    BOOL _isAllowCreateLiteApp; // +0x93
    NSMutableDictionary * _configCGI; // +0x98
    WxaRouterConfig * _config; // +0xa0
    MMLiteAppDownloadMgr * _downloadMgr; // +0xa8
    MMIlinkCheckResourceMgr * _resourceMgr; // +0xb0
    NSString * _currentAppId; // +0xb8
    MMPageSheetAdapter * _pageSheetAdapter; // +0xc0
    UIPanGestureRecognizer * _flutterPanGestureRecognizer; // +0xc8
    id /* block */ _halfScreenClosed; // +0xd0
    MMLiteAppInfoItem * _lastOpenLiteAppInfo; // +0xd8
    NSMutableDictionary * _payLiteAppResourceCgiDic; // +0xe0
    NSMutableDictionary * _payLiteAppResourceBatchCgiDic; // +0xe8
    NSMutableDictionary * _checkTinkerReporterDic; // +0xf0
    NSMutableDictionary * _checkIlinkReporterDic; // +0xf8
    NSMutableDictionary * _checkPayDevopsReporterDic; // +0x100
    NSMutableDictionary * _createGameLiteAppReporterDic; // +0x108
    NSMutableDictionary * _periodCheckReporterDic; // +0x110
    NSMutableDictionary * _checkWidgetLiteAppBlockDic; // +0x118
    NSMutableArray * _bundleAppIds; // +0x120
    MMLiteAppCacheInfo * _cacheInfo; // +0x128
    NSPointerArray * _gameHalfScreenViews; // +0x130
}
+ (id)makeLiteAppDownloadFilePath:(id)arg1;
+ (unsigned long long)preGetLiteAppImageCacheSize;
+ (unsigned long long)cleanLiteAppImageCacheSize;
+ (unsigned long long)preGetLiteAppPackageSize;
+ (unsigned long long)cleanLiteAppPackage;
- (void)prepareLiteApp:(BOOL)arg1;
- (void)releasePrepareLiteApp;
- (BOOL)preloadLiteApp:(id)arg1 page:(id)arg2 onlyPreLoadBaseLib:(BOOL)arg3 allowPreloadWhenOpen:(BOOL)arg4;
- (void)releasePreloadLiteApp:(id)arg1 page:(id)arg2;
- (void)clearMemoryCache;
- (void)onServiceClearMemoryCache:(unsigned long long)arg1 addedUserType:(unsigned long long)arg2;
- (void)onServiceClearMemoryCacheInBackground;
- (void)startPreloadTimer:(id)arg1 page:(id)arg2;
- (void)stopPreloadTimer:(id)arg1;
- (void)createViewControllerTimeout:(id)arg1 sync:(BOOL)arg2 callback:(id /* block */)arg3 info:(id)arg4 reporter:(id)arg5;
- (BOOL)hasKeepAlive:(id)arg1;
- (void)releaseKeepAlive:(id)arg1;
- (id)createLiteApp:(id)arg1 path:(id)arg2 signatureKey:(id)arg3 reporter:(id)arg4;
- (void)keepAlive:(id)arg1 openInfo:(id)arg2;
- (void)asyncCreateLiteApp:(id)arg1 callbackBlock:(id /* block */)arg2;
- (void)asyncCreateGameLiteApp:(id)arg1 pkgId:(id)arg2 storeData:(id)arg3 preloadImgUrls:(id)arg4 callbackBlock:(id /* block */)arg5;
- (Class)fetchLiteAppViewControllerClass:(id)arg1;
- (id)createLiteAppViewController:(id)arg1 localFilePath:(id)arg2 page:(id)arg3 query:(id)arg4 signatureKey:(id)arg5 openWithNewTab:(BOOL)arg6 reporter:(id)arg7;
- (id)createLiteAppViewController:(id)arg1 localFilePath:(id)arg2 page:(id)arg3 query:(id)arg4 referrerInfo:(id)arg5 signatureKey:(id)arg6 openWithNewTab:(BOOL)arg7 isTransparent:(BOOL)arg8 reporter:(id)arg9;
- (id)createLiteAppViewController:(id)arg1 localFilePath:(id)arg2 page:(id)arg3 query:(id)arg4 signatureKey:(id)arg5 openWithNewTab:(BOOL)arg6;
- (id)createLiteAppViewController:(id)arg1 localFilePath:(id)arg2 page:(id)arg3 query:(id)arg4 signatureKey:(id)arg5 openWithNewTab:(BOOL)arg6 isTransparent:(BOOL)arg7;
- (id)createLiteAppViewController:(id)arg1 localFilePath:(id)arg2 page:(id)arg3 query:(id)arg4 referrerInfo:(id)arg5 signatureKey:(id)arg6 openWithNewTab:(BOOL)arg7 isTransparent:(BOOL)arg8;
- (id)createLiteAppViewHalfScreen:(id)arg1 localFilePath:(id)arg2 page:(id)arg3 query:(id)arg4 referrerInfo:(id)arg5 signatureKey:(id)arg6 enableDragToClose:(BOOL)arg7 openWithNewTab:(BOOL)arg8 height:(double)arg9 isTransparent:(BOOL)arg10;
- (id)createLiteAppViewHalfScreen:(id)arg1 localFilePath:(id)arg2 page:(id)arg3 query:(id)arg4 signatureKey:(id)arg5 enableDragToClose:(BOOL)arg6 openWithNewTab:(BOOL)arg7 height:(double)arg8 isTransparent:(BOOL)arg9 whenClosed:(id /* block */)arg10;
- (id)createLiteAppViewHalfScreen:(id)arg1 localFilePath:(id)arg2 page:(id)arg3 query:(id)arg4 referrerInfo:(id)arg5 signatureKey:(id)arg6 enableDragToClose:(BOOL)arg7 openWithNewTab:(BOOL)arg8 height:(double)arg9 isTransparent:(BOOL)arg10 whenClosed:(id /* block */)arg11;
- (id)createLiteAppEmbedView:(id)arg1 path:(id)arg2 page:(id)arg3 query:(id)arg4 isTransparent:(BOOL)arg5 signatureKey:(id)arg6;
- (id)createLiteAppEmbedView:(id)arg1 path:(id)arg2 page:(id)arg3 query:(id)arg4 referrerInfo:(id)arg5 isTransparent:(BOOL)arg6 pipMode:(BOOL)arg7 sizeChangeSnapshot:(BOOL)arg8 signatureKey:(id)arg9;
- (id)getLiteAppStartReport:(id)arg1;
- (id)getLiteAppReporter:(id)arg1;
- (id)getLiteAppVersionInDB:(id)arg1;
- (id)getLiteAppVersion:(id)arg1;
- (id)getFilePathByBothLocalId:(id)arg1 appUuid:(unsigned int)arg2 localId:(id)arg3;
- (id)generateLiteAppLocalId:(id)arg1 appUuid:(unsigned int)arg2 filePath:(id)arg3;
- (id)createLiteAppViewController:(id)arg1 localFilePath:(id)arg2 page:(id)arg3 query:(id)arg4 referrerInfo:(id)arg5 signatureKey:(id)arg6 openWithNewTab:(BOOL)arg7 isHalfScreen:(BOOL)arg8 isTransparent:(BOOL)arg9 reporter:(id)arg10;
- (id)createLiteAppViewHalfScreen:(id)arg1 localFilePath:(id)arg2 page:(id)arg3 query:(id)arg4 referrerInfo:(id)arg5 signatureKey:(id)arg6 enableDragToClose:(BOOL)arg7 openWithNewTab:(BOOL)arg8 height:(double)arg9 isTransparent:(BOOL)arg10 reporter:(id)arg11;
- (id)createLiteAppViewHalfScreen:(id)arg1 localFilePath:(id)arg2 page:(id)arg3 query:(id)arg4 referrerInfo:(id)arg5 signatureKey:(id)arg6 enableDragToClose:(BOOL)arg7 openWithNewTab:(BOOL)arg8 height:(double)arg9 isTransparent:(BOOL)arg10 whenClosed:(id /* block */)arg11 reporter:(id)arg12;
- (id)createLiteAppEmbedView:(id)arg1 path:(id)arg2 page:(id)arg3 query:(id)arg4 referrerInfo:(id)arg5 isTransparent:(BOOL)arg6 pipMode:(BOOL)arg7 sizeChangeSnapshot:(BOOL)arg8 signatureKey:(id)arg9 reporter:(id)arg10;
- (id)createLiteAppView;
- (id)createLiteAppView:(id)arg1;
- (void)startLiteAppView:(id)arg1 openInfo:(id)arg2 callbackBlock:(id /* block */)arg3;
- (id)getViewController:(unsigned int)arg1;
- (id)getStore:(id)arg1;
- (void)showLiteAppHalfScreenWithAnimated:(BOOL)arg1;
- (void)showLiteAppHalfScreenIn:(id)arg1 animated:(BOOL)arg2;
- (void)updateLiteAppHalfScreenHeight:(double)arg1 animated:(BOOL)arg2;
- (void)dismissLiteAppHalfScreenWithAnimated:(BOOL)arg1;
- (void)pushLiteAppHalfScreenFromSheet:(id)arg1 animated:(BOOL)arg2;
- (id)getLiteAppHalfScreenConfig;
- (void)ensureLiteAppHalfScreenDealloc;
- (void)pageSheetDidClose:(id)arg1 isManualTrigger:(BOOL)arg2;
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
- (void)onCallBackStartPeriod:(id)arg1;
- (void)onCallBackCheckSuccess:(id)arg1 name:(id)arg2 version:(int)arg3 scene:(long long)arg4;
- (void)onCallBackSuccess:(id)arg1 name:(id)arg2 version:(int)arg3 scene:(long long)arg4;
- (void)onCallBackFail:(id)arg1 name:(id)arg2 version:(int)arg3 errNo:(int)arg4 errCode:(int)arg5 scene:(long long)arg6;
- (void)postProcessFromUDRCheck:(id)arg1;
- (void)startCheckUpdate;
- (void)startClearPackage;
- (void)checkWidgetLiteApp:(id)arg1 block:(id /* block */)arg2;
- (void)checkLiteApp:(id)arg1 updateInterval:(long long)arg2;
- (BOOL)isNeedCheck:(id)arg1;
- (void)checkLiteApp:(id)arg1 from:(unsigned long long)arg2 reporter:(id)arg3;
- (void)checkLiteAppRaven:(id)arg1 from:(unsigned long long)arg2 reporter:(id)arg3;
- (void)checkLiteApp:(id)arg1 updateInterval:(long long)arg2 ignoreSwitch:(BOOL)arg3 from:(unsigned long long)arg4 isAutoCheck:(BOOL)arg5 reporter:(id)arg6;
- (id)preparedRouter;
- (void)loadBaseLib;
- (void)releaseBaseLib;
- (BOOL)isPopGestureEnable;
- (void)onNewDevQrCodeScaned:(id)arg1;
- (void)onDevQrCodeScaned:(id)arg1;
- (void)updateLiteApp:(id)arg1;
- (void)onServiceInit;
- (void)onServiceTerminate;
- (void)onServiceClearData;
- (void)onAuthOK;
- (void)onNewSyncIPXX:(id)arg1;
- (void)OnGetNewXmlMsg:(id)arg1 Type:(id)arg2 MsgWrap:(id)arg3;
- (void)processPayMsg:(id)arg1 sysMsgNode:(XmlReaderNode_t *)arg2;
- (void)onAuthOKWithPlistVesionChangeFrom:(unsigned int)arg1 to:(unsigned int)arg2;
- (id)copyBundleBaseLib:(id)arg1;
- (BOOL)isBundleApp:(id)arg1;
- (id)copyBundlePackage:(id)arg1 reporter:(id)arg2;
- (void)onFontSizeChange;
- (void)startDownloadWithItem:(id)arg1 reporter:(id)arg2;
- (void)updateLiteAppTable;
- (void)checkLiteAppBaseLib:(long long)arg1 from:(unsigned long long)arg2 reporter:(id)arg3;
- (void)onCheckCallback:(id)arg1 appId:(id)arg2 startTime:(unsigned long long)arg3 from:(unsigned long long)arg4 reporter:(id)arg5;
- (BOOL)reduplicatedRequest:(id)arg1 page:(id)arg2 query:(id)arg3;
- (void)onDownloadTaskCompletion:(id)arg1 errType:(unsigned long long)arg2 errCode:(int)arg3;
- (void)configParameters:(void *)arg1;
- (void)onBatchCheckResource:(id)arg1 resourcesDic:(id)arg2 blockTimeDic:(id)arg3 noUpdateProjectIds:(id)arg4 errorProjectIds:(id)arg5 errorType:(unsigned long long)arg6 errorCode:(int)arg7 timeStamp:(unsigned int)arg8;
- (void)onCheckResource:(id)arg1 resources:(id)arg2 blockTime:(unsigned int)arg3 errorType:(unsigned long long)arg4 errorCode:(int)arg5 isBatch:(BOOL)arg6 timeStamp:(unsigned int)arg7;
- (void)onReceiveCheckResource:(id)arg1 resources:(id)arg2;
- (void)releaseFlutterEngine;
- (void)onLiteAppTransition:(id)arg1 orientation:(long long)arg2;
- (void)onSignalCrash;
- (void)onEnterLiteApp:(id)arg1;
- (void)onExitLiteApp:(id)arg1;
- (BOOL)isReleaseDefaultEngine;
- (void)onUpdateFinish:(id)arg1 appId:(id)arg2 from:(unsigned long long)arg3 checkUpdateFrom:(long long)arg4;
- (void)onUpdateFinish:(id)arg1 appId:(id)arg2 downloadItem:(id)arg3 from:(unsigned long long)arg4 checkUpdateFrom:(long long)arg5;
- (void)onUpdateCallback:(unsigned long long)arg1 appId:(id)arg2 appInfo:(id)arg3 from:(unsigned long long)arg4 reporter:(id)arg5;
- (id)_getQueryDict:(id)arg1;
- (void)dataReporting:(id)arg1 data:(id)arg2;
- (void)dataReporting:(id)arg1 dictData:(id)arg2;
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
- (id)getResourcePath:(unsigned int)arg1 pageId:(unsigned long long)arg2 ids:(id)arg3;
- (void)onCheckFinish:(id)arg1 checkUpdateResult:(long long)arg2 errorCode:(unsigned long long)arg3 checkUpdateFrom:(long long)arg4 downloadFrom:(unsigned long long)arg5 reporter:(id)arg6;
- (void)onBatchCheckReport:(id)arg1 updateAppIds:(id)arg2 noUpdateAppIds:(id)arg3 errorAppIds:(id)arg4 checkUpdateFrom:(long long)arg5 reporter:(id)arg6;
- (void)startPayLiteApp:(id)arg1 callbackBlock:(id /* block */)arg2 reporter:(id)arg3;
- (void)checkAndOpenPayLiteApp:(id)arg1 appInfo:(id)arg2 callbackBlock:(id /* block */)arg3 reporter:(id)arg4;
- (void)checkPayLiteApp:(id)arg1 appInfo:(id)arg2 from:(unsigned long long)arg3 reporter:(id)arg4;
- (void)doPayLiteAppCheck:(id)arg1 resourceName:(id)arg2 localResources:(id)arg3 reporter:(id)arg4;
- (void)batchCheckPayLiteApp:(id)arg1 from:(unsigned long long)arg2 reporter:(id)arg3;
- (void)doPayLiteAppBatchCheck:(id)arg1 pkgList:(id)arg2 reporter:(id)arg3;
- (void)doPayLiteAppBatchCheck:(id)arg1 pkgList:(id)arg2 reporter:(id)arg3 checkUpdateFrom:(long long)arg4;
- (void)onPayCheckSuccess:(id)arg1 resourceList:(id)arg2 reporter:(id)arg3;
- (void)onPayLiteCheckFailed:(id)arg1 errorCode:(long long)arg2 errorMsg:(id)arg3 reporter:(id)arg4;
- (id)generateAAD:(id)arg1;
- (void)decryptFileWithSm4Gcm:(id)arg1 metaData:(id)arg2 error:(id)arg3;
- (BOOL)isPayLiteAppId:(id)arg1;
- (id)getTopViewController;
- (id)provideFlutterEngineWithEntrypoint:(id)arg1 libraryURI:(id)arg2 initialRoute:(id)arg3 entrypointArgs:(id)arg4;
- (void)setLocaleDelegateWithEngine:(id)arg1;
- (void)updateCheckUpdateTimeStamp:(id)arg1;
- (id)getCheckUpdateFromText:(long long)arg1;
- (long long)getCheckUpdateFromByAppId:(id)arg1;
- (id)getReporter:(id)arg1 checkUpdateFrom:(long long)arg2 needRemove:(BOOL)arg3;
- (id)getReporter:(id)arg1;
- (void)onInitAudioBinding:(id)arg1 appUuid:(unsigned int)arg2 binding:(id)arg3;
- (void)onPreReleaseLiteApp:(id)arg1 appUuid:(unsigned int)arg2 inJSThread:(BOOL)arg3;
- (void)pushHalfScreenView:(id)arg1;
- (void)popHalfScreenView;
- (id)getRealGameAppId:(id)arg1;
- (id)createCameraComponent:(id)arg1 appUuid:(unsigned long long)arg2 pageId:(unsigned long long)arg3 isDestroyed:(BOOL)arg4 contentView:(id)arg5 arguments:(id)arg6;
- (id)callCameraMethod:(unsigned long long)arg1 pageId:(unsigned long long)arg2 method:(id)arg3 param:(id)arg4 complete:(id /* block */)arg5;
- (void)checkContainsGlobalPkg:(id)arg1 infoArray:(id)arg2;
- (void)checkIsGlobalPkg:(id)arg1;
- (id)configCGI;
- (void)setConfigCGI:(id)arg1;
- (id)config;
- (void)setConfig:(id)arg1;
- (id)downloadMgr;
- (void)setDownloadMgr:(id)arg1;
- (id)resourceMgr;
- (void)setResourceMgr:(id)arg1;
- (BOOL)isGestureEnable;
- (void)setIsGestureEnable:(BOOL)arg1;
- (BOOL)isExecutingLiteAppCode;
- (void)setIsExecutingLiteAppCode:(BOOL)arg1;
- (id)currentAppId;
- (void)setCurrentAppId:(id)arg1;
- (id)pageSheetAdapter;
- (void)setPageSheetAdapter:(id)arg1;
- (id)flutterPanGestureRecognizer;
- (void)setFlutterPanGestureRecognizer:(id)arg1;
- (BOOL)didPushSelfInPageSheet;
- (void)setDidPushSelfInPageSheet:(BOOL)arg1;
- (id /* block */)halfScreenClosed;
- (void)setHalfScreenClosed:(id /* block */)arg1;
- (BOOL)isAllowCreateLiteApp;
- (void)setIsAllowCreateLiteApp:(BOOL)arg1;
- (id)lastOpenLiteAppInfo;
- (void)setLastOpenLiteAppInfo:(id)arg1;
- (id)payLiteAppResourceCgiDic;
- (void)setPayLiteAppResourceCgiDic:(id)arg1;
- (id)payLiteAppResourceBatchCgiDic;
- (void)setPayLiteAppResourceBatchCgiDic:(id)arg1;
- (id)checkTinkerReporterDic;
- (void)setCheckTinkerReporterDic:(id)arg1;
- (id)checkIlinkReporterDic;
- (void)setCheckIlinkReporterDic:(id)arg1;
- (id)checkPayDevopsReporterDic;
- (void)setCheckPayDevopsReporterDic:(id)arg1;
- (id)createGameLiteAppReporterDic;
- (void)setCreateGameLiteAppReporterDic:(id)arg1;
- (id)periodCheckReporterDic;
- (void)setPeriodCheckReporterDic:(id)arg1;
- (id)checkWidgetLiteAppBlockDic;
- (void)setCheckWidgetLiteAppBlockDic:(id)arg1;
- (id)bundleAppIds;
- (void)setBundleAppIds:(id)arg1;
- (id)cacheInfo;
- (void)setCacheInfo:(id)arg1;
- (id)gameHalfScreenViews;
- (void)setGameHalfScreenViews:(id)arg1;
- (void).cxx_destruct;
@end

