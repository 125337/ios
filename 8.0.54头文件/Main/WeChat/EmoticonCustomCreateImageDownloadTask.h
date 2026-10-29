@interface EmoticonCustomCreateImageDownloadTask : EmoticonCustomCreateDownloadTask <MMImageLoaderObserver>
{
    id /* block */ _finderProgressBlock; // +0x8
    id /* block */ _finderSucBlock; // +0x10
    NSArray * _mediaInfoArray; // +0x18
    NSMutableArray * _needDownloadImages; // +0x20
}
- (id)init;
- (id)initWithFinderMediaInfoArray:(id)arg1;
- (void)dealloc;
- (void)startDownload;
- (BOOL)interruptDownload;
- (void)tryDownloadNextImage;
- (void)ImageDidLoadWithData:(id)arg1 Url:(id)arg2;
- (void)ImageDidFail:(id)arg1;
- (double)currentDownloadingProgress;
- (BOOL)isDownloadingMultiImages;
- (id)needDownloadImages;
- (id /* block */)finderProgressBlock;
- (void)setFinderProgressBlock:(id /* block */)arg1;
- (id /* block */)finderSucBlock;
- (void)setFinderSucBlock:(id /* block */)arg1;
- (id)mediaInfoArray;
- (void)setMediaInfoArray:(id)arg1;
- (void)setNeedDownloadImages:(id)arg1;
- (void).cxx_destruct;
@end

