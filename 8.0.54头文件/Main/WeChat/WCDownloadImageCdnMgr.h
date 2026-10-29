@interface WCDownloadImageCdnMgr : NSObject <ICdnComMgrExt, CNetworkStatusExt, WCMomentsNetworkEvaluatorExt>
{
    int _maxThumbDownloadCount; // +0x8
    int _maxImageDownloadCount; // +0xc
    OrderedDictionary * _dicThumbPendingTask; // +0x10
    OrderedDictionary * _dicImagePendingTask; // +0x18
    NSMutableDictionary * _dicThumbRunningTaskInfo; // +0x20
    NSMutableDictionary * _dicImageRunningTaskInfo; // +0x28
    NSMutableSet * _chokedTaskIDs; // +0x30
    NSMutableSet * _filteredChokedTaskIDs; // +0x38
    long long _currScene; // +0x40
    long long _category; // +0x48
    id <WCCdnDownloadImageDelegate> _delegate; // +0x50
    NSMutableDictionary * _mediaThumbDownloadStateDic; // +0x58
}
+ (long long)imageDownloadCategoryForDataItem:(id)arg1;
+ (long long)imageDownloadCategoryForMediaItem:(id)arg1;
- (id)initWithCategory:(long long)arg1;
- (void)dealloc;
- (id)createTaskInfo;
- (void)StartDownloadImage:(id)arg1 downloadType:(long long)arg2;
- (void)StartDownloadImage:(id)arg1 downloadType:(long long)arg2 needNotify:(BOOL)arg3 force:(BOOL)arg4;
- (void)StartDownloadImage:(id)arg1 downloadType:(long long)arg2 needNotify:(BOOL)arg3 force:(BOOL)arg4 preloadItem:(id)arg5;
- (void)StartDownloadImage:(id)arg1 downloadType:(long long)arg2 needNotify:(BOOL)arg3 force:(BOOL)arg4 preloadItem:(id)arg5 isAd:(BOOL)arg6;
- (void)startDownloadWCImage:(id)arg1 downloadType:(long long)arg2 needNotify:(BOOL)arg3 force:(BOOL)arg4 preloadItem:(id)arg5 isAd:(BOOL)arg6;
- (void)startDownloadWWImage:(id)arg1 downloadType:(long long)arg2 needNotify:(BOOL)arg3 force:(BOOL)arg4 preloadItem:(id)arg5 isAd:(BOOL)arg6;
- (void)StartBatchDownloadThumb:(id)arg1 targetMedias:(id)arg2;
- (void)StopDownloadImage:(id)arg1 downloadType:(long long)arg2;
- (void)CheckAllQueue;
- (void)CheckQueue:(long long)arg1;
- (BOOL)realStartDownloadSnsImage:(id)arg1;
- (BOOL)realStartDownloadSnsWCImage:(id)arg1;
- (BOOL)realStartDownloadSnsWWImage:(id)arg1;
- (void)createFileForTaskInfo:(id)arg1;
- (BOOL)isCacheExist:(id)arg1 downloadType:(long long)arg2;
- (BOOL)isTaskPending:(id)arg1 downloadType:(long long)arg2;
- (BOOL)isTaskRunning:(id)arg1 downloadType:(long long)arg2;
- (BOOL)isBatchTaskExistSameFeed:(id)arg1;
- (BOOL)finishBatchTask:(id)arg1;
- (id)getRunningTaskContainsTaskId:(id)arg1;
- (id)getRunningTaskContainsTaskId:(id)arg1 downloadType:(long long *)arg2;
- (id)getWcUrlForMediaItem:(id)arg1 downloadType:(long long)arg2;
- (id)getUrlForMediaItem:(id)arg1 downloadType:(long long)arg2;
- (id)getDataUrl:(id)arg1;
- (void)removePendingTask:(id)arg1;
- (void)removeRunningTask:(id)arg1;
- (void)pullDownloadMediaToFront:(id)arg1 downloadType:(long long)arg2;
- (void)setDownloadScene:(long long)arg1;
- (BOOL)isImageTaskExist:(id)arg1 downloadType:(long long)arg2;
- (id)getOneBatchMediaItemInfoForCdnResult:(id)arg1 taskInfo:(id)arg2;
- (id)getOneBatchMediaItemInfoByIndex:(unsigned int)arg1 taskInfo:(id)arg2;
- (void)transSingleDownloadTaskFromBatchTask:(id)arg1;
- (void)updateDownloadConcurrentCount;
- (void)useDefaultImageDownloadConcurrentCount;
- (BOOL)isReachConcurrentLimit:(long long)arg1;
- (unsigned int)getMaxConcurrentCount:(long long)arg1;
- (id)filterBatchMedias:(id)arg1;
- (id)getDicPendingTask:(long long)arg1;
- (id)getDicRunningTask:(long long)arg1;
- (void)addRunningTask:(id)arg1 type:(long long)arg2;
- (id)genTaskIdFor:(id)arg1 type:(long long)arg2;
- (id)genBatchTaskIdForTid:(id)arg1;
- (id)genBatchTaskItemIdFor:(id)arg1;
- (id)getMediaIdFromTaskId:(id)arg1;
- (long long)getDownloadTypeFromTaskId:(id)arg1;
- (void)markChokedInfoForStartingTask:(id)arg1;
- (void)markRunningTasksAsSuspended;
- (void)markRunningTasksAsSufferedFromBadNetwork;
- (void)checkChokedRunningTasksForType:(long long)arg1;
- (void)checkChokedRunningTask:(id)arg1 forType:(long long)arg2;
- (void)OnCdnDownloadProgress:(id)arg1;
- (void)reportDownloadRecord:(id)arg1 taskInfo:(id)arg2;
- (void)OnCdnDownload:(id)arg1;
- (BOOL)onPostHandleResult:(id)arg1 cdnInfo:(id)arg2;
- (void)applicationDidEnterBackground:(id)arg1;
- (void)applicationWillSuspend:(id)arg1;
- (void)ReachabilityChange:(unsigned int)arg1;
- (void)networkEvaluator:(id)arg1 networkConnectionStatusDidChange:(unsigned int)arg2;
- (void)networkEvaluator:(id)arg1 networkLinkConditionDidChange:(long long)arg2;
- (void)logMd5WithRaw:(id)arg1 andJpg:(id)arg2 andUrl:(id)arg3 idInfo:(id)arg4;
- (void)debugTask:(id)arg1;
- (unsigned int)getMediaDownloadStatus:(id)arg1 downloadType:(long long)arg2;
- (void)fillMediaDownloadStat:(id)arg1 taskInfo:(id)arg2;
- (long long)category;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)mediaThumbDownloadStateDic;
- (void)setMediaThumbDownloadStateDic:(id)arg1;
- (void).cxx_destruct;
@end

