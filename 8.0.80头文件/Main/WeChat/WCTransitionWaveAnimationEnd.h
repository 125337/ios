@interface WCTransitionWaveAnimationEnd : NSObject <CAAnimationDelegate, UIViewControllerAnimatedTransitioning>
{
    id <UIViewControllerContextTransitioning> _transitionContext; // +0x8
    CGPoint _originPoint; // +0x10
}
+ (id)animationOrigin:(CGPoint)arg1;
- (void)animateTransition:(id)arg1;
- (double)transitionDuration:(id)arg1;
- (void)animationDidStop:(id)arg1 finished:(BOOL)arg2;
- (CGPoint)originPoint;
- (void)setOriginPoint:(CGPoint)arg1;
- (id)transitionContext;
- (void)setTransitionContext:(id)arg1;
- (void).cxx_destruct;
@end
