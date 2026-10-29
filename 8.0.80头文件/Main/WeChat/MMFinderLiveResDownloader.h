@interface MMFinderLiveResDownloader : NSObject
{
    NSMutableDictionary * _requestObjectDict; // +0x8
    NSMutableArray * _downloadingRequestObjectQueue; // +0x10
    NSMutableArray * _waittingRequestObjectQueue; // +0x18
    NSMutableArray * _pendingRetryRequestObjects; // +0x20
}
- (void)dealloc;
- (void)stopAllDownLoad;
- (id)init;
- (void)setup;
- (void)startDownload:(id)arg1;
- (BOOL)realStartDonwloadWithQueue;
- (BOOL)retryDownLoadForRequestObj:(id)arg1;
- (void)OnCdnDownload:(id)arg1;
- (void)handleTask:(id)arg1 downloadAttemptSucceeded:(BOOL)arg2;
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
