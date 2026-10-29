@interface LiteAppSafePasswordKeyboard : UIView <TenpayPasswordCtrlDelegate, UITextFieldDelegate>
{
    BOOL _disableDarkMode; // +0x8
    BOOL _verifyWeakPwd; // +0x9
    TenpayPasswordCtrl * _tenpayPasswordCtrl; // +0x10
    id <UITextInput> _flutterInputView; // +0x18
    long long _pwdEncryptMode; // +0x20
    NSString * _pwdNonce; // +0x28
    long long _pwdTimestamp; // +0x30
    NSString * _pwdSoftSalt; // +0x38
    long long _hashCalculateMode; // +0x40
    unsigned long long _appUuid; // +0x48
    unsigned long long _nodeId; // +0x50
    long long _pwdViewStyle; // +0x58
}
- (id)init;
- (void)updateInterfaceStyle;
- (void)layoutSubviews;
- (void)updatePasswordCtrl;
- (void)captureScreenDidChange;
- (long long)getTextLength;
- (id)flutterInputView;
- (void)visitSubviewsOfView:(id)arg1 vistor:(id /* block */)arg2;
- (unsigned long long)getFlutterInputViewTextLen;
- (void)keyboardDidShow:(id)arg1;
- (void)setKeyboardAccessibility:(id)arg1;
- (void)setPwdEncryptMode:(long long)arg1;
- (void)setPwdTimestamp:(long long)arg1;
- (void)setPwdNonce:(id)arg1;
- (void)setPwdSoftSalt:(id)arg1;
- (void)setVerifyWeakPwd:(BOOL)arg1;
- (void)setHashCalculateMode:(long long)arg1;
- (void)setAppUuId:(unsigned long long)arg1;
- (void)setNodeId:(unsigned long long)arg1;
- (void)setPwdViewStyle:(long long)arg1;
- (BOOL)isHKPwdMode;
- (id)getHKEncryptPassword;
- (id)getEncryptPassword;
- (id)getPasswordHash;
- (void)reportSm2PwdError:(id)arg1 sm2HashType:(long long)arg2;
- (void)passwordInputComplete;
- (void)handleHKPasswordInputComplete;
- (void)publishInputCompleteEvent:(id)arg1;
- (void)clearPassword;
- (void)dealloc;
- (BOOL)textField:(id)arg1 shouldChangeCharactersInRange:(_NSRange)arg2 replacementString:(id)arg3;
- (void)textFieldDidBeginEditing:(id)arg1;
- (void)textFieldDidEndEditing:(id)arg1;
- (void)passwordCtrlShouldChange:(id)arg1;
- (void)passwordCtrlDidBeginEditing:(id)arg1;
- (void)passwordCtrlDidEndEditing:(id)arg1;
- (void)setDisableDarkMode:(BOOL)arg1;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (id)tenpayPasswordCtrl;
- (void)setTenpayPasswordCtrl:(id)arg1;
- (void)setFlutterInputView:(id)arg1;
- (long long)pwdEncryptMode;
- (id)pwdNonce;
- (long long)pwdTimestamp;
- (id)pwdSoftSalt;
- (BOOL)verifyWeakPwd;
- (long long)hashCalculateMode;
- (unsigned long long)appUuid;
- (void)setAppUuid:(unsigned long long)arg1;
- (unsigned long long)nodeId;
- (long long)pwdViewStyle;
- (void).cxx_destruct;
@end
