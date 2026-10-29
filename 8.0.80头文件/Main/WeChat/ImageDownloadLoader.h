@interface ImageDownloadLoader : NSObject <MMImageLoaderObserver>
{
    NSMutableSet * m_filePathSet; // +0x8
    BOOL m_isDownloading; // +0x10
    id <ImageDownloadLoaderDelegate> _delegate; // +0x18
    NSURL * _imgUrl; // +0x20
}
- (void)dealloc;
- (id)filePathToSaveList;
- (void)addDownloadTaskWithFilePath:(id)arg1;
- (void)finishDownloadWithData:(id)arg1;
- (void)ImageDidLoadWithData:(id)arg1 Url:(id)arg2;
- (void)ImageDidFail:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)imgUrl;
- (void)setImgUrl:(id)arg1;
- (void).cxx_destruct;
@end
