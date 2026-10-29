@interface MMWebOptimJSContextTaskLoader : MMObject <NSURLSessionTaskDelegate>
{
    NSMutableArray * _waitingQueue; // +0x8
    NSMutableDictionary * _waitingMap; // +0x10
    NSMutableArray * _loadingQueue; // +0x18
    NSMutableDictionary * _loadingMap; // +0x20
    NSMutableArray * _downloadTaskArr; // +0x28
    NSMutableDictionary * _notifyQueueMap; // +0x30
    NSURLSession * _urlSession; // +0x38
}
- (id)init;
- (void)dealloc;
- (void)loadTaskWithConfig:(id)arg1 onSuccess:(id /* block */)arg2 onFailed:(id /* block */)arg3;
- (void)cancelAllTask;
- (void)setupURLSession;
- (void)checkWaitingQueue;
- (void)startDownloadWithContext:(id)arg1;
- (void)callBackWithBlock:(id /* block */)arg1;
- (void)callBackSuccessWithTaskId:(id)arg1;
- (void)callBackFailWithTaskId:(id)arg1;
- (id)waitingQueue;
- (void)setWaitingQueue:(id)arg1;
- (id)waitingMap;
- (void)setWaitingMap:(id)arg1;
- (id)loadingQueue;
- (void)setLoadingQueue:(id)arg1;
- (id)loadingMap;
- (void)setLoadingMap:(id)arg1;
- (id)downloadTaskArr;
- (void)setDownloadTaskArr:(id)arg1;
- (id)notifyQueueMap;
- (void)setNotifyQueueMap:(id)arg1;
- (id)urlSession;
- (void)setUrlSession:(id)arg1;
- (void).cxx_destruct;
@end
