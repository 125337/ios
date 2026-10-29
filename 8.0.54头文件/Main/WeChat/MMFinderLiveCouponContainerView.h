@interface MMFinderLiveCouponContainerView : UIView
{
    double _gapRadius; // +0x8
    double _tailWidth; // +0x10
    double _lineWidth; // +0x18
    double _cornerRadius; // +0x20
    UIColor * _fillColor; // +0x28
    UIColor * _strokeColor; // +0x30
}
+ (Class)layerClass;
- (void)layoutSubviews;
- (id)bezierPath;
- (void)setFillColor:(id)arg1;
- (void)setStrokeColor:(id)arg1;
- (BOOL)shouldUseDarkModeColor;
- (CGColor *)cgColorOf:(id)arg1;
- (void)drawRect:(CGRect)arg1;
- (double)gapRadius;
- (void)setGapRadius:(double)arg1;
- (double)tailWidth;
- (void)setTailWidth:(double)arg1;
- (double)lineWidth;
- (void)setLineWidth:(double)arg1;
- (double)cornerRadius;
- (void)setCornerRadius:(double)arg1;
- (id)fillColor;
- (id)strokeColor;
- (void).cxx_destruct;
@end

