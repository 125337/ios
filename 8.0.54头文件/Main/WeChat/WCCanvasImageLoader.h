@interface WCCanvasImageLoader : MMUserService <WCCdnDownloadImageDelegate, MMServiceProtocol>
{
    NSRecursiveLock * m_lock; // +0x8
    NSObject<OS_dispatch_queue> * _request_queue; // +0x10
    NSMutableDictionary * m_requestInfoDictionary; // +0x18
    unsigned int m_imageDataSize; // +0x20
    NSMutableDictionary * m_imageCaches; // +0x28
    NSMutableArray * m_imageCacheFIFO; // +0x30
    unsigned int m_gifDataSize; // +0x38
    NSMutableDictionary * m_gifDataCaches; // +0x40
    NSMutableArray * m_gifDataCacheFIFO; // +0x48
    WCDownloadImageCdnMgr * _cdnMgr; // +0x50
}
+ (unsigned long long)cleanCacheMgrMakeToClean;
+ (unsigned long long)preCleanGetCacheSize;
- (void)onServiceInit;
- (id)imageDataObjectForKey:(id)arg1;
- (id)imageObjectForKey:(id)arg1;
- (void)setImageDataObject:(id)arg1 forKey:(id)arg2;
- (void)setImageObject:(id)arg1 forKey:(id)arg2;
- (void)onServiceMemoryWarning;
- (id)cacheDataFromFile:(id)arg1 fromUrl:(id)arg2;
- (id)cacheImageFromFile:(id)arg1 fromUrl:(id)arg2;
- (id)cacheNotGifImageFromFile:(id)arg1 fromUrl:(id)arg2;
- (id)cacheImageFromData:(id)arg1 fromUrl:(id)arg2;
- (id)getImageFromCache:(id)arg1;
- (id)getImageFromImageCache:(id)arg1;
- (id)getDataFromCache:(id)arg1;
- (void)callImageDidLoadExt:(id)arg1 Url:(id)arg2 withUrlMd5:(id)arg3;
- (void)callImageDidLoadWithDataExt:(id)arg1 Url:(id)arg2 withUrlMd5:(id)arg3;
- (BOOL)callImageDidLoadWithDataOrFailedExt:(id)arg1 Url:(id)arg2 withUrlMd5:(id)arg3;
- (void)callImageDidLoadOrFailedExt:(id)arg1 Url:(id)arg2 UrlMd5:(id)arg3;
- (void)callAllExtWithOrder:(id)arg1 Data:(id)arg2 Url:(id)arg3 UrlMd5:(id)arg4;
- (id)imageForURL:(id)arg1 LoadOnMainThread:(BOOL)arg2;
- (BOOL)imageCacheExistsForURL:(id)arg1;
- (id)imageCacheForURL:(id)arg1 LoadOnMainThread:(BOOL)arg2;
- (id)imageDataForURL:(id)arg1 LoadOnMainThread:(BOOL)arg2;
- (id)imagePathForURL:(id)arg1;
- (void)loadImageForURL:(id)arg1 observer:(id)arg2 atScene:(unsigned int)arg3 isPreload:(BOOL)arg4 useSnsCdnDownload:(BOOL)arg5;
- (void)loadImageForURL:(id)arg1 observer:(id)arg2;
- (void)loadAdImageForURL:(id)arg1 observer:(id)arg2;
- (void)cancelLoadForURL:(id)arg1 oberver:(id)arg2;
- (void)cancelLoadAllURLs:(id)arg1;
- (BOOL)isImageLoaded:(id)arg1;
- (void)removeImageCacheForKey:(id)arg1;
- (void)removeGifDataCacheForKey:(id)arg1;
- (void)removeCacheForURL:(id)arg1;
- (void)removeCacheForURLs:(id)arg1;
- (void)saveImage:(id)arg1 imageData:(id)arg2;
- (void)removeConnectionForUrl:(id)arg1;
- (id)fetchSphereThumbIDForOriUrl:(id)arg1 thumbSize:(CGSize)arg2;
- (void)connection:(id)arg1 willSendRequestForAuthenticationChallenge:(id)arg2;
- (void)connection:(id)arg1 didReceiveResponse:(id)arg2;
- (void)connectionDidFinishLoading:(id)arg1;
- (void)connection:(id)arg1 didReceiveData:(id)arg2;
- (void)connection:(id)arg1 didFailWithError:(id)arg2;
- (id)urlMD5ForConnection:(id)arg1;
- (void)onCdnDownloadImageFinish:(id)arg1 downloadType:(long long)arg2;
- (void)onCdnDownloadImageFail:(id)arg1 downloadType:(long long)arg2;
- (id)cdnGetSnsOperationsWithFeedId:(id)arg1;
- (void)onCdnDownloadImageAddedQueue:(id)arg1 downloadType:(long long)arg2;
- (void)onCdnDownloadImageBegin:(id)arg1 downloadType:(long long)arg2;
- (void)onCdnDownloadImageCancel:(id)arg1 downloadType:(long long)arg2;
- (void)onCdnDownloadImageProcessChanged:(id)arg1 downloadType:(long long)arg2 current:(long long)arg3 total:(long long)arg4;
- (id)cdnMgr;
- (id)m_lock;
- (void)setM_lock:(id)arg1;
- (void)setCdnMgr:(id)arg1;
- (void).cxx_destruct;
@end

