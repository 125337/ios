@interface MMLiveGradientView : UIView
{
    CGAffineTransform _transform; // +0x8
    struct _gradient; // +0x38
    struct _lgradient; // +0xd0
    BOOL _reverse; // +0x168
    BOOL _changed; // +0x169
    BOOL _isLandscape; // +0x16a
    CAGradientLayer * _gradientLayer; // +0x170
}
+ (id)topShadowWithFrame:(CGRect)arg1;
+ (id)bottomShadowWithFrame:(CGRect)arg1;
+ (double)topShadowHeight:(BOOL)arg1;
+ (double)bottomShadowHeight:(BOOL)arg1;
- (id)initWithFrame:(CGRect)arg1 gradient:(struct)arg2 lGradient:(struct)arg3 transform:(CGAffineTransform)arg4 reverse:(BOOL)arg5;
- (void)setup;
- (void)doChange;
- (void)layoutSubviews;
- (id)gradientLayer;
- (void)setGradientLayer:(id)arg1;
- (BOOL)isLandscape;
- (void)setIsLandscape:(BOOL)arg1;
- (void).cxx_destruct;
@end
