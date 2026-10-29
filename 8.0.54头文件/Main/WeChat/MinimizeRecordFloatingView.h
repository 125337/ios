@interface MinimizeRecordFloatingView : MinimizeStarFloatingView
{
    UIColor * _gradientBackgroundColor; // +0x8
    UIView * _redDotView; // +0x10
    double _titleMaxWidthWithCurrentState; // +0x18
    UIView * _shadowLayerView; // +0x20
    UIView * _shadowSubLayerView; // +0x28
    UIView * _whiteBackgroundView; // +0x30
    CAShapeLayer * _outterBorderLayer; // +0x38
    CAShapeLayer * _innerBorderLayer; // +0x40
    CGRect _frameBeforeMove; // +0x48
}
- (void)initUI;
- (void)startCountdown;
- (void)layoutSubviews;
- (void)setRedDotViewHidden:(BOOL)arg1;
- (void)updateMask:(BOOL)arg1 Duration:(double)arg2;
- (void)updateMask:(BOOL)arg1 View:(id)arg2 Duration:(double)arg3;
- (void)updateShadow:(BOOL)arg1 Duration:(double)arg2;
- (void)resetBorderLayer;
- (void)resetBorderLayerWhenTraitCollectionDidChange;
- (void)traitCollectionDidChange:(id)arg1;
- (void)updateBorderLayer:(id)arg1 VisibleFrame:(CGRect)arg2 BorderColor:(id)arg3 BorderWidth:(double)arg4;
- (CGRect)calcFrame:(CGRect)arg1 withInsets:(UIEdgeInsets)arg2;
- (id)getDefaultClipPath:(CGRect)arg1;
- (id)gradientBackgroundColor;
- (void)setGradientBackgroundColor:(id)arg1;
- (id)redDotView;
- (void)setRedDotView:(id)arg1;
- (CGRect)frameBeforeMove;
- (void)setFrameBeforeMove:(CGRect)arg1;
- (double)titleMaxWidthWithCurrentState;
- (void)setTitleMaxWidthWithCurrentState:(double)arg1;
- (id)shadowLayerView;
- (void)setShadowLayerView:(id)arg1;
- (id)shadowSubLayerView;
- (void)setShadowSubLayerView:(id)arg1;
- (id)whiteBackgroundView;
- (void)setWhiteBackgroundView:(id)arg1;
- (id)outterBorderLayer;
- (void)setOutterBorderLayer:(id)arg1;
- (id)innerBorderLayer;
- (void)setInnerBorderLayer:(id)arg1;
- (void).cxx_destruct;
@end

