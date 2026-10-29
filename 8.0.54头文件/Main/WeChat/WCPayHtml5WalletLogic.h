@interface WCPayHtml5WalletLogic : WCPayControlLogic <WCPayLoadingViewControllerDelegate, MMWebViewDelegate>
- (void)startLogic;
- (void)showLoadingViewController;
- (void)showWebViewControllerWithURL:(id)arg1 animated:(BOOL)arg2;
- (void)getWalletUrl;
- (void)didFail;
- (void)showErrorAlert;
- (void)webViewReturn:(id)arg1;
- (void)loadingViewControllerDidBack:(id)arg1;
@end

