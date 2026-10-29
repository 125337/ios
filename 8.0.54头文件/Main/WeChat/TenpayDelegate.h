@interface TenpayDelegate : NSObject <UITextFieldDelegate>
{
    NSMutableString * _inputText; // +0x8
    NSString * _salt; // +0x10
    NSString * _appendText; // +0x18
    int _keyIndex; // +0x20
    int _maxLen; // +0x24
    id _returnTarget; // +0x28
    SEL _returnCallback; // +0x30
    id _changeTarget; // +0x38
    SEL _changeCallback; // +0x40
    TenpaySMCertificate * _certificateHandler; // +0x48
    BOOL bFormatBankCard; // +0x50
    NSCharacterSet * _filterCharsSet; // +0x58
    NSString * _whiteListCharsSet; // +0x60
}
- (id)init;
- (void)dealloc;
- (void)setupSM;
- (void)SetReturn:(id)arg1 callback:(SEL)arg2;
- (void)SetChange:(id)arg1 callback:(SEL)arg2;
- (void)SetMaxInputLen:(int)arg1;
- (void)AppendString:(id)arg1;
- (id)DecodeCard:(id)arg1;
- (id)DecodeCardWithAppend:(id)arg1;
- (id)EncodeCard:(id)arg1;
- (long long)spaceCountAtSrcCursor:(long long)arg1;
- (long long)spaceCountAtFormatCursor:(long long)arg1;
- (void)ResetInputText:(id)arg1;
- (id)whiteListFilter:(id)arg1;
- (void)textFieldDidChanged:(id)arg1;
- (BOOL)textField:(id)arg1 shouldChangeCharactersInRange:(_NSRange)arg2 replacementString:(id)arg3;
- (BOOL)textFieldShouldClear:(id)arg1;
- (BOOL)textFieldShouldReturn:(id)arg1;
- (id)GetVersion;
- (long long)GetInputInfo;
- (void)SetSalt:(id)arg1;
- (void)SelectRsaKey:(int)arg1;
- (void)ClearInput;
- (id)GetEncryptDataWithHash:(BOOL)arg1;
- (id)Get2048EncryptDataWithHash:(BOOL)arg1;
- (id)GetSM2EncryptData:(long long)arg1 timestamp:(unsigned long long)arg2 nonce:(id)arg3;
- (id)Get3DesEncryptData;
- (id)GetSm4EncryptData;
- (BOOL)isPhoneNum;
- (BOOL)isBankCardNum;
- (BOOL)isUserIDNum;
- (BOOL)isAreaIDCardNum:(long long)arg1;
- (id)GetAsteriskString:(id)arg1;
- (id)GetEncryptCode;
- (id)GetUnEncryptCode;
- (void)setDefaultValue:(id)arg1;
- (BOOL)bFormatBankCard;
- (void)setBFormatBankCard:(BOOL)arg1;
- (id)filterCharsSet;
- (void)setFilterCharsSet:(id)arg1;
- (id)whiteListCharsSet;
- (void)setWhiteListCharsSet:(id)arg1;
@end

