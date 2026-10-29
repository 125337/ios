@interface WAWebSocketHandler : NSObject <WAWebSocketTaskDelegate>
{
    NSString * _appID; // +0x8
    NSObject<OS_dispatch_queue> * _workerQueue; // +0x10
    WAWebSocketConfig * _webSocketConfig; // +0x18
    NSMutableArray * _arrTask; // +0x20
    id <WAWebSocketHandlerDelegate> _delegate; // +0x28
}
- (id)initWithAppID:(id)arg1 appVersion:(unsigned long long)arg2 workerQueue:(id)arg3 context:(id)arg4;
- (void)dealloc;
- (void)openWithCompatibleSingleConnection:(BOOL)arg1 taskID:(id)arg2 url:(id)arg3 httpHeaders:(id)arg4 isIgnoreCheckDomain:(BOOL)arg5 subProtocols:(id)arg6 context:(id)arg7 completionHandler:(id /* block */)arg8 openHandler:(id /* block */)arg9 closeHandler:(id /* block */)arg10 errorHandler:(id /* block */)arg11 messageHandler:(id /* block */)arg12;
- (void)closeWithCompatibleSingleConnection:(BOOL)arg1 taskID:(id)arg2 code:(long long)arg3 reason:(id)arg4 completionHandler:(id /* block */)arg5;
- (void)sendString:(id)arg1 withCompatibleSingleConnection:(BOOL)arg2 taskID:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)sendData:(id)arg1 withCompatibleSingleConnection:(BOOL)arg2 taskID:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)closeAllTaskWithReason:(id)arg1;
- (void)closeAllTaskAndReleaseImmediately;
- (BOOL)isReachMaxConcurrentCount;
- (unsigned long long)getTaskCount;
- (id)getCompatibleSingleConnectionTask;
- (id)getTaskWithTaskID:(id)arg1;
- (id)getAllTask;
- (void)addTask:(id)arg1;
- (void)removeTask:(id)arg1;
- (void)removeAllTask;
- (id)genNewSocketTaskID;
- (void)openSocketWithCompatibleSingleConnection:(BOOL)arg1 taskID:(id)arg2 url:(id)arg3 httpHeaders:(id)arg4 subProtocols:(id)arg5 context:(id)arg6 openHandler:(id /* block */)arg7 closeHandler:(id /* block */)arg8 errorHandler:(id /* block */)arg9 messageHandler:(id /* block */)arg10;
- (void)webSocketTaskDidEnd:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (void).cxx_destruct;
@end
