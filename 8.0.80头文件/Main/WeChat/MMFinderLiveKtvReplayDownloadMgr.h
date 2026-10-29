@interface MMFinderLiveKtvReplayDownloadMgr : MMUserService <MMServiceProtocol>
{
    id <MMFinderLiveKtvReplayDownloadMgrDelegate> _delegate; // +0x8
    MMLiveResourceFetcherRootFlowAction * _downloader; // +0x10
    NSMutableSet * _downloadingIdList; // +0x18
    NSMutableArray * _taskList; // +0x20
    NSRecursiveLock * _lock; // +0x28
    long long _totalCount; // +0x30
    long long _completedCount; // +0x38
}
- (void)onServiceInit;
- (BOOL)isDownloading;
- (void)downloadAllKtvReplayVideos:(id)arg1;
- (void)cancelAllDownloads;
- (void)downloadKtvReplayVideoWithFragmentItem:(id)arg1;
- (id)downloadKeyForFragmentItem:(id)arg1;
- (id)fileNameForFragmentItem:(id)arg1;
- (void)saveVideoToAlbum:(id)arg1 withDownloadKey:(id)arg2;
- (BOOL)isAllVideosDownloaded:(id)arg1;
- (id)mmkvKeyForUrlMd5:(id)arg1;
- (void)markVideoAsDownloaded:(id)arg1;
- (void)notifyProgressUpdate;
- (void)notifyDownloadCompleted;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)downloader;
- (void)setDownloader:(id)arg1;
- (id)downloadingIdList;
- (void)setDownloadingIdList:(id)arg1;
- (id)taskList;
- (void)setTaskList:(id)arg1;
- (id)lock;
- (void)setLock:(id)arg1;
- (long long)totalCount;
- (void)setTotalCount:(long long)arg1;
- (long long)completedCount;
- (void)setCompletedCount:(long long)arg1;
- (void).cxx_destruct;
@end
