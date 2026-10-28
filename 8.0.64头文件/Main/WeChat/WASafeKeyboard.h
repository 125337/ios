@interface WASafeKeyboard : TenpayMiniProgramKeyboard
{
    long long _passwordLen; // +0x8
    NSString * _papramCert; // +0x10
    NSString * _paramSalt; // +0x18
    NSArray * _paramCustomHash; // +0x20
    NSNumber * _paramTimeStamp; // +0x28
    NSNumber * _paramNonce; // +0x30
}
- (id)initWithCert:(id)arg1 TextField:(id)arg2;
- (void)dealloc;
- (void)captureScreenDidChange;
- (void)parseSafePasswordParam:(id)arg1;
- (id)inputEncryptData:(unsigned long long)arg1;
- (id)getParamError;
- (id)getEncryptError;
- (id)exeCustomHash;
- (long long)passwordLen;
- (void)setPasswordLen:(long long)arg1;
- (id)papramCert;
- (void)setPapramCert:(id)arg1;
- (id)paramSalt;
- (void)setParamSalt:(id)arg1;
- (id)paramCustomHash;
- (void)setParamCustomHash:(id)arg1;
- (id)paramTimeStamp;
- (void)setParamTimeStamp:(id)arg1;
- (id)paramNonce;
- (void)setParamNonce:(id)arg1;
- (void).cxx_destruct;
@end
