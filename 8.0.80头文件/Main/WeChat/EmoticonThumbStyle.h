@interface EmoticonThumbStyle : ImageStyle
{
    BOOL _isLoadSuccess; // +0x38
    BOOL _isFirstLoad; // +0x39
    BOOL _isLoading; // +0x3a
    NSString * _md5; // +0x40
    id /* block */ _loadFinishCallback; // +0x48
}
- (id)init;
- (void)drawInContext:(CGContext *)arg1;
- (void)asyncLoadWebImageWithCompletion:(id /* block */)arg1;
- (void)onLoadedThumbImageWithMd5:(id)arg1 andPath:(id)arg2;
- (BOOL)needAsyncLoadWebImage;
- (void)onLoadImageFail;
- (BOOL)onClickAtImageStyleShouldResponse;
- (id)imageLoadingConfig:(BOOL)arg1;
- (id)nsImgSrc;
- (id)md5;
- (void)setMd5:(id)arg1;
- (BOOL)isLoadSuccess;
- (void)setIsLoadSuccess:(BOOL)arg1;
- (BOOL)isFirstLoad;
- (void)setIsFirstLoad:(BOOL)arg1;
- (BOOL)isLoading;
- (void)setIsLoading:(BOOL)arg1;
- (id /* block */)loadFinishCallback;
- (void)setLoadFinishCallback:(id /* block */)arg1;
- (void).cxx_destruct;
@end
