@interface LOTNumberValueCallback : NSObject <LOTNumberValueDelegate>
{
    double _numberValue; // +0x8
}
+ (id)withFloatValue:(double)arg1;
- (double)floatValueForFrame:(double)arg1 startKeyframe:(double)arg2 endKeyframe:(double)arg3 interpolatedProgress:(double)arg4 startValue:(double)arg5 endValue:(double)arg6 currentValue:(double)arg7;
- (double)numberValue;
- (void)setNumberValue:(double)arg1;
@end

