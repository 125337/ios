@interface WCFinderMinimizationSystemPopTransition : NSObject <UIViewControllerAnimatedTransitioning, MMUIViewControllerTransitionInfo>
{
    BOOL _isInteracting; // +0x8
    BOOL _useWhenVCPop; // +0x9
    UIViewController * _animatedTransitionRespondViewController; // +0x10
}
- (double)transitionDuration:(id)arg1;
- (void)animateTransition:(id)arg1;
- (BOOL)isInteracting;
- (void)setIsInteracting:(BOOL)arg1;
- (BOOL)useWhenVCPop;
- (void)setUseWhenVCPop:(BOOL)arg1;
- (id)animatedTransitionRespondViewController;
- (void)setAnimatedTransitionRespondViewController:(id)arg1;
- (void).cxx_destruct;
@end

