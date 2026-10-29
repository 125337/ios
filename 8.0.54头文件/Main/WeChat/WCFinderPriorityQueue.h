@interface WCFinderPriorityQueue : NSObject
{
    NSMutableArray * _heap; // +0x8
}
- (id)init;
- (void)insert:(id)arg1;
- (id)popMax;
- (void)swim:(long long)arg1;
- (void)sink:(long long)arg1;
- (int)compare:(id)arg1 with:(id)arg2;
- (BOOL)contains:(id)arg1;
- (id)getTaskById:(id)arg1;
- (void)removeTaskById:(id)arg1;
- (unsigned long long)taskCount;
- (void)removeTaskByGroupId:(id)arg1;
- (void)removeExpiredTasks;
- (id)heap;
- (void)setHeap:(id)arg1;
- (void).cxx_destruct;
@end

