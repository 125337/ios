@interface OpenSDKAuthorizeBaseViewController : MMUIViewController
{
    id <MMAuthorizeViewControllerDelegate> _delegate; // +0x70
}
- (void)viewDidLoad;
- (id)navigationBarBackgroundColor;
- (void)onOAuthCancel;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (void).cxx_destruct;
@end
