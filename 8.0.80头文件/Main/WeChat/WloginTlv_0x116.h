@interface WloginTlv_0x116 : WloginTlv
{
    unsigned char cVer; // +0xa
    unsigned int dwMiscBitmap; // +0xc
    unsigned int dwGetAppSig; // +0x10
    unsigned char cAppidNum; // +0x14
    unsigned int[10] adwAppidList; // +0x18
}
- (void)setAdwAppidList:(unsigned int)arg1 withIndex:(unsigned char)arg2;
- (unsigned int)adwAppidWithIndex:(unsigned char)arg1;
- (int)encode:(id)arg1;
- (unsigned int)dwGetAppSig;
- (void)setDwGetAppSig:(unsigned int)arg1;
- (unsigned int)dwMiscBitmap;
- (void)setDwMiscBitmap:(unsigned int)arg1;
- (unsigned char)cVer;
- (void)setCVer:(unsigned char)arg1;
- (unsigned char)cAppidNum;
- (void)setCAppidNum:(unsigned char)arg1;
@end
