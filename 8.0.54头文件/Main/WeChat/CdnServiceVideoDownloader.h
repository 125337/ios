@interface CdnServiceVideoDownloader : NSObject
+ (void)preloadVideoMsg:(id)arg1 behavior:(long long)arg2 percent:(int)arg3 progressBlock:(id /* block */)arg4 preloadCompleteBlock:(id /* block */)arg5;
+ (void)onDownloadComplete:(id)arg1 argsWrap:(id)arg2;
+ (BOOL)checkPreloadCacheWithMsgWrap:(id)arg1;
+ (id)generateDownloadArgsWrapWithVideoMsg:(id)arg1 percent:(int)arg2;
@end

