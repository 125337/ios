@interface WCPayFaceHBViewController : WCPayBaseViewController
{
    id <WCPayFaceHBViewControllerDelegate> m_delegate; // +0x98
    UIView * _contentView; // +0xa0
    WCPayFaceHBGetView * _getView; // +0xa8
    WCPayFaceHBPayView * _payView; // +0xb0
}
- (void)initNavigationBar;
- (void)onBack;
- (BOOL)useTransparentNavibar;
- (BOOL)useBlackStatusbar;
- (void)dealloc;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)userDidTakeScreenshot:(id)arg1;
- (void)didChangeScreenCapture:(id)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)viewDidBePoped:(BOOL)arg1;
- (void)hidePayView;
- (id)showPayViewWithDelegate:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void).cxx_destruct;
@end
