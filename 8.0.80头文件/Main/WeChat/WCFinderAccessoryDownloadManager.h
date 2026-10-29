@interface WCFinderAccessoryDownloadManager : NSObject
{
    BOOL _isPaused; // +0x8
    WCFinderAccessoryDownloadHeap * _waittingHeap; // +0x10
    NSMutableSet * _downloadTaskSet; // +0x18
    NSObject<OS_dispatch_queue> * _taskSetQueue; // +0x20
}
- (void)startDownloadIfNeeded;
- (void)addDownloadTask:(id)arg1;
- (void)addDownloadtasks:(id)arg1;
- (void)removeDownloadTaskWithIdentifierKey:(id)arg1;
- (void)removeAllDownloadTasksWithGroupId:(id)arg1;
- (void)removeAllDownloadTasks;
- (void)pauseAllDownloadTasks;
- (void)resumeAllDownloadTasks;
- (void)changeDownloadTaskWithIdentifierKey:(id)arg1 toPriority:(long long)arg2;
- (void)addTaskToHeap:(id)arg1;
- (id)waittingHeap;
- (id)downloadTaskSet;
- (id)taskSetQueue;
- (void)setWaittingHeap:(id)arg1;
- (void)setDownloadTaskSet:(id)arg1;
- (void)setTaskSetQueue:(id)arg1;
- (BOOL)isPaused;
- (void)setIsPaused:(BOOL)arg1;
- (void).cxx_destruct;
@end
