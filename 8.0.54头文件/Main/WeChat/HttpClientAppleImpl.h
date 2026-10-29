@interface HttpClientAppleImpl : NSObject <NSURLSessionDataDelegate>
{
    NSObject<OS_dispatch_queue> * _queue; // +0x8
    NSURLSession * _session; // +0x10
    Lock _lock; // +0x18
    map<long long, std::unique_ptr<HttpTask>, std::less<long long>, std::allocator<std::pair<const long long, std::unique_ptr<HttpTask>>>> _taskMap; // +0x58
    Config _config; // +0x70
}
- (id)initWithConfig:(Config)arg1;
- (void)dealloc;
- (void)asyncRun:(id /* block */)arg1;
- (void)cancelAll;
- (void)cancelWithRequestId:(long long)arg1;
- (void)cancelWithRequestIdInternal:(long long)arg1;
- (BOOL)isSessionInvalid:(id)arg1;
- (void)createURLSession;
- (id)makeRequest:(const void *)arg1;
- (void)sendRequest:(unique_ptr<liteav::HttpClient::Request, std::default_delete<liteav::HttpClient::Request>>)arg1 onceCallback:(OnceCallback<void (liteav::HttpClient::State, const liteav::HttpClient::Request &, std::unique_ptr<liteav::HttpClient::Response>)>)arg2;
- (void)sendRequest:(unique_ptr<liteav::HttpClient::Request, std::default_delete<liteav::HttpClient::Request>>)arg1 repeatCallback:(RepeatingCallback<void (liteav::HttpClient::State, const liteav::HttpClient::Request &, std::unique_ptr<liteav::HttpClient::Response>)>)arg2;
- (void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveResponse:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveData:(id)arg3;
- (void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3;
- (void)URLSession:(id)arg1 didReceiveChallenge:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)URLSession:(id)arg1 task:(id)arg2 willPerformHTTPRedirection:(id)arg3 newRequest:(id)arg4 completionHandler:(id /* block */)arg5;
- (int)getStatusCode:(long long)arg1;
- (void)onResponse:(int)arg1 statusCode:(int)arg2 msg:(id)arg3 dataTask:(id)arg4 headers:(id)arg5 data:(id)arg6;
- (id)base64DecodeString:(id)arg1;
- (IPEndPoint)getRemoteAddr:(id)arg1;
- (id)parseIpAddress:(id)arg1;
- (void).cxx_destruct;
- (id).cxx_construct;
@end

