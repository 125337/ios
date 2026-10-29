@interface ChatBotTransitioningDelegate : NSObject <UIViewControllerTransitioningDelegate>
{
    id <UIViewControllerInteractiveTransitioning> _presentInteractionController; // +0x8
    id <UIViewControllerInteractiveTransitioning> _dismissInteractionController; // +0x10
    id <ChatBotTransitionAnimatorDelegate> _animatorDelegate; // +0x18
    UIViewController * _respondViewController; // +0x20
}
- (id)initWithViewController:(id)arg1;
- (id)presentationControllerForPresentedViewController:(id)arg1 presentingViewController:(id)arg2 sourceViewController:(id)arg3;
- (id)animationControllerForPresentedController:(id)arg1 presentingController:(id)arg2 sourceController:(id)arg3;
- (id)animationControllerForDismissedController:(id)arg1;
- (id)interactionControllerForPresentation:(id)arg1;
- (id)interactionControllerForDismissal:(id)arg1;
- (id)presentInteractionController;
- (void)setPresentInteractionController:(id)arg1;
- (id)dismissInteractionController;
- (void)setDismissInteractionController:(id)arg1;
- (id)animatorDelegate;
- (void)setAnimatorDelegate:(id)arg1;
- (id)respondViewController;
- (void)setRespondViewController:(id)arg1;
- (void).cxx_destruct;
@end
