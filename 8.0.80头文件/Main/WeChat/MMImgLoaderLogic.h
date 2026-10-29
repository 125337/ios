@interface MMImgLoaderLogic : NSObject
{
    NSMutableArray * _cached; // +0x8
    MMImgLoaderInfo * _loadingInfo; // +0x10
    NSMutableArray * _pending; // +0x18
    NSObject<OS_dispatch_queue> * _imageQueue; // +0x20
}
- (id)init;
- (void)dealloc;
- (BOOL)isLoading;
- (void)loadHDImageWithConfig:(id)arg1 complete:(id /* block */)arg2;
- (void)cancelLoadHDImageWithItem:(id)arg1;
- (BOOL)isItem:(id)arg1 equalTo:(id)arg2;
- (void)checkQueue;
- (void)_loadHDImageWithConfig:(id)arg1 complete:(id /* block */)arg2;
- (id)cachedInfoWithConfig:(id)arg1;
- (void)removeCachedInfoWithItem:(id)arg1;
- (id)loadingInfoWithConfig:(id)arg1;
- (id)pendingInfoWithConfig:(id)arg1;
- (void)removePendingInfoWithItem:(id)arg1;
- (id)cached;
- (void)setCached:(id)arg1;
- (id)loadingInfo;
- (void)setLoadingInfo:(id)arg1;
- (id)pending;
- (void)setPending:(id)arg1;
- (id)imageQueue;
- (void)setImageQueue:(id)arg1;
- (void).cxx_destruct;
@end
