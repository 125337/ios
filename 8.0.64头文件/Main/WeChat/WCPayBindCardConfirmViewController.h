@interface WCPayBindCardConfirmViewController : WCPayBaseViewController <WCPayBindCardConfirmViewDelegate>
{
    id <WCPayBindCardConfirmViewControllerDelegate> _m_delegate; // +0x98
}
- (void)setDelegate:(id)arg1;
- (void)viewWillBePushed:(BOOL)arg1;
- (void)viewWillBePresented:(BOOL)arg1;
- (BOOL)shouldInteractivePop;
- (void)onBack;
- (id)navigationBarBackgroundColor;
- (void)reloadTableView;
- (void)viewDidLayoutSubviews;
- (void)onWCPayBindCardConfirmViewConfirm:(BOOL)arg1;
- (id)m_delegate;
- (void)setM_delegate:(id)arg1;
- (void).cxx_destruct;
@end
