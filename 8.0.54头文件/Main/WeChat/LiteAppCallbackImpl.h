@interface LiteAppCallbackImpl : NSObject <MMStackReportConnectionDelegate, WCAddressLogicMgrExt, LiteAppCallback>
{
    NSMutableDictionary * _recorders; // +0x8
    BOOL _isReporting; // +0x10
    MMStackReportConnection * _reportConnection; // +0x18
    unsigned long long _appLaunchTime; // +0x20
    NSArray * _regionData; // +0x28
    NSArray * _internationalCountries; // +0x30
    NSString * _AlbumResult; // +0x38
}
- (id)init;
- (void)onCheckBaseLibSumFail:(id)arg1;
- (void)onCheckSumFail:(id)arg1;
- (void)reportKv:(unsigned int)arg1 value:(id)arg2;
- (void)reportIdKey:(unsigned int)arg1 key:(unsigned int)arg2 value:(unsigned int)arg3;
- (void)dataReporting:(id)arg1 data:(id)arg2;
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
- (id)getLiteAppInfo:(id)arg1;
- (id)getLatestBaseLibInfo;
- (id)getBaseLibInfo:(id)arg1;
- (void)onExitLiteApp:(id)arg1;
- (id)genWebViewControllerWithParams:(id)arg1;
- (id)checkAndGetLiteAppPath:(id)arg1 checkUpdate:(BOOL)arg2 syncCheckUpdate:(BOOL)arg3;
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
- (id)getFilePathByLocalId:(id)arg1;
- (id)callNativeRecorder:(id)arg1 appUuid:(unsigned int)arg2 method:(id)arg3 param:(id)arg4;
- (void)stopAllRecorder;
- (void)showRegionPicker;
- (id)getRegionInfo:(id)arg1 param:(id)arg2;
- (void)onVideoPlay;
- (BOOL)isUseCustomNavbar:(id)arg1;
- (BOOL)getExpt:(id)arg1 withBoolDef:(BOOL)arg2;
- (id)getExpt:(id)arg1 withDef:(id)arg2;
- (void)onInitJsRuntime:(id)arg1 appUuid:(unsigned int)arg2 context:(unsigned long long)arg3;
- (void)onPreReleaseLiteApp:(id)arg1 appUuid:(unsigned int)arg2 inJSThread:(BOOL)arg3;
- (void)onDebugEventTriggered:(id)arg1;
- (void)onStackReportCompleted:(BOOL)arg1;
- (void)OnGetAllFourthAddressStageData:(id)arg1 Error:(id)arg2;
- (id)getUserAlbums:(id)arg1;
- (id)saveCoverFile:(id)arg1 fileName:(id)arg2;
- (id)createImageLocalId:(id)arg1;
- (void)getAlbumsWithAuth:(id)arg1;
- (void)getAlbumsWithAuthError;
- (void)onLiteAppWidgetPrepared;
- (id)liteAppWidgetGetStartReport:(id)arg1;
- (id)liteAppWidgetGetReporter:(id)arg1;
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
- (void).cxx_destruct;
@end

