@interface LOTFloatInterpolatorCallback : NSObject <LOTNumberValueDelegate>
{
    double _fromFloat; // +0x8
    double _toFloat; // +0x10
    double _currentProgress; // +0x18
}
+ (id)withFromFloat:(double)arg1 toFloat:(double)arg2;
- (double)floatValueForFrame:(double)arg1 startKeyframe:(double)arg2 endKeyframe:(double)arg3 interpolatedProgress:(double)arg4 startValue:(double)arg5 endValue:(double)arg6 currentValue:(double)arg7;
- (double)fromFloat;
- (void)setFromFloat:(double)arg1;
- (double)toFloat;
- (void)setToFloat:(double)arg1;
- (double)currentProgress;
- (void)setCurrentProgress:(double)arg1;
@end
