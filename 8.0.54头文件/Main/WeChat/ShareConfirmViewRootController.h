@interface ShareConfirmViewRootController : MMUIViewController
{
    unsigned long long _orientationMask; // +0x68
    id /* block */ _didTransitionToNewSize; // +0x70
}
- (void)viewDidLoad;
- (unsigned long long)supportedInterfaceOrientations;
- (long long)preferredStatusBarStyle;
- (void)viewDidTransitionToNewSize;
- (unsigned long long)orientationMask;
- (void)setOrientationMask:(unsigned long long)arg1;
- (id /* block */)didTransitionToNewSize;
- (void)setDidTransitionToNewSize:(id /* block */)arg1;
- (void).cxx_destruct;
@end

