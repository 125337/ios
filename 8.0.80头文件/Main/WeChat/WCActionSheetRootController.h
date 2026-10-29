@interface WCActionSheetRootController : MMUIViewController
{
    UIViewController * _orientationViewController; // +0x70
    unsigned long long _orientationMask; // +0x78
}
- (void)viewDidLoad;
- (unsigned long long)supportedInterfaceOrientations;
- (long long)preferredStatusBarStyle;
- (id)orientationViewController;
- (void)setOrientationViewController:(id)arg1;
- (unsigned long long)orientationMask;
- (void)setOrientationMask:(unsigned long long)arg1;
- (void).cxx_destruct;
@end
