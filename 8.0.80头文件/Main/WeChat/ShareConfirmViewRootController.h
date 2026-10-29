@interface ShareConfirmViewRootController : MMUIViewController
{
    UIViewController * _orientationViewController; // +0x70
    id /* block */ _didTransitionToNewSize; // +0x78
}
- (void)viewDidLoad;
- (unsigned long long)supportedInterfaceOrientations;
- (long long)preferredStatusBarStyle;
- (void)viewDidTransitionToNewSize;
- (id)orientationViewController;
- (void)setOrientationViewController:(id)arg1;
- (id /* block */)didTransitionToNewSize;
- (void)setDidTransitionToNewSize:(id /* block */)arg1;
- (void).cxx_destruct;
@end
