@interface WCFImageDownloader : NSObject
{
    WCFImageCache * _cache; // +0x8
    NSOperationQueue * _decodeQueue; // +0x10
    WCFImageDownloadQueue * _downloadQueue; // +0x18
    long long _serial; // +0x20
}
- (id)initWithCache:(id)arg1;
- (BOOL)addOperation:(id)arg1 forKey:(id)arg2;
- (id)operationForKey:(id)arg1;
- (void)removeOperation:(id)arg1;
- (id)cancelToken;
- (id)requestImageWithURL:(id)arg1 key:(id)arg2 param:(struct)arg3 completion:(id /* block */)arg4;
- (id)requestImageWithOperations:(id)arg1 param:(struct)arg2 completion:(id /* block */)arg3;
- (id)requestImageWithMedia:(id)arg1 key:(id)arg2 param:(struct)arg3 completion:(id /* block */)arg4;
- (id)addOperation:(id)arg1 completion:(id /* block */)arg2 token:(id)arg3 param:(struct)arg4;
- (void)OnCdnDownload:(id)arg1;
- (void)onOperationFinished:(id)arg1 info:(id)arg2;
- (void)reportImageDownloadIDKeyWithOperation:(id)arg1 info:(id)arg2;
- (id)cache;
- (id)decodeQueue;
- (void)setDecodeQueue:(id)arg1;
- (id)downloadQueue;
- (void)setDownloadQueue:(id)arg1;
- (long long)serial;
- (void)setSerial:(long long)arg1;
- (void).cxx_destruct;
@end

