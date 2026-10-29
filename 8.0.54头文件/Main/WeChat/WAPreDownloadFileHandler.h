@interface WAPreDownloadFileHandler : NSObject <WADownloadFileTaskDelegate, NSURLSessionTaskDelegate, NSURLSessionDownloadDelegate>
{
    NSString * _appID; // +0x8
    NSObject<OS_dispatch_queue> * _workerQueue; // +0x10
    WADownloadFileConfig * _downloadFileConfig; // +0x18
    NSMutableArray * _arrDownloadTask; // +0x20
    NSMutableArray * _arrTodoDownloadTask; // +0x28
    NSURLSession * _urlSession; // +0x30
    NSMutableDictionary * _downloadCompletionHandlerDic; // +0x38
    NSNumber * __hasDownloadedFileSize; // +0x40
}
- (unsigned int)getHasDownloadedFileSize;
- (id)initWithAppID:(id)arg1 appVersion:(unsigned long long)arg2 workerQueue:(id)arg3 context:(id)arg4;
- (void)dealloc;
- (void)startDownloadTaskWithUrl:(id)arg1 taskID:(id)arg2 httpHeaders:(id)arg3 isIgnoreCheckDomain:(BOOL)arg4 context:(id)arg5 completionHandler:(id /* block */)arg6;
- (BOOL)abortDownloadTask:(id)arg1 getError:(id *)arg2;
- (void)invalidate;
- (void)setupNSURLSession;
- (BOOL)isExceedMaxTaskCount;
- (id)getNewDownloadTask:(id)arg1;
- (id)addNewTodoDownloadTask:(id)arg1;
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
- (id)_hasDownloadedFileSize;
- (void)set_hasDownloadedFileSize:(id)arg1;
- (void).cxx_destruct;
@end

