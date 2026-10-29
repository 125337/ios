@interface MMScreenShotButtonShadowLayer : CALayer
{
    CALayer * _nearShadowLayer; // +0x8
    CALayer * _farShadowLayer; // +0x10
}
+ (double)cornerRadius;
+ (id)roundedPathWithBounds:(CGRect)arg1 cornerRadius:(double)arg2;
- (id)init;
- (void)updateWithBounds:(CGRect)arg1;
- (id)nearShadowLayer;
- (void)setNearShadowLayer:(id)arg1;
- (id)farShadowLayer;
- (void)setFarShadowLayer:(id)arg1;
- (void).cxx_destruct;
@end
