@interface LOTPointInterpolatorCallback : NSObject <LOTPointValueDelegate>
{
    double _currentProgress; // +0x8
    CGPoint _fromPoint; // +0x10
    CGPoint _toPoint; // +0x20
}
+ (id)withFromPoint:(CGPoint)arg1 toPoint:(CGPoint)arg2;
- (CGPoint)pointForFrame:(double)arg1 startKeyframe:(double)arg2 endKeyframe:(double)arg3 interpolatedProgress:(double)arg4 startPoint:(CGPoint)arg5 endPoint:(CGPoint)arg6 currentPoint:(CGPoint)arg7;
- (CGPoint)fromPoint;
- (void)setFromPoint:(CGPoint)arg1;
- (CGPoint)toPoint;
- (void)setToPoint:(CGPoint)arg1;
- (double)currentProgress;
- (void)setCurrentProgress:(double)arg1;
@end
