@interface WloginTlv_0x140 : WloginTlv
{
    unsigned short wDataVer; // +0xa
    NSString * sLoginHost; // +0x10
    unsigned short wLoginPort; // +0x18
    unsigned short wResvLen; // +0x1a
}
- (int)decode:(char * *)arg1 andBuffLen:(int *)arg2;
- (void)dealloc;
- (unsigned short)wDataVer;
- (void)setWDataVer:(unsigned short)arg1;
- (id)sLoginHost;
- (void)setSLoginHost:(id)arg1;
- (unsigned short)wLoginPort;
- (void)setWLoginPort:(unsigned short)arg1;
- (unsigned short)wResvLen;
- (void)setWResvLen:(unsigned short)arg1;
@end
