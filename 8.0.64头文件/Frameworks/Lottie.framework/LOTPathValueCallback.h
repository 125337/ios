@interface LOTPathValueCallback : NSObject <LOTPathValueDelegate>
{
    CGPath * _pathValue; // +0x8
}
+ (id)withCGPath:(CGPath *)arg1;
- (CGPath *)pathForFrame:(double)arg1 startKeyframe:(double)arg2 endKeyframe:(double)arg3 interpolatedProgress:(double)arg4;
- (CGPath *)pathValue;
- (void)setPathValue:(CGPath *)arg1;
@end
