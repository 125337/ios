@interface WCPayCreditPayFinishCreateViewController : WCPayBaseViewController
{
    id <WCPayCreditPayFinishCreateViewControllerDelegate> m_delegate; // +0x98
}
- (id)init;
- (void)initNavigationBar;
- (void)viewWillLayoutSubviews;
- (void)initHeaderView;
- (void)initFooterView;
- (void)viewDidLoad;
- (void)setDelegate:(id)arg1;
- (void)onBack;
- (void)onIncreaseLimit;
- (void).cxx_destruct;
@end
