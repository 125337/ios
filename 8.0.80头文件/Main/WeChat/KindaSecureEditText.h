@interface KindaSecureEditText : KindaView <UITextFieldDelegate, MMKSecureEditText, TenpaySecureCtrlDelegate>
{
    TenpaySecureCtrl * _m_textField; // +0xa8
    MMDynamicColor * _m_textColor; // +0xb0
    MMDynamicColor * _m_tintColor; // +0xb8
    NSString * _m_defaultValue; // +0xc0
    long long _m_encryptType; // +0xc8
    MMKSecureEditTextOnTextChangedCallback * _m_onTextChangedCallback; // +0xd0
    long long _keyboardType; // +0xd8
}
- (id)init;
- (void)dealloc;
- (id)getView;
- (void)setTextSize:(float)arg1;
- (void)setKeyboardType:(long long)arg1;
- (long long)getKeyboardType;
- (void)setHint:(id)arg1;
- (id)getHint;
- (void)setText:(id)arg1;
- (id)getText;
- (void)setFocus:(BOOL)arg1;
- (BOOL)getFocus;
- (void)setTintColor:(id)arg1;
- (id)getTintColor;
- (void)setClearButtonMode:(long long)arg1;
- (long long)getClearButtonMode;
- (void)setTextColor:(id)arg1;
- (id)getTextColor;
- (void)setDefaultValue:(id)arg1;
- (id)getDefaultValue;
- (void)setEnabled:(BOOL)arg1;
- (BOOL)getEnabled;
- (void)setMaxLength:(int)arg1;
- (int)getMaxLength;
- (void)setEncryptType:(long long)arg1;
- (long long)getEncryptType;
- (void)setOnTextChangedCallback:(id)arg1;
- (BOOL)isCardFromatValid:(int)arg1;
- (BOOL)getIsCommonText;
- (void)setIsCommonText:(BOOL)arg1;
- (void)textFieldDidBeginEditing:(id)arg1;
- (void)tenpayCtrlShouldReturn:(id)arg1;
- (void)tenpayCtrlShouldChange:(id)arg1;
- (id)m_textField;
- (void)setM_textField:(id)arg1;
- (id)m_textColor;
- (void)setM_textColor:(id)arg1;
- (id)m_tintColor;
- (void)setM_tintColor:(id)arg1;
- (id)m_defaultValue;
- (void)setM_defaultValue:(id)arg1;
- (long long)m_encryptType;
- (void)setM_encryptType:(long long)arg1;
- (id)m_onTextChangedCallback;
- (void)setM_onTextChangedCallback:(id)arg1;
- (long long)keyboardType;
- (void).cxx_destruct;
@end
