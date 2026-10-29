@interface MPOriginalImageDownloader : NSObject
{
    MPOriginalImageTileCache * _tileCache; // +0x8
    NSObject<OS_dispatch_queue> * _callbackQueue; // +0x10
}
- (id)initWithTileCache:(id)arg1 callbackQueue:(id)arg2;
- (void)startDownloadForKey:(id)arg1 url:(id)arg2 fileExtension:(id)arg3 logContext:(id)arg4 progressBlock:(id /* block */)arg5 completeBlock:(id /* block */)arg6;
- (id)tileCache;
- (void)setTileCache:(id)arg1;
- (id)callbackQueue;
- (void)setCallbackQueue:(id)arg1;
- (void).cxx_destruct;
@end
