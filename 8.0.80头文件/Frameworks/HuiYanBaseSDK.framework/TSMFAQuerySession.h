@interface TSMFAQuerySession : TSMFAQuery
{
    id /* block */ _dataSourceRequest; // +0x8
    NSMutableArray * _onQueueTasks; // +0x10
    TSMFAQuery * _currentRunningTask; // +0x18
}
+ (id)session;
+ (id)tasksForNewSession;
- (id)initWithTasks:(id)arg1;
- (id)popTopTask;
- (void)insertTaskToFrontOfQueue:(id)arg1;
- (void)insertTaskToBackOfQueue:(id)arg1;
- (void)executeWithCompletion:(id /* block */)arg1;
- (void)cancel;
- (void)runTasksWithCompletion:(id /* block */)arg1;
- (id)onSessionBegin;
- (id)onSessionFinish;
- (void)onTaskWillBegin:(id)arg1 shouldBeSkiped:(BOOL *)arg2;
- (void)onTaskBegin:(id)arg1 shouldBeContinued:(BOOL *)arg2;
- (void)onTaskCompletion:(id)arg1 withError:(id)arg2 shouldBeContinued:(BOOL *)arg3;
- (id /* block */)dataSourceRequest;
- (void)setDataSourceRequest:(id /* block */)arg1;
- (id)onQueueTasks;
- (void)setOnQueueTasks:(id)arg1;
- (id)currentRunningTask;
- (void)setCurrentRunningTask:(id)arg1;
- (void).cxx_destruct;
@end
