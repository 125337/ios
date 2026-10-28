@interface WCFinderTaskPriorityQueue : NSObject <WCFinderTaskSchedulerStrategyProtocol>
{
    priority_queue<WCFinderTaskPQTask *, std::vector<WCFinderTaskPQTask *>, WCFinderTaskPQCMP> _queue; // +0x8
    NSRecursiveLock * _recursiveLock; // +0x28
    BOOL _ignoreNonEssentialTasks; // +0x30
}
- (void)dealloc;
- (id)init;
- (BOOL)empty;
- (unsigned long long)numberOfTasks;
- (void)addTask:(id /* block */)arg1 priority:(long long)arg2 asyncEnd:(BOOL)arg3;
- (void)executeTask;
- (void)removeTopTask;
- (void)clearTasks;
- (void)ignoreNonEssentialTasks:(BOOL)arg1;
- (id)createFinderTaskPQTask:(id /* block */)arg1 priority:(unsigned long long)arg2 time:(double)arg3 asyncEnd:(BOOL)arg4;
- (void).cxx_destruct;
- (id).cxx_construct;
@end
