@interface WARequestMgr : MMUserService <WAAppTaskMgrExt, MMServiceProtocol>
{
    NSMutableDictionary * _dicAppID2RequestHandler; // +0x8
    NSObject<OS_dispatch_queue> * _workerQueue; // +0x10
    unsigned int _taskIDSequence; // +0x18
}
- (void)onServiceInit;
- (void)onServiceClearData;
- (id)genRequestTaskID;
- (void)requestWithAppID:(id)arg1 appVersion:(unsigned long long)arg2 isIgnoreCheckDomain:(BOOL)arg3 taskID:(id)arg4 url:(id)arg5 ip:(id)arg6 port:(unsigned int)arg7 host:(id)arg8 forbidReuse:(BOOL)arg9 data:(id)arg10 httpHeaders:(id)arg11 method:(id)arg12 context:(id)arg13 isUseCronet:(BOOL)arg14 useQuic:(BOOL)arg15 useHttp2:(BOOL)arg16 useCache:(BOOL)arg17 useChunked:(BOOL)arg18 appType:(unsigned int)arg19 forceCellularNetwork:(BOOL)arg20 chunkedHandler:(id /* block */)arg21 headersReceivedHandler:(id /* block */)arg22 completionHandler:(id /* block */)arg23;
- (BOOL)abortRequestTask:(id)arg1 taskID:(id)arg2 getError:(id *)arg3;
- (void)clearAllRequestHandler;
- (void)clearRequestHandlerWithAppID:(id)arg1;
- (void)interruptRequestHandlerWithAppID:(id)arg1;
- (id)getAndNewRequestHandlerIfNotExistWithAppID:(id)arg1 appVersion:(unsigned long long)arg2 context:(id)arg3;
- (id)getRequestHandler:(id)arg1;
- (BOOL)verifyMethod:(id *)arg1;
- (void)onAppTaskTerminate:(id)arg1;
- (void)onAppTaskBackgroundNetworkInterruptedTimeout:(id)arg1;
- (void).cxx_destruct;
@end
