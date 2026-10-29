@interface WCFinderPriorityQueue : NSObject
{
    NSMutableArray * _heap; // +0x8
}
- (id)init;
- (void)insert:(id)arg1;
- (id)getMax;
- (id)popMax;
- (id)getTaskById:(id)arg1;
- (id)getTaskListByGroupId:(id)arg1;
- (void)removeTaskById:(id)arg1;
- (unsigned long long)taskCount;
- (void)removeTaskByGroupId:(id)arg1;
- (void)swim:(long long)arg1 atHeap:(id)arg2;
- (void)sink:(long long)arg1 atHeap:(id)arg2;
- (int)compare:(id)arg1 with:(id)arg2;
- (BOOL)contains:(id)arg1;
- (void)_removeExpiredTasksAtHeap:(id)arg1;
- (id)_getMax;
- (void)_insert:(id)arg1;
- (void)_removeTaskFromHeap:(id)arg1 byIndex:(long long)arg2;
- (id)_getTaskById:(id)arg1;
- (void)_removeTaskById:(id)arg1;
- (void)_removeTaskByGroupId:(id)arg1;
- (id)heap;
- (void)setHeap:(id)arg1;
- (void).cxx_destruct;
@end
