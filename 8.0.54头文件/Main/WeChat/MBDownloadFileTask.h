@interface MBDownloadFileTask : NSObject
{
    shared_ptr<MBCronetDownloadCallback> m_pCallback; // +0x8
    CronetTaskParams params_download; // +0x18
    NSString * _bizName; // +0x228
    NSObject<OS_dispatch_queue> * _workerQueue; // +0x230
    NSString * _taskID; // +0x238
    NSString * _url; // +0x240
    NSMutableDictionary * _dicContext; // +0x248
    unsigned int _downloadMaxConcurrentCount; // +0x250
    unsigned long long _downloadMaxFileSize; // +0x258
    basic_string<char, std::char_traits<char>, std::allocator<char>> _cronetTaskID; // +0x260
    NSString * _nsCronetTaskID; // +0x278
    double _timeout; // +0x280
    BOOL _hasCallBack; // +0x288
    BOOL _isIgnoreCheckDomain; // +0x289
    BOOL _isExceedMaxFileSize; // +0x28a
    BOOL _isCanceled; // +0x28b
    unsigned int _timeoutMS; // +0x28c
    id <MBDownloadFileTaskDelegate> delegate; // +0x290
    NSDictionary * _dichttpHeader; // +0x298
    NSMutableDictionary * _dicTaskContext; // +0x2a0
    NSString * _userAgent; // +0x2a8
    NSString * _httpHeaderReferer; // +0x2b0
    id /* block */ _completionHandler; // +0x2b8
    id /* block */ _headerHandler; // +0x2c0
    id /* block */ _progressHandler; // +0x2c8
    NSString * _savePath; // +0x2d0
    NSString * _localID; // +0x2d8
    unsigned long long _lastUpdateProgressAbsoluteTime; // +0x2e0
    MBDownloadFileProgressInfo * _lastNotNotifyProgressInfo; // +0x2e8
}
- (id)initWithBizName:(id)arg1 workerQueue:(id)arg2 taskID:(id)arg3 maxConcurrentCount:(unsigned int)arg4;
- (void)dealloc;
- (id)getTaskID;
- (void)startCronetWithURL:(id)arg1 httpHeaders:(id)arg2 timeoutMS:(unsigned int)arg3 userAgent:(id)arg4 referer:(id)arg5 context:(id)arg6 completionHandler:(id /* block */)arg7 headerHandler:(id /* block */)arg8 progressHandler:(id /* block */)arg9;
- (void)cronetDwonloadTimeOut;
- (void)callCronetDownload:(CronetTaskParams)arg1;
- (void)anyThread_didCronetReceiveResponse:(id)arg1;
- (void)anyThread_updateTotalBytesWritten:(long long)arg1 totalBytesExpectedToWrite:(long long)arg2;
- (void)anyThread_didFinishCronetDownloadingToURL:(id)arg1 mimeType:(id)arg2 url:(id)arg3;
- (void)taskDidCompleteCronetWithError:(id)arg1 statusCode:(unsigned long long)arg2 header:(id)arg3 profile:(id)arg4;
- (void)cancelForExceedMaxSize;
- (void)cancelWithError:(id)arg1;
- (void)setHandler:(id /* block */)arg1 progressHandler:(id /* block */)arg2 headerHandler:(id /* block */)arg3;
- (void)callCompletionHandlerWithResult:(id)arg1 error:(id)arg2;
- (id)workerQueue;
- (void)taskDidEnd;
- (void)notifyProgressWithTotalBytesWritten:(long long)arg1 totalBytesExpectedToWrite:(long long)arg2;
- (void)flushProgressNotifcation;
- (void)reportTaskRecord:(id)arg1 statusCode:(unsigned int)arg2 fileSize:(unsigned long long)arg3 result:(BOOL)arg4;
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
- (id /* block */)completionHandler;
- (void)setCompletionHandler:(id /* block */)arg1;
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

