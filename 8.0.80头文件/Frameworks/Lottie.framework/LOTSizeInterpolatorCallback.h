@interface LOTSizeInterpolatorCallback : NSObject <LOTSizeValueDelegate>
{
    double _currentProgress; // +0x8
    CGSize _fromSize; // +0x10
    CGSize _toSize; // +0x20
}
+ (id)withFromSize:(CGSize)arg1 toSize:(CGSize)arg2;
- (CGSize)sizeForFrame:(double)arg1 startKeyframe:(double)arg2 endKeyframe:(double)arg3 interpolatedProgress:(double)arg4 startSize:(CGSize)arg5 endSize:(CGSize)arg6 currentSize:(CGSize)arg7;
- (CGSize)fromSize;
- (void)setFromSize:(CGSize)arg1;
- (CGSize)toSize;
- (void)setToSize:(CGSize)arg1;
- (double)currentProgress;
- (void)setCurrentProgress:(double)arg1;
@end
