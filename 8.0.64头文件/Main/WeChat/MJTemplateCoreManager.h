@interface MJTemplateCoreManager : MMRootService <OMJExportManagerDelegate, OMJMaasCoreReportDelegate, MMServiceProtocol>
{
    NSObject<OS_dispatch_queue> * _cleanClipBundleQueue; // +0x8
    NSMutableSet * _finishedClipBundleRelativePathSet; // +0x10
    BOOL _isCleaningCache; // +0x18
    long long _coreStatus; // +0x20
    OMJMaasCore * _maasCore; // +0x28
    NSString * _coreKey; // +0x30
    MJShootComposingDraftManager * _mjShootDraftManager; // +0x38
    MMContext * _mmContext; // +0x40
    NSMutableArray * _corePrepareCompletionHandlers; // +0x48
    MJTemplateSessionQueue * _movieSessionQueue; // +0x50
    MJTemplateSessionQueue * _moviePlayerQueue; // +0x58
    MJTemplateSessionQueue * _cameraSessionQueue; // +0x60
    MJTemplateSessionQueue * _movieComposingSessionQueue; // +0x68
    MJTemplateSessionQueue * _imageEditSessionQueue; // +0x70
    NSMutableDictionary * _taskStartTimeDictionary; // +0x78
    MJCamTemplateCdnDownloadManager * _cdnDownloadManager; // +0x80
}
- (void)asyncCleanClipBundleIfNeeded;
- (void)finishMissionWithClipBundleID:(id)arg1;
- (BOOL)_cleanClipBundleWithRelativePath:(id)arg1;
- (void)_loadFinishedClipBundleRelativePathSet;
- (void)_saveFinishedClipBundleRelativePathSet;
- (void)_markClipBundleHasCleanUpTime;
- (BOOL)_exceedMaxCleanCheckInterval;
- (id)init;
- (void)dealloc;
- (BOOL)canStartUp;
- (void)startUpWithCompletionHandler:(id /* block */)arg1;
- (void)_createAndStartUpMaasCoreWithCompletionHandler:(id /* block */)arg1;
- (void)_didCompleteStartingUpWithError:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)prepareCoreWithCompletionHandler:(id /* block */)arg1;
- (void)Core_didFinishPreparingCoreWithError:(id)arg1;
- (void)_prepareCore;
- (void)_finishCleaningUp;
- (id)generateILinkAppClientParams;
- (void)_requestILinkAuthorizationWithSuccessBlock:(id /* block */)arg1 failureBlock:(id /* block */)arg2;
- (void)maasCore:(id)arg1 didReportAnalyticsEventWithType:(long long)arg2 data:(id)arg3;
- (id)sessionQueueForSession:(id)arg1;
- (BOOL)checkIdleForAllSessionQueues;
- (void)prepareSession:(id)arg1 withCompletionHandler:(id /* block */)arg2;
- (void)_prepareSession:(id)arg1;
- (void)destroySession:(id)arg1 withCompletionHandler:(id /* block */)arg2;
- (void)prepareNextSessionInQueue:(id)arg1;
- (void)prepareNextSessionsForAllQueues;
- (void)Sessions_didFinishPreparingCoreWithError:(id)arg1;
- (void)Sessions_cleanCachesIfNeeded;
- (void)startExportTaskWithID:(id)arg1;
- (void)pauseExportTaskWithID:(id)arg1;
- (void)cancelExportTaskWithID:(id)arg1;
- (id)_startExportTaskWithID:(id)arg1;
- (id)_pauseExportTaskWithID:(id)arg1;
- (id)_cancelExportTaskWithID:(id)arg1;
- (void)ExportTasks_didFinishPreparingCoreWithError:(id)arg1;
- (void)exportTaskDidCompleteWithTaskID:(id)arg1;
- (BOOL)checkIdleForExportManager:(id)arg1;
- (void)ExportTasks_cleanCachesIfNeeded;
- (void)exportManager:(id)arg1 serviceStateDidChange:(unsigned long long)arg2;
- (void)exportManager:(id)arg1 videoFrameDidUpdate:(id)arg2 taskID:(id)arg3;
- (void)exportManager:(id)arg1 taskStateDidChangeWithTaskID:(id)arg2 taskState:(unsigned long long)arg3 progress:(float)arg4 outputFilePath:(id)arg5;
- (void)cleanCachesIfNeeded;
- (void)_cleanCachesWithExcludedClipBundleIDs:(id)arg1 completionHandler:(id /* block */)arg2;
- (unsigned long long)reportScene;
- (long long)coreStatus;
- (void)setCoreStatus:(long long)arg1;
- (id)maasCore;
- (void)setMaasCore:(id)arg1;
- (id)coreKey;
- (void)setCoreKey:(id)arg1;
- (id)mjShootDraftManager;
- (id)mmContext;
- (void)setMmContext:(id)arg1;
- (id)corePrepareCompletionHandlers;
- (void)setCorePrepareCompletionHandlers:(id)arg1;
- (id)movieSessionQueue;
- (void)setMovieSessionQueue:(id)arg1;
- (id)moviePlayerQueue;
- (void)setMoviePlayerQueue:(id)arg1;
- (id)cameraSessionQueue;
- (void)setCameraSessionQueue:(id)arg1;
- (id)movieComposingSessionQueue;
- (void)setMovieComposingSessionQueue:(id)arg1;
- (id)imageEditSessionQueue;
- (void)setImageEditSessionQueue:(id)arg1;
- (BOOL)isCleaningCache;
- (void)setIsCleaningCache:(BOOL)arg1;
- (id)taskStartTimeDictionary;
- (void)setTaskStartTimeDictionary:(id)arg1;
- (id)cdnDownloadManager;
- (void)setCdnDownloadManager:(id)arg1;
- (void).cxx_destruct;
@end
