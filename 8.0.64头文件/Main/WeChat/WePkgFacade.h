@interface WePkgFacade : MMUserService <IWePkgCheckUpdateMgrExt, IWePkgDownloadMgrExt, MMServiceProtocol>
{
    NSRecursiveLock * _createPackageLock; // +0x8
    id _clearWePkgAllDataNotificationToken; // +0x10
    id _receiveMemoryWarningNotificationToken; // +0x18
    WePkgConfigMgr * _configMgr; // +0x20
    WePkgCheckUpdateMgr * _checkMgr; // +0x28
    WePkgDownloadMgr * _downloadMgr; // +0x30
    WePkgOperateUpdateMgr * _operateMgr; // +0x38
    WePkgCleanMgr * _cleanMgr; // +0x40
    NSString * _jsCommonLibPkgId; // +0x48
    NSString * _injectJsScript; // +0x50
    MMLockMutableDictionary * _dicPkgId2Package; // +0x58
    NSMapTable * _dicUrl2UsingWebview; // +0x60
    NSMutableDictionary * _dicOriginalUrl2A8KeyData; // +0x68
    NSMutableDictionary * _dicOriginalUrl2NeedReloadWebVC; // +0x70
    NSMutableDictionary * _reportSyncReloadOBjs; // +0x78
    NSMutableSet * _webViewDidCommitSet; // +0x80
    NSMutableDictionary * _webViewEvaluateJsDic; // +0x88
}
- (void)dealloc;
- (void)onServiceInit;
- (void)onServiceClearData;
- (void)onServiceEnterForeground;
- (void)onServiceEnterBackground;
- (void)checkUpdateForJsCommonLib;
- (id)dataFromCachedItem:(id)arg1 resourceUrl:(id)arg2;
- (BOOL)needInjectJsRunTimeStatistics:(id)arg1;
- (id)fileNameFromRid:(id)arg1;
- (id)getCachedJsScript:(id)arg1;
- (id)getCacheDataForResouceUrl:(id)arg1 mainDocUrl:(id)arg2;
- (id)getJscorePublicLib;
- (void)reportResourceHookResult:(id)arg1 Version:(id)arg2 ResourceUrl:(id)arg3 Hook:(BOOL)arg4;
- (id)getCacheDataForResouceUrlInternal:(id)arg1 mainDocUrl:(id)arg2 PkgId:(id *)arg3 Version:(id *)arg4;
- (void)updateUsingCommlibWebView:(id)arg1;
- (BOOL)isCommonLibNeedForceUpdate;
- (void)setupMgr;
- (BOOL)isWePkgAllEntryEnabled;
- (void)observerWebViewNotification;
- (void)observerMemoryWarning;
- (id)loadPackage:(id)arg1 createIfNeed:(BOOL)arg2;
- (id)getNeedDownloadFileListOnCurrentNetwork:(id)arg1;
- (id)getNeedDownloadSingleFileListOnCurrentNetwork:(id)arg1 PkgId:(id)arg2 Version:(id)arg3 IsAtomicPart:(BOOL)arg4;
- (void)tryOperateUpdateForPkgId:(id)arg1 AtomicPart:(BOOL)arg2 NonAtomicPart:(BOOL)arg3;
- (void)downloadTmpConfigInDB;
- (unsigned int)getLastDownloadTmpConfigInDBTime;
- (void)setLastDownloadTmpConfigInDBTime:(unsigned int)arg1;
- (BOOL)updateWePkgUsingWebview:(id)arg1 WebView:(id)arg2;
- (BOOL)updateWePkg:(id)arg1 UsingWebview:(id)arg2;
- (BOOL)tryLoadPkgForJsCommonLibWithPkg:(id)arg1;
- (BOOL)loadPkgForJsCommonLib;
- (int)tryLoadPkgForUrl:(id)arg1 Version:(id *)arg2;
- (int)tryLoadPkgForUrl:(id)arg1 preloadMain:(BOOL)arg2;
- (int)tryLoadPkgForUrl:(id)arg1 Version:(id *)arg2 preloadMain:(BOOL)arg3;
- (int)loadPkgForPkgId:(id)arg1 Domain:(id)arg2 Package:(id *)arg3 Version:(id *)arg4;
- (void)cleanWepkg:(id)arg1;
- (BOOL)isPkgNeedForceUpdate:(id)arg1;
- (void)traceEventForWepkgEnterWebWithPkgId:(id)arg1 Url:(id)arg2 Version:(id)arg3 Result:(int)arg4;
- (void)checkUpdateIfNeed:(id)arg1;
- (void)checkUpdate:(id)arg1 CheckInterval:(unsigned int)arg2;
- (void)checkUpdateForExistPkgs:(id)arg1 andForcePkgs:(id)arg2;
- (BOOL)checkUpdateFrequenceIsOK:(id)arg1 CheckInterval:(unsigned int)arg2;
- (void)releaseDataForUrl:(id)arg1 alsoReleasePreload:(BOOL)arg2;
- (BOOL)existPkgForUrl:(id)arg1;
- (void)notifyWebViewDidExit:(id)arg1;
- (void)notifyWebViewDidCommit:(id)arg1;
- (void)handleOperateEndForPkgId:(id)arg1;
- (void)clearWkWebviewCache;
- (void)checkUpdateMgr:(id)arg1 didSuccessForPkgId:(id)arg2;
- (void)downloadMgr:(id)arg1 didSuccessForDownloadInfo:(id)arg2;
- (void)downloadMgr:(id)arg1 didSuccessForDownloadInfoAtomicPart:(id)arg2;
- (void)downloadMgr:(id)arg1 didSuccessForDownloadInfoNonAtomicPart:(id)arg2;
- (void)downloadMgr:(id)arg1 didFailForDownloadInfo:(id)arg2 errCode:(int)arg3 NoAutoRetry:(BOOL)arg4;
- (void)downloadMgr:(id)arg1 didFailForDownloadInfoAtomicPart:(id)arg2 NoAutoRetry:(BOOL)arg3;
- (void)downloadMgr:(id)arg1 didFailForDownloadInfoNonAtomicPart:(id)arg2 NoAutoRetry:(BOOL)arg3;
- (void)refreshWebViewWhenSyncReload:(id)arg1 errCode:(int)arg2;
- (BOOL)wePkgGlobalConfigDisabled;
- (void)reloadCurrentWebviewWaitWePkg:(id)arg1 serverVersion:(id)arg2 blockWait:(BOOL)arg3;
- (void)reloadCurrentWebviewWithoutWePkg:(id)arg1 serverVersion:(id)arg2;
- (void)reloadCurrentWebviewWaitWePkg:(id)arg1 serverVersion:(id)arg2;
- (void)clearPageCacheState:(id)arg1;
- (void)startReloadWebviews:(id)arg1 withPackage:(id)arg2;
- (void)startReloadWithOnlineModeAfterDownloadFailed:(id)arg1 errorCode:(int)arg2;
- (void)reloadCurrentWebview:(id)arg1 WithoutWePkg:(id)arg2;
- (void)notifyGetA8KeyReturn:(id)arg1 OriginalUrl:(id)arg2 FullUrl:(id)arg3 ExtraInfo:(id)arg4;
- (void)synchronizeCookies:(id)arg1 originUrl:(id)arg2 fullUrl:(id)arg3 cookiesInfo:(id)arg4;
- (void)handleGetA8KeyReturn:(id)arg1 OriginalUrl:(id)arg2 FullUrl:(id)arg3;
- (void)tryStopLoadingViewAndReloadA8KeyFullUrl:(id)arg1 OriginalUrl:(id)arg2 ReloadUrl:(id)arg3;
- (void)reloadWithoutCommonLibForWebView:(id)arg1;
- (void)reportSyncReloadBegin:(id)arg1 url:(id)arg2 pkg:(id)arg3 version:(id)arg4;
- (void)reportSyncReloadEnd:(id)arg1 result:(int)arg2;
- (id)getWebViewKey:(id)arg1;
- (BOOL)isGamePkgZipFile:(id)arg1;
- (id)contentNameFromFileName:(id)arg1 targetSuffix:(id)arg2;
- (id)pkgNameFromPkgFile:(id)arg1;
- (BOOL)isGamePkgPartFile:(id)arg1;
- (BOOL)isGamePkgFileName:(id)arg1;
- (void)applyFileToDebugPath:(id)arg1 title:(id)arg2;
- (void)showSuccessToastForPkgId:(id)arg1 rid:(id)arg2;
- (void)showMsg:(id)arg1;
- (id)moveUnzipDirToDebugPath:(id)arg1 pkgName:(id)arg2;
- (BOOL)unzipFromPath:(id)arg1 targetPath:(id)arg2;
- (BOOL)isGameHarFile:(id)arg1;
- (id)gameCustomizeActionTitleArray:(id)arg1;
- (void)handleGameCustomActionWithPath:(id)arg1 title:(id)arg2 actionTitle:(id)arg3;
- (void)airGameWkRecordDir;
- (id)getGamePreInjectJsForRidName:(id)arg1;
- (BOOL)appendScript:(id)arg1 preInjectJsRidName:(id)arg2 enableExpt:(id)arg3 enableDebugName:(id)arg4;
- (id)configMgr;
- (void)setConfigMgr:(id)arg1;
- (id)checkMgr;
- (void)setCheckMgr:(id)arg1;
- (id)downloadMgr;
- (void)setDownloadMgr:(id)arg1;
- (id)operateMgr;
- (void)setOperateMgr:(id)arg1;
- (id)cleanMgr;
- (void)setCleanMgr:(id)arg1;
- (id)jsCommonLibPkgId;
- (void)setJsCommonLibPkgId:(id)arg1;
- (id)injectJsScript;
- (void)setInjectJsScript:(id)arg1;
- (id)dicPkgId2Package;
- (void)setDicPkgId2Package:(id)arg1;
- (id)dicUrl2UsingWebview;
- (void)setDicUrl2UsingWebview:(id)arg1;
- (id)dicOriginalUrl2A8KeyData;
- (void)setDicOriginalUrl2A8KeyData:(id)arg1;
- (id)dicOriginalUrl2NeedReloadWebVC;
- (void)setDicOriginalUrl2NeedReloadWebVC:(id)arg1;
- (id)reportSyncReloadOBjs;
- (void)setReportSyncReloadOBjs:(id)arg1;
- (id)webViewDidCommitSet;
- (void)setWebViewDidCommitSet:(id)arg1;
- (id)webViewEvaluateJsDic;
- (void)setWebViewEvaluateJsDic:(id)arg1;
- (void).cxx_destruct;
@end
