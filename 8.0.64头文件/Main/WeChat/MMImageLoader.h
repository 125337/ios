@interface MMImageLoader : MMRootService <MMServiceProtocol>
{
    NSRecursiveLock * _lockRequest; // +0x8
}
+ (unsigned long long)cleanCacheMgrMakeToClean;
+ (unsigned long long)preCleanGetCacheSize;
+ (id)DeprecatedCacheBaseDirectory;
+ (id)CacheBaseDirectory;
+ (id)RelativePathByTargetURL:(id)arg1;
- (void)_swiftLoadImageFor:(NSString *)arg1 scene:(long long)arg2 completionHandler:(id /* block */)arg3;
- (void)swiftLoadImageFor:(id)arg1 observer:(id)arg2 downloadTaskGenerator:(id /* block */)arg3 completionHandler:(id /* block */)arg4;
- (id)swiftImageDataFor:(id)arg1 loadOnMainThread:(BOOL)arg2;
- (id)swiftImageFor:(id)arg1 loadOnMainThread:(BOOL)arg2;
- (void)onServiceInit;
- (void)onServiceMemoryWarning;
- (void)onServiceClearMemoryCache:(unsigned long long)arg1 addedUserType:(unsigned long long)arg2;
- (void)onServiceClearMemoryCacheInBackground;
- (void)loadImageFor:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)loadImageFor:(id)arg1 taskGenerator:(id /* block */)arg2 completionHandler:(id /* block */)arg3;
- (id)imageForURL:(id)arg1 LoadOnMainThread:(BOOL)arg2;
- (BOOL)imageCacheExistsForURL:(id)arg1;
- (id)imageCacheForURL:(id)arg1 LoadOnMainThread:(BOOL)arg2;
- (id)imageDataForURL:(id)arg1 LoadOnMainThread:(BOOL)arg2;
- (id)imagePathForURL:(id)arg1;
- (id)makeImagePathForURL:(id)arg1;
- (void)loadImageForURL:(id)arg1 observer:(id)arg2;
- (void)loadImageForURL:(id)arg1 observer:(id)arg2 scene:(long long)arg3;
- (void)loadImageForURL:(id)arg1 observer:(id)arg2 scene:(long long)arg3 onlyNeedData:(BOOL)arg4 disableCacheWrite:(BOOL)arg5;
- (void)loadImageForURL:(id)arg1 observer:(id)arg2 reqContext:(id)arg3;
- (void)loadImageForURL:(id)arg1 requestURL:(id)arg2 observer:(id)arg3 reqContext:(id)arg4;
- (void)loadImageForURL:(id)arg1 requestURL:(id)arg2 observer:(id)arg3 reqContext:(id)arg4 scene:(long long)arg5;
- (void)cancelLoadForURL:(id)arg1 oberver:(id)arg2;
- (void)cancelLoadAllURLs:(id)arg1;
- (BOOL)isImageLoaded:(id)arg1;
- (void)removeCacheForURL:(id)arg1;
- (void)saveImage:(id)arg1 imageData:(id)arg2;
- (id)lockRequest;
- (void).cxx_destruct;
@end
