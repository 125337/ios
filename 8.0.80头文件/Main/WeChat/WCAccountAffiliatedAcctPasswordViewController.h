@interface WCAccountAffiliatedAcctPasswordViewController : WCAccountBaseViewController <WCBaseInfoItemDelegate>
{
    id <WCAccountAffiliatedAcctDelegate> _delegate; // +0x80
    MMUILabel * _titleLabel; // +0x88
    WCAccountTextFieldItem * _textFieldPwdItem; // +0x90
    WCAccountTextFieldItem * _textFieldVerifyPwdItem; // +0x98
    MMUILabel * _tipsLabel; // +0xa0
    UIButton * _doneButton; // +0xa8
}
- (BOOL)useRedesignStyle;
- (BOOL)useSheetView;
- (BOOL)autoHandleKeyboardEvent;
- (void)viewDidBePoped:(BOOL)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidLoad;
- (id)generatePasswordTextFieldItemWithVerify:(BOOL)arg1;
- (void)checkDone;
- (void)onDone;
- (void)WCBaseInfoItemBeginEdit:(id)arg1;
- (void)WCBaseInfoItemEditChanged:(id)arg1;
- (void)WCBaseInfoItemPressReturnKey:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)titleLabel;
- (void)setTitleLabel:(id)arg1;
- (id)textFieldPwdItem;
- (void)setTextFieldPwdItem:(id)arg1;
- (id)textFieldVerifyPwdItem;
- (void)setTextFieldVerifyPwdItem:(id)arg1;
- (id)tipsLabel;
- (void)setTipsLabel:(id)arg1;
- (id)doneButton;
- (void)setDoneButton:(id)arg1;
- (void).cxx_destruct;
@end
