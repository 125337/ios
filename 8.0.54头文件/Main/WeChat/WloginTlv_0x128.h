@interface WloginTlv_0x128 : WloginTlv
{
    unsigned short wVer; // +0xa
    unsigned char cNewInstall; // +0xc
    unsigned char cReadGuid; // +0xd
    unsigned char cGuidChg; // +0xe
    unsigned char cGUIDSrc; // +0xf
    unsigned char cReadFailFlag; // +0x10
    unsigned char cDevChgFlag; // +0x11
    unsigned char cResvFlag; // +0x12
    NSString * deviceType; // +0x18
    NSData * guid; // +0x20
}
- (int)encode:(id)arg1;
- (void)dealloc;
- (unsigned short)wVer;
- (void)setWVer:(unsigned short)arg1;
- (id)guid;
- (void)setGuid:(id)arg1;
- (unsigned char)cGUIDSrc;
- (void)setCGUIDSrc:(unsigned char)arg1;
- (unsigned char)cReadFailFlag;
- (void)setCReadFailFlag:(unsigned char)arg1;
- (unsigned char)cDevChgFlag;
- (void)setCDevChgFlag:(unsigned char)arg1;
- (unsigned char)cResvFlag;
- (void)setCResvFlag:(unsigned char)arg1;
- (unsigned char)cGuidChg;
- (void)setCGuidChg:(unsigned char)arg1;
- (unsigned char)cReadGuid;
- (void)setCReadGuid:(unsigned char)arg1;
- (id)deviceType;
- (void)setDeviceType:(id)arg1;
- (unsigned char)cNewInstall;
- (void)setCNewInstall:(unsigned char)arg1;
@end

