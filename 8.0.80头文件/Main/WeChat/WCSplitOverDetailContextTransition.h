@interface WCSplitOverDetailContextTransition : MMModalTransitionAnimator <WCSplitOverDetailContextPresentationDelegate, UIViewControllerTransitioningDelegate>
{
    BOOL _hidesDimmingMask; // +0x8
    BOOL _isPresent; // +0x9
    id <WCSplitBaseTransitionDelegate> _baseDelegate; // +0x10
    WCSplitOverDetailContextPresentationController * _presentController; // +0x18
}
- (void)setHidesDimmingMask:(BOOL)arg1;
- (CGRect)finalFrameForPresentedView:(id)arg1;
- (void)dealloc;
- (id)presentationControllerForPresentedViewController:(id)arg1 presentingViewController:(id)arg2 sourceViewController:(id)arg3;
- (id)animationControllerForDismissedController:(id)arg1;
- (id)animationControllerForPresentedController:(id)arg1 presentingController:(id)arg2 sourceController:(id)arg3;
- (id)interactionControllerForDismissal:(id)arg1;
- (BOOL)wantsInteractiveStart;
- (void)onOverDetailViewControllerDismissed;
- (id)baseDelegate;
- (void)setBaseDelegate:(id)arg1;
- (BOOL)hidesDimmingMask;
- (id)presentController;
- (void)setPresentController:(id)arg1;
- (BOOL)isPresent;
- (void)setIsPresent:(BOOL)arg1;
- (void).cxx_destruct;
@end
