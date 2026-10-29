@interface QBNetwork : NSObject <NSURLConnectionDelegate, NSURLConnectionDataDelegate, NSURLSessionTaskDelegate, NSURLSessionDataDelegate, QBASIHTTPRequestDelegate>
{
    NSURLSessionTask * _nsurlSessionTask; // +0x8
    NSURLConnection * _nsurlConnection; // +0x10
    BOOL _iscancel; // +0x18
    NSThread * _currentThread; // +0x20
    BOOL _isProtocol; // +0x28
    QBASIHTTPRequest * _asiHttpRequest; // +0x30
    NSURLRequest * _currentRequest; // +0x38
    NSError * _httpsError; // +0x40
    id <QBNetworkDelegate> _delegate; // +0x48
}
+ (BOOL)defaultSessionSON;
+ (BOOL)canSessionON;
+ (id)sendSynchronousRequest:(id)arg1 needSession:(BOOL)arg2 returningResponse:(id *)arg3 error:(id *)arg4;
+ (id)NSErrorForASIRequest:(id)arg1;
- (id)initWithRequest:(id)arg1 delegate:(id)arg2 isProtocol:(BOOL)arg3 needSession:(BOOL)arg4;
- (void)cancel;
- (void)request:(id)arg1 didReceiveResponseHeaders:(id)arg2;
- (void)request:(id)arg1 willRedirectToURL:(id)arg2;
- (void)requestFinished:(id)arg1;
- (void)requestFailed:(id)arg1;
- (void)request:(id)arg1 didReceiveData:(id)arg2;
- (void)retryErrorRequest:(id)arg1;
- (id)connection:(id)arg1 willSendRequest:(id)arg2 redirectResponse:(id)arg3;
- (void)connection:(id)arg1 didReceiveResponse:(id)arg2;
- (void)connection:(id)arg1 didReceiveData:(id)arg2;
- (void)connectionDidFinishLoading:(id)arg1;
- (void)connection:(id)arg1 didFailWithError:(id)arg2;
- (id)connection:(id)arg1 willCacheResponse:(id)arg2;
- (BOOL)connectionShouldUseCredentialStorage:(id)arg1;
- (void)connection:(id)arg1 willSendRequestForAuthenticationChallenge:(id)arg2;
- (void)postRedict:(id)arg1;
- (void)postReceiveResp:(id)arg1;
- (void)postReceiveData:(id)arg1;
- (void)postFinish;
- (void)postError:(id)arg1;
- (void)URLSession:(id)arg1 task:(id)arg2 willPerformHTTPRedirection:(id)arg3 newRequest:(id)arg4 completionHandler:(id /* block */)arg5;
- (void)URLSession:(id)arg1 task:(id)arg2 didReceiveChallenge:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3;
- (void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveResponse:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveData:(id)arg3;
- (void)URLSession:(id)arg1 dataTask:(id)arg2 willCacheResponse:(id)arg3 completionHandler:(id /* block */)arg4;
- (void).cxx_destruct;
- (id)delegate;
- (void)setDelegate:(id)arg1;
@end

