@interface WCPayTenpaySecureCtrlItem : WCBaseInfoItem <TenpaySecureCtrlDelegate, WCPayLogicMgrExt>
{
    TenpaySecureCtrl * m_textField; // +0x40
    int m_eEncryptType; // +0x48
    BOOL m_bTextFieldHasBecomeFirstResponder; // +0x4c
    NSString * m_nsUserCredType; // +0x50
}
- (long long)getTextLength;
- (BOOL)isPhoneNum;
- (BOOL)isBankCardNum;
- (BOOL)isUserIDNum:(unsigned int)arg1;
- (void)setFormatBankCard;
- (void)setKeyboardUseID:(BOOL)arg1;
- (id)getValueWithEncryptType:(int)arg1;
- (id)getValue;
- (void)setEnable:(BOOL)arg1;
- (void)initView:(CGRect)arg1;
- (void)becomeFirstResponder;
- (void)resignFirstResponder;
- (void)becomeFirstResponderOnce;
- (void)_becomeFristResponderOnce;
- (void)onEndEditor;
- (id)initWithTitle:(id)arg1 tip:(id)arg2 key:(id)arg3;
- (void)setKeyboardType:(long long)arg1;
- (void)setReturnKeyType:(long long)arg1;
- (void)setClearButtonMode:(long long)arg1;
- (void)setEncryptType:(int)arg1;
- (void)setSecureTextEntry:(BOOL)arg1;
- (void)setFont:(id)arg1;
- (void)setInputWhiteListChar:(id)arg1;
- (void)textFieldDidBeginEditing:(id)arg1;
- (void)textFieldDidEndOnExit:(id)arg1;
- (void)textFieldDidEndEditing:(id)arg1;
- (void)tenpayCtrlShouldReturn:(id)arg1;
- (void)tenpayCtrlShouldChange:(id)arg1;
- (BOOL)onError:(id)arg1;
- (void)setMaxInputLen:(int)arg1;
- (void)appendString:(id)arg1;
- (void)OnGetTenpaySecureCtrlSalt:(id)arg1 Date:(id)arg2 Error:(id)arg3;
- (void)autoRemarkKeyBoradType;
- (void)setDefaultValue:(id)arg1;
- (void)resignFirstResponderWithCompletion:(id /* block */)arg1;
- (void)onKeyboardDidHide;
- (id)m_nsUserCredType;
- (void)setM_nsUserCredType:(id)arg1;
- (id)m_textField;
- (void)setM_textField:(id)arg1;
- (void).cxx_destruct;
@end
