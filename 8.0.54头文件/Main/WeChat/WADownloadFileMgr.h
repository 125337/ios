@interface WADownloadFileMgr : MMUserService <WAAppTaskMgrExt, MMServiceProtocol>
{
    NSMutableDictionary * _dicAppID2DownloadHandler; // +0x8
    NSObject<OS_dispatch_queue> * _workerQueue; // +0x10
    unsigned int _taskIDSequence; // +0x18
}
- (void)onServiceInit;
- (void)onServiceClearData;
- (id)genDownloadTaskID;
- (void)downloadFileWithAppID:(id)arg1 appVersion:(unsigned long long)arg2 isIgnoreCheckDomain:(BOOL)arg3 taskID:(id)arg4 url:(id)arg5 httpHeaders:(id)arg6 context:(id)arg7 isUseCronet:(BOOL)arg8 useQuic:(BOOL)arg9 useHttp2:(BOOL)arg10 useCache:(BOOL)arg11 appType:(unsigned int)arg12 completionHandler:(id /* block */)arg13 headerHandler:(id /* block */)arg14 progressHandler:(id /* block */)arg15;
- (BOOL)abortDownloadTask:(id)arg1 taskID:(id)arg2 getError:(id *)arg3;
- (id)getAndNewDownloadHandlerIfNotExistWithAppID:(id)arg1 appVersion:(unsigned long long)arg2 context:(id)arg3;
- (id)getDownloadHandler:(id)arg1;
- (void)clearDownloadHandlerWithAppID:(id)arg1;
- (void)interruptDownloadHandlerWithAppID:(id)arg1;
- (void)clearAllDownloadHandler;
- (void)onAppTaskTerminate:(id)arg1;
- (void)onAppTaskBackgroundNetworkInterruptedTimeout:(id)arg1;
- (void).cxx_destruct;
@end

