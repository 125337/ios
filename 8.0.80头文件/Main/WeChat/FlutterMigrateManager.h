@interface FlutterMigrateManager : NSObject <INewSyncExt, FlutterMigrateUICallback, CNetworkStatusExt, FlutterNavigatorDelegate>
{
    BOOL _pendingPcExport; // +0x8
    BOOL _m_bShouldNotInterruption; // +0x9
    BOOL _mIsOfflineEmigrate; // +0xa
    int _latestNotifyCode; // +0xc
    int _latestErrorCode; // +0x10
    MMFlutterInstance * _fltInstance; // +0x18
    UIViewController * _flutterViewController; // +0x20
}
+ (id)sharedInstance;
+ (BOOL)isKeepScreenOn;
+ (void)setKeepScreenOn:(BOOL)arg1;
+ (BOOL)isMigrationRunning;
- (id)init;
- (void)onEnterForeground;
- (void)onEnterBackground;
- (id)getMigrateManager;
- (void)uninitMigrateManager;
- (void)reInit:(unsigned long long)arg1 username:(id)arg2 cachePath:(id)arg3;
- (void)showSelectMigrateTypeUI;
- (void)showExportToPcOnDemand:(id)arg1 ContactName:(id)arg2 NickName:(id)arg3 CreateTime:(unsigned long long)arg4;
- (void)showTaskDetailPageByRespone:(id)arg1;
- (void)showTaskDetailPageByScanRespone:(id)arg1;
- (void)showTaskDetailPageByRespone:(id)arg1 fromScan:(BOOL)arg2;
- (void)showTaskDetailPageByOfflineRespone:(id)arg1;
- (void)showTaskDetailPageByOfflineScanRespone:(id)arg1;
- (void)showTaskDetailPageByOfflineRespone:(id)arg1 fromScan:(BOOL)arg2;
- (void)showTaskDetailPageWithoutParms;
- (BOOL)openExistingTaskFromScanIfNeeded;
- (BOOL)openExistingTaskFromScanUrlIfNeeded;
- (void)showGuestEntryPage:(id)arg1;
- (void)showErrorDetailPage:(int)arg1;
- (id)resumeInterruptedSessionId;
- (id)resumeReportParamsWithSessionId:(id)arg1;
- (void)reportResumeCustomEvent:(id)arg1 params:(id)arg2;
- (void)reportResumeViewEvent:(id)arg1 eventId:(id)arg2 sessionId:(id)arg3;
- (void)reportResumeIoBreakWithSessionId:(id)arg1;
- (void)reportResumeIoContinueWithSessionId:(id)arg1 recoveryMode:(long long)arg2 retryCount:(long long)arg3;
- (void)reportResumeTaskResultWithSessionId:(id)arg1 success:(BOOL)arg2 recoveryMode:(long long)arg3;
- (void)reportResumeBannerClickWithSessionId:(id)arg1;
- (void)markResumeInterruptedImportStatus;
- (void)markResumeInterruptedImportStatusWithSessionId:(id)arg1;
- (void)showResumeImportPage;
- (void)showResumeImportPageWithReportBannerClick:(BOOL)arg1;
- (BOOL)interceptIfResumeNeeded;
- (void)showPageImpl:(id)arg1 arguments:(id)arg2 pushFromBottom:(BOOL)arg3 isPom:(BOOL)arg4 fromVc:(id)arg5;
- (void)setLatestNotifyCode:(int)arg1;
- (void)setLatestErrorCode:(int)arg1;
- (id)bannerErrorText;
- (void)updatePcExportRequest:(BOOL)arg1;
- (BOOL)consumePcExportRequest;
- (BOOL)canStartByUrl;
- (BOOL)canStartByScanUrl;
- (BOOL)canStartOnDemandExport;
- (BOOL)useFlutterExpt;
- (id)getMmkv;
- (BOOL)useOfflineFlutterExpt;
- (BOOL)isLogout;
- (BOOL)isOfflineEmigrateFlutterVcShowing;
- (void)setEnterScene:(int)arg1;
- (void)pushFromViewController:(id)arg1 plugin:(id)arg2 route:(id)arg3 arguments:(id)arg4;
- (BOOL)canStopByPcNotify;
- (BOOL)isDataProcessing;
- (void)onNewSyncCloseMigration:(id)arg1;
- (void)onNewSyncPauseMigration:(id)arg1;
- (void)jumpToPrivacySetting;
- (void)jumpToBuildHostspot;
- (void)jumpToFeedback;
- (BOOL)isFlutterViewControllerOnTop;
- (void)onFlutterMigrateUIDidAppear;
- (void)onFlutterMigrateUIDidDealloc;
- (void)onFlutterMigrateUIDidDisappear;
- (void)ReachabilityChange:(unsigned int)arg1;
- (int)getMigrationNetworkStatus;
- (BOOL)openOptimizeEstimateSizeExpt;
- (BOOL)enbaleMigrationCdnExpt;
- (int)latestNotifyCode;
- (int)latestErrorCode;
- (id)fltInstance;
- (void)setFltInstance:(id)arg1;
- (id)flutterViewController;
- (void)setFlutterViewController:(id)arg1;
- (BOOL)pendingPcExport;
- (void)setPendingPcExport:(BOOL)arg1;
- (BOOL)m_bShouldNotInterruption;
- (void)setM_bShouldNotInterruption:(BOOL)arg1;
- (BOOL)mIsOfflineEmigrate;
- (void)setMIsOfflineEmigrate:(BOOL)arg1;
- (void).cxx_destruct;
@end
