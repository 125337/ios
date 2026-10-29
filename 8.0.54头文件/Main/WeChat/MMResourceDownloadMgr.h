@interface MMResourceDownloadMgr : NSObject <MMResourceDownloadTaskDelegate>
{
    NSObject<OS_dispatch_queue> * _workQueue; // +0x8
    NSMutableArray * _taskWaitQueue; // +0x10
    NSMutableDictionary * _dicDownloadingTask; // +0x18
    id <MMResDownloadMgrDelegate> _downloadMgrDelegate; // +0x20
}
- (id)init;
- (void)dealloc;
- (void)addDownloadTask:(id)arg1;
- (void)cancelDownload:(id)arg1;
- (void)cancelDownload:(unsigned int)arg1 WithSubtype:(unsigned int)arg2;
- (void)workThread_addDownloadTask:(id)arg1;
- (void)workThread_cancelDownload:(id)arg1;
- (void)workThread_cancelDownload:(unsigned int)arg1 WithSubtype:(unsigned int)arg2;
- (BOOL)isTaskInWaitOrDownloadQueue:(id)arg1;
- (unsigned long long)insertIndexInWaitQueue:(id)arg1;
- (void)addDownloadTaskToWaitQueue:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)removeDownloadTasksFromWaitQueue:(id)arg1;
- (void)addDownloadTaskToDonwloadQueue:(id)arg1;
- (void)removeDownloadTaskFromDownloadQueue:(id)arg1;
- (void)checkQueue;
- (id)retryTaskFromDownloadTask:(id)arg1;
- (void)handleDownloadTaskFinish:(long long)arg1 downloadData:(id)arg2 task:(id)arg3 isRetry:(BOOL *)arg4;
- (void)notifyDownloadTaskEnd:(long long)arg1 downloadData:(id)arg2 task:(id)arg3;
- (void)onDownloadFinish:(long long)arg1 downloadData:(id)arg2 task:(id)arg3;
- (void)workThread_onDownloadFinish:(long long)arg1 downloadData:(id)arg2 task:(id)arg3;
- (id)downloadMgrDelegate;
- (void)setDownloadMgrDelegate:(id)arg1;
- (void).cxx_destruct;
@end

