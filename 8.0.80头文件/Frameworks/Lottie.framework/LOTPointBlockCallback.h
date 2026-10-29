@interface LOTPointBlockCallback : NSObject <LOTPointValueDelegate>
{
    id /* block */ _callback; // +0x8
}
+ (id)withBlock:(id /* block */)arg1;
- (CGPoint)pointForFrame:(double)arg1 startKeyframe:(double)arg2 endKeyframe:(double)arg3 interpolatedProgress:(double)arg4 startPoint:(CGPoint)arg5 endPoint:(CGPoint)arg6 currentPoint:(CGPoint)arg7;
- (id /* block */)callback;
- (void)setCallback:(id /* block */)arg1;
- (void).cxx_destruct;
@end
