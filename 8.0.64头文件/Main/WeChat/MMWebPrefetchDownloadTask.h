@interface MMWebPrefetchDownloadTask : MMObject
{
    BOOL _isCancel; // +0x8
    MMWebPrefetchDownloadTaskRequest * _request; // +0x10
    NSURLSession * _urlSession; // +0x18
    id /* block */ _completionHandler; // +0x20
    NSURLSessionDownloadTask * _sessionTask; // +0x28
    unsigned long long _startTime; // +0x30
}
- (id)initWithRequest:(id)arg1 urlSession:(id)arg2 completionHandler:(id /* block */)arg3;
- (id)request;
- (void)start;
- (void)cancel;
- (id)sessionTask;
- (void)handleTaskDidFinishCollectingMetrics:(id)arg1;
- (BOOL)saveRespHeaderFieldsData:(id)arg1 toPath:(id)arg2 error:(id *)arg3 errMsg:(id *)arg4;
- (BOOL)saveRespData:(id)arg1 path:(id)arg2 error:(id *)arg3 errMsg:(id *)arg4 dataSize:(unsigned int *)arg5;
- (void)handleDownloadResponse:(id)arg1 response:(id)arg2 error:(id)arg3;
- (id)errorWithCode:(long long)arg1 description:(id)arg2;
- (void)mainThread_callBackFailWithErrCode:(long long)arg1 errMsg:(id)arg2;
- (void)mainThread_callBackWithResult:(id)arg1 error:(id)arg2;
- (void)setRequest:(id)arg1;
- (id)urlSession;
- (void)setUrlSession:(id)arg1;
- (id /* block */)completionHandler;
- (void)setCompletionHandler:(id /* block */)arg1;
- (void)setSessionTask:(id)arg1;
- (unsigned long long)startTime;
- (void)setStartTime:(unsigned long long)arg1;
- (BOOL)isCancel;
- (void)setIsCancel:(BOOL)arg1;
- (void).cxx_destruct;
@end
