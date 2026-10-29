@interface LOTNumberBlockCallback : NSObject <LOTNumberValueDelegate>
{
    id /* block */ _callback; // +0x8
}
+ (id)withBlock:(id /* block */)arg1;
- (double)floatValueForFrame:(double)arg1 startKeyframe:(double)arg2 endKeyframe:(double)arg3 interpolatedProgress:(double)arg4 startValue:(double)arg5 endValue:(double)arg6 currentValue:(double)arg7;
- (id /* block */)callback;
- (void)setCallback:(id /* block */)arg1;
- (void).cxx_destruct;
@end

