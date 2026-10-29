@interface TenpayEditableBankNum : UIView <UITextFieldDelegate>
{
    TenpayDelegate * _dataHandler; // +0x8
    NSMutableArray * arrTextField; // +0x10
}
- (id)initWithFrame:(CGRect)arg1;
- (void)dealloc;
- (id)initWithFrame:(CGRect)arg1 andCodeNum:(id)arg2;
- (void)setKeyboradImgWithNumNormal:(id)arg1 ImageNumPress:(id)arg2 ImageDelNormal:(id)arg3 ImageDelPess:(id)arg4;
- (void)setKeyboradImgWithNumNormal:(id)arg1 ImageNumPress:(id)arg2 ImageDelNormal:(id)arg3 ImageDelPess:(id)arg4 ImageExtendNormal:(id)arg5 ImageExtendPress:(id)arg6;
- (void)SetKeyboardNumFontColor:(id)arg1 bgColor:(id)arg2;
- (void)SetKeyboardNumFontColor:(id)arg1 bgColor:(id)arg2 lineColor:(id)arg3;
- (void)setKeyboradOrientation:(long long)arg1;
- (void)SetSalt:(id)arg1;
- (void)SelectRsaKey:(int)arg1;
- (id)getFullBankNum;
- (id)GetRsaEncryptData;
- (id)GetRsa2048EncryptData;
- (id)GetSM2EncryptData:(long long)arg1 timestamp:(unsigned long long)arg2 nonce:(id)arg3;
- (id)Get3DesEncryptData;
- (id)GetSm4EncryptData;
- (void)textFieldDidBeginEditing:(id)arg1;
@end
