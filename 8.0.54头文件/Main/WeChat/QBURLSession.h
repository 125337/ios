@interface QBURLSession : NSObject <NSURLSessionTaskDelegate, NSURLSessionDataDelegate>
{
    NSMutableDictionary * _taskDelegates; // +0x8
    NSURLSession * _session; // +0x10
}
+ (id)sharedInstance;
- (id)init;
- (id)dataTaskWithRequest:(id)arg1 delegate:(id)arg2;
- (void)cancelTask:(id)arg1;
- (id)delegateForTask:(id)arg1;
- (void)URLSession:(id)arg1 task:(id)arg2 willPerformHTTPRedirection:(id)arg3 newRequest:(id)arg4 completionHandler:(id /* block */)arg5;
- (void)URLSession:(id)arg1 task:(id)arg2 didReceiveChallenge:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3;
- (void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveResponse:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveData:(id)arg3;
- (void)URLSession:(id)arg1 dataTask:(id)arg2 willCacheResponse:(id)arg3 completionHandler:(id /* block */)arg4;
- (void).cxx_destruct;
@end

