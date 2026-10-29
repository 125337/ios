@interface CRURLRequestOperation : CRAsyncOperation
{
    NSURLSessionTask * _task; // +0x8
    NSURLSession * _session; // +0x10
    NSURLRequest * _request; // +0x18
    long long _retryCount; // +0x20
    id /* block */ _completionHandler; // +0x28
}
+ (id)operationWithRequest:(id)arg1 session:(id)arg2 retryCount:(long long)arg3 completionHandler:(id /* block */)arg4;
- (id)initWithRequest:(id)arg1 retryCount:(long long)arg2 sesssion:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)startAsyncOperation;
- (void)finish;
- (void)dealloc;
- (id)task;
- (void)setTask:(id)arg1;
- (id)session;
- (void)setSession:(id)arg1;
- (id)request;
- (void)setRequest:(id)arg1;
- (long long)retryCount;
- (void)setRetryCount:(long long)arg1;
- (id /* block */)completionHandler;
- (void)setCompletionHandler:(id /* block */)arg1;
- (void).cxx_destruct;
@end

