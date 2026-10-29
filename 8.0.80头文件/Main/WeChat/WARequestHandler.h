@interface WARequestHandler : NSObject <WARequestTaskDelegate, NSURLSessionTaskDelegate>
{
    NSString * _appID; // +0x8
    NSObject<OS_dispatch_queue> * _workQueue; // +0x10
    WARequestConfig * _requestConfig; // +0x18
    BOOL _hasInvalidate; // +0x20
    NSMutableArray * _arrRequestTask; // +0x28
    NSURLSession * _urlSession; // +0x30
}
- (id)initWithAppID:(id)arg1 appVersion:(unsigned long long)arg2 workerQueue:(id)arg3 context:(id)arg4;
- (void)dealloc;
- (void)startRequestTaskWithURL:(id)arg1 ip:(id)arg2 port:(unsigned int)arg3 host:(id)arg4 forbidReuse:(BOOL)arg5 taskID:(id)arg6 data:(id)arg7 httpHeaders:(id)arg8 method:(id)arg9 isIgnoreCheckDomain:(BOOL)arg10 context:(id)arg11 chunkedHandler:(id /* block */)arg12 headersReceivedHandler:(id /* block */)arg13 completionHandler:(id /* block */)arg14 isUseCronet:(BOOL)arg15 useQuic:(BOOL)arg16 useHttp2:(BOOL)arg17 useCache:(BOOL)arg18 useChunked:(BOOL)arg19 appType:(unsigned int)arg20 forceCellularNetwork:(BOOL)arg21;
- (BOOL)abortRequestTask:(id)arg1 getError:(id *)arg2;
- (void)invalidate;
- (long long)requestTaskCount;
- (BOOL)isExceedMaxTaskCount;
- (id)getNewRequestTask:(id)arg1 isUseCronet:(BOOL)arg2 useQuic:(BOOL)arg3 useHttp2:(BOOL)arg4 useCache:(BOOL)arg5 useChunked:(BOOL)arg6 appType:(unsigned int)arg7 context:(id)arg8;
- (id)getRequestTaskWithTask:(id)arg1;
- (id)getRequestTaskWithTaskID:(id)arg1;
- (void)deleteTask:(id)arg1;
- (void)cancelAndDeleteAllTaskWithError:(id)arg1 errNo:(id)arg2 isInvalidate:(BOOL)arg3;
- (void)setupNSURLSession;
- (BOOL)isIgnoreCheckDomainWithSessionTask:(id)arg1;
- (void)markRedirectFailWithSessionTask:(id)arg1 host:(id)arg2;
- (unsigned int)maxTaskCount;
- (unsigned int)timeoutMS;
- (void)URLSession:(id)arg1 didReceiveChallenge:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)URLSession:(id)arg1 task:(id)arg2 didReceiveChallenge:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)URLSession:(id)arg1 task:(id)arg2 willPerformHTTPRedirection:(id)arg3 newRequest:(id)arg4 completionHandler:(id /* block */)arg5;
- (void)requestTaskDidEnd:(id)arg1;
- (void).cxx_destruct;
@end
