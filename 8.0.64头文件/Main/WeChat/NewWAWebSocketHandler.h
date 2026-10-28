@interface NewWAWebSocketHandler : NSObject <WCWebSocketMgrExt>
{
    NSString * _appID; // +0x8
    WAAppTask * _appTask; // +0x10
    NSObject<OS_dispatch_queue> * _workerQueue; // +0x18
    WAWebSocketConfig * _webSocketConfig; // +0x20
    unsigned int _appType; // +0x28
    unsigned int _appDebugModeType; // +0x2c
    BOOL _tcpNoDelay; // +0x30
    BOOL _perMessageDeflate; // +0x31
    BOOL _isOpenProfile; // +0x32
    NSMutableDictionary * _dicTaskID2WCID; // +0x38
    NSMutableDictionary * _dicWCID2TaskIDAndHandler; // +0x40
    unsigned int _workerId; // +0x48
}
- (id)initWithAppID:(id)arg1 appVersion:(unsigned long long)arg2 appType:(unsigned int)arg3 appDebugModeType:(unsigned int)arg4 workerQueue:(id)arg5 context:(id)arg6;
- (void)dealloc;
- (void)openWithTaskID:(id)arg1 url:(id)arg2 httpHeaders:(id)arg3 isIgnoreCheckDomain:(BOOL)arg4 subProtocols:(id)arg5 context:(id)arg6 isOpenProfile:(BOOL)arg7 completionHandler:(id /* block */)arg8 openHandler:(id /* block */)arg9 closeHandler:(id /* block */)arg10 errorHandler:(id /* block */)arg11 messageHandler:(id /* block */)arg12;
- (void)closeWithTaskID:(id)arg1 code:(long long)arg2 reason:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)sendString:(id)arg1 taskID:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)sendData:(id)arg1 taskID:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)closeAllTaskWithReason:(id)arg1;
- (void)closeAllTaskAndReleaseImmediately;
- (BOOL)isReachMaxConcurrentCount;
- (unsigned long long)getTaskCount;
- (id)getTaskWithTaskID:(id)arg1;
- (id)getTaskHandlerWithWCID:(id)arg1;
- (id)getAllTask;
- (void)addTask:(id)arg1 wcwssID:(id)arg2 wahandler:(id)arg3;
- (void)removeTask:(id)arg1 wcwssID:(id)arg2;
- (void)removeAllTask:(BOOL)arg1;
- (id)genNewSocketTaskID;
- (void)webSocket:(unsigned int)arg1 group:(id)arg2 didReceiveMessage:(id)arg3;
- (void)webSocket:(unsigned int)arg1 group:(id)arg2 didOpenWithCode:(long long)arg3 success:(BOOL)arg4 headers:(id)arg5 profiles:(id)arg6 msg:(id)arg7;
- (void)webSocket:(unsigned int)arg1 group:(id)arg2 didCloseWithCode:(long long)arg3 reason:(id)arg4;
- (void)destroyWeAppAllSocket:(id)arg1;
- (unsigned int)workerId;
- (void)setWorkerId:(unsigned int)arg1;
- (void).cxx_destruct;
@end
