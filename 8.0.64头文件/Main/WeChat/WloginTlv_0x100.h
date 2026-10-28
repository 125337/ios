@interface WloginTlv_0x100 : WloginTlv
{
    unsigned short wDBBufVer; // +0xa
    unsigned int dwSSOVer; // +0xc
    unsigned int dwAppID; // +0x10
    unsigned int dwSubAppID; // +0x14
    unsigned int dwAppClientVer; // +0x18
    unsigned int dwGetSig; // +0x1c
}
- (int)encode:(id)arg1;
- (unsigned short)wDBBufVer;
- (void)setWDBBufVer:(unsigned short)arg1;
- (unsigned int)dwAppClientVer;
- (void)setDwAppClientVer:(unsigned int)arg1;
- (unsigned int)dwAppID;
- (void)setDwAppID:(unsigned int)arg1;
- (unsigned int)dwGetSig;
- (void)setDwGetSig:(unsigned int)arg1;
- (unsigned int)dwSSOVer;
- (void)setDwSSOVer:(unsigned int)arg1;
- (unsigned int)dwSubAppID;
- (void)setDwSubAppID:(unsigned int)arg1;
@end
