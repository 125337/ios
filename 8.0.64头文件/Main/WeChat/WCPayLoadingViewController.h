@interface WCPayLoadingViewController : WCPayBaseViewController
{
    WCBizLoadingView * m_loadView; // +0x98
    id <WCPayLoadingViewControllerDelegate> _delegate; // +0xa0
}
- (void)viewDidLoad;
- (void)onReturn;
- (void)didReceiveMemoryWarning;
- (void)viewDidPush:(BOOL)arg1;
- (void)showWebViewControllerWithURL:(id)arg1 animated:(BOOL)arg2;
- (void)getWalletUrl;
- (void)didFail;
- (void)showErrorAlert;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (void).cxx_destruct;
@end
