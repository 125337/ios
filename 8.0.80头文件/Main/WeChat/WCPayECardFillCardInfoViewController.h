@interface WCPayECardFillCardInfoViewController : WCPayBaseViewController <WCBaseInfoItemDelegate>
{
    id <WCPayECardFillCardInfoViewControllerDelegate> _delegate; // +0x98
    WCPayTenpaySecureCtrlItem * _bankCardNumberTextFieldItem; // +0xa0
    WCPayPhoneTextItem * _phoneNumberTextFieldItem; // +0xa8
    UIButton * _footerButton; // +0xb0
    double _cellItemLeft; // +0xb8
}
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (void)reloadTableView;
- (void)calculateCellItemLeft;
- (id)makeCellTitleLabel;
- (void)makeInfoCell:(id)arg1 cellInfo:(id)arg2;
- (id)tableFooterView;
- (void)showDetailTip;
- (void)onNext;
- (void)WCBaseInfoItemEditChanged:(id)arg1;
- (id)bankCardNumberTextFieldItem;
- (id)phoneNumberTextFieldItem;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (void)setBankCardNumberTextFieldItem:(id)arg1;
- (void)setPhoneNumberTextFieldItem:(id)arg1;
- (id)footerButton;
- (void)setFooterButton:(id)arg1;
- (double)cellItemLeft;
- (void)setCellItemLeft:(double)arg1;
- (void).cxx_destruct;
@end
