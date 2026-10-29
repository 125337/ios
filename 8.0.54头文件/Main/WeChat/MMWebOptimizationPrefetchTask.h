@interface MMWebOptimizationPrefetchTask : MMObject
{
    BOOL _hasResPrefetchFail; // +0x8
    BOOL _isTaskCancel; // +0x9
    unsigned int _taskId; // +0xc
    MMWebOptimizationPrefetchRequest * _request; // +0x10
    id /* block */ _completionHandler; // +0x18
    MMWebPrefetchDownloadTask * _documentDownloadTask; // +0x20
    MMWebPrefetchResPkgDownloadTask * _resPkgDownloadTask; // +0x28
    MMWebPrefetchInjectTask * _injectTask; // +0x30
    NSMutableArray * _waitingDownloadTaskQueue; // +0x38
    NSMutableArray * _downloadingTaskQueue; // +0x40
    NSURLSession * _urlSession; // +0x48
    NSMutableArray * _arrPrefetchSuccResInfo; // +0x50
    id <MMWebOptimizationPrefetchTaskDelegate> _delegate; // +0x58
    id /* block */ _pkgFetchCompletionHandler; // +0x60
}
+ (unsigned int)genTaskId;
+ (unsigned int)genSubTaskRequestId;
- (id)initWithRequest:(id)arg1 urlSession:(id)arg2 delegate:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)start;
- (void)startAllUrlModeDownload;
- (void)startAllPkgModeDownload;
- (void)startDocUrlResPkgModeDownload;
- (void)startDocTransferResPkgDownload;
- (void)onTransferMainDocCallBack:(BOOL)arg1 errMsg:(id)arg2 respContent:(id)arg3 respHeader:(id)arg4;
- (BOOL)saveTransferMainDocContent:(id)arg1 header:(id)arg2;
- (BOOL)isUrlInPkgInjectBlackList:(id)arg1;
- (void)startFetchPkgWithRespHeader:(id)arg1 documentUrl:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)handleDocUrlDownloadResult:(id)arg1;
- (void)cancel;
- (id)identifier;
- (id)domain;
- (unsigned int)taskId;
- (BOOL)containSessionTask:(id)arg1;
- (void)checkFinishDownload;
- (void)checkAllUrlModeFinishDownload;
- (void)checkDocUrlResPkgModeFinishDownload;
- (void)startDownloadDocument:(id /* block */)arg1;
- (void)handleURLSession:(id)arg1 task:(id)arg2 didFinishCollectingMetrics:(id)arg3;
- (id)handleURLSession:(id)arg1 task:(id)arg2 performRedirection:(id)arg3 newRequest:(id)arg4;
- (void)handleMainDocumentDownloadResult:(id)arg1 error:(id)arg2;
- (void)startDownloadResFile;
- (void)handleResourceDownload:(id)arg1 result:(id)arg2 error:(id)arg3;
- (void)startFetchPkg;
- (void)startInjectTask;
- (void)startInjectTaskWithPkgPath:(id)arg1 htmlStringInPkg:(BOOL)arg2;
- (id)genCorsOrigin:(id)arg1 withDocumentUrl:(id)arg2;
- (void)mainThread_callBackFailWithError:(id)arg1;
- (void)mainThread_callBackSuccess;
- (id)errorWithCode:(long long)arg1 description:(id)arg2;
- (void)setTaskId:(unsigned int)arg1;
- (id)request;
- (void)setRequest:(id)arg1;
- (id /* block */)completionHandler;
- (void)setCompletionHandler:(id /* block */)arg1;
- (id)documentDownloadTask;
- (void)setDocumentDownloadTask:(id)arg1;
- (id)resPkgDownloadTask;
- (void)setResPkgDownloadTask:(id)arg1;
- (id)injectTask;
- (void)setInjectTask:(id)arg1;
- (id)waitingDownloadTaskQueue;
- (void)setWaitingDownloadTaskQueue:(id)arg1;
- (id)downloadingTaskQueue;
- (void)setDownloadingTaskQueue:(id)arg1;
- (id)urlSession;
- (void)setUrlSession:(id)arg1;
- (id)arrPrefetchSuccResInfo;
- (void)setArrPrefetchSuccResInfo:(id)arg1;
- (BOOL)hasResPrefetchFail;
- (void)setHasResPrefetchFail:(BOOL)arg1;
- (BOOL)isTaskCancel;
- (void)setIsTaskCancel:(BOOL)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id /* block */)pkgFetchCompletionHandler;
- (void)setPkgFetchCompletionHandler:(id /* block */)arg1;
- (void).cxx_destruct;
@end

