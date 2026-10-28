@interface MVImageLoader : NSObject
{
    id <MVImageLoaderDelegate> _delegate; // +0x8
    NSString * _loadingUrlString; // +0x10
    id /* block */ _completion; // +0x18
    NSURLSessionDataTask * _currentTask; // +0x20
}
+ (id)cachePathForUrl:(id)arg1;
+ (void)saveCachedImageData:(id)arg1 onlineUrl:(id)arg2;
+ (id)md5ForURL:(id)arg1;
+ (unsigned long long)cleanCacheMgrMakeToClean;
+ (unsigned long long)preCleanGetCacheSize;
- (id)init;
- (void)createCacheDirectoryIfNeeded;
- (void)loadImageUrl:(id)arg1 token:(id)arg2 completion:(id /* block */)arg3;
- (void)loadImageUrlString:(id)arg1 completion:(id /* block */)arg2;
- (void)cancelCurrentLoadingRequest;
- (void)downloadWithUrl:(id)arg1 token:(id)arg2 completion:(id /* block */)arg3;
- (id)loadCacheImageFromUrl:(id)arg1;
- (BOOL)isImageCached:(id)arg1;
- (void)_downloadWithUrl:(id)arg1 token:(id)arg2 completion:(id /* block */)arg3;
- (void)writeToCachePathWithImageData:(id)arg1 url:(id)arg2;
- (BOOL)isOnlineUrl:(id)arg1;
- (void)loadLocalImageUrlString:(id)arg1 completion:(id /* block */)arg2;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)loadingUrlString;
- (void)setLoadingUrlString:(id)arg1;
- (id /* block */)completion;
- (void)setCompletion:(id /* block */)arg1;
- (id)currentTask;
- (void)setCurrentTask:(id)arg1;
- (void).cxx_destruct;
@end
