@interface KindaPwdInputView : KindaView <WCBaseInfoItemDelegate, MMKPwdInputView>
{
    unsigned int _solfEncryptVersion; // +0xa8
    WCPayTenpayPasswordCtrlItem * _m_passwordTextField; // +0xb0
    UIView * _m_view; // +0xb8
    id <MMKImage> _m_image; // +0xc0
    MMKPwdInputViewOnEndEnterPasswordCallback * _m_editEndCallBack; // +0xc8
    MMKPwdInputViewOnPasswordChangeCallback * _m_editChangeCallBack; // +0xd0
    long long _pwdStyle; // +0xd8
    long long _pwdEncryptMode; // +0xe0
    NSString * _pwdNonce; // +0xe8
    long long _pwdTimestamp; // +0xf0
    NSString * _solfEncryptSalt; // +0xf8
}
- (id)init;
- (void)setBackgroundColor:(id)arg1;
- (id)getView;
- (void)setTextLength:(long long)arg1;
- (long long)getTextLength;
- (void)setHashData:(id)arg1;
- (id)getHashData;
- (void)setChearInput:(BOOL)arg1;
- (BOOL)getChearInput;
- (void)setAutoRemarkKeyBoradType:(BOOL)arg1;
- (BOOL)getAutoRemarkKeyBoradType;
- (void)setFocus:(BOOL)arg1;
- (BOOL)getFocus;
- (void)setOnEndEnterPasswordCallback:(id)arg1;
- (void)setOnPasswordChangeCallback:(id)arg1;
- (void)setPwdStyle:(long long)arg1;
- (long long)getPwdStyle;
- (void)setFocusModalListener:(id)arg1;
- (void)setFocusUIPageListener:(id)arg1;
- (void)WCBaseInfoItemEditChanged:(id)arg1;
- (id)getEncryptValue;
- (void)setKeyboardDisabled:(BOOL)arg1;
- (BOOL)getKeyboardDisabled;
- (void)setKeepKeyboardOnClearFocus:(BOOL)arg1;
- (void)setPwdNonce:(id)arg1;
- (id)getPwdNonce;
- (void)setPwdEncryptMode:(long long)arg1;
- (long long)getPwdEncryptMode;
- (void)setEncryptSoftSaltAndVersion:(id)arg1 version:(int)arg2;
- (long long)sm2HashType;
- (void)setPwdTimestamp:(long long)arg1;
- (long long)getPwdTimestamp;
- (id)m_passwordTextField;
- (void)setM_passwordTextField:(id)arg1;
- (id)m_view;
- (void)setM_view:(id)arg1;
- (id)m_image;
- (void)setM_image:(id)arg1;
- (id)m_editEndCallBack;
- (void)setM_editEndCallBack:(id)arg1;
- (id)m_editChangeCallBack;
- (void)setM_editChangeCallBack:(id)arg1;
- (long long)pwdStyle;
- (long long)pwdEncryptMode;
- (id)pwdNonce;
- (long long)pwdTimestamp;
- (id)solfEncryptSalt;
- (void)setSolfEncryptSalt:(id)arg1;
- (unsigned int)solfEncryptVersion;
- (void)setSolfEncryptVersion:(unsigned int)arg1;
- (void).cxx_destruct;
@end

