@interface MMLongImageCropViewController : MMUIViewController <UIScrollViewDelegate, MMLongImageCropSliderBarViewDelegate, MMImageCropVCAnimatedTransitionDelegate>
{
    BOOL _hasSetupOriginCropResult; // +0x70
    BOOL _isTopCropTracking; // +0x71
    BOOL _isBottomCropTracking; // +0x72
    MMImageCropTransitionContext * _transitionContext; // +0x78
    id <MMLongImageCropViewControllerDelelgate> _delegate; // +0x80
    UIImage * _originImage; // +0x88
    MMLongImageCropResult * _originCropResult; // +0x90
    UIView * _contentView; // +0x98
    UIScrollView * _scrollView; // +0xa0
    UIImageView * _previewImageView; // +0xa8
    UIImage * _previewImage; // +0xb0
    MMLongImageCropSliderBarView * _sliderBar; // +0xb8
    UIView * _bottomBarView; // +0xc0
    MMUIButton * _closeBtn; // +0xc8
    MMUIButton * _doneBtn; // +0xd0
    MMUIButton * _resetBtn; // +0xd8
    MMLongImageCropTipsView * _topCropTipsView; // +0xe0
    MMLongImageCropTipsView * _bottomCropTipsView; // +0xe8
    CAGradientLayer * _topGradientMaskLayer; // +0xf0
    CAGradientLayer * _bottomGradientMaskLayer; // +0xf8
    double _topCroppedRatio; // +0x100
    double _bottomCroppedRatio; // +0x108
}
- (id)initWithOriginImage:(id)arg1 cropResult:(id)arg2;
- (void)viewDidLoad;
- (BOOL)useTransparentNavibar;
- (BOOL)useBlackStatusbar;
- (BOOL)hidesStatusBar;
- (BOOL)shouldInteractivePop;
- (void)initBottomBarView;
- (void)initContentView;
- (void)initSliderBar;
- (void)initPreviewScrollView;
- (void)viewDidLayoutSubviews;
- (void)layoutBottomBarView;
- (void)layoutContentView;
- (void)onCloseBtnClick;
- (void)onDoneBtnClick;
- (void)onResetBtnClick;
- (void)refreshResetBtnState;
- (void)setTopCroppedRatio:(double)arg1;
- (void)setBottomCroppedRatio:(double)arg1;
- (BOOL)isImageCropped;
- (void)onSliderBarMoveSliderPosWithTopOffsetRatio:(double)arg1 actionType:(unsigned int)arg2;
- (void)onSliderBarBeganTrackingCropFromDirection:(unsigned int)arg1;
- (void)onSliderBarContinueTrackingCropFromDirection:(unsigned int)arg1 croppedRatio:(double)arg2;
- (void)onSliderBarEndTrackingCropFromDirection:(unsigned int)arg1 topCroppedRatio:(double)arg2 bottomCroppedRatio:(double)arg3;
- (void)setScrollViewToTopRatio:(double)arg1 animted:(BOOL)arg2;
- (void)setScrollViewToBottomRatio:(double)arg1;
- (void)updatePreviewWithCropFromDirection:(unsigned int)arg1 topCroppedRatio:(double)arg2 bottomCroppedRatio:(double)arg3;
- (void)updateCropTipsViewHidden:(BOOL)arg1;
- (void)cropPreviewImageWithTopCroppedRatio:(double)arg1 bottomCroppedRatio:(double)arg2;
- (void)updatePreviewImage:(id)arg1;
- (void)layoutPreviewImage;
- (id)mmNavigationController:(id)arg1 animationControllerForOperation:(long long)arg2 fromViewController:(id)arg3 toViewController:(id)arg4;
- (CGRect)onPushTransitionGetImageFinalFrame;
- (void)onPushTransitionBegan:(id)arg1;
- (void)onPushTransitionInAnimateDuration:(id)arg1;
- (void)onPushTransitionEnd:(id)arg1 isComplete:(BOOL)arg2;
- (void)onPushTransitionAnimateImageEnd:(id)arg1 animatedImageView:(id)arg2 completion:(id /* block */)arg3;
- (CGRect)onPopTransitionGetImageFinalFrame;
- (void)onPopTransitionBegan:(id)arg1;
- (void)onPopTransitionInAnimateDuration:(id)arg1;
- (void)onPopTransitionEnd:(id)arg1 isComplete:(BOOL)arg2;
- (id)transitionContext;
- (void)setTransitionContext:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)originImage;
- (void)setOriginImage:(id)arg1;
- (id)originCropResult;
- (void)setOriginCropResult:(id)arg1;
- (BOOL)hasSetupOriginCropResult;
- (void)setHasSetupOriginCropResult:(BOOL)arg1;
- (id)contentView;
- (void)setContentView:(id)arg1;
- (id)scrollView;
- (void)setScrollView:(id)arg1;
- (id)previewImageView;
- (void)setPreviewImageView:(id)arg1;
- (id)previewImage;
- (void)setPreviewImage:(id)arg1;
- (id)sliderBar;
- (void)setSliderBar:(id)arg1;
- (id)bottomBarView;
- (void)setBottomBarView:(id)arg1;
- (id)closeBtn;
- (void)setCloseBtn:(id)arg1;
- (id)doneBtn;
- (void)setDoneBtn:(id)arg1;
- (id)resetBtn;
- (void)setResetBtn:(id)arg1;
- (id)topCropTipsView;
- (void)setTopCropTipsView:(id)arg1;
- (id)bottomCropTipsView;
- (void)setBottomCropTipsView:(id)arg1;
- (id)topGradientMaskLayer;
- (void)setTopGradientMaskLayer:(id)arg1;
- (id)bottomGradientMaskLayer;
- (void)setBottomGradientMaskLayer:(id)arg1;
- (double)topCroppedRatio;
- (double)bottomCroppedRatio;
- (BOOL)isTopCropTracking;
- (void)setIsTopCropTracking:(BOOL)arg1;
- (BOOL)isBottomCropTracking;
- (void)setIsBottomCropTracking:(BOOL)arg1;
- (void).cxx_destruct;
@end
