@interface TenpayPasswordCtrl : UITextField <UITextFieldDelegate>
{
    NSMutableArray * _inputEncData; // +0x8
    UIView * _keyboard; // +0x10
    TenpayPasswordView * _pswView; // +0x18
    TPIDKeyboardView * _iPadKeyboard; // +0x20
    TenpaySMCertificate * _certificateHandler; // +0x28
    NSString * _aesKey; // +0x30
    NSMutableArray * _numberBtns; // +0x38
    int gErrorCode; // +0x40
    id <TenpayPasswordCtrlDelegate> ctrlDelegate; // +0x48
    NSString * _saltVal; // +0x50
}
- (void)dealloc;
- (id)initWithFrame:(CGRect)arg1 AndImage:(id)arg2;
- (void)setupSM;
- (CGRect)caretRectForPosition:(id)arg1;
- (id)customOverlayContainer;
- (void)SetKeyboardNumFontColor:(id)arg1 bgColor:(id)arg2;
- (void)SetKeyboardNumFontColor:(id)arg1 bgColor:(id)arg2 lineColor:(id)arg3;
- (void)SetKeyboardNumFont:(id)arg1;
- (void)SetDotFillColor:(id)arg1 emptyColor:(id)arg2;
- (void)HiddenKeyboardPressedState:(BOOL)arg1;
- (void)setKeyboradOrientation:(long long)arg1;
- (void)UseKeyboardWithImageNumNormal:(id)arg1 ImageNumPress:(id)arg2 ImageDelNormal:(id)arg3 ImageDelPess:(id)arg4;
- (void)UseKeyboardWithImageNumNormal:(id)arg1 ImageNumPress:(id)arg2 ImageDelNormal:(id)arg3 ImageDelPess:(id)arg4 ImageExtendNormal:(id)arg5 ImageExtendPress:(id)arg6;
- (void)numberKeyBoardClicked:(id)arg1;
- (void)appendPsw:(id)arg1;
- (void)onChange;
- (void)textFieldDidBeginEditing:(id)arg1;
- (void)textFieldDidEndEditing:(id)arg1;
- (unsigned long long)accessibilityTraits;
- (void)ClearInput;
- (void)SetSalt:(id)arg1;
- (unsigned long long)GetInputLen;
- (id)checkWeakPassword;
- (id)getHkPasswordHashWithPass:(id)arg1 salt:(id)arg2;
- (id)getHkPasswordHashWithSalt:(id)arg1;
- (id)GetRsaEncryptData;
- (id)GetRsa2048EncryptData;
- (id)GetHashData;
- (id)GetSm3HashData;
- (id)GetSM2EncryptData:(long long)arg1 timestamp:(unsigned long long)arg2 nonce:(id)arg3;
- (id)GetSM2EncryptData:(long long)arg1 certPem:(id)arg2 timestamp:(unsigned long long)arg3 nonce:(id)arg4 salt:(id)arg5;
- (id)GetRsa2048EncryptData:(long long)arg1 salt:(id)arg2 timestamp:(unsigned long long)arg3 nonce:(id)arg4;
- (int)getLastError;
- (id)ctrlDelegate;
- (void)setCtrlDelegate:(id)arg1;
- (id)saltVal;
- (void)setSaltVal:(id)arg1;
- (void).cxx_destruct;
@end
