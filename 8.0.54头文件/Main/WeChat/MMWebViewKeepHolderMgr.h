@interface MMWebViewKeepHolderMgr : MMUserService <IMinimizeTaskDelegateInterface, PBMessageObserverDelegate, MMResourceMgrExt, IMMFontMgrExt, MMKernelExt, IMusicPlayerExt, TingFlowPlayerNotification, MMServiceProtocol>
{
    MMWebViewController * _webViewVCForNewMainFrameBanner; // +0x8
    MMWebViewController * _webViewVCForArticleReadingBanner; // +0x10
    NSString * _musicBarUrl; // +0x18
    NSMutableArray * _dpArrOpenedWebview; // +0x20
    NSMutableDictionary * _dicBackgroundWebviewTask; // +0x28
    NSMutableArray * _arrTaskOrder; // +0x30
    MMTimer * _checkTimer; // +0x38
    BOOL _bIsDelayLoading; // +0x40
    NSMutableArray * _drtWorkFlowArr; // +0x48
    unsigned int _domainBlockRulesVersion; // +0x50
    WCEliminatedSlotMMKV * _webBackgroundAblumSlotMMKV; // +0x58
    MMTimer * _fetchBackgroundAudioStateTimmer; // +0x60
    double _previousTingAudioUpdateTime; // +0x68
    OrderedDictionary * _dictTaskWebVC; // +0x70
    NSMutableDictionary * _dictTaskCacheTime; // +0x78
    NSDictionary * _dictDomainBlockPaths; // +0x80
}
+ (id /* block */)blockWebviewExitTimeoutActionWithTimeout:(unsigned long long)arg1;
+ (id /* block */)blockWebviewCheckAndFixXpcIssue;
+ (id /* block */)blockWebviewExitReportAction;
+ (id /* block */)blockWebviewExitCheckBitSetAction;
+ (id /* block */)blockWebviewExitRefreshWebview;
+ (id /* block */)blockWebviewPausePlayback;
+ (void)reportUniversalLinkActionWithReportKey:(unsigned int)arg1;
+ (void)reportUniversalLinkActionWithReportKey:(unsigned int)arg1 extReportId:(unsigned int)arg2;
+ (void)reportUniversalLinkActionWithReportId:(unsigned int)arg1 reportKey:(unsigned int)arg2 value:(unsigned int)arg3;
+ (unsigned long long)maxWebPageCount;
+ (unsigned int)maxWebPageCacheDuration;
+ (id)dataFromWebViewViewController:(id)arg1 minimizeType:(unsigned int)arg2;
+ (id)dataFromHandOffItem:(id)arg1;
+ (unsigned long long)generateTypeFromWebMinimizeType:(unsigned int)arg1;
+ (unsigned int)webMinimizeTypeFromGenerateType:(unsigned long long)arg1;
+ (id)webViewControllerFromMinimizationData:(id)arg1 presetTaskKey:(id)arg2;
+ (id)serializationStringForWebviewExtDataItemsInWebview:(id)arg1;
+ (id)serializationWebviewExtDataKeys;
+ (id)genMinimizationWebTaskKey:(id)arg1;
+ (BOOL)shouldCacheWebVC:(id)arg1;
+ (BOOL)shouldRecoverWebVCInCacheWithWebData:(id)arg1 andWebVC:(id)arg2;
+ (id)recentUsedRecordFromWebViewController:(id)arg1;
+ (id)currentAlbumKVId;
+ (id)albumInfoKeyWithAlbumId:(id)arg1 domain:(id)arg2;
+ (void)reportMusicPlayInnerStatusChanged:(unsigned int)arg1 musicInfo:(id)arg2;
+ (unsigned int)convertKSMusicPlayState2WebAudioPlayReportEvent:(unsigned long long)arg1;
+ (unsigned int)convertMusicPlaySourceType2WebAudioPlayReportSourceType:(unsigned int)arg1;
- (void)drt_tryExecuteDelayReleaseTransaction:(id)arg1;
- (unsigned int)requestExitReportWithData:(id)arg1;
- (void)releaseWorkFlow:(id)arg1;
- (void)drt_handleMpReportResult:(id)arg1;
- (void)keepHoldWebViewVCForReadingBanner:(id)arg1 musicBarUrl:(id)arg2;
- (id)getKeepHoldWebViewVCForReadingBanner;
- (id)getKeepHoldMusicBarUrl;
- (void)cancelHoldWebViewVCForReadingBanner;
- (BOOL)hasDelayLoadingTask;
- (void)setDelayLoading:(BOOL)arg1;
- (BOOL)addBackgroundTask:(id)arg1 forKey:(id)arg2 IsPresented:(BOOL)arg3;
- (id)getBackgroundTaskForKey:(id)arg1;
- (void)deleteBackgroundTaskForKey:(id)arg1;
- (id)getCurrentAllPresentingBackgroundVC;
- (void)cleanAllBackgroundTask;
- (void)onCheckBackgroundTaskTimeOut;
- (void)dp_addWebViewAsWeak:(id)arg1;
- (void)dp_deleteWebView:(id)arg1;
- (void)dp_sendJSEventToAllWebView:(id)arg1 Param:(id)arg2 AppID:(id)arg3 Host:(id)arg4;
- (void)createNewWebviewIfNoCache;
- (void)keepHoldWebViewVCForNewMainFrameBanner:(id)arg1;
- (id)getKeepHoldWebViewVCTitleForNewMainFrameBanner;
- (id)getKeepHoldWebViewVCForNewMainFrameBanner;
- (void)cancelHoldWebViewVC:(id)arg1;
- (void)clickPushKeepHoldWebview;
- (void)updateCurrentBackToChatState;
- (void)initWebUniversalLinkPrefixDict;
- (void)clearWebUniversalLinkPrefixDict;
- (unsigned int)__convertValue2ControlAction:(long long)arg1;
- (unsigned int)webUniversalLinkRulesVersion;
- (unsigned int)controlActionUniversalLinkPrefix:(id)arg1;
- (void)onWebMinimizationServiceEnterBackground;
- (void)onWebMinimizationServiceEnterForgournd;
- (void)__removeAllRetainWebVC;
- (void)minimizeWebViewController:(id)arg1 minimizeType:(unsigned int)arg2;
- (void)minimizeWebViewController:(id)arg1 minimizeType:(unsigned int)arg2 animated:(BOOL)arg3;
- (BOOL)updateMinimizeViewControler:(id)arg1;
- (void)unminimizeViewControler:(id)arg1;
- (void)removeAllRetainViewControlerFromMinimization;
- (BOOL)isViewControllerMinimized:(id)arg1;
- (BOOL)isViewControllerCached:(id)arg1;
- (BOOL)minimizeMinimizedHandOffItem:(id)arg1;
- (BOOL)unminimizeMinimizedHandOffItem:(id)arg1;
- (id)getLastViewControllerOnLeaveTaskBeforeEnterAnother:(id)arg1;
- (void)onRecoverTaskData:(id)arg1;
- (BOOL)onEnterMinimizedTask:(id)arg1 openContext:(id)arg2 taskEnterScene:(unsigned int)arg3;
- (void)onEnterRecentUsedTask:(id)arg1;
- (void)onRemoveMinimizedTask:(id)arg1;
- (BOOL)onRetryAddPendingTaskAfterUserDeleteOneTask:(id)arg1;
- (void)onMinimizedTaskItemExposed:(id)arg1;
- (void)apppendWebVCToCache:(id)arg1 taskKey:(id)arg2;
- (void)removeWebVCInCacheWithTaskKey:(id)arg1;
- (void)tryAdvanceDownloadPageDataWithWebVC:(id)arg1;
- (void)updateData:(id)arg1 withWebviewController:(id)arg2;
- (void)updateData:(id)arg1 withHandOffItem:(id)arg2;
- (BOOL)shouldRecoverWebVCInCache:(id)arg1;
- (BOOL)rec_tryUpdateSnapShotWithHistoryRecords:(id)arg1;
- (BOOL)rec_updateUsedRecordWithWebviewVC:(id)arg1;
- (BOOL)rec_deleteUsedRecordWithWebviewVC:(id)arg1;
- (void)onServiceInitWithCategoryWebAudio;
- (void)onServiceDeallocWithCategoryWebAudio;
- (void)onServiceEnterBackgroundWithCategoryWebAudio;
- (void)onServiceEnterForegroundWithCategoryWebAudio;
- (void)onServiceTerminateWithCategoryWebAudio;
- (void)tryStartPollingCurrentBackgroundAudioState;
- (void)tryStopPollingCurrentBackgroundAudioState;
- (void)timer_updateCurrentBackgroundAudioInfoInPolling;
- (BOOL)checkAndUpdateCurrentBackgroundAudioInfo;
- (void)updateWebBackgourndAlbumInfo:(id)arg1;
- (void)setWebBackgourndAlbumInfo:(id)arg1 forAlbumId:(id)arg2 domain:(id)arg3;
- (id)webBackgourndAlbumInfoWithAlbumId:(id)arg1 domain:(id)arg2;
- (id)webBackgourndAudioInfoWithAlbumId:(id)arg1 audioId:(id)arg2 domain:(id)arg3;
- (void)prepareForMusicPlay:(id)arg1;
- (void)onMusicWillBePreempted:(id)arg1 byNewMusicInfo:(id)arg2;
- (void)onPlayMusic:(id)arg1 fromScene:(long long)arg2;
- (void)onMusicPlayInnerStatusChanged:(unsigned long long)arg1 musicInfo:(id)arg2 errInfo:(id)arg3;
- (void)updateTingAudio:(id)arg1 WithCurrentTime:(double)arg2 duration:(double)arg3;
- (void)flowPlayer:(id)arg1 tingItem:(id)arg2 onEvent:(int)arg3 error:(id)arg4;
- (void)flowPlayer:(id)arg1 tingItem:(id)arg2 updateCurrentTime:(double)arg3 duration:(double)arg4;
- (id)init;
- (void)onServiceInit;
- (void)onServiceClearData;
- (void)onServiceEnterBackground;
- (void)onServiceEnterForeground;
- (void)onServiceTerminate;
- (void)dealloc;
- (void)onServiceMemoryWarning;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)onResUpdateFinish:(long long)arg1 resType:(unsigned int)arg2 subResType:(unsigned int)arg3;
- (void)onFontSizeChange;
- (void)onPreQuit;
- (id)webBackgroundAblumSlotMMKV;
- (void)setWebBackgroundAblumSlotMMKV:(id)arg1;
- (id)fetchBackgroundAudioStateTimmer;
- (void)setFetchBackgroundAudioStateTimmer:(id)arg1;
- (double)previousTingAudioUpdateTime;
- (void)setPreviousTingAudioUpdateTime:(double)arg1;
- (id)dictTaskWebVC;
- (void)setDictTaskWebVC:(id)arg1;
- (id)dictTaskCacheTime;
- (void)setDictTaskCacheTime:(id)arg1;
- (id)dictDomainBlockPaths;
- (void)setDictDomainBlockPaths:(id)arg1;
- (unsigned int)domainBlockRulesVersion;
- (void)setDomainBlockRulesVersion:(unsigned int)arg1;
- (void).cxx_destruct;
@end

