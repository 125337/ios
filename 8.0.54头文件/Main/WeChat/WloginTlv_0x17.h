@interface WloginTlv_0x17 : WloginTlv
{
    unsigned short wDataVer; // +0xa
    unsigned int dwTime; // +0xc
    unsigned int dwClientIP; // +0x10
    unsigned short wClientPort; // +0x14
    unsigned short wResvLen; // +0x16
}
- (int)decode:(char * *)arg1 andBuffLen:(int *)arg2;
- (unsigned short)wDataVer;
- (void)setWDataVer:(unsigned short)arg1;
- (unsigned int)dwTime;
- (void)setDwTime:(unsigned int)arg1;
- (unsigned int)dwClientIP;
- (void)setDwClientIP:(unsigned int)arg1;
- (unsigned short)wClientPort;
- (void)setWClientPort:(unsigned short)arg1;
- (unsigned short)wResvLen;
- (void)setWResvLen:(unsigned short)arg1;
@end

