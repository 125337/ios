@interface WAUploadFileHandler : NSObject <WAUploadFileTaskDelegate, NSURLSessionTaskDelegate, NSURLSessionDataDelegate>
{
    NSString * _appID; // +0x8
    NSObject<OS_dispatch_queue> * _workerQueue; // +0x10
    WAUploadFileConfig * _uploadFileConfig; // +0x18
    NSMutableArray * _arrUploadTask; // +0x20
    NSURLSession * _urlSession; // +0x28
}
- (id)initWithAppID:(id)arg1 appVersion:(unsigned long long)arg2 workerQueue:(id)arg3 context:(id)arg4;
- (void)dealloc;
- (void)startUploadTaskWithURL:(id)arg1 taskID:(id)arg2 filePath:(id)arg3 fileFieldName:(id)arg4 httpHeaders:(id)arg5 formFields:(id)arg6 isIgnoreCheckDomain:(BOOL)arg7 context:(id)arg8 completionHandler:(id /* block */)arg9;
- (BOOL)abortUploadTask:(id)arg1 getError:(id *)arg2;
- (void)invalidate;
- (BOOL)isExceedMaxTaskCount;
- (id)getNewUploadTask:(id)arg1 context:(id)arg2 uploadConfig:(id)arg3;
- (id)getUploadTaskWithTask:(id)arg1;
- (id)getUploadTaskWithTaskID:(id)arg1;
- (void)deleteTask:(id)arg1;
- (void)cancelAndDeleteAllTaskWithError:(id)arg1 errNo:(id)arg2;
- (void)setupNSURLSession;
- (BOOL)isIgnoreCheckDomainWithSessionTask:(id)arg1;
- (void)markRedirectFailWithSessionTask:(id)arg1 host:(id)arg2;
- (unsigned int)maxTaskCount;
- (void)uploadFileTaskDidEnd:(id)arg1;
- (void)URLSession:(id)arg1 didReceiveChallenge:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)URLSession:(id)arg1 task:(id)arg2 didReceiveChallenge:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)URLSession:(id)arg1 task:(id)arg2 willPerformHTTPRedirection:(id)arg3 newRequest:(id)arg4 completionHandler:(id /* block */)arg5;
- (void)URLSession:(id)arg1 task:(id)arg2 needNewBodyStream:(id /* block */)arg3;
- (void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3;
- (void)URLSession:(id)arg1 task:(id)arg2 didSendBodyData:(long long)arg3 totalBytesSent:(long long)arg4 totalBytesExpectedToSend:(long long)arg5;
- (void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveResponse:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveData:(id)arg3;
- (void).cxx_destruct;
@end

