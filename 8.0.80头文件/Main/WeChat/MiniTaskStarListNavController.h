@interface MiniTaskStarListNavController : MMUINavigationController <UIViewControllerTransitioningDelegate>
{
    MiniTaskViewController * _starViewController; // +0x8
    UIImage * _presetPresentingSnapshot; // +0x10
}
- (id)initWithStarViewController:(id)arg1;
- (void)pushViewController:(id)arg1 animated:(BOOL)arg2;
- (id)popViewControllerAnimated:(BOOL)arg1;
- (void)viewDidLoad;
- (id)animationControllerForPresentedController:(id)arg1 presentingController:(id)arg2 sourceController:(id)arg3;
- (id)animationControllerForDismissedController:(id)arg1;
- (id)interactionControllerForPresentation:(id)arg1;
- (id)interactionControllerForDismissal:(id)arg1;
- (id)starViewController;
- (void)setStarViewController:(id)arg1;
- (id)presetPresentingSnapshot;
- (void)setPresetPresentingSnapshot:(id)arg1;
- (void).cxx_destruct;
@end
