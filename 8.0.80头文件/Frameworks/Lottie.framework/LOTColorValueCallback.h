@interface LOTColorValueCallback : NSObject <LOTColorValueDelegate>
{
    CGColor * _colorValue; // +0x8
}
+ (id)withCGColor:(CGColor *)arg1;
- (CGColor *)colorForFrame:(double)arg1 startKeyframe:(double)arg2 endKeyframe:(double)arg3 interpolatedProgress:(double)arg4 startColor:(CGColor *)arg5 endColor:(CGColor *)arg6 currentColor:(CGColor *)arg7;
- (CGColor *)colorValue;
- (void)setColorValue:(CGColor *)arg1;
@end
