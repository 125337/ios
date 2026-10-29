@interface MMUINavigationController : UINavigationController <UINavigationControllerDelegate>
{
    UIViewController * _popingViewController; // +0x8
}
- (id)init;
- (id)initWithRootViewController:(id)arg1;
- (id)description;
- (id)initWithNavigationBarClass:(Class)arg1 toolbarClass:(Class)arg2;
- (BOOL)shouldInteractivePop;
- (id)DispatchPopViewControllerAnimated:(BOOL)arg1;
- (id)popViewControllerAnimated:(BOOL)arg1;
- (void)setNavigationBarHidden:(BOOL)arg1 animated:(BOOL)arg2;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewDidLoad;
- (id)navigationController:(id)arg1 animationControllerForOperation:(long long)arg2 fromViewController:(id)arg3 toViewController:(id)arg4;
- (id)navigationController:(id)arg1 interactionControllerForAnimationController:(id)arg2;
- (void)disMissSelf;
- (id)childViewControllerForStatusBarStyle;
- (id)childViewControllerForStatusBarHidden;
- (void).cxx_destruct;
@end

