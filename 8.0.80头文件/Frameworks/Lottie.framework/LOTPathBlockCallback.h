@interface LOTPathBlockCallback : NSObject <LOTPathValueDelegate>
{
    id /* block */ _callback; // +0x8
}
+ (id)withBlock:(id /* block */)arg1;
- (CGPath *)pathForFrame:(double)arg1 startKeyframe:(double)arg2 endKeyframe:(double)arg3 interpolatedProgress:(double)arg4;
- (id /* block */)callback;
- (void)setCallback:(id /* block */)arg1;
- (void).cxx_destruct;
@end
