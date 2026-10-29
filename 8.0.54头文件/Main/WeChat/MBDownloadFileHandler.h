@interface MBDownloadFileHandler : NSObject <MBDownloadFileTaskDelegate>
{
    NSString * _bizName; // +0x8
    unsigned int _maxTaskCount; // +0x10
    NSObject<OS_dispatch_queue> * _workerQueue; // +0x18
    NSObject<OS_dispatch_queue> * _dnsQueue; // +0x20
    NSMutableArray * _arrDownloadTask; // +0x28
}
- (id)initWithBizName:(id)arg1 workerQueue:(id)arg2 context:(id)arg3;
- (void)startDownloadTaskWithUrl:(id)arg1 taskID:(id)arg2 httpHeaders:(id)arg3 context:(id)arg4 completionHandler:(id /* block */)arg5 headerHandler:(id /* block */)arg6 progressHandler:(id /* block */)arg7;
- (id)GetHttpHeaderReferer;
- (BOOL)abortDownloadTask:(id)arg1 getError:(id *)arg2;
- (void)invalidate;
- (BOOL)isExceedMaxTaskCount;
- (id)getNewDownloadTask:(id)arg1;
- (id)getDownloadTaskWithTaskID:(id)arg1;
- (void)deleteTask:(id)arg1;
- (void)cancelAndDeleteAllTaskWithError:(id)arg1;
- (void)downloadFileTaskDidEnd:(id)arg1;
- (void).cxx_destruct;
@end

