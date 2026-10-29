@interface MMLiteAppDownloadMgr : NSObject <NSURLSessionDelegate, NSURLSessionDownloadDelegate>
{
    id <MMLiteAppDownloadMgrDelegate> _delegate; // +0x8
    NSURLSession * _session; // +0x10
    NSMutableDictionary * _downloadingStatus; // +0x18
    NSMutableDictionary * _cronetTaskStatus; // +0x20
    NSMutableDictionary * _cancelledCronetTaskPaths; // +0x28
    NSMutableArray * _downloadingItemQueue; // +0x30
    NSMutableArray * _waitingItemQueue; // +0x38
    shared_ptr<CronetCallback> _cronet_cb_; // +0x40
}
- (id)init;
- (void)addDownloadLiteAppTask:(id)arg1 reporter:(id)arg2;
- (void)startDownloadLiteApp:(id)arg1;
- (void)checkQueue;
- (void)dispatchAsync:(id /* block */)arg1 isDownloadMediaResource:(BOOL)arg2;
- (id)cancelCronetDownloadTaskForAppId:(id)arg1;
- (void)OnCronetDownloadComplete:(const void *)arg1;
- (void)URLSession:(id)arg1 downloadTask:(id)arg2 didFinishDownloadingToURL:(id)arg3;
- (void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)session;
- (void)setSession:(id)arg1;
- (id)downloadingStatus;
- (void)setDownloadingStatus:(id)arg1;
- (id)cronetTaskStatus;
- (void)setCronetTaskStatus:(id)arg1;
- (id)cancelledCronetTaskPaths;
- (void)setCancelledCronetTaskPaths:(id)arg1;
- (id)downloadingItemQueue;
- (void)setDownloadingItemQueue:(id)arg1;
- (id)waitingItemQueue;
- (void)setWaitingItemQueue:(id)arg1;
- (shared_ptr<CronetCallback>)cronet_cb_;
- (void)setCronet_cb_:(shared_ptr<CronetCallback>)arg1;
- (void).cxx_destruct;
- (id).cxx_construct;
@end
