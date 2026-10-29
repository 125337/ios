@interface WloginTlv_0x148 : WloginTlv
{
    NSString * sAppName; // +0x10
    unsigned int dwSSOVer; // +0x18
    unsigned int dwAppId; // +0x1c
    unsigned int dwSubAppId; // +0x20
    NSString * sAppVer; // +0x28
    NSString * sAppSig; // +0x30
}
- (int)encode:(id)arg1;
- (void)dealloc;
- (id)sAppName;
- (void)setSAppName:(id)arg1;
- (unsigned int)dwSSOVer;
- (void)setDwSSOVer:(unsigned int)arg1;
- (unsigned int)dwAppId;
- (void)setDwAppId:(unsigned int)arg1;
- (unsigned int)dwSubAppId;
- (void)setDwSubAppId:(unsigned int)arg1;
- (id)sAppVer;
- (void)setSAppVer:(id)arg1;
- (id)sAppSig;
- (void)setSAppSig:(id)arg1;
@end
