@interface WCNativeTextMagnifierView : UIView
{
    double _borderRadius; // +0x8
    UIColor * _borderColor; // +0x10
    double _borderWidth; // +0x18
    double _magnification; // +0x20
    CALayer * _contentLayer; // +0x28
    CALayer * _borderLayer; // +0x30
    CGPoint _focusPoint; // +0x38
}
+ (CGSize)defaultSize;
- (id)initWithFrame:(CGRect)arg1;
- (void)layoutSubviews;
- (void)setBorderRadius:(double)arg1;
- (void)setBorderColor:(id)arg1;
- (void)setBorderWidth:(double)arg1;
- (void)setFocusPoint:(CGPoint)arg1;
- (void)refresh;
- (id)hostWindow;
- (double)borderRadius;
- (id)borderColor;
- (double)borderWidth;
- (CGPoint)focusPoint;
- (double)magnification;
- (void)setMagnification:(double)arg1;
- (id)contentLayer;
- (void)setContentLayer:(id)arg1;
- (id)borderLayer;
- (void)setBorderLayer:(id)arg1;
- (void).cxx_destruct;
@end
