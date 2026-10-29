@interface LOTPointValueCallback : NSObject <LOTPointValueDelegate>
{
    CGPoint _pointValue; // +0x8
}
+ (id)withPointValue:(CGPoint)arg1;
- (CGPoint)pointForFrame:(double)arg1 startKeyframe:(double)arg2 endKeyframe:(double)arg3 interpolatedProgress:(double)arg4 startPoint:(CGPoint)arg5 endPoint:(CGPoint)arg6 currentPoint:(CGPoint)arg7;
- (CGPoint)pointValue;
- (void)setPointValue:(CGPoint)arg1;
@end

