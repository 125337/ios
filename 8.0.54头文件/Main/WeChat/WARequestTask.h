@interface WARequestTask : NSObject
{
    shared_ptr<CronetRequestCallback> m_pCallback; // +0x8
    CronetTaskParams params_request; // +0x18
    NSString * _appID; // +0x228
    NSURLSession * _urlSession; // +0x230
    NSString * _taskID; // +0x238
    NSObject<OS_dispatch_queue> * _workQueue; // +0x240
    NSString * _url; // +0x248
    NSString * _method; // +0x250
    NSDictionary * _dicTaskContext; // +0x258
    id /* block */ _completionHandler; // +0x260
    NSURLSessionTask * _task; // +0x268
    unsigned int _appServiceType; // +0x270
    unsigned int _requestMaxConcurrentCount; // +0x274
    basic_string<char, std::char_traits<char>, std::allocator<char>> _cronetTaskID; // +0x278
    NSString * _nsCronetTaskID; // +0x290
    double _timeout; // +0x298
    BOOL _isCronetRequest; // +0x2a0
    BOOL _useQuic; // +0x2a1
    BOOL _useHttp2; // +0x2a2
    BOOL _useCache; // +0x2a3
    BOOL _useChunked; // +0x2a4
    BOOL _callbackHasBeenDone; // +0x2a5
    BOOL _hasCancelTimeOut; // +0x2a6
    WARequestConfig * _requestConfig; // +0x2a8
    BOOL _hasInvalidate; // +0x2b0
    unsigned long long _beginCGITimestamp; // +0x2b8
    unsigned long long _CGICallbackTimestamp; // +0x2c0
    NSString * _redirectHost; // +0x2c8
    BOOL _isManualRedirect; // +0x2d0
    BOOL _isIgnoreCheckDomain; // +0x2d1
    BOOL _isForceCellularNetwork; // +0x2d2
    BOOL _isRedirectInvalid; // +0x2d3
    unsigned int _workerId; // +0x2d4
    id <WARequestTaskDelegate> delegate; // +0x2d8
    unsigned long long _lastUpdateProgressAbsoluteTime; // +0x2e0
    double _lastUpdateProgressPercent; // +0x2e8
    long long _lastUpdateProgressWritten; // +0x2f0
}
- (id)initWithAppID:(id)arg1 urlSession:(id)arg2 taskID:(id)arg3 workQueue:(id)arg4 requestConfig:(id)arg5 isUseCronet:(BOOL)arg6 useQuic:(BOOL)arg7 useHttp2:(BOOL)arg8 useCache:(BOOL)arg9 useChunked:(BOOL)arg10 appType:(unsigned int)arg11 context:(id)arg12;
- (void)dealloc;
- (id)getTaskID;
- (void)startCronetWithURL:(id)arg1 ip:(id)arg2 port:(unsigned int)arg3 host:(id)arg4 forbidReuse:(BOOL)arg5 postData:(id)arg6 httpHeaders:(id)arg7 timeoutMS:(unsigned int)arg8 userAgent:(id)arg9 referer:(id)arg10 method:(id)arg11 completionHandler:(id /* block */)arg12;
- (void)cronetRequestTimeOut;
- (void)callCronetRequest:(CronetTaskParams)arg1;
- (void)startWithURL:(id)arg1 postData:(id)arg2 httpHeaders:(id)arg3 timeoutMS:(unsigned int)arg4 userAgent:(id)arg5 referer:(id)arg6 method:(id)arg7 completionHandler:(id /* block */)arg8;
- (void)anyThread_didSendoutRequest:(id)arg1;
- (void)anyThread_didCronetSendoutRequest:(id)arg1;
- (void)onResponse:(id)arg1 data:(id)arg2 error:(id)arg3;
- (void)onCronetResponse:(id)arg1 data:(id)arg2 error:(id)arg3 status:(long long)arg4 profile:(id)arg5;
- (void)anyThread_didReceiveResponse:(id)arg1;
- (void)anyThread_didCronetReceiveResponse:(id)arg1 status:(long long)arg2;
- (void)workThread_onResponse:(id)arg1 data:(id)arg2 error:(id)arg3;
- (void)workThread_onCronetResponse:(id)arg1 data:(id)arg2 error:(id)arg3 status:(long long)arg4 profile:(id)arg5;
- (void)cancel;
- (void)cancelWithError:(id)arg1 errNo:(id)arg2;
- (void)invalidate;
- (id)task;
- (void)markRedirectFail:(id)arg1;
- (id)headerDictionaryFromResponse:(id)arg1;
- (void)setCompletionHandler:(id /* block */)arg1;
- (void)callCompletionHandlerWithURLError:(id)arg1 errNo:(id)arg2 clientInfo:(id)arg3;
- (void)callCompletionHandlerWithError:(id)arg1 errNo:(id)arg2;
- (void)callCompletionHandlerWithString:(id)arg1 buffer:(id)arg2 statusCode:(long long)arg3 responseHeader:(id)arg4 profile:(id)arg5;
- (void)callCompletionHandler:(id)arg1 errNo:(id)arg2 string:(id)arg3 buffer:(id)arg4 statusCode:(long long)arg5 responseHeader:(id)arg6 profile:(id)arg7 clientInfo:(id)arg8;
- (void)callChunkedHandler:(id)arg1;
- (void)sendRequestTaskStateChange:(id)arg1;
- (void)reportTaskRecord:(id)arg1 url:(id)arg2 method:(id)arg3 statusCode:(unsigned int)arg4 result:(BOOL)arg5;
- (void)OnCompleted:(const void *)arg1;
- (void)OnReceiveChunkedData:(const char *)arg1 length:(unsigned long long)arg2;
- (void)OnReceiveHeader:(const void *)arg1 status_code:(int)arg2 protocol:(basic_string<char, std::char_traits<char>, std::allocator<char>>)arg3;
- (void)OnProgress:(long long)arg1 totalBytesExpectedToWrite:(long long)arg2;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (BOOL)isIgnoreCheckDomain;
- (void)setIsIgnoreCheckDomain:(BOOL)arg1;
- (unsigned int)workerId;
- (void)setWorkerId:(unsigned int)arg1;
- (BOOL)isForceCellularNetwork;
- (void)setIsForceCellularNetwork:(BOOL)arg1;
- (BOOL)isRedirectInvalid;
- (void)setIsRedirectInvalid:(BOOL)arg1;
- (unsigned long long)lastUpdateProgressAbsoluteTime;
- (void)setLastUpdateProgressAbsoluteTime:(unsigned long long)arg1;
- (double)lastUpdateProgressPercent;
- (void)setLastUpdateProgressPercent:(double)arg1;
- (long long)lastUpdateProgressWritten;
- (void)setLastUpdateProgressWritten:(long long)arg1;
- (void).cxx_destruct;
- (id).cxx_construct;
@end

