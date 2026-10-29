@interface WxpaySystemHttpCall : NSObject <WxpayHttpCall, NSURLSessionDataDelegate>
{
    WxpayHttpRequest * _request; // +0x8
    id /* block */ _callback; // +0x10
    long long _maxResponseBytes; // +0x18
    NSLock * _lock; // +0x20
    BOOL _terminal; // +0x28
    NSURLSessionDataTask * _task; // +0x30
    NSHTTPURLResponse * _response; // +0x38
    NSMutableData * _data; // +0x40
}
- (id)initWithRequest:(id)arg1 callback:(id /* block */)arg2;
- (void)startOnSession:(id)arg1;
- (void)cancel;
- (void)terminate:(id)arg1;
- (void)terminateWithError:(long long)arg1 message:(id)arg2;
- (void)URLSession:(id)arg1 task:(id)arg2 willPerformHTTPRedirection:(id)arg3 newRequest:(id)arg4 completionHandler:(id /* block */)arg5;
- (void)URLSession:(id)arg1 task:(id)arg2 didReceiveChallenge:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveResponse:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveData:(id)arg3;
- (void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3;
- (void).cxx_destruct;
@end
