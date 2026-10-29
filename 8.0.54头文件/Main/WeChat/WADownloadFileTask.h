@interface WADownloadFileTask : NSObject
{
    shared_ptr<CronetDownloadCallback> m_pCallback; // +0x8
    CronetTaskParams params_download; // +0x18
    NSString * _appID; // +0x228
    NSURLSession * _urlSession; // +0x230
    NSObject<OS_dispatch_queue> * _workerQueue; // +0x238
    NSString * _taskID; // +0x240
    NSURLSessionDownloadTask * _task; // +0x248
    id /* block */ _completionHandler; // +0x250
    BOOL _isRedirectInvalid; // +0x258
    NSString * _url; // +0x260
    NSMutableDictionary * _dicContext; // +0x268
    BOOL _isFirstPkg; // +0x270
    unsigned int _appServiceType; // +0x274
    unsigned int _downloadMaxConcurrentCount; // +0x278
    basic_string<char, std::char_traits<char>, std::allocator<char>> _cronetTaskID; // +0x280
    NSString * _nsCronetTaskID; // +0x298
    double _timeout; // +0x2a0
    BOOL _isCronetDownload; // +0x2a8
    BOOL _useQuic; // +0x2a9
    BOOL _useHttp2; // +0x2aa
    BOOL _useCache; // +0x2ab
    BOOL _hasCallBack; // +0x2ac
    WADownloadFileConfig * _downloadFileConfig; // +0x2b0
    NSString * _redirectHost; // +0x2b8
    unsigned long long _beginCGITimestamp; // +0x2c0
    unsigned long long _CGICallbackTimestamp; // +0x2c8
    BOOL _isIgnoreCheckDomain; // +0x2d0
    BOOL _isExceedMaxFileSize; // +0x2d1
    BOOL _isCanceled; // +0x2d2
    unsigned int _timeoutMS; // +0x2d4
    unsigned int _workerId; // +0x2d8
    id <WADownloadFileTaskDelegate> delegate; // +0x2e0
    NSDictionary * _dichttpHeader; // +0x2e8
    NSMutableDictionary * _dicTaskContext; // +0x2f0
    NSString * _userAgent; // +0x2f8
    NSString * _httpHeaderReferer; // +0x300
    id /* block */ _headerHandler; // +0x308
    id /* block */ _progressHandler; // +0x310
    NSString * _savePath; // +0x318
    NSString * _localID; // +0x320
    unsigned long long _lastUpdateProgressAbsoluteTime; // +0x328
    WADownloadFileProgressInfo * _lastNotNotifyProgressInfo; // +0x330
}
- (id)initWithAppID:(id)arg1 urlSession:(id)arg2 workerQueue:(id)arg3 taskID:(id)arg4 downloadConfig:(id)arg5 isUseCronet:(BOOL)arg6 useQuic:(BOOL)arg7 useHttp2:(BOOL)arg8 useCache:(BOOL)arg9 appType:(unsigned int)arg10;
- (void)dealloc;
- (id)getTaskID;
- (void)startCronetWithURL:(id)arg1 httpHeaders:(id)arg2 timeoutMS:(unsigned int)arg3 userAgent:(id)arg4 referer:(id)arg5 context:(id)arg6 completionHandler:(id /* block */)arg7 headerHandler:(id /* block */)arg8 progressHandler:(id /* block */)arg9;
- (void)cronetDwonloadTimeOut;
- (void)callCronetDownload:(CronetTaskParams)arg1;
- (void)startWithURL:(id)arg1 httpHeaders:(id)arg2 timeoutMS:(unsigned int)arg3 userAgent:(id)arg4 referer:(id)arg5 context:(id)arg6 completionHandler:(id /* block */)arg7 headerHandler:(id /* block */)arg8 progressHandler:(id /* block */)arg9;
- (void)anyThread_didSendoutRequest:(id)arg1;
- (void)anyThread_didCronetSendoutRequest:(id)arg1;
- (void)anyThread_didReceiveResponse;
- (void)anyThread_didCronetReceiveResponse:(id)arg1;
- (void)anyThread_updateTotalBytesWritten:(long long)arg1 totalBytesExpectedToWrite:(long long)arg2;
- (void)anyThread_didFinishDownloadingToURL:(id)arg1 mimeType:(id)arg2 url:(id)arg3;
- (void)anyThread_didFinishCronetDownloadingToURL:(id)arg1 mimeType:(id)arg2 url:(id)arg3;
- (void)taskDidCompleteWithError:(id)arg1 statusCode:(unsigned long long)arg2;
- (void)taskDidCompleteCronetWithError:(id)arg1 statusCode:(unsigned long long)arg2 header:(id)arg3 profile:(id)arg4;
- (void)cancel;
- (void)cancelForExceedMaxSize;
- (void)cancelWithError:(id)arg1 errNo:(id)arg2;
- (id)task;
- (void)markRedirectFail:(id)arg1;
- (void)setCompletionHandler:(id /* block */)arg1;
- (void)setProgressHandler:(id /* block */)arg1 headerHandler:(id /* block */)arg2;
- (void)callCompletionHandlerWithResult:(id)arg1 error:(id)arg2 errNo:(id)arg3;
- (id)workerQueue;
- (void)taskDidEnd;
- (void)notifyProgressWithTotalBytesWritten:(long long)arg1 totalBytesExpectedToWrite:(long long)arg2;
- (void)flushProgressNotifcation;
- (void)reportTaskRecord:(id)arg1 url:(id)arg2 method:(id)arg3 statusCode:(unsigned int)arg4 result:(BOOL)arg5;
- (void)onCronetResponse:(id)arg1 mimeType:(id)arg2 error:(id)arg3 status:(long long)arg4 header:(id)arg5 profile:(id)arg6;
- (void)OnCompleted:(const void *)arg1;
- (void)OnProgress:(long long)arg1 totalBytesExpectedToWrite:(long long)arg2;
- (void)OnReceiveHeader:(const void *)arg1 status_code:(int)arg2 protocol:(basic_string<char, std::char_traits<char>, std::allocator<char>>)arg3;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (BOOL)isIgnoreCheckDomain;
- (void)setIsIgnoreCheckDomain:(BOOL)arg1;
- (BOOL)isExceedMaxFileSize;
- (void)setIsExceedMaxFileSize:(BOOL)arg1;
- (id)url;
- (void)setUrl:(id)arg1;
- (id)dichttpHeader;
- (void)setDichttpHeader:(id)arg1;
- (id)dicTaskContext;
- (void)setDicTaskContext:(id)arg1;
- (unsigned int)timeoutMS;
- (void)setTimeoutMS:(unsigned int)arg1;
- (id)userAgent;
- (void)setUserAgent:(id)arg1;
- (id)httpHeaderReferer;
- (void)setHttpHeaderReferer:(id)arg1;
- (unsigned int)workerId;
- (void)setWorkerId:(unsigned int)arg1;
- (id /* block */)completionHandler;
- (id /* block */)headerHandler;
- (void)setHeaderHandler:(id /* block */)arg1;
- (id /* block */)progressHandler;
- (void)setProgressHandler:(id /* block */)arg1;
- (id)savePath;
- (void)setSavePath:(id)arg1;
- (id)localID;
- (void)setLocalID:(id)arg1;
- (BOOL)isCanceled;
- (void)setIsCanceled:(BOOL)arg1;
- (unsigned long long)lastUpdateProgressAbsoluteTime;
- (void)setLastUpdateProgressAbsoluteTime:(unsigned long long)arg1;
- (id)lastNotNotifyProgressInfo;
- (void)setLastNotNotifyProgressInfo:(id)arg1;
- (void).cxx_destruct;
- (id).cxx_construct;
@end

