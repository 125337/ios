@interface TenpayMiniProgramKeyboard : TPIDKeyboardView
{
    TenpaySMCertificate * _certificateHandler; // +0x8
    TenpaySMSecureObject * _smSecureHandler; // +0x10
    NSMutableArray * _inputText; // +0x18
    NSData * _aesKeyIV; // +0x20
    NSData * _aseKey; // +0x28
    NSString * _salt; // +0x30
    unsigned long long _timestamp; // +0x38
    unsigned long long _nonce; // +0x40
    int _maxInputLen; // +0x48
    int _minInputLen; // +0x4c
    BOOL _hasStartCustomHash; // +0x50
    NSData * _customHash; // +0x58
    NSString * _certPem; // +0x60
    int gErrorCode; // +0x68
    id <TenpayMiniProgramKeyboardDelegate> _delegate; // +0x70
    UITextField * _textView; // +0x78
}
- (id)initWithX:(BOOL)arg1 ImageNumNormal:(id)arg2 ImageNumPress:(id)arg3 ImageDelNormal:(id)arg4 ImageDelPess:(id)arg5 Controller:(id)arg6 certPem:(id)arg7;
- (void)dealloc;
- (void)appendPsw:(id)arg1;
- (void)setSalt:(id)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (void)setNonce:(unsigned long long)arg1;
- (id)inputEncryptData:(unsigned long long)arg1;
- (id)plainPasswd;
- (long long)getContentLength;
- (id)version;
- (int)getError;
- (void)beginCustomHash;
- (void)customPasswdSm3;
- (void)customPasswdSha256;
- (void)customPasswdSha1;
- (void)customPasswdMd5;
- (void)customPasswdEncode:(unsigned long long)arg1;
- (void)customInsertSalt:(id)arg1;
- (void)customAppendSalt:(id)arg1;
- (id)endCustomHashAndEncrypt:(unsigned long long)arg1 nonce:(unsigned long long)arg2;
- (void)setKeyboardNumFontColor:(id)arg1 bgColor:(id)arg2;
- (void)setKeyboardNumFontColor:(id)arg1 bgColor:(id)arg2 lineColor:(id)arg3;
- (void)setKeyboardOrientation:(long long)arg1;
- (void)HiddenKeyboardPressedState:(BOOL)arg1;
- (void)show;
- (void)hide;
- (void)clearInput;
- (void)setCertPem:(id)arg1;
- (void)setInputLength:(long long)arg1 max:(long long)arg2;
- (void)keyboardTouchNumber:(id)arg1;
- (void)keyboardTouchDelete;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)textView;
- (void).cxx_destruct;
@end
