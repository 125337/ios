@interface MMFinderLiveResDownloader : NSObject
{
    NSRecursiveLock * _lock; // +0x8
    NSMutableDictionary * _requestObjectDict; // +0x10
    NSMutableArray * _downloadingRequestObjectQueue; // +0x18
    NSMutableArray * _waittingRequestObjectQueue; // +0x20
    NSMutableArray * _pendingRetryRequestObjects; // +0x28
}
- (void)dealloc;
- (void)stopAllDownLoad;
- (id)init;
- (void)setup;
- (unsigned long long)pendingTaskCount;
- (BOOL)startDownload:(id)arg1;
- (BOOL)realStartDonwloadWithQueue;
- (BOOL)retryDownLoadForRequestObj:(id)arg1;
- (void)OnCdnDownload:(id)arg1;
- (void)handleTask:(id)arg1 downloadAttemptSucceeded:(BOOL)arg2;
- (id)lock;
- (void)setLock:(id)arg1;
- (id)requestObjectDict;
- (void)setRequestObjectDict:(id)arg1;
- (id)downloadingRequestObjectQueue;
- (void)setDownloadingRequestObjectQueue:(id)arg1;
- (id)waittingRequestObjectQueue;
- (void)setWaittingRequestObjectQueue:(id)arg1;
- (id)pendingRetryRequestObjects;
- (void)setPendingRetryRequestObjects:(id)arg1;
- (void).cxx_destruct;
@end
