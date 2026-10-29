@interface CircleToSearchOverlayView : MMUIView
{
    CAShapeLayer * _maskLayer; // +0x8
    CAShapeLayer * _focusBoxLayer; // +0x10
}
- (id)initWithFrame:(CGRect)arg1;
- (id)maskLayer;
- (id)focusBoxLayer;
- (id)maskPathForFocusFrame:(CGRect)arg1;
- (void)updateFocusFrameDirectly:(CGRect)arg1;
- (CGRect)focusFrame;
- (void)setFocusFrame:(CGRect)arg1;
- (void)setFocusFrame:(CGRect)arg1 andAnimationDuration:(double)arg2;
- (void)setMaskLayer:(id)arg1;
- (void)setFocusBoxLayer:(id)arg1;
- (void).cxx_destruct;
@end
