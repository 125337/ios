@interface MMLivePollingFetchEngine : NSObject
{
    BOOL _hasStoped; // +0x8
    MMLiveTaskId * _taskId; // +0x10
    id /* block */ _requestModelMaker; // +0x18
    long long _minPollingInterval; // +0x20
    NSData * _lastBuffer; // +0x28
    MMPollingFetchQueue * _queue; // +0x30
    NSTimer * _timer; // +0x38
    NSMutableDictionary * _executeTaskMap; // +0x40
    NSMutableDictionary * _taskIntervalCache; // +0x48
}
- (id)initWithTaskId:(id)arg1 requestParamsMaker:(id /* block */)arg2;
- (void)dealloc;
- (id)init;
- (void)addTasksIfNotExistsWithCmdIdList:(id)arg1;
- (void)addTasksIfNotExistsWithCmdIdList:(id)arg1 waitingInfo:(id)arg2;
- (void)mainThread_addTasksIfNotExistsWithCmdIdList:(id)arg1 waitingInfo:(id)arg2;
- (void)registerCmdIdsNeedWaiting:(id)arg1 withWaitingInfo:(id)arg2;
- (BOOL)adjustTaskInterval:(unsigned long long)arg1 forCmdId:(id)arg2;
- (void)executeTasksByCmdIdList:(id)arg1;
- (void)executeTasksByExecuteModels:(id)arg1;
- (void)mainThread_executeTasksByExecuteModels:(id)arg1;
- (void)removeTasksByCmdIdList:(id)arg1;
- (void)mainThread_removeTasksByCmdIdList:(id)arg1;
- (void)removeAllTasks;
- (void)mainThread_removeAllTasks;
- (void)addOrReplaceItems:(id)arg1;
- (void)executeTasks:(id)arg1 withModels:(id)arg2;
- (void)_executeTasks:(id)arg1 withModels:(id)arg2;
- (void)startIfNeed;
- (void)_start;
- (void)timerEvent;
- (void)stopTimerIfNeed;
- (void)_stopTimer;
- (void)stop;
- (long long)minPollingInterval;
- (long long)syncExtraInfoMergeInterval;
- (long long)syncExtraInfoMinSleepInterval;
- (id)taskId;
- (id /* block */)requestModelMaker;
- (void)setRequestModelMaker:(id /* block */)arg1;
- (void)setMinPollingInterval:(long long)arg1;
- (id)lastBuffer;
- (void)setLastBuffer:(id)arg1;
- (id)queue;
- (id)timer;
- (void)setTimer:(id)arg1;
- (id)executeTaskMap;
- (id)taskIntervalCache;
- (BOOL)hasStoped;
- (void)setHasStoped:(BOOL)arg1;
- (void).cxx_destruct;
@end
