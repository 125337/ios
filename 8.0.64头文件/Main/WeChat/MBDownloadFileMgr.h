@interface MBDownloadFileMgr : MMUserService <MMServiceProtocol>
{
    NSMutableDictionary * _dicBizName2DownloadHandler; // +0x8
    NSObject<OS_dispatch_queue> * _workerQueue; // +0x10
    unsigned int _taskIDSequence; // +0x18
}
- (void)onServiceInit;
- (void)onServiceClearData;
- (void)onBizPause:(id)arg1;
- (void)onBizDestory:(id)arg1;
- (id)genDownloadTaskID;
- (void)downloadFileWithBizName:(id)arg1 taskID:(id)arg2 url:(id)arg3 httpHeaders:(id)arg4 context:(id)arg5 completionHandler:(id /* block */)arg6 headerHandler:(id /* block */)arg7 progressHandler:(id /* block */)arg8;
- (BOOL)abortDownloadTask:(id)arg1 taskID:(id)arg2 getError:(id *)arg3;
- (id)getAndNewDownloadHandlerIfNotExistWithBizName:(id)arg1 context:(id)arg2;
- (id)getDownloadHandler:(id)arg1;
- (void)clearDownloadHandlerWithBizName:(id)arg1;
- (void)interruptDownloadHandlerWithBizName:(id)arg1;
- (void)clearAllDownloadHandler;
- (void).cxx_destruct;
@end
