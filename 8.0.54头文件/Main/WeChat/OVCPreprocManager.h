@interface OVCPreprocManager : NSObject
{
    NSArray * _tasks; // +0x8
    NSMutableDictionary * _tasksByID; // +0x10
    SharedPtr<XVIPreprocManager> _backingManager; // +0x18
}
- (id)initWithPHAssets:(id)arg1;
- (id)initWithPreprocTasks:(id)arg1;
- (void)dealloc;
- (void)startProcessingWithTasksPrepareCompletionHandler:(id /* block */)arg1 taskStateUpdateHandler:(id /* block */)arg2 progressHandler:(id /* block */)arg3 completionHandler:(id /* block */)arg4;
- (void)cancelProcessing;
- (void)prepareTasksWithCompletion:(id /* block */)arg1;
- (void)internalStartWithTaskStateUpdateHandler:(id /* block */)arg1 progressHandler:(id /* block */)arg2 completionHandler:(id /* block */)arg3;
- (void).cxx_destruct;
- (id).cxx_construct;
@end

