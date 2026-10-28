@interface WCPayFacingReceiveFixedAmountViewController : WCPayBaseViewController <WCPayDecimalKeyboardViewDelegate, ILinkEventExt>
{
    id <WCPayFacingReceiveFixedAmountViewControllerDelegate> m_delegate; // +0x98
    NSString * _remark; // +0xa0
    NSString * _moneyString; // +0xa8
    UITextField * _feeTextField; // +0xb0
    RichTextView * _commentTextView; // +0xb8
    UIButton * _footerBtn; // +0xc0
    WCUIAlertView * _alertView; // +0xc8
    WCPayDecimalKeyboardView * _keyboardView; // +0xd0
    UIView * _headerView; // +0xd8
}
- (id)init;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)refreshViewWithData:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)viewDidLoad;
- (void)initNavigationBar;
- (id)navigationBarBackgroundColor;
- (void)reloadTableView;
- (void)viewDidAppear:(BOOL)arg1;
- (double)uintLabelFontSize:(id)arg1;
- (double)currencyTextFieldFontSize:(id)arg1;
- (void)initHeaderView;
- (void)FillSaveMoneyCancel;
- (void)onNext;
- (void)textFieldDidChange;
- (void)onLinkClicked:(id)arg1 withRect:(CGRect)arg2;
- (void)remarkConfirm;
- (void)remarkCancel;
- (id)keyboardHostViewController;
- (void)keyboardViewConfirmBtnClick:(id)arg1;
- (void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (id)remark;
- (void)setRemark:(id)arg1;
- (id)moneyString;
- (void)setMoneyString:(id)arg1;
- (id)feeTextField;
- (void)setFeeTextField:(id)arg1;
- (id)commentTextView;
- (void)setCommentTextView:(id)arg1;
- (id)footerBtn;
- (void)setFooterBtn:(id)arg1;
- (id)alertView;
- (void)setAlertView:(id)arg1;
- (id)keyboardView;
- (void)setKeyboardView:(id)arg1;
- (id)headerView;
- (void)setHeaderView:(id)arg1;
- (void).cxx_destruct;
@end
