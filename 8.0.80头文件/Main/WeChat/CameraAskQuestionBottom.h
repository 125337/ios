@interface CameraAskQuestionBottom : UIView
{
    double _selectedOvalTopOffset; // +0x8
    long long _state; // +0x10
    CBTWaveformView * _feedbackView; // +0x18
    CAShapeLayer * _ovalLayer; // +0x20
    CAShapeLayer * _maskLayer; // +0x28
    CAGradientLayer * _gradientLayer; // +0x30
    CALayer * _haloContentLayer; // +0x38
    UIColor * _selectingColor; // +0x40
    UIColor * _selectedColor; // +0x48
    UIColor * _unselectedFillColor; // +0x50
    UIColor * _preparingFillColor; // +0x58
    NSArray * _gradientColors; // +0x60
    CGRect _originOvalFrame; // +0x68
}
- (id)initWithFrame:(CGRect)arg1;
- (void)createAndAddAllSublayers;
- (void)setFrame:(CGRect)arg1;
- (void)layoutAllSublayers;
- (void)setSelectedOvalTopOffset:(double)arg1;
- (id)gradientColorsWithColor:(id)arg1;
- (void)applyOvalAppearanceWithFillColor:(id)arg1 gradientColors:(id)arg2 gradientOpacity:(double)arg3 ovalOpacity:(double)arg4;
- (void)applySelectedOvalAppearance;
- (void)applySelectingOvalAppearance;
- (void)applyUnselectedOvalAppearance;
- (void)applyPreparingOvalAppearance;
- (void)refreshOvalAppearanceForCurrentState;
- (void)setState:(long long)arg1;
- (CGRect)scanAIOriginOvalBounds;
- (void)doScanAIEntryAnimationWithDuration:(double)arg1;
- (void)doDeselectAnimation:(BOOL)arg1;
- (void)doFadeAnimation;
- (void)collapseToOriginOvalAnimatedWithDuration:(double)arg1;
- (void)setPreparing:(BOOL)arg1;
- (void)setWaveAnimating:(BOOL)arg1;
- (CGSize)currentOvalSize;
- (CGRect)currentFullOvalBounds;
- (CGRect)currentUnselectedOvalBounds;
- (CGRect)originFallbackOvalBounds;
- (CGRect)originOvalBounds;
- (CGPoint)currentOvalCenterWithFullOval:(BOOL)arg1;
- (void)updateOvalLayerGeometryWithFullOval:(BOOL)arg1;
- (double)getOvalYFromX:(double)arg1;
- (BOOL)isPointInOval:(CGPoint)arg1;
- (void)animateScanAIEntryFromOriginFrame:(CGRect)arg1 duration:(double)arg2;
- (void)setCancelAreaActive:(BOOL)arg1 animated:(BOOL)arg2;
- (void)animateExitToOriginFrame:(CGRect)arg1 duration:(double)arg2 completion:(id /* block */)arg3;
- (CGRect)originOvalFrame;
- (void)setOriginOvalFrame:(CGRect)arg1;
- (double)selectedOvalTopOffset;
- (long long)state;
- (id)feedbackView;
- (void)setFeedbackView:(id)arg1;
- (id)ovalLayer;
- (void)setOvalLayer:(id)arg1;
- (id)maskLayer;
- (void)setMaskLayer:(id)arg1;
- (id)gradientLayer;
- (void)setGradientLayer:(id)arg1;
- (id)haloContentLayer;
- (void)setHaloContentLayer:(id)arg1;
- (id)selectingColor;
- (void)setSelectingColor:(id)arg1;
- (id)selectedColor;
- (void)setSelectedColor:(id)arg1;
- (id)unselectedFillColor;
- (void)setUnselectedFillColor:(id)arg1;
- (id)preparingFillColor;
- (void)setPreparingFillColor:(id)arg1;
- (id)gradientColors;
- (void)setGradientColors:(id)arg1;
- (void).cxx_destruct;
@end
