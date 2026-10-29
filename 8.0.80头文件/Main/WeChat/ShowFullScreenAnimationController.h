@interface ShowFullScreenAnimationController : NSObject <UIViewControllerAnimatedTransitioning, UIViewControllerTransitioningDelegate>
{
    id <TransitioningAnimationDelegate> m_delegate; // +0x8
    BOOL _navControllerWrapped; // +0x10
    BOOL _shouldUpdateFromViewWhenEnter; // +0x11
    BOOL _shouldForwardLifecycleEvent; // +0x12
    double _duration; // +0x18
    CGRect _rcOriginFrame; // +0x20
}
- (id)init;
- (double)transitionDuration:(id)arg1;
- (id)presentationControllerForPresentedViewController:(id)arg1 presentingViewController:(id)arg2 sourceViewController:(id)arg3;
- (void)animateTransition:(id)arg1;
- (void)animateTransition:(id)arg1 fromVC:(id)arg2 toVC:(id)arg3 fromView:(id)arg4 toView:(id)arg5;
- (void)animationEnded:(BOOL)arg1;
- (id)animationControllerForPresentedController:(id)arg1 presentingController:(id)arg2 sourceController:(id)arg3;
- (id)animationControllerForDismissedController:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (double)duration;
- (void)setDuration:(double)arg1;
- (CGRect)rcOriginFrame;
- (void)setRcOriginFrame:(CGRect)arg1;
- (BOOL)navControllerWrapped;
- (void)setNavControllerWrapped:(BOOL)arg1;
- (BOOL)shouldUpdateFromViewWhenEnter;
- (void)setShouldUpdateFromViewWhenEnter:(BOOL)arg1;
- (BOOL)shouldForwardLifecycleEvent;
- (void)setShouldForwardLifecycleEvent:(BOOL)arg1;
- (void).cxx_destruct;
@end
