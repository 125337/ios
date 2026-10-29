@interface MMInputTextViewInnerShadowView : UIView
{
    UIColor * _innerShadowColor; // +0x8
    double _innerShadowBlur; // +0x10
    double _innerShadowCornerRadius; // +0x18
    CGSize _innerShadowOffset; // +0x20
}
- (id)initWithFrame:(CGRect)arg1;
- (void)drawRect:(CGRect)arg1;
- (id)innerShadowColor;
- (void)setInnerShadowColor:(id)arg1;
- (CGSize)innerShadowOffset;
- (void)setInnerShadowOffset:(CGSize)arg1;
- (double)innerShadowBlur;
- (void)setInnerShadowBlur:(double)arg1;
- (double)innerShadowCornerRadius;
- (void)setInnerShadowCornerRadius:(double)arg1;
- (void).cxx_destruct;
@end
