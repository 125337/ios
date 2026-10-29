@interface WCFinderTaskQueue : NSObject <WCFinderTaskWrapperDelegate>
{
    BOOL _needWakeup; // +0x8
    id _owner; // +0x10
    NSHashTable * _tasks; // +0x18
}
- (id)initWithOwner:(id)arg1;
- (id)init;
- (BOOL)hasTask:(id)arg1;
- (id)taskByName:(id)arg1;
- (void)executeTask:(id)arg1;
- (void)executeTask:(id)arg1 builder:(id /* block */)arg2;
- (void)executeImpediately;
- (void)tryWakeup;
- (void)tryNextTask;
- (void)runTask:(id)arg1;
- (void)cancelAll;
- (void)onTaskFinish:(id)arg1;
- (void)onTaskFullFill:(id)arg1 finishBlock:(id /* block */)arg2;
- (id)owner;
- (void)setOwner:(id)arg1;
- (id)tasks;
- (void)setTasks:(id)arg1;
- (BOOL)needWakeup;
- (void)setNeedWakeup:(BOOL)arg1;
- (void).cxx_destruct;
@end

