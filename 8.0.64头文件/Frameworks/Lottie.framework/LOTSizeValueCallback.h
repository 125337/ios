@interface LOTSizeValueCallback : NSObject <LOTSizeValueDelegate>
{
    CGSize _sizeValue; // +0x8
}
+ (id)withPointValue:(CGSize)arg1;
- (CGSize)sizeForFrame:(double)arg1 startKeyframe:(double)arg2 endKeyframe:(double)arg3 interpolatedProgress:(double)arg4 startSize:(CGSize)arg5 endSize:(CGSize)arg6 currentSize:(CGSize)arg7;
- (CGSize)sizeValue;
- (void)setSizeValue:(CGSize)arg1;
@end
