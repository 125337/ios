@interface WCPayCreditPayCardDetailInfoViewController : WCPayBaseViewController <WCActionSheetDelegate>
{
    id <WCPayCreditPayCardDetailInfoViewControllerDelegate> m_delegate; // +0x98
    UIButton * m_footerButton; // +0xa0
}
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)arg1;
- (void)makeCreditCanUseCell:(id)arg1;
- (void)makeExtCell:(id)arg1 cellInfo:(id)arg2;
- (void)onClickExtCell:(id)arg1;
- (void)makeCreditUsedCell:(id)arg1;
- (void)showUpgradeCell;
- (void)showBillAmountCell;
- (void)showRepayCell;
- (void)showCreditCardDetailInfoCell;
- (void)showCreditRightsCell;
- (void)showBankDetailCell;
- (id)getBillTipWording;
- (void)addEachSection;
- (id)getTableViewHeaderView;
- (id)getContactBankFooterView;
- (void)addExpiredSection;
- (void)reloadTableView;
- (void)refreshViewWithData:(id)arg1;
- (void)reloadNavigationBar;
- (void)onOperate;
- (void)onUnBind;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)setDelegate:(id)arg1;
- (void).cxx_destruct;
@end
