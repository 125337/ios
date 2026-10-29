@interface MessagePageSheetTransition : NSObject <UIViewControllerTransitioningDelegate>
{
    MessagePageSheetPresentationController * _presentationController; // +0x8
}
- (void)callFromViewControllerDisappear;
- (void)callFromViewControllerAppear;
- (id)presentationControllerForPresentedViewController:(id)arg1 presentingViewController:(id)arg2 sourceViewController:(id)arg3;
- (id)presentationController;
- (void)setPresentationController:(id)arg1;
- (void).cxx_destruct;
@end

