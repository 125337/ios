@interface WCFinderTaskStdQueue : NSObject <WCFinderTaskSchedulerStrategyProtocol>
{
    deque<WCFinderTaskFIFOTask *, std::allocator<WCFinderTaskFIFOTask *>> _deque; // +0x8
    NSRecursiveLock * _recursiveLock; // +0x38
    BOOL _ignoreNonEssentialTasks; // +0x40
    unsigned long long _maxNumberOfTasks; // +0x48
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
- (id)createFinderTaskFIFOTaskMake:(id /* block */)arg1 priority:(unsigned long long)arg2 asyncEnd:(BOOL)arg3;
- (unsigned long long)maxNumberOfTasks;
- (void)setMaxNumberOfTasks:(unsigned long long)arg1;
- (void).cxx_destruct;
- (id).cxx_construct;
@end
