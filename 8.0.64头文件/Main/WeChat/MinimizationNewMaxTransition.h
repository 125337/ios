@interface MinimizationNewMaxTransition : NSObject <UIViewControllerAnimatedTransitioning>
{
    id <MinimizationNewTransitionDelegate> _delegate; // +0x8
    MinimizationTransitionContext * _transitionContext; // +0x10
}
- (id)initWithTransitionContext:(id)arg1;
- (void)animateTransition:(id)arg1;
- (double)transitionDuration:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)transitionContext;
- (void)setTransitionContext:(id)arg1;
- (void).cxx_destruct;
@end
