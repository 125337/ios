@interface ScanCodeAuthorizeBaseViewController : MMWindowViewController
{
    id <MMAuthorizeViewControllerDelegate> _delegate; // +0x78
}
- (id)init;
- (void)viewDidLoad;
- (id)navigationBarBackgroundColor;
- (void)onOAuthCancel;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (void).cxx_destruct;
@end

