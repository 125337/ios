@interface CBTAttachmentImageView : CBTAttachmentBaseView <UIScrollViewDelegate, UIGestureRecognizerDelegate>
{
    BOOL _isAdaptingFrameSize; // +0x8
    BOOL _hasSetupAmoebaReporting; // +0x9
    UIScrollView * _scrollView; // +0x10
    NSArray * _imageViews; // +0x18
    NSMutableArray * _loadedUrls; // +0x20
    CAGradientLayer * _fadeGradientMask; // +0x28
    CGSize _singleImageAdaptedSize; // +0x30
}
- (id)initWithAttachment:(id)arg1;
- (id)imageUrls;
- (BOOL)isMulti;
- (void)buildSubviewsIfNeeded;
- (void)layoutView;
- (BOOL)isLocationInGestureResponderView:(CGPoint)arg1;
- (void)layoutImageFrames;
- (void)layoutSingleFrame:(double)arg1;
- (void)layoutMultiFrames:(double)arg1;
- (void)updateGradientMasks;
- (void)scrollViewDidScroll:(id)arg1;
- (void)loadAllImages;
- (void)adaptSingleFrameSizeWithImage:(id)arg1;
- (void)onImageTapped:(id)arg1;
- (BOOL)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (BOOL)gestureRecognizerShouldBegin:(id)arg1;
- (id)collectImageItems;
- (unsigned long long)indexOfTappedImageView:(id)arg1;
- (void)setupAmoebaReporting;
- (void)reportContentCardClick;
- (void)reportAigcPicExposureIfNeeded;
- (void)reportAigcPicClick:(id)arg1;
- (id)scrollView;
- (void)setScrollView:(id)arg1;
- (id)imageViews;
- (void)setImageViews:(id)arg1;
- (id)loadedUrls;
- (void)setLoadedUrls:(id)arg1;
- (CGSize)singleImageAdaptedSize;
- (void)setSingleImageAdaptedSize:(CGSize)arg1;
- (BOOL)isAdaptingFrameSize;
- (void)setIsAdaptingFrameSize:(BOOL)arg1;
- (id)fadeGradientMask;
- (void)setFadeGradientMask:(id)arg1;
- (BOOL)hasSetupAmoebaReporting;
- (void)setHasSetupAmoebaReporting:(BOOL)arg1;
- (void).cxx_destruct;
@end
