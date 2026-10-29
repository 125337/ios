@interface MMMainViewController : MMUIViewController <UITraitEnvironment>
{
    id <AppUserInterfaceSizeDelegate> _interfaceSizeDelegate; // +0x68
}
- (BOOL)canBecomeFirstResponder;
- (id)keyCommands;
- (void)selectTab:(id)arg1;
- (void)onSearch:(id)arg1;
- (void)onNextUnreadChat:(id)arg1;
- (void)newChat:(id)arg1;
- (void)closeCurChat:(id)arg1;
- (void)onNextChat:(id)arg1;
- (void)onLastChat:(id)arg1;
- (void)viewDidLoad;
- (double)getContentViewY;
- (void)viewDidTransitionToNewSize;
- (void)willAnimateRotationToInterfaceOrientation:(long long)arg1 duration:(double)arg2;
- (void)didRotateFromInterfaceOrientation:(long long)arg1;
- (unsigned long long)supportedInterfaceOrientations;
- (id)childViewControllerForStatusBarStyle;
- (id)childViewControllerForStatusBarHidden;
- (void)presentViewController:(id)arg1 animated:(BOOL)arg2 completion:(id /* block */)arg3;
- (id)interfaceSizeDelegate;
- (void)setInterfaceSizeDelegate:(id)arg1;
- (void).cxx_destruct;
@end

