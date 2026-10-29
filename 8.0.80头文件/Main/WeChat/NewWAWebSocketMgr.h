@interface NewWAWebSocketMgr : MMUserService <WAAppTaskMgrExt, MMServiceProtocol>
{
    NSMutableDictionary * _dicAppID2WebSocketHandler; // +0x8
    NSObject<OS_dispatch_queue> * _workerQueue; // +0x10
    unsigned int _taskIDSequence; // +0x18
}
- (void)onServiceInit;
- (void)onServiceClearData;
- (id)genSocketTaskID;
- (void)connectSocketWithAppID:(id)arg1 taskID:(id)arg2 appVersion:(unsigned long long)arg3 appType:(unsigned int)arg4 appDebugModeType:(unsigned int)arg5 isIgnoreCheckDomain:(BOOL)arg6 isOpenProfile:(BOOL)arg7 url:(id)arg8 httpHeaders:(id)arg9 subProtocols:(id)arg10 context:(id)arg11 completionHandler:(id /* block */)arg12 openHandler:(id /* block */)arg13 closeHandler:(id /* block */)arg14 errorHandler:(id /* block */)arg15 messageHandler:(id /* block */)arg16;
- (void)closeSocketWithAppID:(id)arg1 taskID:(id)arg2 code:(long long)arg3 reason:(id)arg4 completionHandler:(id /* block */)arg5;
- (void)sendString:(id)arg1 withAppID:(id)arg2 taskID:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)sendData:(id)arg1 withAppID:(id)arg2 taskID:(id)arg3 completionHandler:(id /* block */)arg4;
- (id)getAndNewHandlerIfNotExistWithAppID:(id)arg1 appVersion:(unsigned long long)arg2 appType:(unsigned int)arg3 appDebugModeType:(unsigned int)arg4 context:(id)arg5;
- (id)getHandlerWithAppID:(id)arg1;
- (void)closeAndDeleteHandlerWithAppID:(id)arg1;
- (void)interruptHandlerWithAppID:(id)arg1;
- (void)closeAndDeleteAllWebSocketHandler;
- (void)onAppTaskTerminate:(id)arg1;
- (void)onAppTaskBackgroundNetworkInterruptedTimeout:(id)arg1;
- (void).cxx_destruct;
@end
