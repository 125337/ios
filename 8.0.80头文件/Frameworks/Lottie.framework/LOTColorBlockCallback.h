@interface LOTColorBlockCallback : NSObject <LOTColorValueDelegate>
{
    id /* block */ _callback; // +0x8
}
+ (id)withBlock:(id /* block */)arg1;
- (CGColor *)colorForFrame:(double)arg1 startKeyframe:(double)arg2 endKeyframe:(double)arg3 interpolatedProgress:(double)arg4 startColor:(CGColor *)arg5 endColor:(CGColor *)arg6 currentColor:(CGColor *)arg7;
- (id /* block */)callback;
- (void)setCallback:(id /* block */)arg1;
- (void).cxx_destruct;
@end
