@interface CrossfadeAnimationController : NSObject <UIViewControllerAnimatedTransitioning, UIViewControllerTransitioningDelegate>
{
    id <TransitioningAnimationDelegate> m_delegate; // +0x8
    BOOL _reverse; // +0x10
    BOOL _isDismiss; // +0x11
    double _duration; // +0x18
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
- (BOOL)reverse;
- (void)setReverse:(BOOL)arg1;
- (double)duration;
- (void)setDuration:(double)arg1;
- (BOOL)isDismiss;
- (void)setIsDismiss:(BOOL)arg1;
- (void).cxx_destruct;
@end

