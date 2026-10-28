@interface TingImageDownloader : NSObject <MMImageLoaderObserver, WCFacadeExt>
{
    NSMutableDictionary * _blockMap; // +0x8
    NSMutableDictionary * _momentBlockMap; // +0x10
}
- (id)init;
- (void)dealloc;
- (id)blockMap;
- (id)momentBlockMap;
- (id)existHanlderForObserver:(id)arg1 inHandlers:(id)arg2;
- (id)cachedImageForUrl:(id)arg1;
- (void)loadImageWithUrl:(id)arg1 observer:(id)arg2 completion:(id /* block */)arg3;
- (void)cancelImageDownloadForUrl:(id)arg1 observer:(id)arg2;
- (void)ImageDidLoad:(id)arg1 Url:(id)arg2;
- (void)ImageDidFail:(id)arg1;
- (id)thumbnailItem:(id)arg1;
- (id)keyForWCMediaItem:(id)arg1 downloadType:(long long)arg2;
- (id)cachedImageForWCMediaItem:(id)arg1 photoType:(long long)arg2;
- (id)cachedThumbnailForWCMediaItem:(id)arg1;
- (void)loadMomentImage:(id)arg1 downloadType:(long long)arg2 observer:(id)arg3 completion:(id /* block */)arg4;
- (void)cancelDownloadMomentImage:(id)arg1 downloadType:(long long)arg2 observer:(id)arg3;
- (void)loadMomentThumbnail:(id)arg1 observer:(id)arg2 completion:(id /* block */)arg3;
- (void)cancelDownloadMomentThumbnail:(id)arg1 observer:(id)arg2;
- (void)cancelAllDownloadMomentImage:(id)arg1;
- (void)onDownloadFinish:(id)arg1 downloadType:(long long)arg2;
- (void)onDownloadFail:(id)arg1 downloadType:(long long)arg2;
- (void)setBlockMap:(id)arg1;
- (void)setMomentBlockMap:(id)arg1;
- (void).cxx_destruct;
@end
