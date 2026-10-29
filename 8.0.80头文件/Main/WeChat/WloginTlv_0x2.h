@interface WloginTlv_0x2 : WloginTlv
{
    unsigned short wPicSigVer; // +0xa
    NSString * sCode; // +0x10
    NSData * acEncryptKey; // +0x18
}
- (int)encode:(id)arg1;
- (void)dealloc;
- (unsigned short)wPicSigVer;
- (void)setWPicSigVer:(unsigned short)arg1;
- (id)sCode;
- (void)setSCode:(id)arg1;
- (id)acEncryptKey;
- (void)setAcEncryptKey:(id)arg1;
@end
