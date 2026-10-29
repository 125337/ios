@interface WCFImageManager : MMUserService <MMServiceProtocol>
{
    NSLock * _operationsLock; // +0x8
    BOOL _fromShare; // +0x10
    WCFImageCache * _cache; // +0x18
    WCFImageDownloader * _downloader; // +0x20
    NSMutableArray * _operations; // +0x28
    NSObject<OS_dispatch_queue> * _blocksQueue; // +0x30
    NSObject<OS_dispatch_queue> * _queue1; // +0x38
}
+ (id)globalIOQueue;
- (void)onServiceClearData;
- (void)onServiceInit;
- (void)onServiceMemoryWarning;
- (void)onServiceClearMemoryCache:(unsigned long long)arg1 addedUserType:(unsigned long long)arg2;
- (void)onServiceClearMemoryCacheInBackground;
- (void)removeOperation:(id)arg1;
- (void)addOperation:(id)arg1;
- (id)loadImageWithURL:(id)arg1 size:(CGSize)arg2 options:(long long)arg3 completion:(id /* block */)arg4;
- (id)loadImageWithURL:(id)arg1 imageIdentifier:(id)arg2 size:(CGSize)arg3 options:(long long)arg4 completion:(id /* block */)arg5;
- (id)preloadImageWithMedia:(id)arg1 isThumb:(BOOL)arg2 completion:(id /* block */)arg3;
- (id)preloadImageWithMedia:(id)arg1 type:(long long)arg2 completion:(id /* block */)arg3;
- (id)downloadImageWithMedia:(id)arg1 type:(long long)arg2 targetPath:(id)arg3 completion:(id /* block */)arg4;
- (id)loadImageWithMedia:(id)arg1 isThumb:(BOOL)arg2 size:(CGSize)arg3 options:(long long)arg4 completion:(id /* block */)arg5;
- (id)loadImageWithMedia:(id)arg1 type:(long long)arg2 size:(CGSize)arg3 options:(long long)arg4 completion:(id /* block */)arg5;
- (id)loadImagesWithBlock:(id /* block */)arg1 context:(id)arg2 completion:(id /* block */)arg3;
- (id)queryCacheForMedia:(id)arg1 type:(long long)arg2 size:(CGSize)arg3 completion:(id /* block */)arg4;
- (id)queryCacheForMedia:(id)arg1 type:(long long)arg2 size:(CGSize)arg3 options:(long long)arg4 completion:(id /* block */)arg5;
- (void)callDownload:(id)arg1 media:(id)arg2 key:(id)arg3 param:(struct)arg4 completion:(id /* block */)arg5;
- (void)callDownload:(id)arg1 url:(id)arg2 key:(id)arg3 size:(CGSize)arg4 options:(long long)arg5 completion:(id /* block */)arg6;
- (void)callDownload:(id)arg1 operations:(id)arg2 param:(struct)arg3 completion:(id /* block */)arg4;
- (void)callCompletion:(id /* block */)arg1 operations:(id)arg2 image:(id)arg3 param:(struct)arg4 error:(id)arg5;
- (void)callCompletion:(id /* block */)arg1 image:(id)arg2 key:(id)arg3 param:(struct)arg4 error:(id)arg5;
- (void)onImageLoaded:(id)arg1 operation:(id)arg2 key:(id)arg3 error:(id)arg4 param:(struct)arg5 finished:(BOOL)arg6 completion:(id /* block */)arg7;
- (id)imageCache;
- (id)imageDownloader;
- (BOOL)fromShare;
- (void)setFromShare:(BOOL)arg1;
- (id)cache;
- (void)setCache:(id)arg1;
- (id)downloader;
- (void)setDownloader:(id)arg1;
- (id)operations;
- (void)setOperations:(id)arg1;
- (id)blocksQueue;
- (void)setBlocksQueue:(id)arg1;
- (id)queue1;
- (void)setQueue1:(id)arg1;
- (void).cxx_destruct;
@end
