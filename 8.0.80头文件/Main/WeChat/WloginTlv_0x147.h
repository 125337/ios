@interface WloginTlv_0x147 : WloginTlv
{
    unsigned int dwAppVerID; // +0xc
    unsigned short wAppVerLen; // +0x10
    NSString * sAppVer; // +0x18
    unsigned short wAppSigLen; // +0x20
    NSString * sAppSig; // +0x28
}
- (int)encode:(id)arg1;
- (void)dealloc;
- (unsigned int)dwAppVerID;
- (void)setDwAppVerID:(unsigned int)arg1;
- (unsigned short)wAppVerLen;
- (void)setWAppVerLen:(unsigned short)arg1;
- (id)sAppVer;
- (void)setSAppVer:(id)arg1;
- (unsigned short)wAppSigLen;
- (void)setWAppSigLen:(unsigned short)arg1;
- (id)sAppSig;
- (void)setSAppSig:(id)arg1;
@end
