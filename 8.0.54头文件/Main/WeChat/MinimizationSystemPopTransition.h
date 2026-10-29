@interface MinimizationSystemPopTransition : NSObject <UIViewControllerAnimatedTransitioning, MMUIViewControllerTransitionInfo>
{
    BOOL _isTabbarTransparent; // +0x8
    BOOL _isInteracting; // +0x9
    id <MinimizationNewTransitionDelegate> _delegate; // +0x10
    UIViewController * _animatedTransitionRespondViewController; // +0x18
}
- (double)transitionDuration:(id)arg1;
- (void)animateTransition:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (BOOL)isTabbarTransparent;
- (void)setIsTabbarTransparent:(BOOL)arg1;
- (BOOL)isInteracting;
- (void)setIsInteracting:(BOOL)arg1;
- (id)animatedTransitionRespondViewController;
- (void)setAnimatedTransitionRespondViewController:(id)arg1;
- (void).cxx_destruct;
@end

