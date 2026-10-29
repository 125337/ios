@interface WCFinderTaskScheduler : NSObject
{
    id <WCFinderTaskSchedulerStrategyProtocol> _strategy; // +0x8
    unsigned long long _frequencyCounter; // +0x10
    BOOL _ignoreNonEssentialTasks; // +0x18
    BOOL _paused; // +0x19
    NSObject<OS_dispatch_queue> * _taskQueue; // +0x20
    unsigned long long _maxNumberOfTasks; // +0x28
    unsigned long long _executeNumber; // +0x30
    unsigned long long _executeFrequency; // +0x38
}
+ (id)schedulerWithStrategy:(long long)arg1;
- (id)initWithStrategyObject:(id)arg1;
- (id)initWithStrategy:(long long)arg1;
- (void)addTask:(id /* block */)arg1;
- (void)addTask:(id /* block */)arg1 priority:(long long)arg2 asyncEnd:(BOOL)arg3;
- (void)setPaused:(BOOL)arg1;
- (void)start;
- (void)clearTasks;
- (void)setIgnoreNonEssentialTasks:(BOOL)arg1;
- (unsigned long long)numberOfTasks;
- (BOOL)empty;
- (void)executeTasks;
- (void)setMaxNumberOfTasks:(unsigned long long)arg1;
- (void)setExecuteFrequency:(unsigned long long)arg1;
- (id)taskQueue;
- (void)setTaskQueue:(id)arg1;
- (unsigned long long)maxNumberOfTasks;
- (unsigned long long)executeNumber;
- (void)setExecuteNumber:(unsigned long long)arg1;
- (unsigned long long)executeFrequency;
- (BOOL)ignoreNonEssentialTasks;
- (BOOL)paused;
- (void).cxx_destruct;
@end

