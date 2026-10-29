@interface WCPayRealnameSuccessViewController : WCPayBaseViewController <WCPayRealnameSuccessViewDelegate, MMWebViewDelegate>
{
    id <WCPayRealnameSuccessViewControllerDelegate> _m_delegate; // +0x90
    MMWebViewController * _uploadIdWebVC; // +0x98
}
- (void)viewDidBePoped:(BOOL)arg1;
- (void)viewDidBeDismissed:(BOOL)arg1;
- (BOOL)shouldInteractivePop;
- (void)setDelegate:(id)arg1;
- (void)viewWillBePushed:(BOOL)arg1;
- (void)viewWillBePresented:(BOOL)arg1;
- (id)navigationBarBackgroundColor;
- (void)reloadTableView;
- (void)viewDidLayoutSubviews;
- (void)onWCPayRealnameSuccessViewDone;
- (void)onWCPayRealnameSuccessViewRetry;
- (void)onWCPayRealnameSuccessViewNeedCloseAndOpenUrl:(id)arg1;
- (void)onWCPayRealnameSuccessViewOpenUrl:(id)arg1;
- (void)onWCPayRealnameSuccessViewOpenTinyapp:(id)arg1 path:(id)arg2;
- (void)webViewReturn:(id)arg1;
- (id)m_delegate;
- (void)setM_delegate:(id)arg1;
- (id)uploadIdWebVC;
- (void)setUploadIdWebVC:(id)arg1;
- (void).cxx_destruct;
@end

