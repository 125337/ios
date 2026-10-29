@interface WCURLSession : NSObject <WCURLSessionTaskInternalDelegate>
{
    WCURLSessionConfiguration * _configuration; // +0x8
    id <WCURLSessionDelegate> _delegate; // +0x10
    unsigned long long _reqeustId; // +0x18
    NSMutableArray * _taskArray; // +0x20
    NSRecursiveLock * _lock; // +0x28
}
+ (id)sessionWithConfiguration:(id)arg1;
+ (id)sessionWithConfiguration:(id)arg1 delegate:(id)arg2;
- (void)sessionTaskOnResume:(id)arg1;
- (void)sessionTaskOnCancel:(id)arg1;
- (void)removeTask:(id)arg1;
- (void)sessionTaskOnComplete:(id)arg1;
- (void)addTask:(id)arg1;
- (void)urlSessionTask:(id)arg1 didCompleteWithError:(id)arg2;
- (void)urlSessionTask:(id)arg1 onProgressUpdate:(unsigned long long)arg2 currentBytes:(unsigned long long)arg3;
- (void)urlSessionTask:(id)arg1 onCornetTaskProgressUpdate:(long long)arg2 currentBytes:(unsigned long long)arg3;
- (void)urlSessionTask:(id)arg1 didReceiveResponse:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)onCornetTaskProgressUpdate:(long long)arg1 currentBytes:(unsigned long long)arg2 taskId:(id)arg3;
- (BOOL)checkDelegateConfirmsToProtocol:(id)arg1 selector:(SEL)arg2;
- (void)urlSessionTask:(id)arg1 didReceiveData:(id)arg2;
- (unsigned long long)generateAndIncreaseRequestId;
- (id)downloadTaskWithRequest:(id)arg1;
- (id)configuration;
- (void)setConfiguration:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (unsigned long long)reqeustId;
- (void)setReqeustId:(unsigned long long)arg1;
- (id)taskArray;
- (void)setTaskArray:(id)arg1;
- (id)lock;
- (void)setLock:(id)arg1;
- (void).cxx_destruct;
@end

