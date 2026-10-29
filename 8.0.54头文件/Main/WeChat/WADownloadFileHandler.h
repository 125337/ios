@interface WADownloadFileHandler : NSObject <WADownloadFileTaskDelegate, NSURLSessionTaskDelegate, NSURLSessionDownloadDelegate>
{
    NSString * _appID; // +0x8
    NSObject<OS_dispatch_queue> * _workerQueue; // +0x10
    WADownloadFileConfig * _downloadFileConfig; // +0x18
    NSObject<OS_dispatch_queue> * _dnsQueue; // +0x20
    NSMutableArray * _arrDownloadTask; // +0x28
    NSURLSession * _urlSession; // +0x30
    unsigned int _workerId; // +0x38
}
- (id)initWithAppID:(id)arg1 appVersion:(unsigned long long)arg2 workerQueue:(id)arg3 context:(id)arg4;
- (void)dealloc;
- (void)startDownloadTaskWithUrl:(id)arg1 taskID:(id)arg2 httpHeaders:(id)arg3 isIgnoreCheckDomain:(BOOL)arg4 context:(id)arg5 completionHandler:(id /* block */)arg6 headerHandler:(id /* block */)arg7 progressHandler:(id /* block */)arg8 isUseCronet:(BOOL)arg9 useQuic:(BOOL)arg10 useHttp2:(BOOL)arg11 useCache:(BOOL)arg12 appType:(unsigned int)arg13;
- (BOOL)abortDownloadTask:(id)arg1 getError:(id *)arg2;
- (void)invalidate;
- (void)setupNSURLSession;
- (BOOL)isExceedMaxTaskCount;
- (id)getNewDownloadTask:(id)arg1 isUseCronet:(BOOL)arg2 useQuic:(BOOL)arg3 useHttp2:(BOOL)arg4 useCache:(BOOL)arg5 appType:(unsigned int)arg6;
- (id)getDownloadTaskWithTask:(id)arg1;
- (id)getDownloadTaskWithTaskID:(id)arg1;
- (void)deleteTask:(id)arg1;
- (void)cancelAndDeleteAllTaskWithError:(id)arg1 errNo:(id)arg2;
- (BOOL)isIgnoreCheckDomainWithSessionTask:(id)arg1;
- (void)markRedirectFailWithSessionTask:(id)arg1 host:(id)arg2;
- (void)cancelTaskForExceedMaxSize:(id)arg1;
- (unsigned int)maxTaskCount;
- (void)URLSession:(id)arg1 didReceiveChallenge:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)URLSession:(id)arg1 task:(id)arg2 didReceiveChallenge:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)URLSession:(id)arg1 task:(id)arg2 willPerformHTTPRedirection:(id)arg3 newRequest:(id)arg4 completionHandler:(id /* block */)arg5;
- (void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3;
- (void)URLSession:(id)arg1 downloadTask:(id)arg2 didWriteData:(long long)arg3 totalBytesWritten:(long long)arg4 totalBytesExpectedToWrite:(long long)arg5;
- (void)URLSession:(id)arg1 downloadTask:(id)arg2 didFinishDownloadingToURL:(id)arg3;
- (void)downloadFileTaskDidEnd:(id)arg1;
- (unsigned int)workerId;
- (void)setWorkerId:(unsigned int)arg1;
- (void).cxx_destruct;
@end

