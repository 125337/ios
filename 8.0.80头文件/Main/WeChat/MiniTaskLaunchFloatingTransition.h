@interface MiniTaskLaunchFloatingTransition : NSObject <UIViewControllerAnimatedTransitioning>
{
    id <MiniTaskTransitionAnimationDelegate> _animationDelegate; // +0x8
    MiniTaskTransitionContext * _transitionContext; // +0x10
}
- (double)transitionDuration:(id)arg1;
- (void)animateTransition:(id)arg1;
- (id)animationDelegate;
- (void)setAnimationDelegate:(id)arg1;
- (id)transitionContext;
- (void)setTransitionContext:(id)arg1;
- (void).cxx_destruct;
@end
