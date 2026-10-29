@interface CameraScanGoodsScanDotView : MMUIView <CAAnimationDelegate>
{
    BOOL _isAnimating; // +0x8
    CAAnimationGroup * _groupAnimation; // +0x10
}
- (id)init;
- (void)startAnimation;
- (void)stopAnimation;
- (void)animationDidStop:(id)arg1 finished:(BOOL)arg2;
- (BOOL)isAnimating;
- (void).cxx_destruct;
@end
