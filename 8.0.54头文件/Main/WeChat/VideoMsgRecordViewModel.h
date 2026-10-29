@interface VideoMsgRecordViewModel : VideoMessageViewModel <MMImageLoaderObserver>
{
    UIImage * _urlImage; // +0x70
}
- (void)dealloc;
- (id)thumbImage;
- (unsigned int)thumbDownloadStatus;
- (id)thumbUrl;
- (BOOL)canPlayVideo;
- (id)cellViewClassName;
- (void)ImageDidLoad:(id)arg1 Url:(id)arg2;
- (id)urlImage;
- (void)setUrlImage:(id)arg1;
- (void).cxx_destruct;
@end

