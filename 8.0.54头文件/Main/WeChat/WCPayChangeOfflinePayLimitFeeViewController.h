@interface WCPayChangeOfflinePayLimitFeeViewController : WCPayBaseViewController
{
    UIButton * m_footerButton; // +0x90
    WCBaseTextFieldItem * m_textFieldLimitItem; // +0x98
    UILabel * oLeftLimitLabel; // +0xa0
    id <WCPayChangeOfflinePayLimitFeeViewControllerDelegate> m_delegate; // +0xa8
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

