@interface WADefaultPosterView : UIView
{
    BOOL _isPortrait; // +0x8
    WADefaultPosterViewModel * _viewModel; // +0x10
    UIImageView * _originalScreenshotView; // +0x18
    WAPosterBannerView * _bannerView; // +0x20
}
+ (CGSize)calcPosterSizeWithOriginalImage:(id)arg1;
- (id)initWithFrame:(CGRect)arg1;
- (void)initSubviews;
- (void)setViewModel:(id)arg1;
- (void)updateUI;
- (id)renderPosterImage;
- (id)viewModel;
- (id)originalScreenshotView;
- (void)setOriginalScreenshotView:(id)arg1;
- (id)bannerView;
- (void)setBannerView:(id)arg1;
- (BOOL)isPortrait;
- (void)setIsPortrait:(BOOL)arg1;
- (void).cxx_destruct;
@end
