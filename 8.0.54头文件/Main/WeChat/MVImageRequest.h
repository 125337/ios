@interface MVImageRequest : MVDownloadOperation
{
    BOOL _internalExecuting; // +0x8
    BOOL _internalFinished; // +0x9
    id <MVImageRequestDelegate> _delegate; // +0x10
    NSString * _url; // +0x18
    NSString * _token; // +0x20
    unsigned long long _mode; // +0x28
    NSURLSessionDataTask * _dataTask; // +0x30
}
- (void)createCacheDirectoryIfNeeded;
- (BOOL)isOnlineUrl:(id)arg1;
- (void)asyncStart;
- (void)cancel;
- (void)loadImageUrl:(id)arg1 token:(id)arg2 completion:(id /* block */)arg3;
- (void)downloadWithUrl:(id)arg1 token:(id)arg2 completion:(id /* block */)arg3;
- (void)_downloadWithUrl:(id)arg1 token:(id)arg2 completion:(id /* block */)arg3;
- (void)cancelCurrentLoadingRequest;
- (id)loadCacheImageFromUrl:(id)arg1;
- (BOOL)isImageCached:(id)arg1;
- (id)cachePathForUrl:(id)arg1;
- (id)md5ForURL:(id)arg1;
- (void)writeToCachePathWithImageData:(id)arg1 url:(id)arg2;
- (void)loadLocalImageUrlString:(id)arg1 completion:(id /* block */)arg2;
- (id)urlSession;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)url;
- (void)setUrl:(id)arg1;
- (id)token;
- (void)setToken:(id)arg1;
- (unsigned long long)mode;
- (void)setMode:(unsigned long long)arg1;
- (BOOL)internalExecuting;
- (void)setInternalExecuting:(BOOL)arg1;
- (BOOL)internalFinished;
- (void)setInternalFinished:(BOOL)arg1;
- (id)dataTask;
- (void)setDataTask:(id)arg1;
- (void).cxx_destruct;
@end

