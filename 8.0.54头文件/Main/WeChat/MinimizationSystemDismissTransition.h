@interface MinimizationSystemDismissTransition : NSObject <UIViewControllerAnimatedTransitioning>
{
    BOOL _isInteracting; // +0x8
    id <MinimizationNewTransitionDelegate> _delegate; // +0x10
}
- (double)transitionDuration:(id)arg1;
- (void)animateTransition:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (BOOL)isInteracting;
- (void)setIsInteracting:(BOOL)arg1;
- (void).cxx_destruct;
@end

