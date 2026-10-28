@interface MMCommonCgiUploadTask : NSObject <WCBaseCgiDelegate>
{
    BOOL _isRunning; // +0x8
    NSString * _taskId; // +0x10
    long long _retryCount; // +0x18
    MMCommonCgiUploadInfo * _taskInfo; // +0x20
    ParallelUploadRequest_Param * _initialParam; // +0x28
    NSString * _uploadId; // +0x30
    long long _maxRetryCount; // +0x38
    id <MMCommonCgiUploadTaskDelegate> _delegate; // +0x40
    WCBaseCgi * _uploadCgi; // +0x48
}
- (id)initWithTaskInfo:(id)arg1 delegate:(id)arg2;
- (void)startUploadTask;
- (void)stopUploadTask;
- (id)createUploadCgi;
- (void)baseCgi:(id)arg1 didGetResponse:(id)arg2;
- (void)baseCgi:(id)arg1 didFailWithError:(id)arg2 response:(id)arg3;
- (id)taskId;
- (void)setTaskId:(id)arg1;
- (long long)retryCount;
- (void)setRetryCount:(long long)arg1;
- (id)taskInfo;
- (void)setTaskInfo:(id)arg1;
- (id)initialParam;
- (void)setInitialParam:(id)arg1;
- (id)uploadId;
- (void)setUploadId:(id)arg1;
- (BOOL)isRunning;
- (void)setIsRunning:(BOOL)arg1;
- (long long)maxRetryCount;
- (void)setMaxRetryCount:(long long)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)uploadCgi;
- (void)setUploadCgi:(id)arg1;
- (void).cxx_destruct;
@end
