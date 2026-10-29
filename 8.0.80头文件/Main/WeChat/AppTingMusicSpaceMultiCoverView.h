@interface AppTingMusicSpaceMultiCoverView : UIView <MMWebImageViewDelegate, AppStandardContentExternalLoadImageView>
{
    NSMutableArray * _imageViews; // +0x8
    NSArray * _currentUrls; // +0x10
    UIView * _outerMaskLayer; // +0x18
    UIView * _innerMaskLayer; // +0x20
}
- (id)initWithFrame:(CGRect)arg1;
- (void)updateWithImageUrls:(id)arg1;
- (void)onLoadImageOK:(id)arg1;
- (void)layoutSubviews;
- (id)imageViews;
- (void)setImageViews:(id)arg1;
- (id)currentUrls;
- (void)setCurrentUrls:(id)arg1;
- (id)outerMaskLayer;
- (void)setOuterMaskLayer:(id)arg1;
- (id)innerMaskLayer;
- (void)setInnerMaskLayer:(id)arg1;
- (void).cxx_destruct;
@end
