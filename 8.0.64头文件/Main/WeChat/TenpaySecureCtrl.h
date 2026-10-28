@interface TenpaySecureCtrl : UITextField
{
    TenpayDelegate * _dataHandler; // +0x8
    unsigned long long _maxInputLen; // +0x10
    UIView * _keyboard; // +0x18
    TPIDKeyboardView * _iPadKeyboard; // +0x20
    BOOL bFormatBankCard; // +0x28
    id <TenpaySecureCtrlDelegate> ctrlDelegate; // +0x30
}
- (id)initWithFrame:(CGRect)arg1;
- (void)onReturn;
- (void)onChange;
- (void)dealloc;
- (BOOL)canPerformAction:(SEL)arg1 withSender:(id)arg2;
- (id)text;
- (unsigned long long)GetInputLen;
- (void)setBFormatBankCard:(BOOL)arg1;
- (void)SetMaxInputLen:(int)arg1;
- (void)AppendString:(id)arg1;
- (void)SetKeyboardNumFontColor:(id)arg1 bgColor:(id)arg2 lineColor:(id)arg3;
- (void)SetKeyboardNumFontColor:(id)arg1 bgColor:(id)arg2;
- (void)setKeyboradOrientation:(long long)arg1;
- (void)UseKeyboardWithX:(BOOL)arg1 ImageNumNormal:(id)arg2 ImageNumPress:(id)arg3 ImageDelNormal:(id)arg4 ImageDelPess:(id)arg5;
- (void)UseKeyboardWithX:(BOOL)arg1 ImageNumNormal:(id)arg2 ImageNumPress:(id)arg3 ImageDelNormal:(id)arg4 ImageDelPess:(id)arg5 ImageExtendNormal:(id)arg6 ImageExtendPress:(id)arg7;
- (void)numberKeyBoardTouchDown:(id)arg1;
- (void)numberKeyBoardTouchTouchCancel:(id)arg1;
- (void)numberKeyBoardClicked:(id)arg1;
- (unsigned long long)accessibilityTraits;
- (id)GetVersion;
- (long long)GetInputInfo;
- (void)SetSalt:(id)arg1;
- (void)SelectRsaKey:(int)arg1;
- (void)ClearInput;
- (id)GetRsaEncryptData;
- (id)GetRsa2048EncryptData;
- (id)GetSM2EncryptData:(long long)arg1 timestamp:(unsigned long long)arg2 nonce:(id)arg3;
- (id)Get3DesEncryptData;
- (id)GetSm4EncryptData;
- (BOOL)isPhoneNum;
- (BOOL)isBankCardNum;
- (BOOL)isUserIDNum;
- (BOOL)isAreaIDCardNum:(long long)arg1;
- (void)setDefaultValue:(id)arg1;
- (void)setFilterChar:(id)arg1;
- (void)setWhiteListChar:(id)arg1;
- (void)p_syncShowTextToDataHandler;
- (_NSRange)selectedRange;
- (void)setSelectedRange:(_NSRange)arg1;
- (id)ctrlDelegate;
- (void)setCtrlDelegate:(id)arg1;
- (BOOL)bFormatBankCard;
- (void).cxx_destruct;
@end
