@interface LiteAppCallbackImpl : NSObject <MMStackReportConnectionDelegate, WCAddressLogicMgrExt, MMLiteAppDownloadMgrDelegate, LiteAppCallback>
{
    NSMutableDictionary * _recorders; // +0x8
    BOOL _isReporting; // +0x10
    MMStackReportConnection * _reportConnection; // +0x18
    unsigned long long _appLaunchTime; // +0x20
    NSArray * _regionData; // +0x28
    NSArray * _internationalCountries; // +0x30
    NSString * _AlbumResult; // +0x38
    MMLiteAppDownloadMgr * _downloadMgr; // +0x40
    NSString * _filePath; // +0x48
    NSObject<OS_dispatch_semaphore> * _downloadSemaphore; // +0x50
}
- (id)init;
- (void)onCheckBaseLibSumFail:(id)arg1;
- (void)onCheckSumFail:(id)arg1;
- (void)reportKv:(unsigned int)arg1 value:(id)arg2;
- (void)reportIdKey:(unsigned int)arg1 key:(unsigned int)arg2 value:(unsigned int)arg3;
- (void)dataReporting:(id)arg1 data:(id)arg2 appId:(id)arg3;
- (void)reportException:(id)arg1;
- (void)reportStack:(id)arg1 error:(id)arg2 stackTrace:(id)arg3;
- (unsigned int)getClientVersion;
- (id)getClientVersionStr;
- (long long)getNet;
- (id)getCurSystemLanguage;
- (id)getUin;
- (id)getDModel;
- (id)getOfflineResource:(id)arg1 tag:(id)arg2 url:(id)arg3;
- (id)getLiteAppDataPath;
- (id)getLiteAppCachePath;
- (id)getLiteAppRootPath;
- (id)getLiteAppInfo:(id)arg1 minVersion:(id)arg2;
- (id)getLatestBaseLibInfo;
- (id)getBaseLibInfo:(id)arg1;
- (void)onExitLiteApp:(id)arg1;
- (id)genWebViewControllerWithParams:(id)arg1;
- (id)checkAndGetLiteAppPath:(id)arg1 checkUpdate:(BOOL)arg2 syncCheckUpdate:(BOOL)arg3;
- (void)checkAndGetLiteAppPath:(id)arg1 checkUpdate:(BOOL)arg2 syncCheckUpdate:(BOOL)arg3 completion:(id /* block */)arg4;
- (id)getRecentForwardItem:(id)arg1;
- (id)getRecentForwardTitle:(id)arg1;
- (void)removeForwardUser:(id)arg1;
- (void)onShowStatusChange:(id)arg1 page:(id)arg2 appUuid:(unsigned int)arg3 pageId:(unsigned int)arg4 show:(BOOL)arg5;
- (void)onStoreSendResult:(id)arg1 callbackId:(int)arg2 resultType:(id)arg3 result:(id)arg4;
- (void)onStoreSetData:(id)arg1 changes:(id)arg2;
- (void)reloadDebug:(id)arg1 qrcodeDebugQuery:(id)arg2;
- (void)setIdleTimeDisableImpl:(BOOL)arg1;
- (void)navigateBackWhenHalfScreen:(id)arg1;
- (void)keyboardEnable:(BOOL)arg1;
- (id)getFilePathByLocalId:(id)arg1 appUuid:(unsigned int)arg2 localId:(id)arg3;
- (id)getWebviewLocalIdByPath:(id)arg1 path:(id)arg2;
- (id)callNativeRecorder:(id)arg1 appUuid:(unsigned int)arg2 method:(id)arg3 param:(id)arg4;
- (void)stopAllRecorder;
- (float)getCpu;
- (unsigned long long)getAppMemory;
- (void)showRegionPicker;
- (id)getRegionInfo:(id)arg1 param:(id)arg2;
- (void)onVideoPlay;
- (BOOL)isUseCustomNavbar:(id)arg1;
- (BOOL)getExpt:(id)arg1 withBoolDef:(BOOL)arg2;
- (id)getExpt:(id)arg1 withDef:(id)arg2;
- (void)onInitJsRuntime:(id)arg1 appUuid:(unsigned int)arg2 context:(unsigned long long)arg3;
- (void)onPreReleaseLiteApp:(id)arg1 appUuid:(unsigned int)arg2 inJSThread:(BOOL)arg3;
- (void)initJSContext:(unsigned long long)arg1 dirPath:(id)arg2;
- (void)configSourceURL:(unsigned long long)arg1 bytecodeIdentifier:(id)arg2;
- (id)getCodeCacheDetail:(unsigned long long)arg1;
- (unsigned long long)GetJSHeapMemory:(unsigned long long)arg1;
- (void)onDebugEventTriggered:(id)arg1;
- (void)onStackReportCompleted:(BOOL)arg1;
- (void)OnGetAllFourthAddressStageData:(id)arg1 Error:(id)arg2;
- (id)getLiteAppModelConfig:(id)arg1;
- (id)getUserAlbums:(id)arg1 appId:(id)arg2;
- (id)saveCoverFile:(id)arg1 fileName:(id)arg2;
- (id)createImageLocalId:(id)arg1;
- (void)getAlbumsWithAuth:(id)arg1;
- (void)getAlbumsWithAuthError;
- (id)getImageOrientationString:(long long)arg1;
- (id)getFileDataFromCDN:(id)arg1 url:(id)arg2;
- (void)onDownloadTaskCompletion:(id)arg1 errType:(unsigned long long)arg2 errCode:(int)arg3;
- (id)getFilePathFromSrc:(id)arg1 appId:(id)arg2 appUuid:(unsigned int)arg3;
- (id)getImageInfo:(id)arg1 appId:(id)arg2 appUuid:(unsigned int)arg3;
- (id)getVideoInfo:(id)arg1 appId:(id)arg2 appUuid:(unsigned int)arg3;
- (void)OnPreloadLitePageViewFailed:(id)arg1 page:(id)arg2;
- (void)setScheduleWakeUp:(id)arg1 interval:(int)arg2 repeat:(int)arg3 actionName:(id)arg4 payload:(id)arg5 forceDispatch:(BOOL)arg6 aliveDurationSeconds:(int)arg7;
- (void)clearScheduleWakeUp:(id)arg1;
- (id)getScheduleWakeUpInfo:(id)arg1;
- (id)getNetworkInfo;
- (void)onLiteAppWidgetPrepared;
- (id)liteAppWidgetGetStartReport:(id)arg1;
- (id)liteAppWidgetGetReporter:(id)arg1;
- (void)createStore:(id)arg1 aliveSeconds:(int)arg2 waitDownload:(BOOL)arg3;
- (void)createStore:(id)arg1 aliveSeconds:(int)arg2 pkgPath:(id)arg3;
- (void)releaseStore:(id)arg1;
- (BOOL)storeIsAlive:(id)arg1;
- (int)dispatchStore:(id)arg1 actionName:(id)arg2 params:(id)arg3;
- (void)subscribeStore:(id)arg1 pointers:(id)arg2;
- (void)unsubscribeStore:(id)arg1 pointers:(id)arg2;
- (void)publishGlobalEventToAll:(id)arg1 data:(id)arg2;
- (void)publishGlobalEventToAll:(id)arg1 eventName:(id)arg2 data:(id)arg3;
- (void)publishGlobalEvent:(int)arg1 pageId:(int)arg2 eventName:(id)arg3 data:(id)arg4;
- (void)publishGlobalEventToTopPage:(int)arg1 eventName:(id)arg2 data:(id)arg3;
- (void)publishEventToTopPage:(int)arg1 nodeId:(int)arg2 eventName:(id)arg3 data:(id)arg4;
- (void)addTask:(id)arg1 appUuid:(unsigned int)arg2 page:(id)arg3 query:(id)arg4 params:(id)arg5;
- (void)updateTask:(id)arg1 appUuid:(unsigned int)arg2 page:(id)arg3 query:(id)arg4 params:(id)arg5;
- (void)removeTask:(id)arg1 appUuid:(unsigned int)arg2 page:(id)arg3 query:(id)arg4 params:(id)arg5;
- (void)prepareTask:(id)arg1 appUuid:(unsigned int)arg2 page:(id)arg3 query:(id)arg4 params:(id)arg5;
- (id)getTaskSwitch;
- (id)getTaskState:(id)arg1 appUuid:(unsigned int)arg2 page:(id)arg3 query:(id)arg4 key:(id)arg5;
- (void)checkGlobalPkg:(id)arg1 minVersions:(id)arg2 block:(id /* block */)arg3;
- (id)getGlobalPkgInfo:(id)arg1 minVersions:(id)arg2;
- (id)getWXAMImageInfo:(id)arg1;
- (void)setOpenOption:(id)arg1 params:(id)arg2;
- (id)getOpenOption:(id)arg1;
- (id)reportConnection;
- (void)setReportConnection:(id)arg1;
- (BOOL)isReporting;
- (void)setIsReporting:(BOOL)arg1;
- (unsigned long long)appLaunchTime;
- (void)setAppLaunchTime:(unsigned long long)arg1;
- (id)regionData;
- (void)setRegionData:(id)arg1;
- (id)internationalCountries;
- (void)setInternationalCountries:(id)arg1;
- (id)AlbumResult;
- (void)setAlbumResult:(id)arg1;
- (id)downloadMgr;
- (void)setDownloadMgr:(id)arg1;
- (id)filePath;
- (void)setFilePath:(id)arg1;
- (id)downloadSemaphore;
- (void)setDownloadSemaphore:(id)arg1;
- (void).cxx_destruct;
@end
