@interface WCFinderMusicVideoResourceLoader : NSObject
{
    unsigned long long _mode; // +0x8
    NSObject<OS_dispatch_queue> * _queue; // +0x10
    NSMutableSet * _requestIDs; // +0x18
    unsigned long long _generation; // +0x20
}
- (id)init;
- (id)initWithMode:(unsigned long long)arg1;
- (void)dealloc;
- (BOOL)isReadableVideo:(id)arg1;
- (void)requestVideoForAsset:(id)arg1 type:(unsigned long long)arg2 network:(BOOL)arg3 generation:(unsigned long long)arg4 progress:(id /* block */)arg5 completion:(id /* block */)arg6;
- (void)requestCoverForAsset:(id)arg1 generation:(unsigned long long)arg2 completion:(id /* block */)arg3;
- (void)loadLocalResourceForAsset:(id)arg1 enableFallback:(BOOL)arg2 completion:(id /* block */)arg3;
- (void)downloadOriginalForAsset:(id)arg1 progress:(id /* block */)arg2 completion:(id /* block */)arg3;
- (void)simulateDownloadForResource:(id)arg1 step:(unsigned long long)arg2 generation:(unsigned long long)arg3 progress:(id /* block */)arg4 completion:(id /* block */)arg5;
- (void)cancel;
- (unsigned long long)mode;
- (id)queue;
- (void)setQueue:(id)arg1;
- (id)requestIDs;
- (void)setRequestIDs:(id)arg1;
- (unsigned long long)generation;
- (void)setGeneration:(unsigned long long)arg1;
- (void).cxx_destruct;
@end
