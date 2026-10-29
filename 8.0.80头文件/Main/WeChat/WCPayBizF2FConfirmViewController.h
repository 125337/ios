@interface WCPayBizF2FConfirmViewController : WCPayBaseViewController <WCPayDecimalKeyboardViewDelegate>
{
    NSString * _titleText; // +0x98
    NSString * _descText; // +0xa0
    NSString * _sign; // +0xa8
    id <WCPayBizF2FConfirmViewControllerDelegate> _m_delegate; // +0xb0
    UIView * _containerView; // +0xb8
    UIView * _headerView; // +0xc0
    UIView * _titleDescView; // +0xc8
    UILabel * _headerTitleLabel; // +0xd0
    UILabel * _headerDescLabel; // +0xd8
    UIView * _firstLine; // +0xe0
    UIView * _textFieldRowView; // +0xe8
    UILabel * _textFieldRowTitle; // +0xf0
    UILabel * _textFieldUnitLabel; // +0xf8
    WCPayTextField * _textField; // +0x100
    UIView * _secondLine; // +0x108
    WCPayDecimalKeyboardView * _keyboard; // +0x110
    WCPayCss * _css; // +0x118
    double _keyboardHeight; // +0x120
}
- (id)navigationBarBackgroundColor;
- (void)onClickBackButton;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)arg1;
- (void)setDelegate:(id)arg1;
- (void)refreshViewWithData:(id)arg1;
- (void)viewDidBePoped:(BOOL)arg1;
- (void)viewDidBeDismissed:(BOOL)arg1;
- (void)updateView;
- (void)updateHeaderView;
- (void)updateTitleDescArea;
- (void)updateHeaderTitleLabel;
- (void)updateDescView;
- (void)updateFirstLine;
- (void)updateTextFieldRowView;
- (void)updateTextFieldRowTitle;
- (void)updateTextFieldUnitLabel;
- (void)updateTextField;
- (void)updateSecondLine;
- (void)onTapEmpty;
- (void)keyboardWillShow:(id)arg1;
- (void)keyboardWillHide:(id)arg1;
- (void)textFieldDidChange;
- (void)keyboardViewConfirmBtnClick:(id)arg1;
- (id)keyboardHostViewController;
- (id)titleText;
- (void)setTitleText:(id)arg1;
- (id)descText;
- (void)setDescText:(id)arg1;
- (id)sign;
- (void)setSign:(id)arg1;
- (id)m_delegate;
- (void)setM_delegate:(id)arg1;
- (id)containerView;
- (void)setContainerView:(id)arg1;
- (id)headerView;
- (void)setHeaderView:(id)arg1;
- (id)titleDescView;
- (void)setTitleDescView:(id)arg1;
- (id)headerTitleLabel;
- (void)setHeaderTitleLabel:(id)arg1;
- (id)headerDescLabel;
- (void)setHeaderDescLabel:(id)arg1;
- (id)firstLine;
- (void)setFirstLine:(id)arg1;
- (id)textFieldRowView;
- (void)setTextFieldRowView:(id)arg1;
- (id)textFieldRowTitle;
- (void)setTextFieldRowTitle:(id)arg1;
- (id)textFieldUnitLabel;
- (void)setTextFieldUnitLabel:(id)arg1;
- (id)textField;
- (void)setTextField:(id)arg1;
- (id)secondLine;
- (void)setSecondLine:(id)arg1;
- (id)keyboard;
- (void)setKeyboard:(id)arg1;
- (id)css;
- (void)setCss:(id)arg1;
- (double)keyboardHeight;
- (void)setKeyboardHeight:(double)arg1;
- (void).cxx_destruct;
@end
