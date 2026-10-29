@interface WCSightLoader : MMUserService <NSURLSessionDelegate, NSURLSessionDownloadDelegate, WCFacadeExt, MMServiceProtocol>
{
    NSString * _sightCacheDirectory; // +0x8
    NSURLSession * _session; // +0x10
    NSCache * _observerCache; // +0x18
    NSCache * _downloadItemCache; // +0x20
}
+ (unsigned long long)cleanCacheMgrMakeToClean;
+ (unsigned long long)preCleanGetCacheSize;
- (void)onServiceInit;
- (void)onServiceClearData;
- (id)sightPathForUrl:(id)arg1;
- (BOOL)saveSightAtPath:(id)arg1 forUrl:(id)arg2;
- (void)loadSightForUrl:(id)arg1 Observer:(id)arg2 atScene:(unsigned int)arg3 isPreload:(BOOL)arg4;
- (id)md5ForURL:(id)arg1;
- (id)genMp4PathForUrl:(id)arg1;
- (void)URLSession:(id)arg1 downloadTask:(id)arg2 didWriteData:(long long)arg3 totalBytesWritten:(long long)arg4 totalBytesExpectedToWrite:(long long)arg5;
- (void)URLSession:(id)arg1 downloadTask:(id)arg2 didFinishDownloadingToURL:(id)arg3;
- (void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3;
- (void)onDownloadFinish:(id)arg1 downloadType:(long long)arg2;
- (id)sightCacheDirectory;
- (id)session;
- (id)observerCache;
- (id)downloadItemCache;
- (void)setSightCacheDirectory:(id)arg1;
- (void)setSession:(id)arg1;
- (void)setObserverCache:(id)arg1;
- (void)setDownloadItemCache:(id)arg1;
- (void).cxx_destruct;
@end

