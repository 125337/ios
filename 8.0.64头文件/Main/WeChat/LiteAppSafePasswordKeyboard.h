@interface LiteAppSafePasswordKeyboard : UIView <TenpayPasswordCtrlDelegate, UITextFieldDelegate>
{
    BOOL _disableDarkMode; // +0x8
    TenpayPasswordCtrl * _tenpayPasswordCtrl; // +0x10
    id <UITextInput> _flutterInputView; // +0x18
    long long _pwdEncryptMode; // +0x20
    NSString * _pwdNonce; // +0x28
    long long _pwdTimestamp; // +0x30
    unsigned long long _appUuid; // +0x38
    unsigned long long _nodeId; // +0x40
    long long _pwdViewStyle; // +0x48
}
- (id)init;
- (void)updateInterfaceStyle;
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
- (void)setAppUuId:(unsigned long long)arg1;
- (void)setNodeId:(unsigned long long)arg1;
- (void)setPwdViewStyle:(long long)arg1;
- (id)getEncryptPassword;
- (id)getPasswordHash;
- (void)reportSm2PwdError:(id)arg1 sm2HashType:(long long)arg2;
- (void)passwordInputComplete;
- (void)clearPassword;
- (void)dealloc;
- (BOOL)textField:(id)arg1 shouldChangeCharactersInRange:(_NSRange)arg2 replacementString:(id)arg3;
- (void)textFieldDidBeginEditing:(id)arg1;
- (void)textFieldDidEndEditing:(id)arg1;
- (void)passwordCtrlShouldChange:(id)arg1;
- (void)passwordCtrlDidBeginEditing:(id)arg1;
- (void)passwordCtrlDidEndEditing:(id)arg1;
- (void)setDisableDarkMode:(BOOL)arg1;
- (id)tenpayPasswordCtrl;
- (void)setTenpayPasswordCtrl:(id)arg1;
- (void)setFlutterInputView:(id)arg1;
- (long long)pwdEncryptMode;
- (id)pwdNonce;
- (long long)pwdTimestamp;
- (unsigned long long)appUuid;
- (void)setAppUuid:(unsigned long long)arg1;
- (unsigned long long)nodeId;
- (long long)pwdViewStyle;
- (void).cxx_destruct;
@end
