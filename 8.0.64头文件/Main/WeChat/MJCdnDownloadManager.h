@interface MJCdnDownloadManager : MMUserService <MMServiceProtocol>
{
    unsigned long long _maxRunningConcurrentCount; // +0x8
    OrderedDictionary * _pendingTasks; // +0x10
    NSMutableDictionary * _runningTasks; // +0x18
    NSMutableDictionary * _successTasks; // +0x20
}
- (id)init;
- (void)addTaskWithRequest:(id)arg1;
- (void)createPendingTaskWithRequest:(id)arg1;
- (void)removeTaskWithTaskKey:(id)arg1;
- (void)checkPendingTasks;
- (BOOL)_checkNextPendingTask;
- (void)runningTaskDidComplete:(id)arg1;
- (unsigned long long)maxRunningConcurrentCount;
- (void)setMaxRunningConcurrentCount:(unsigned long long)arg1;
- (id)pendingTasks;
- (void)setPendingTasks:(id)arg1;
- (id)runningTasks;
- (void)setRunningTasks:(id)arg1;
- (id)successTasks;
- (void)setSuccessTasks:(id)arg1;
- (void).cxx_destruct;
@end
