@interface WCFinderMinimizeTransitioning : NSObject <CAAnimationDelegate, UIViewControllerAnimatedTransitioning>
{
    BOOL _useWhenVCPop; // +0x8
    BOOL _isMinimize; // +0x9
    id <WCFinderMinimizeTransitioningDelegate> _delegate; // +0x10
    UIView * _floatingOutter; // +0x18
    WCFinderMinimizeFloatingView * _floatingView; // +0x20
    UIViewController * _animatedTransitionRespondViewController; // +0x28
}
- (double)transitionDuration:(id)arg1;
- (double)animationDuration;
- (void)animateTransition:(id)arg1;
- (void)animationDidStop:(id)arg1 finished:(BOOL)arg2;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)floatingOutter;
- (void)setFloatingOutter:(id)arg1;
- (id)floatingView;
- (void)setFloatingView:(id)arg1;
- (BOOL)useWhenVCPop;
- (void)setUseWhenVCPop:(BOOL)arg1;
- (id)animatedTransitionRespondViewController;
- (void)setAnimatedTransitionRespondViewController:(id)arg1;
- (BOOL)isMinimize;
- (void)setIsMinimize:(BOOL)arg1;
- (void).cxx_destruct;
@end
