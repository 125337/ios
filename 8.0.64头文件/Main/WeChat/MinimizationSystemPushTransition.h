@interface MinimizationSystemPushTransition : NSObject <UIViewControllerAnimatedTransitioning, MMUIViewControllerTransitionInfo>
{
    BOOL _useInPresentAnimation; // +0x8
    id <MinimizationNewTransitionDelegate> _delegate; // +0x10
    id <MiniTaskTransitionAnimationDelegate> _animationDelegate; // +0x18
    UIViewController * _animatedTransitionRespondViewController; // +0x20
}
- (double)transitionDuration:(id)arg1;
- (void)animateTransition:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)animationDelegate;
- (void)setAnimationDelegate:(id)arg1;
- (id)animatedTransitionRespondViewController;
- (void)setAnimatedTransitionRespondViewController:(id)arg1;
- (BOOL)useInPresentAnimation;
- (void)setUseInPresentAnimation:(BOOL)arg1;
- (void).cxx_destruct;
@end
