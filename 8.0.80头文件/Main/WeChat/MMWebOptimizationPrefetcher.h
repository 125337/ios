@interface MMWebOptimizationPrefetcher : MMObject <NSURLSessionTaskDelegate, MMWebOptimizationPrefetchTaskDelegate>
{
    NSMutableArray * _waitingQueue; // +0x8
    NSMutableDictionary * _waitingDic; // +0x10
    NSMutableArray * _prefetchingQueue; // +0x18
    NSMutableDictionary * _prefetchingDic; // +0x20
    NSMutableArray * _a8keyLiteTaskQueue; // +0x28
    NSMutableDictionary * _a8keyLiteTaskDic; // +0x30
    NSURLSession * _urlSession; // +0x38
}
+ (id)prefetchUserAgent;
- (id)init;
- (void)dealloc;
- (void)addPrefetchTaskWithRequest:(id)arg1;
- (void)cancelAllPrefetchTask;
- (BOOL)hasPrefetchingTaskWithIdentifier:(id)arg1;
- (void)setupURLSession;
- (void)checkWaitingQueue;
- (void)onInsertRedirectPrefetchTaskWithUrl:(id)arg1 fromUrl:(id)arg2 scene:(unsigned int)arg3 subScene:(unsigned int)arg4;
- (void)URLSession:(id)arg1 task:(id)arg2 didFinishCollectingMetrics:(id)arg3;
- (void)URLSession:(id)arg1 task:(id)arg2 willPerformHTTPRedirection:(id)arg3 newRequest:(id)arg4 completionHandler:(id /* block */)arg5;
- (id)waitingQueue;
- (void)setWaitingQueue:(id)arg1;
- (id)waitingDic;
- (void)setWaitingDic:(id)arg1;
- (id)prefetchingQueue;
- (void)setPrefetchingQueue:(id)arg1;
- (id)prefetchingDic;
- (void)setPrefetchingDic:(id)arg1;
- (id)a8keyLiteTaskQueue;
- (void)setA8keyLiteTaskQueue:(id)arg1;
- (id)a8keyLiteTaskDic;
- (void)setA8keyLiteTaskDic:(id)arg1;
- (id)urlSession;
- (void)setUrlSession:(id)arg1;
- (void).cxx_destruct;
@end
