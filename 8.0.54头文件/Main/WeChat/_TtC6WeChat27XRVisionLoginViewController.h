@interface _TtC6WeChat27XRVisionLoginViewController : MMUIViewController <MultiDeviceLoginLogicDelegate, ExtraDeviceLoginMgrExt>
{
     viewModel; // +0x8
     deviceLoginLogic; // +0x10
     subscriptions; // +0x18
}
- (void)onConfirmLoginSucceeded;
- (void)onConfirmLoginFailed;
- (void)onCancelLogin;
- (id)viewController;
- (void)onGetExtDeviceLoginInfo:(id)arg1;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidBePushOrPresent:(BOOL)arg1;
- (void)viewDidBePopedOrDismissed:(BOOL)arg1;
- (BOOL)useTransparentNavibar;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)initWithCoder:(id)arg1;
- (void).cxx_destruct;
@end

