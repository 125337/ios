@interface WCBaseTextFieldItem : WCBaseInfoItem <UITextFieldDelegate>
{
    WCUITextField * m_textField; // +0x40
    int m_iMaxInputLen; // +0x48
    BOOL m_bRealLen; // +0x4c
    BOOL m_bTextFieldHasBecomeFirstResponder; // +0x4d
}
- (void)initView:(CGRect)arg1;
- (id)getValue;
- (void)setEnable:(BOOL)arg1;
- (void)setRestrictShareMenu:(BOOL)arg1;
- (id)initWithTitle:(id)arg1 tip:(id)arg2 key:(id)arg3;
- (void)dealloc;
- (void)becomeFirstResponder;
- (void)becomeFirstResponderOnce;
- (void)_becomeFristResponderOnce;
- (void)resignFirstResponderWithCompletion:(id /* block */)arg1;
- (void)onKeyboardDidHide;
- (void)resignFirstResponder;
- (id)getTextField;
- (void)setKeyboardType:(long long)arg1;
- (void)setReturnKeyType:(long long)arg1;
- (void)setSecureTextEntry:(BOOL)arg1;
- (void)setClearButtonMode:(long long)arg1;
- (void)setMaxInputLen:(int)arg1;
- (void)setMaxRealStringLen:(int)arg1;
- (void)setRealLen:(BOOL)arg1;
- (void)setText:(id)arg1;
- (void)setFont:(id)arg1;
- (void)setColor:(id)arg1;
- (BOOL)textFieldShouldBeginEditing:(id)arg1;
- (void)textFieldDidBeginEditing:(id)arg1;
- (void)textFieldDidEndOnExit:(id)arg1;
- (void)textFieldDidEndEditing:(id)arg1;
- (void)textFieldDidChanged:(id)arg1;
- (BOOL)textField:(id)arg1 shouldChangeCharactersInRange:(_NSRange)arg2 replacementString:(id)arg3;
- (void).cxx_destruct;
@end
