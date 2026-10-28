@interface MJShootCropViewController : MMUIViewController <MJShootCropGuidelineMaskViewDelegate, MJShootCropToolBarDelegate>
{
    BOOL _isStandardCanvas; // +0x70
    id <MJShootCropViewControllerDelegate> _delegate; // +0x78
    double _scaleFactor; // +0x80
    double _scaleFactorRotationImplicit; // +0x88
    unsigned long long _prevsSnapType; // +0x90
    OMJCamSpatialDesc * _spatialDesc; // +0x98
    OMJCamSpatialDesc * _spatialDescOriginal; // +0xa0
    MMUIImageView * _imageView; // +0xa8
    MJShootCropGuidelineMaskView * _cropGuidelineMaskView; // +0xb0
    MMUIView * _displayContainerView; // +0xb8
    MJShootCropToolBar * _toolBar; // +0xc0
    MMUIView * _bottomBar; // +0xc8
    UIPanGestureRecognizer * _panGR; // +0xd0
    UIPinchGestureRecognizer * _pinchGR; // +0xd8
    UISelectionFeedbackGenerator * _feedbackGenerator; // +0xe0
}
+ (double)rotationRadiansWithRotationMode:(unsigned long long)arg1;
+ (CGPoint)scaleFactorWithFlipMode:(unsigned long long)arg1;
+ (id)createButtonWithIconName:(id)arg1;
- (id)initWithImage:(id)arg1 spatialDesc:(id)arg2;
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (void)setupViews;
- (void)layoutImageView:(id)arg1 inContainerView:(id)arg2 scaleMode:(unsigned long long)arg3;
- (void)guidelineMaskView:(id)arg1 didUpdateGuidelineFrameBounds:(CGRect)arg2;
- (void)handlePan:(id)arg1;
- (void)handlePinch:(id)arg1;
- (void)handleTranslationForView:(id)arg1 boundingView:(id)arg2 panGR:(id)arg3;
- (void)handleScaleForView:(id)arg1 boundingView:(id)arg2 pinchGR:(id)arg3;
- (BOOL)checkBorderAndSnapIfNeededForView:(id)arg1 boundingView:(id)arg2 translation:(CGPoint *)arg3;
- (BOOL)checkAlignmentAndSnapIfNeededForView:(id)arg1 boundingView:(id)arg2 translation:(CGPoint *)arg3;
- (void)updateImageViewWithSpatialDesc;
- (CGAffineTransform)createTranformWithSpatialDesc:(id)arg1;
- (void)updateSpatialDescWithTranslation:(CGPoint)arg1;
- (void)updateSpatialDescWithScale:(double)arg1;
- (void)cropToolBarDidTapOnRotate:(id)arg1;
- (void)updateSpatialDescWithRotationAction;
- (void)updateScaleFactorRotationImplicit;
- (void)cropToolBarDidTapOnFlip:(id)arg1;
- (void)updateSpatialDescWithFlipAction;
- (void)cropToolBarDidTapOnReset:(id)arg1;
- (void)updateParametersWithResetAction;
- (void)updateSpatialDescWithResetAction;
- (void)updateResetButtonEnabledState;
- (void)cancelButtonDidTouchUpInside:(id)arg1;
- (void)confirmButtonDidTouchUpInside:(id)arg1;
- (void)setScaleFactorRotationImplicit:(double)arg1;
- (id)panGR;
- (id)pinchGR;
- (id)imageView;
- (id)cropGuidelineMaskView;
- (id)displayContainerView;
- (id)toolBar;
- (id)bottomBar;
- (id)feedbackGenerator;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (BOOL)isStandardCanvas;
- (void)setIsStandardCanvas:(BOOL)arg1;
- (double)scaleFactor;
- (void)setScaleFactor:(double)arg1;
- (double)scaleFactorRotationImplicit;
- (unsigned long long)prevsSnapType;
- (void)setPrevsSnapType:(unsigned long long)arg1;
- (id)spatialDesc;
- (void)setSpatialDesc:(id)arg1;
- (id)spatialDescOriginal;
- (void)setSpatialDescOriginal:(id)arg1;
- (void)setImageView:(id)arg1;
- (void)setCropGuidelineMaskView:(id)arg1;
- (void)setDisplayContainerView:(id)arg1;
- (void)setToolBar:(id)arg1;
- (void)setBottomBar:(id)arg1;
- (void)setPanGR:(id)arg1;
- (void)setPinchGR:(id)arg1;
- (void)setFeedbackGenerator:(id)arg1;
- (void).cxx_destruct;
@end
