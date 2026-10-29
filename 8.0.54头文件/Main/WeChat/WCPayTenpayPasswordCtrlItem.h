@interface WCPayTenpayPasswordCtrlItem : WCBaseInfoItem <TenpayPasswordCtrlDelegate, WCPayLogicMgrExt, UITextFieldDelegate>
{
    TenpayPasswordCtrl * m_textField; // +0x40
    UIImage * m_image; // +0x48
    BOOL _keyboardDisabled; // +0x50
    WCPayInputView * _payInputView; // +0x58
    long long _pwdEncryptMode; // +0x60
    NSString * _pwdNonce; // +0x68
    UIColor * _numColor; // +0x70
    UIColor * _numFontColor; // +0x78
    UIColor * _extendColor; // +0x80
    UIColor * _pressColor; // +0x88
    UIColor * _lineColor; // +0x90
    long long _pwdViewStyle; // +0x98
    UIView * _keyboardMask; // +0xa0
}
- (long long)getTextLength;
- (CGSize)getSize;
- (id)getValue;
- (void)updatePasswordCtrl;
- (void)captureScreenDidChange;
- (void)initView:(CGRect)arg1;
- (BOOL)textField:(id)arg1 shouldChangeCharactersInRange:(_NSRange)arg2 replacementString:(id)arg3;
- (void)textFieldDidBeginEditing:(id)arg1;
- (void)textFieldDidEndEditing:(id)arg1;
- (void)clearInput;
- (void)becomeFirstResponder;
- (void)resignFirstResponder;
- (id)initWithImage:(id)arg1;
- (id)initWithYogaNumColor:(id)arg1 numFontColor:(id)arg2 extendColor:(id)arg3 pressColor:(id)arg4 lineColor:(id)arg5;
- (void)dealloc;
- (void)keyboardDidShow:(id)arg1;
- (void)setKeyboardAccessibility:(id)arg1;
- (id)getHashData;
- (void)passwordCtrlShouldChange:(id)arg1;
- (void)passwordCtrlDidBeginEditing:(id)arg1;
- (id)getSM2EncryptValue:(long long)arg1 nonce:(id)arg2;
- (id)getSM2EncryptValue:(long long)arg1 timestamp:(unsigned long long)arg2 nonce:(id)arg3;
- (void)reportRSAError:(id)arg1 isRSA2048:(BOOL)arg2;
- (void)reportSm2PwdError:(id)arg1 sm2HashType:(long long)arg2;
- (id)getRsa2048EncryValue:(long long)arg1 salt:(id)arg2 timeStamp:(unsigned long long)arg3 nonceStr:(id)arg4;
- (void)passwordCtrlDidEndEditing:(id)arg1;
- (BOOL)onError:(id)arg1;
- (void)OnGetTenpaySecureCtrlSalt:(id)arg1 Date:(id)arg2 Error:(id)arg3;
- (void)autoRemarkKeyBoradType;
- (void)setTextFieldSalt;
- (void)setTextFieldServerSalt:(id)arg1;
- (void)updatePwdViewStyle:(long long)arg1;
- (void)showBackgroundImage:(BOOL)arg1;
- (id)payInputView;
- (id)keyboardMask;
- (void)setKeyboardDisabled:(BOOL)arg1;
- (void)setPayInputView:(id)arg1;
- (long long)pwdEncryptMode;
- (void)setPwdEncryptMode:(long long)arg1;
- (id)pwdNonce;
- (void)setPwdNonce:(id)arg1;
- (BOOL)keyboardDisabled;
- (id)numColor;
- (void)setNumColor:(id)arg1;
- (id)numFontColor;
- (void)setNumFontColor:(id)arg1;
- (id)extendColor;
- (void)setExtendColor:(id)arg1;
- (id)pressColor;
- (void)setPressColor:(id)arg1;
- (id)lineColor;
- (void)setLineColor:(id)arg1;
- (long long)pwdViewStyle;
- (void)setPwdViewStyle:(long long)arg1;
- (void)setKeyboardMask:(id)arg1;
- (void).cxx_destruct;
@end

