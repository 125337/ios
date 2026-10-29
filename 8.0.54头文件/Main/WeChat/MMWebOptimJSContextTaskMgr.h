@interface MMWebOptimJSContextTaskMgr : MMUserService <MMServiceProtocol>
{
    MMWebOptimJSContextTaskLoader * _taskLoader; // +0x8
    NSMutableDictionary * _dicTaskId2Task; // +0x10
    JSVirtualMachine * _jsVirtualMachine; // +0x18
}
- (void)onServiceInit;
- (void)onServiceClearData;
- (void)launchTaskWithConfig:(id)arg1 onSuccess:(id /* block */)arg2 onFailed:(id /* block */)arg3;
- (id)taskWithConfig:(id)arg1;
- (id)taskWithTaskId:(id)arg1;
- (void)closeTask:(id)arg1;
- (void)closeTaskWithTaskId:(id)arg1;
- (id)taskWithUrl:(id)arg1;
- (void)closeAllTask;
- (id)jsVirtualMachine;
- (void)callBackWithSuccessBlock:(id /* block */)arg1 config:(id)arg2 startTime:(unsigned long long)arg3;
- (void)callBackWithFailBlock:(id /* block */)arg1 config:(id)arg2 startTime:(unsigned long long)arg3;
- (id)taskLoader;
- (void)setTaskLoader:(id)arg1;
- (id)dicTaskId2Task;
- (void)setDicTaskId2Task:(id)arg1;
- (void)setJsVirtualMachine:(id)arg1;
- (void).cxx_destruct;
@end

