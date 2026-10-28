@interface TenpaySafeInputView : UITextField <UITextFieldDelegate>
{
    NSMutableArray * _inputEncData; // +0x8
    TenpayKeyboardView * _keyboard; // +0x10
    TenpayDelegate * _dataHandler; // +0x18
    NSData * _sm4Key; // +0x20
    NSData * _sm4IV; // +0x28
    NSString * _szTitle; // +0x30
    long long _type; // +0x38
    long long _minInputLen; // +0x40
    long long _maxInputLen; // +0x48
    int _gErrorCode; // +0x50
    id <TenpaySafeInputViewDelegate> safeViewDelegate; // +0x58
    NSString * _whiteListCharsSet; // +0x60
}
- (void)dealloc;
- (id)initWithFrame:(CGRect)arg1;
- (void)setInputRange:(long long)arg1 maxLen:(long long)arg2;
- (void)setWhiteListChar:(id)arg1;
- (id)text;
- (BOOL)canPerformAction:(SEL)arg1 withSender:(id)arg2;
- (void)useKeyboard:(long long)arg1 imageNumNormal:(id)arg2 imageNumPress:(id)arg3 imageDelNormal:(id)arg4 imageDelPess:(id)arg5 imageExtendNormal:(id)arg6 imageExtendPess:(id)arg7;
- (void)setKeyboardFontColor:(id)arg1 bgColor:(id)arg2 lineColor:(id)arg3;
- (void)numberKeyBoardClicked:(id)arg1;
- (_NSRange)selectedRange;
- (void)setSelectedRange:(_NSRange)arg1;
- (void)appendPsw:(id)arg1;
- (id)getPsw;
- (void)onChange;
- (void)onReturn;
- (BOOL)textFieldShouldClear:(id)arg1;
- (unsigned long long)accessibilityTraits;
- (void)clearInput;
- (unsigned long long)getInputLen;
- (BOOL)checkInputData:(id)arg1;
- (void)setInput:(id)arg1;
- (id)getEncryptData:(id)arg1 extra:(id)arg2;
- (id)getHashData:(id)arg1;
- (int)getError;
- (id)safeViewDelegate;
- (void)setSafeViewDelegate:(id)arg1;
- (id)whiteListCharsSet;
- (void)setWhiteListCharsSet:(id)arg1;
- (void).cxx_destruct;
@end
