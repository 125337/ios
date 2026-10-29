@interface WCAccountAffiliatedAcctPasswordViewController : WCAccountBaseViewController <WCBaseInfoItemDelegate>
{
    id <WCAccountAffiliatedAcctDelegate> _delegate; // +0x78
    MMUILabel * _titleLabel; // +0x80
    WCAccountTextFieldItem * _textFieldPwdItem; // +0x88
    WCAccountTextFieldItem * _textFieldVerifyPwdItem; // +0x90
    MMUILabel * _tipsLabel; // +0x98
    UIButton * _doneButton; // +0xa0
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

