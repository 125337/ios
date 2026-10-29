@interface WCFinderOfflineDownloadManager : NSObject
{
    NSObject<OS_dispatch_queue> * _taskQueue; // +0x8
    NSArray * _waitingList; // +0x10
    NSArray * _downloadingList; // +0x18
    unsigned long long _downloadPhase; // +0x20
}
- (id)init;
- (void)dealloc;
- (void)preloadOfflineVideos;
- (void)addDownloadTaskIfNeeded;
- (BOOL)isInPreloadPeakTime;
- (id)groupId;
- (id)taskQueue;
- (void)cleanExpiredOfflineCache;
- (void)allDownloadTaskFinishedWithGroupID:(id)arg1;
- (void)setTaskQueue:(id)arg1;
- (id)waitingList;
- (void)setWaitingList:(id)arg1;
- (id)downloadingList;
- (void)setDownloadingList:(id)arg1;
- (unsigned long long)downloadPhase;
- (void)setDownloadPhase:(unsigned long long)arg1;
- (void).cxx_destruct;
@end
