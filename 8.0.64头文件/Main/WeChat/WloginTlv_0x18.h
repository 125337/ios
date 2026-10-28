@interface WloginTlv_0x18 : WloginTlv
{
    unsigned short wPingVer; // +0xa
    unsigned int dwSSOVer; // +0xc
    unsigned int dwAppID; // +0x10
    unsigned int dwAppClientVer; // +0x14
    unsigned int dwUin; // +0x18
    unsigned short wRedirectCount; // +0x1c
    unsigned short wResvLen; // +0x1e
}
- (int)encode:(id)arg1;
- (unsigned short)wPingVer;
- (void)setWPingVer:(unsigned short)arg1;
- (unsigned int)dwSSOVer;
- (void)setDwSSOVer:(unsigned int)arg1;
- (unsigned int)dwAppID;
- (void)setDwAppID:(unsigned int)arg1;
- (unsigned int)dwAppClientVer;
- (void)setDwAppClientVer:(unsigned int)arg1;
- (unsigned int)dwUin;
- (void)setDwUin:(unsigned int)arg1;
- (unsigned short)wRedirectCount;
- (void)setWRedirectCount:(unsigned short)arg1;
- (unsigned short)wResvLen;
- (void)setWResvLen:(unsigned short)arg1;
@end
