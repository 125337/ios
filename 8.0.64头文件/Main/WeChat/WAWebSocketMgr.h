@interface WAWebSocketMgr : MMUserService <WAWebSocketHandlerDelegate, WAAppTaskMgrExt, MMServiceProtocol>
{
    NSMutableDictionary * _dicAppID2WebSocketHandler; // +0x8
    NSObject<OS_dispatch_queue> * _workerQueue; // +0x10
    unsigned int _taskIDSequence; // +0x18
}
- (void)onServiceInit;
- (void)onServiceClearData;
- (id)genSocketTaskID;
- (void)connectSocketWithAppID:(id)arg1 compatibleSingleConnection:(BOOL)arg2 taskID:(id)arg3 appVersion:(unsigned long long)arg4 isIgnoreCheckDomain:(BOOL)arg5 url:(id)arg6 httpHeaders:(id)arg7 subProtocols:(id)arg8 context:(id)arg9 completionHandler:(id /* block */)arg10 openHandler:(id /* block */)arg11 closeHandler:(id /* block */)arg12 errorHandler:(id /* block */)arg13 messageHandler:(id /* block */)arg14;
- (void)closeSocketWithAppID:(id)arg1 compatibleSingleConnection:(BOOL)arg2 taskID:(id)arg3 code:(long long)arg4 reason:(id)arg5 completionHandler:(id /* block */)arg6;
- (void)sendString:(id)arg1 withAppID:(id)arg2 compatibleSingleConnection:(BOOL)arg3 taskID:(id)arg4 completionHandler:(id /* block */)arg5;
- (void)sendData:(id)arg1 withAppID:(id)arg2 compatibleSingleConnection:(BOOL)arg3 taskID:(id)arg4 completionHandler:(id /* block */)arg5;
- (id)getAndNewHandlerIfNotExistWithAppID:(id)arg1 appVersion:(unsigned long long)arg2 context:(id)arg3;
- (id)getHandlerWithAppID:(id)arg1;
- (void)closeAndDeleteHandlerWithAppID:(id)arg1;
- (void)interruptHandlerWithAppID:(id)arg1;
- (void)closeAndDeleteAllWebSocketHandler;
- (void)onAppTaskTerminate:(id)arg1;
- (void)onAppTaskBackgroundNetworkInterruptedTimeout:(id)arg1;
- (id)getNewSocketTaskID;
- (void).cxx_destruct;
@end
