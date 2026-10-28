@interface TPDownloadCGIRequester : NSObject <NSURLSessionDataDelegate, NSURLSessionDelegate>
{
    int _maxRetryTimes; // +0x8
    int _retryInterval; // +0xc
    double _timeout; // +0x10
    NSURLSession * _session; // +0x18
    NSMutableDictionary * _retryItemsDict; // +0x20
    NSRecursiveLock * _retryLock; // +0x28
    NSOperationQueue * _operationQueue; // +0x30
    NSObject<OS_dispatch_queue> * _cgiRequestQueue; // +0x38
    NSObject<OS_dispatch_source> * _timer; // +0x40
    NSObject<OS_dispatch_semaphore> * _semaphore; // +0x48
}
+ (id)sharedInstance;
- (id)init;
- (void)initTimer;
- (id)session;
- (double)getTimeStamp;
- (void)requestWithUrlString:(id)arg1 taskId:(int)arg2 taskType:(int)arg3;
- (void)handleErrorWithUrlString:(id)arg1 taskType:(int)arg2 oldTaskId:(int)arg3 newTaskId:(int)arg4;
- (void)releaseRequest:(int)arg1;
- (void)URLSession:(id)arg1 didReceiveChallenge:(id)arg2 completionHandler:(id /* block */)arg3;
- (double)timeout;
- (void)setTimeout:(double)arg1;
- (int)maxRetryTimes;
- (void)setMaxRetryTimes:(int)arg1;
- (int)retryInterval;
- (void)setRetryInterval:(int)arg1;
- (void)setSession:(id)arg1;
- (id)retryItemsDict;
- (void)setRetryItemsDict:(id)arg1;
- (id)retryLock;
- (void)setRetryLock:(id)arg1;
- (id)operationQueue;
- (void)setOperationQueue:(id)arg1;
- (id)cgiRequestQueue;
- (void)setCgiRequestQueue:(id)arg1;
- (id)timer;
- (void)setTimer:(id)arg1;
- (id)semaphore;
- (void)setSemaphore:(id)arg1;
- (void).cxx_destruct;
@end
