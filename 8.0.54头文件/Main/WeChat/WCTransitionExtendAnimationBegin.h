@interface WCTransitionExtendAnimationBegin : NSObject <CAAnimationDelegate, UIViewControllerAnimatedTransitioning>
{
    id <UIViewControllerContextTransitioning> _transitionContext; // +0x8
    CGRect _resultRect; // +0x10
}
+ (id)animationResultRect:(CGRect)arg1;
- (double)transitionDuration:(id)arg1;
- (void)animateTransition:(id)arg1;
- (void)animationDidStop:(id)arg1 finished:(BOOL)arg2;
- (CGRect)resultRect;
- (void)setResultRect:(CGRect)arg1;
- (id)transitionContext;
- (void)setTransitionContext:(id)arg1;
- (void).cxx_destruct;
@end

