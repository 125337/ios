@interface WCPaySingleDownloadLogic : MMUserService <NSURLSessionDelegate, MMServiceProtocol>
{
    id <WCPaySingleDownloadLogicExt> _m_delegate; // +0x8
    NSURLSession * _session; // +0x10
    NSMutableArray * _arrDownloadingTaskQueue; // +0x18
    NSMutableDictionary * _downloadTaskDict; // +0x20
}
- (id)arrDownloadingTaskQueue;
- (id)downloadTaskDict;
- (void)onServiceInit;
- (void)startDownloadTaskWithUrl:(id)arg1 info:(id)arg2;
- (void)addDownloadTaskWithUrl:(id)arg1 info:(id)arg2;
- (void)cancelDownloadTaskWithUrl:(id)arg1;
- (id)getDownloadFileIdentifier:(id)arg1;
- (void)checkDownloadQueue;
- (BOOL)checkIsTaskAlreadyExist:(id)arg1;
- (void)invalidate;
- (void)URLSession:(id)arg1 downloadTask:(id)arg2 didFinishDownloadingToURL:(id)arg3;
- (id)m_delegate;
- (void)setM_delegate:(id)arg1;
- (id)session;
- (void)setSession:(id)arg1;
- (void)setArrDownloadingTaskQueue:(id)arg1;
- (void)setDownloadTaskDict:(id)arg1;
- (void).cxx_destruct;
@end

