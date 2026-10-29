@interface MMPageSheetPassthroughTransition : NSObject <UIViewControllerTransitioningDelegate>
{
    id <MMPageSheetPassthroughTransitionDelegate> _delegate; // +0x8
    MMPageSheetConfig * _pageSheetConfig; // +0x10
    MMPageSheetPassthroughPresentationController * _presentationController; // +0x18
}
- (id)presentationControllerForPresentedViewController:(id)arg1 presentingViewController:(id)arg2 sourceViewController:(id)arg3;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)pageSheetConfig;
- (void)setPageSheetConfig:(id)arg1;
- (id)presentationController;
- (void)setPresentationController:(id)arg1;
- (void).cxx_destruct;
@end
