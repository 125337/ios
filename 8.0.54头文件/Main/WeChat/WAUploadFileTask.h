@interface WAUploadFileTask : NSObject
{
    shared_ptr<CronetUploadCallback> m_pCallback; // +0x8
    CronetTaskParams params_cronet; // +0x18
    UploadParams params_upload; // +0x228
    NSString * _appID; // +0x288
    NSURLSession * _urlSession; // +0x290
    NSString * _taskID; // +0x298
    NSURLSessionUploadTask * _task; // +0x2a0
    id /* block */ _completionHandler; // +0x2a8
    NSMutableData * _responseData; // +0x2b0
    NSString * _responseString; // +0x2b8
    BOOL _isRedirectInvalid; // +0x2c0
    NSString * _url; // +0x2c8
    NSMutableDictionary * _dicContext; // +0x2d0
    NSString * _redirectHost; // +0x2d8
    BOOL _isCronetUpload; // +0x2e0
    BOOL _hasCallBack; // +0x2e1
    unsigned int _appServiceType; // +0x2e4
    unsigned int _uploadMaxConcurrentCount; // +0x2e8
    double _timeout; // +0x2f0
    basic_string<char, std::char_traits<char>, std::allocator<char>> _cronetTaskID; // +0x2f8
    NSString * _nsCronetTaskID; // +0x310
    WAUploadFileConfig * _uploadFileConfig; // +0x318
    BOOL _isIgnoreCheckDomain; // +0x320
    id <WAUploadFileTaskDelegate> delegate; // +0x328
    unsigned long long _lastUpdateProgressAbsoluteTime; // +0x330
    WAUploadFileProgressInfo * _lastNotNotifyProgressInfo; // +0x338
}
- (id)initWithAppID:(id)arg1 urlSession:(id)arg2 taskID:(id)arg3 context:(id)arg4 uploadConfig:(id)arg5;
- (void)dealloc;
- (id)getTaskID;
- (void)startCronetWithURL:(id)arg1 filePath:(id)arg2 fileFieldName:(id)arg3 httpHeaders:(id)arg4 timeoutMS:(unsigned int)arg5 userAgent:(id)arg6 referer:(id)arg7 formFields:(id)arg8 context:(id)arg9 completionHandler:(id /* block */)arg10;
- (void)cronetUploadTimeOut;
- (void)callCronetUpload:(CronetTaskParams)arg1;
- (void)startWithURL:(id)arg1 filePath:(id)arg2 fileFieldName:(id)arg3 httpHeaders:(id)arg4 timeoutMS:(unsigned int)arg5 userAgent:(id)arg6 referer:(id)arg7 formFields:(id)arg8 context:(id)arg9 completionHandler:(id /* block */)arg10;
- (void)anyThread_didSendoutRequest:(id)arg1;
- (void)anyThread_didCronetSendoutRequest:(id)arg1;
- (void)anyThread_didReceiveResponse:(id)arg1;
- (void)anyThread_didCronetReceiveResponse:(id)arg1;
- (void)anyThread_updateTotalBytesSent:(long long)arg1 totalBytesExpectedToSend:(long long)arg2;
- (void)cancel;
- (void)cancelWithError:(id)arg1 errNo:(id)arg2;
- (id)task;
- (void)didCompleteWithError:(id)arg1 statusCode:(long long)arg2;
- (void)didCompleteCronetWithError:(id)arg1 statusCode:(long long)arg2 header:(id)arg3 profile:(id)arg4;
- (void)didRecevieData:(id)arg1;
- (void)markRedirectFail:(id)arg1;
- (void)setCompletionHandler:(id /* block */)arg1;
- (void)callCompletionHandlerWithError:(id)arg1 error:(id)arg2 errNo:(id)arg3;
- (id)filePathFromLocalID:(id)arg1;
- (void)taskDidEnd;
- (void)notifyProgressWithTotalBytesSent:(long long)arg1 totalBytesExpectedToSend:(long long)arg2;
- (void)flushProgressNotifcation;
- (void)reportTaskRecord:(id)arg1 url:(id)arg2 method:(id)arg3 statusCode:(unsigned int)arg4 result:(BOOL)arg5;
- (void)onCronetResponse:(id)arg1 status:(long long)arg2 header:(id)arg3 profile:(id)arg4;
- (void)OnCompleted:(const void *)arg1;
- (void)OnUploadProgress:(long long)arg1 total:(long long)arg2;
- (void)OnReceiveHeader:(const void *)arg1 status_code:(int)arg2 protocol:(basic_string<char, std::char_traits<char>, std::allocator<char>>)arg3;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (BOOL)isIgnoreCheckDomain;
- (void)setIsIgnoreCheckDomain:(BOOL)arg1;
- (unsigned long long)lastUpdateProgressAbsoluteTime;
- (void)setLastUpdateProgressAbsoluteTime:(unsigned long long)arg1;
- (id)lastNotNotifyProgressInfo;
- (void)setLastNotNotifyProgressInfo:(id)arg1;
- (void).cxx_destruct;
- (id).cxx_construct;
@end

