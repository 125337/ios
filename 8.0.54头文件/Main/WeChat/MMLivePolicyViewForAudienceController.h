@interface MMLivePolicyViewForAudienceController : MMUIHalfScreenViewController <YYWebViewDelegate, MMAcceptAgreementProtocolViewDelegate, MMUIHalfScreenViewControllerDelegate>
{
    id <MMLivePolicyViewForAudienceControllerDelegate> _policyDelegate; // +0x68
    MMUIButton * _cancelButton; // +0x70
    UIView * _headerView; // +0x78
    MMUILabel * _headerTitle; // +0x80
    MMAcceptAgreementProtocolView * _policyProtocolView; // +0x88
    UIButton * _confirmButton; // +0x90
    UIView<YYWebViewInterface> * _webview; // +0x98
    UIImageView * _shadowView; // +0xa0
    long long _currOrientation; // +0xa8
    MMWebViewController * _webVC; // +0xb0
}
- (id)init;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewWillPush:(BOOL)arg1;
- (void)setupUI;
- (void)layoutUI;
- (void)dealloc;
- (void)onConfirmButtonClicked;
- (void)onCancelButtonClicked;
- (void)popOrDismissSelf;
- (void)notifySelfPopedOrDismissed;
- (void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)onProtocolSelectedClicked;
- (BOOL)webView:(id)arg1 shouldStartLoadWithRequest:(id)arg2 navigationType:(long long)arg3 isMainFrame:(BOOL)arg4 navigationAction:(id)arg5;
- (id)policyDelegate;
- (void)setPolicyDelegate:(id)arg1;
- (id)cancelButton;
- (void)setCancelButton:(id)arg1;
- (id)headerView;
- (void)setHeaderView:(id)arg1;
- (id)headerTitle;
- (void)setHeaderTitle:(id)arg1;
- (id)policyProtocolView;
- (void)setPolicyProtocolView:(id)arg1;
- (id)confirmButton;
- (void)setConfirmButton:(id)arg1;
- (id)webview;
- (void)setWebview:(id)arg1;
- (id)shadowView;
- (void)setShadowView:(id)arg1;
- (long long)currOrientation;
- (void)setCurrOrientation:(long long)arg1;
- (id)webVC;
- (void)setWebVC:(id)arg1;
- (void).cxx_destruct;
@end

