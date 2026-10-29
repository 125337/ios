@interface WCFinderVideoDownLoadMgr : MMUserService <ICdnComMgrExt, INetworkStatusMgrExt, WCPlayerEventExt, IExptServiceExt, MMServiceProtocol>
{
    BOOL _canDownload265; // +0x8
    BOOL _canUsePCDN; // +0x9
    unsigned long long _lastestPreloadStrategyUpdateTimestamp; // +0x10
    unsigned long long _nextUpdatePreloadStrategyTimestamp; // +0x18
    unsigned long long _updatePreloadStrategyFailRequestTime; // +0x20
    unsigned long long _updatePreloadStrategyFailCount; // +0x28
    unsigned long long _preloadArrayVersion; // +0x30
    NSMutableArray * _preloadingArray; // +0x38
    NSMutableArray * _firstFramePreloadTaskArray; // +0x40
    NSMutableArray * _preloadQueue; // +0x48
    NSObject<OS_dispatch_queue> * _handleQueue; // +0x50
    NSMutableArray * _lowPriorityPreloadQueue; // +0x58
    NSMutableDictionary * _firstFrameGroupIDSet; // +0x60
    NSMutableDictionary * _dicStreamingTask; // +0x68
    NSMutableDictionary * _dicPreloadingTask; // +0x70
    NSMutableDictionary * _dicIplist; // +0x78
    NSMutableDictionary * _preloadDict; // +0x80
    NSDictionary * _holdoutExptDict; // +0x88
    MMLRUCache * _preloadResultDict; // +0x90
    unsigned long long _preloadConcurrentCount; // +0x98
    FinderPreloadGlobalInfo * _preloadInfo; // +0xa0
    unsigned long long _preloadStrategyId; // +0xa8
    unsigned long long _preloadMaxCount; // +0xb0
    unsigned long long _megaVideoPreloadFrontFeedCount; // +0xb8
    unsigned long long _megaVideoPreloadNextFeedCount; // +0xc0
    NSString * _pausePreloadStreamKey; // +0xc8
    NSArray * _pausePreloadArray; // +0xd0
}
- (void)onServiceInit;
- (void)onServiceClearData;
- (id)getGlobalInfo;
- (void)setPreloadInfo:(id)arg1;
- (id)getHoldoutExpt:(id)arg1;
- (BOOL)canUse265;
- (BOOL)IsDownlingWithMediaWrap:(id)arg1;
- (void)StartDownloadWithMediaWrap:(id)arg1;
- (void)cleanQueueWithNewStreamTask:(id)arg1;
- (BOOL)StopDownloadTaskWithMediaWrap:(id)arg1 downloadTaskInfo:(id *)arg2;
- (BOOL)stopDownloadTaskWithClientID:(id)arg1 downloadTaskInfo:(id *)arg2;
- (BOOL)StopDownloadPreloadTaskWithMediaWrap:(id)arg1 downloadTaskInfo:(id *)arg2;
- (BOOL)stopDownloadTaskWithClientID:(id)arg1 downloadTaskInfo:(id *)arg2 checkPreloadQueue:(BOOL)arg3;
- (BOOL)stopDownloadTaskWithClientID:(id)arg1 downloadTaskInfo:(id *)arg2 checkPreloadQueue:(BOOL)arg3 onlyCancelPreloadTask:(BOOL)arg4;
- (BOOL)stopDownloadTaskWithClientID:(id)arg1 downloadTaskInfo:(id *)arg2 checkPreloadQueue:(BOOL)arg3 onlyCancelPreloadTask:(BOOL)arg4 removePreloadTask:(BOOL)arg5;
- (BOOL)stopDownloadTaskWithGroupID:(id)arg1;
- (BOOL)_checkMediaWrapCanCancel:(id)arg1 groupID:(id)arg2;
- (void)pausePreloadFeedsWithStreamMediaWrap:(id)arg1;
- (BOOL)isPausePreload;
- (BOOL)hasDowningloadTask;
- (BOOL)hasPreloadTask;
- (BOOL)isPreloadingVideoWithTid:(id)arg1;
- (BOOL)isPausePreloadQueue;
- (BOOL)isStreamDownloadingWithClientID:(id)arg1;
- (void)resumePreloadQueueWithStreamMediaWrap:(id)arg1;
- (void)_resumePreloadQueueWithIdentifier:(id)arg1;
- (void)cleanPausePreloadQueueWithIdentifier:(id)arg1;
- (BOOL)RemoveAllPreLoadTaskWithClientID:(id)arg1;
- (BOOL)removePreLoadWithClientId:(id)arg1;
- (BOOL)IsPreloadingVideoUrl:(id)arg1;
- (BOOL)canRefreshPreloadStrategy;
- (void)updatePreloadStrategy:(id)arg1;
- (unsigned long long)getPreloadFrontFeedCount;
- (unsigned long long)getPreloadNextFeedCount;
- (unsigned long long)getMegaVideoPreloadFrontFeedCount;
- (unsigned long long)getMegaVideoPreloadNextFeedCount;
- (id)currentPreloadInfo;
- (unsigned long long)getVideoStreamLimitBufferCount;
- (BOOL)canPreCreatedPlayer;
- (id)getAllStreamDownloadKey;
- (id)getAllPreDownloadKey;
- (id)predownloadProgressInfoWithClientID:(id)arg1;
- (id)generateDownloadTaskInfoWith:(id)arg1;
- (void)removePreloadingTaskWithKey:(id)arg1;
- (void)addPreloadingTaskWithTaskInfo:(id)arg1;
- (void)removeStreamingTaskWithKey:(id)arg1;
- (void)addStreamingTaskWithTaskInfo:(id)arg1;
- (id)downloadArgsWrapWithMediaWrap:(id)arg1;
- (id)livePhotoDownloadArgsWrapWithMediaWrap:(id)arg1;
- (void)printFirstFrameArray;
- (void)StartPreloadVideoWithMediaWraps:(id)arg1;
- (BOOL)stopPreloadVideoWithMediaWraps:(id)arg1 preloadVersion:(unsigned long long)arg2;
- (void)cleanFirstFrameTaskArrayWithGroupId:(id)arg1 newPreloadTaskSet:(id)arg2;
- (unsigned long long)findClientIDTaskCountInGrounpSet:(id)arg1;
- (void)startFeedPreloadFirstFrameWraps:(id)arg1 groupID:(id)arg2;
- (void)startFeedPreloadFirstFrameWraps:(id)arg1;
- (void)appendPreloadVideoWithMediaWraps:(id)arg1;
- (void)addLowPriorityPreloadVideoWithMediaWraps:(id)arg1;
- (void)removeLowPriorityTaskWithKey:(id)arg1;
- (void)immigrateMediaToPreCacheDir:(id)arg1;
- (void)stopAllLowPriorityPreloadVideos;
- (BOOL)IsPreloadingWithMediaWrap:(id)arg1;
- (BOOL)isPreloadingWithClientID:(id)arg1;
- (void)CheckPreloadQueue;
- (void)downloadTask:(id)arg1;
- (void)realStartDownload:(id)arg1;
- (void)videoSourceChange:(id)arg1;
- (void)OnCdnDownload:(id)arg1;
- (void)streamingDownloadSuccessfulWithDownloadInfo:(id)arg1;
- (void)streamingDownloadSuccessfulWithPlayerDownloadInfo:(id)arg1 argsWrap:(id)arg2;
- (void)OnCdnVideoMoovReady:(id)arg1;
- (void)OnCdnDownloadProgress:(id)arg1;
- (BOOL)deepLinkVideoFileWithCDNTask:(id)arg1 isTempPath:(BOOL)arg2;
- (void)OnCdnVideoPreloadCompleted:(id)arg1;
- (void)updateLoadInfoWithTid:(id)arg1 progressInfo:(id)arg2;
- (void)updateLoadInfoWithTid:(id)arg1 downloadInfo:(id)arg2;
- (BOOL)isDownloadH265FileWithTaskInfo:(id)arg1;
- (BOOL)isDownloadH266FileWithTaskInfo:(id)arg1;
- (id)getPreloadInfoWithMediaURL:(id)arg1;
- (unsigned long long)getPreloadInfoIDWithMediaURL:(id)arg1;
- (void)removeLowBitRateWithMediaURL:(id)arg1 formatFlag:(id)arg2 isStreamDownload:(BOOL)arg3 mediaItem:(id)arg4;
- (void)removeLowBitRateWithMediaURL:(id)arg1 fileFormat:(id)arg2 isStreamDownload:(BOOL)arg3;
- (void)onNetworkStatusChange:(unsigned int)arg1;
- (void)startDownloadTotalVideoWithMediaInfo:(id)arg1;
- (void)startDownloadTotalVideoWithMediaWrap:(id)arg1;
- (void)stopDownloadTotablVideoWithMediaInfo:(id)arg1;
- (BOOL)stopDownloadTotablVideoWithMediaWrap:(id)arg1;
- (void)cancelDownloadTotalVideoWithMediaInfo:(id)arg1;
- (void)onPlayerStartDownload:(id)arg1;
- (BOOL)isTaskStreamRunningWithClientId:(id)arg1 ignoreFormat:(BOOL)arg2;
- (BOOL)isTaskStreamRunningWithClientId:(id)arg1;
- (void)onPlayerDownloadComplete:(id)arg1 downloadInfo:(id)arg2;
- (void)onPlayerDownloadStop:(id)arg1 downloadInfo:(id)arg2;
- (void)onExptItemListChange;
- (id)_getHashKeyWithClientID:(id)arg1;
- (void)stopPlayerStreamDownloadAllFormatWithClientID:(id)arg1;
- (unsigned long long)lastestPreloadStrategyUpdateTimestamp;
- (void)setLastestPreloadStrategyUpdateTimestamp:(unsigned long long)arg1;
- (unsigned long long)nextUpdatePreloadStrategyTimestamp;
- (void)setNextUpdatePreloadStrategyTimestamp:(unsigned long long)arg1;
- (unsigned long long)updatePreloadStrategyFailRequestTime;
- (void)setUpdatePreloadStrategyFailRequestTime:(unsigned long long)arg1;
- (unsigned long long)updatePreloadStrategyFailCount;
- (void)setUpdatePreloadStrategyFailCount:(unsigned long long)arg1;
- (unsigned long long)preloadArrayVersion;
- (void)setPreloadArrayVersion:(unsigned long long)arg1;
- (id)preloadingArray;
- (void)setPreloadingArray:(id)arg1;
- (id)firstFramePreloadTaskArray;
- (void)setFirstFramePreloadTaskArray:(id)arg1;
- (id)preloadQueue;
- (void)setPreloadQueue:(id)arg1;
- (id)handleQueue;
- (void)setHandleQueue:(id)arg1;
- (id)lowPriorityPreloadQueue;
- (void)setLowPriorityPreloadQueue:(id)arg1;
- (id)firstFrameGroupIDSet;
- (void)setFirstFrameGroupIDSet:(id)arg1;
- (id)dicStreamingTask;
- (void)setDicStreamingTask:(id)arg1;
- (id)dicPreloadingTask;
- (void)setDicPreloadingTask:(id)arg1;
- (id)dicIplist;
- (void)setDicIplist:(id)arg1;
- (id)preloadDict;
- (void)setPreloadDict:(id)arg1;
- (id)holdoutExptDict;
- (void)setHoldoutExptDict:(id)arg1;
- (id)preloadResultDict;
- (void)setPreloadResultDict:(id)arg1;
- (unsigned long long)preloadConcurrentCount;
- (void)setPreloadConcurrentCount:(unsigned long long)arg1;
- (id)preloadInfo;
- (unsigned long long)preloadStrategyId;
- (void)setPreloadStrategyId:(unsigned long long)arg1;
- (unsigned long long)preloadMaxCount;
- (void)setPreloadMaxCount:(unsigned long long)arg1;
- (unsigned long long)megaVideoPreloadFrontFeedCount;
- (void)setMegaVideoPreloadFrontFeedCount:(unsigned long long)arg1;
- (unsigned long long)megaVideoPreloadNextFeedCount;
- (void)setMegaVideoPreloadNextFeedCount:(unsigned long long)arg1;
- (BOOL)canDownload265;
- (void)setCanDownload265:(BOOL)arg1;
- (id)pausePreloadStreamKey;
- (void)setPausePreloadStreamKey:(id)arg1;
- (id)pausePreloadArray;
- (void)setPausePreloadArray:(id)arg1;
- (BOOL)canUsePCDN;
- (void)setCanUsePCDN:(BOOL)arg1;
- (void).cxx_destruct;
@end
