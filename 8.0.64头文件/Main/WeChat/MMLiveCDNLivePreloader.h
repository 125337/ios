@interface MMLiveCDNLivePreloader : NSObject <NSURLSessionDataDelegate>
{
    id <MMLiveCDNLivePreloaderDelegate> _delegate; // +0x8
    NSMutableArray * _preloadQueue; // +0x10
    MMLiveCDNLivePreloadItem * _curPreloadingItem; // +0x18
    UIView * _redundantView; // +0x20
    NSMutableSet * _preloadedUrlSet; // +0x28
    NSURLSession * _preloadSession; // +0x30
    NSURLSessionDataTask * _preloadTask; // +0x38
}
- (void)addUrlToPreloadQueue:(id)arg1 andFinderDataItem:(id)arg2;
- (void)stopPreloadWithUrl:(id)arg1;
- (void)_doStopPreloadWithUrl:(id)arg1;
- (void)stopAllPreload;
- (void)doPreload;
- (void)finishPreload;
- (void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3;
- (void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveData:(id)arg3;
- (void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveResponse:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)callbackErrorWithReason:(id)arg1 url:(id)arg2;
- (id)errorWithReason:(id)arg1;
- (id)preloadQueue;
- (id)preloadedUrlSet;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (void)setPreloadQueue:(id)arg1;
- (id)curPreloadingItem;
- (void)setCurPreloadingItem:(id)arg1;
- (id)redundantView;
- (void)setRedundantView:(id)arg1;
- (void)setPreloadedUrlSet:(id)arg1;
- (id)preloadSession;
- (void)setPreloadSession:(id)arg1;
- (id)preloadTask;
- (void)setPreloadTask:(id)arg1;
- (void).cxx_destruct;
@end
