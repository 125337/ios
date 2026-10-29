@interface CBTUsageNavigationController : MMUINavigationController
{
    id /* block */ _usageExitConfirmationFactory; // +0x8
    id /* block */ _usageExitConfirmation; // +0x10
}
- (id)initWithRootViewController:(id)arg1;
- (void)willMoveToParentViewController:(id)arg1;
- (void)didMoveToParentViewController:(id)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (id /* block */)usageExitConfirmationFactory;
- (void)setUsageExitConfirmationFactory:(id /* block */)arg1;
- (id /* block */)usageExitConfirmation;
- (void)setUsageExitConfirmation:(id /* block */)arg1;
- (void).cxx_destruct;
@end
