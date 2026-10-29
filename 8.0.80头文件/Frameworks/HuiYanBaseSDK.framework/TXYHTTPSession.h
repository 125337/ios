@interface TXYHTTPSession : NSObject <NSURLSessionDelegate, NSURLSessionTaskDelegate>
{
    NSOperationQueue * _delegateQueue; // +0x8
    NSURLSession * _session; // +0x10
    NSURLSession * _session2; // +0x18
    id /* block */ _sessionDidReceiveAuthenticationChallenge; // +0x20
    id /* block */ _taskDidReceiveAuthenticationChallenge; // +0x28
}
- (void)dealloc;
- (id)init;
- (void)clear;
- (id)tDataTaskWithRequest:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)tDataDownloadTaskWithUrl:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)URLSession:(id)arg1 didBecomeInvalidWithError:(id)arg2;
- (void)URLSession:(id)arg1 didReceiveChallenge:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)URLSession:(id)arg1 task:(id)arg2 didReceiveChallenge:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)tSetSessionDidReceiveAuthenticationChallengeBlock:(id /* block */)arg1;
- (void)tSetTaskDidReceiveAuthenticationChallengeBlock:(id /* block */)arg1;
- (id)delegateQueue;
- (void)setDelegateQueue:(id)arg1;
- (id)session;
- (void)setSession:(id)arg1;
- (id)session2;
- (void)setSession2:(id)arg1;
- (id /* block */)sessionDidReceiveAuthenticationChallenge;
- (void)setSessionDidReceiveAuthenticationChallenge:(id /* block */)arg1;
- (id /* block */)taskDidReceiveAuthenticationChallenge;
- (void)setTaskDidReceiveAuthenticationChallenge:(id /* block */)arg1;
- (void).cxx_destruct;
@end
