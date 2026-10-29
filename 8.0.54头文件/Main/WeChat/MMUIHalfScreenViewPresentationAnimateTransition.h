@interface MMUIHalfScreenViewPresentationAnimateTransition : NSObject <UIViewControllerAnimatedTransitioning, UIViewControllerTransitioningDelegate>
{
    BOOL m_isPresented; // +0x8
    BOOL _isResetPresentedViewFrame; // +0x9
    id <MMUIHalfScreenViewPresentationAnimateTransitionDelegate> _m_delegate; // +0x10
    double _presentedHeight; // +0x18
    MMUIHalfScreenViewPresentationController * _presentationController; // +0x20
    MMUIHalfScreenViewController * _presentedController; // +0x28
}
- (id)init;
- (id)presentationControllerForPresentedViewController:(id)arg1 presentingViewController:(id)arg2 sourceViewController:(id)arg3;
- (id)animationControllerForPresentedController:(id)arg1 presentingController:(id)arg2 sourceController:(id)arg3;
- (id)animationControllerForDismissedController:(id)arg1;
- (id)interactionControllerForDismissal:(id)arg1;
- (double)transitionDuration:(id)arg1;
- (void)animateTransition:(id)arg1;
- (void)animationForPresentedView:(id)arg1;
- (void)animationForDismissedView:(id)arg1;
- (void)setBottomViewHeight:(double)arg1;
- (void)setIsResetPresentedViewFrame:(BOOL)arg1;
- (id)m_delegate;
- (void)setM_delegate:(id)arg1;
- (BOOL)isResetPresentedViewFrame;
- (double)presentedHeight;
- (void)setPresentedHeight:(double)arg1;
- (id)presentationController;
- (void)setPresentationController:(id)arg1;
- (id)presentedController;
- (void)setPresentedController:(id)arg1;
- (void).cxx_destruct;
@end

