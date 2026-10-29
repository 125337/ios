@interface WCFinderFeedImageCDNView : UIImageView
{
    id <WCFinderFeedImageCDNViewDelegate> _delegate; // +0x8
    UIImage * _defaultImage; // +0x10
    WCFinderFeedMediaWrap * _currentMediaWrap; // +0x18
    unsigned long long _downloadFlag; // +0x20
}
- (void)prepareForReuse;
- (void)updateImageWithMediaWrap:(id)arg1 downloadFlag:(unsigned long long)arg2 isPriority:(BOOL)arg3;
- (void)reloadImage;
- (void)updateImage:(id)arg1;
- (void)downloadFinished:(double)arg1 key:(id)arg2 error:(id)arg3 param:(struct)arg4;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)defaultImage;
- (void)setDefaultImage:(id)arg1;
- (id)currentMediaWrap;
- (void)setCurrentMediaWrap:(id)arg1;
- (unsigned long long)downloadFlag;
- (void)setDownloadFlag:(unsigned long long)arg1;
- (void).cxx_destruct;
@end
