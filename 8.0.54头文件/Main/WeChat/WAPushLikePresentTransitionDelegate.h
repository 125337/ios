@interface WAPushLikePresentTransitionDelegate : NSObject <UIViewControllerTransitioningDelegate, UIGestureRecognizerDelegate, WAPopInteractiveTransitionDelegate>
{
    WAMenuPopInteractiveTransition * _dismissInteractiveTransition; // +0x8
    UIViewController * _weakPresentedVC; // +0x10
}
- (id)initWithVCToPresent:(id)arg1;
- (id)animationControllerForPresentedController:(id)arg1 presentingController:(id)arg2 sourceController:(id)arg3;
- (id)animationControllerForDismissedController:(id)arg1;
- (id)interactionControllerForDismissal:(id)arg1;
- (void)onPopBackInteractiveTransitionBegin:(id)arg1;
- (id)weakPresentedVC;
- (void)setWeakPresentedVC:(id)arg1;
- (void).cxx_destruct;
@end

