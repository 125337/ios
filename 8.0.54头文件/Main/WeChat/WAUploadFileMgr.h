@interface WAUploadFileMgr : MMUserService <WAAppTaskMgrExt, MMServiceProtocol>
{
    NSMutableDictionary * _dicAppID2UploadHandler; // +0x8
    NSObject<OS_dispatch_queue> * _workerQueue; // +0x10
    unsigned int _taskIDSequence; // +0x18
}
- (id)init;
- (void)onServiceInit;
- (void)onServiceClearData;
- (id)genUploadTaskID;
- (void)uploadFileWithAppID:(id)arg1 appVersion:(unsigned long long)arg2 isIgnoreCheckDomain:(BOOL)arg3 taskID:(id)arg4 url:(id)arg5 filePath:(id)arg6 fileFieldName:(id)arg7 httpHeaders:(id)arg8 formFields:(id)arg9 context:(id)arg10 completionHandler:(id /* block */)arg11;
- (BOOL)abortUploadTask:(id)arg1 taskID:(id)arg2 getError:(id *)arg3;
- (id)getAndNewUploadHandlerIfNotExistWithAppID:(id)arg1 appVersion:(unsigned long long)arg2 context:(id)arg3;
- (id)getUploadHandler:(id)arg1;
- (void)clearAllUploadHandler;
- (void)clearUploadHandlerWithAppID:(id)arg1;
- (void)interruptUploadHandlerWithAppID:(id)arg1;
- (void)onAppTaskTerminate:(id)arg1;
- (void)onAppTaskBackgroundNetworkInterruptedTimeout:(id)arg1;
- (void).cxx_destruct;
@end

