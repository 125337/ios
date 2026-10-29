@interface MMMusicVideoImageDownloader : NSObject <MMImageLoaderObserver>
{
    BOOL _hasFinished; // +0x8
    id /* block */ _imageCallback; // +0x10
    NSString * _currentDownloadingUrl; // +0x18
    NSData * _thumbImageData; // +0x20
}
- (void)trigerDownload:(id)arg1;
- (void)downloadThubmImage:(id)arg1 callback:(id /* block */)arg2;
- (void)onWaitTimeOut;
- (id)compressImageData:(id)arg1;
- (void)dealloc;
- (void)ImageDidFail:(id)arg1;
- (void)ImageDidLoadWithData:(id)arg1 Url:(id)arg2;
- (void)doCallback;
- (id /* block */)imageCallback;
- (void)setImageCallback:(id /* block */)arg1;
- (id)currentDownloadingUrl;
- (void)setCurrentDownloadingUrl:(id)arg1;
- (id)thumbImageData;
- (void)setThumbImageData:(id)arg1;
- (BOOL)hasFinished;
- (void)setHasFinished:(BOOL)arg1;
- (void).cxx_destruct;
@end
