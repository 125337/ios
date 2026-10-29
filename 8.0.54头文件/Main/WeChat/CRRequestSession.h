@interface CRRequestSession : NSObject
{
    NSURLSession * _session; // +0x8
    NSOperationQueue * _queue; // +0x10
    NSMutableDictionary * _headers; // +0x18
}
+ (id)session;
+ (id)sessionWithURLSession:(id)arg1;
+ (id)sessionWithURLSession:(id)arg1 queue:(id)arg2;
- (id)initWithURLSession:(id)arg1 queue:(id)arg2;
- (void)setValue:(id)arg1 forHeader:(id)arg2;
- (void)dataTaskWithRequest:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)dataTaskWithRequest:(id)arg1 retryCount:(long long)arg2 retryWhere:(id /* block */)arg3 completionHandler:(id /* block */)arg4;
- (void)cancelAllRequests;
- (id)operationWithRequest:(id)arg1 retryCount:(long long)arg2 retryWhere:(id /* block */)arg3 completionHandler:(id /* block */)arg4;
- (id)session;
- (void)setSession:(id)arg1;
- (id)queue;
- (void)setQueue:(id)arg1;
- (id)headers;
- (void)setHeaders:(id)arg1;
- (void).cxx_destruct;
@end

