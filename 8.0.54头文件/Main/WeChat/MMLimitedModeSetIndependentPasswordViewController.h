@interface MMLimitedModeSetIndependentPasswordViewController : MMUIViewController <UITextFieldDelegate, WCPayInputViewDelegate>
{
    double m_fKeyboardHeight; // +0x68
    BOOL _isShowErrorTip; // +0x70
    BOOL _showRepeatWrongTips; // +0x71
    unsigned int _m_setLimitedModePwdType; // +0x74
    unsigned int _m_verifyScene; // +0x78
    MMUILabel * m_titleLabel; // +0x80
    MMUITextField * m_textField; // +0x88
    MMUILabel * m_descLabel; // +0x90
    MMUIButton * m_goToWechatPassWordButton; // +0x98
    NSString * _ticket; // +0xa0
    long long _scene; // +0xa8
    WCPayInputView * _payInputView; // +0xb0
}
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (id)navigationBarBackgroundColor;
- (void)viewDidTransitionToNewSize;
- (void)initUI;
- (id)payInputView;
- (id)getTitleLabelText;
- (id)getDescLabelText;
- (double)getInputViewWidth;
- (id)getTextFieldText;
- (BOOL)isShowGoToWechatPassWordButton;
- (BOOL)isShowDesclabel;
- (void)onBack;
- (void)onTextFieldContentChange:(id)arg1;
- (void)doInputFinishAction;
- (void)onGoToWechatPassWord;
- (void)onPayInputViewButtonClick;
- (void)onKeyboardWillShow:(id)arg1;
- (void)onKeyboardWillHide:(id)arg1;
- (double)getkeyboardHideAcceptBtnBottom;
- (double)getkeyboardShowAcceptBtnBottom;
- (void)restAcceptBtnWithKeyboardWillShow:(BOOL)arg1;
- (BOOL)textField:(id)arg1 shouldChangeCharactersInRange:(_NSRange)arg2 replacementString:(id)arg3;
- (void)inputView:(id)arg1 didChangeText:(id)arg2;
- (id)m_titleLabel;
- (void)setM_titleLabel:(id)arg1;
- (id)m_textField;
- (void)setM_textField:(id)arg1;
- (id)m_descLabel;
- (void)setM_descLabel:(id)arg1;
- (id)m_goToWechatPassWordButton;
- (void)setM_goToWechatPassWordButton:(id)arg1;
- (BOOL)isShowErrorTip;
- (void)setIsShowErrorTip:(BOOL)arg1;
- (unsigned int)m_setLimitedModePwdType;
- (void)setM_setLimitedModePwdType:(unsigned int)arg1;
- (id)ticket;
- (void)setTicket:(id)arg1;
- (unsigned int)m_verifyScene;
- (void)setM_verifyScene:(unsigned int)arg1;
- (BOOL)showRepeatWrongTips;
- (void)setShowRepeatWrongTips:(BOOL)arg1;
- (long long)scene;
- (void)setScene:(long long)arg1;
- (void)setPayInputView:(id)arg1;
- (void).cxx_destruct;
@end

