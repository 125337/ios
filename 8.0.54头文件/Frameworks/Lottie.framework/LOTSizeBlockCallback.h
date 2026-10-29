@interface LOTSizeBlockCallback : NSObject <LOTSizeValueDelegate>
{
    id /* block */ _callback; // +0x8
}
+ (id)withBlock:(id /* block */)arg1;
- (CGSize)sizeForFrame:(double)arg1 startKeyframe:(double)arg2 endKeyframe:(double)arg3 interpolatedProgress:(double)arg4 startSize:(CGSize)arg5 endSize:(CGSize)arg6 currentSize:(CGSize)arg7;
- (id /* block */)callback;
- (void)setCallback:(id /* block */)arg1;
- (void).cxx_destruct;
@end

