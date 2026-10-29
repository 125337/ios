@interface MinimizationNewMinTransition : NSObject <UIViewControllerAnimatedTransitioning>
{
    UIViewController * _animatedTransitionRespondViewController; // +0x8
    id <MinimizationNewTransitionDelegate> _delegate; // +0x10
    MinimizationTransitionContext * _transitionContext; // +0x18
}
- (id)initWithTransitionContext:(id)arg1;
- (void)animateTransition:(id)arg1;
- (double)transitionDuration:(id)arg1;
- (id)animatedTransitionRespondViewController;
- (void)setAnimatedTransitionRespondViewController:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)transitionContext;
- (void)setTransitionContext:(id)arg1;
- (void).cxx_destruct;
@end

