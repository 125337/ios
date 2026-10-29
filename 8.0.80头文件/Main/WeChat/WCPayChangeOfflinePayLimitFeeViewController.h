@interface WCPayChangeOfflinePayLimitFeeViewController : WCPayBaseViewController
{
    UIButton * m_footerButton; // +0x98
    WCBaseTextFieldItem * m_textFieldLimitItem; // +0xa0
    UILabel * oLeftLimitLabel; // +0xa8
    id <WCPayChangeOfflinePayLimitFeeViewControllerDelegate> m_delegate; // +0xb0
}
- (id)init;
- (void)viewWillLayoutSubviews;
- (id)getChangeOfflinePayLimitView;
- (void)initNavigationBar;
- (void)reloadTableView;
- (void)viewDidLoad;
- (void)onNext;
- (void)setDelegate:(id)arg1;
- (void)OnSliderValueChanged:(id)arg1;
- (void).cxx_destruct;
@end
