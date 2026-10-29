@interface MJComposingCreationUploadCdnManager : NSObject
{
    NSMutableArray * _pendingTasks; // +0x8
    NSMutableDictionary * _runningTasks; // +0x10
    NSMutableArray * _retryQueue; // +0x18
    NSObject<OS_dispatch_queue> * _serialQueue; // +0x20
}
+ (id)sharedInstance;
- (id)init;
- (void)addUploadTask:(id)arg1;
- (void)cancelTaskWithTaskId:(id)arg1;
- (void)cancelAllTasks;
- (BOOL)isUploading;
- (void)checkPendingTasks;
- (void)checkRetryQueue;
- (void)startUploadTask:(id)arg1;
- (void)handleUploadSuccess:(id)arg1 cdnUrl:(id)arg2 md5:(id)arg3 fileSize:(unsigned long long)arg4;
- (void)handleUploadFail:(id)arg1 errorType:(long long)arg2 cdnRetCode:(long long)arg3 errorMsg:(id)arg4;
- (id)pendingTasks;
- (void)setPendingTasks:(id)arg1;
- (id)runningTasks;
- (void)setRunningTasks:(id)arg1;
- (id)retryQueue;
- (void)setRetryQueue:(id)arg1;
- (id)serialQueue;
- (void)setSerialQueue:(id)arg1;
- (void).cxx_destruct;
@end
