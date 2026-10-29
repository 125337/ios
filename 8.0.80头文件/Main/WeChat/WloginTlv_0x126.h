@interface WloginTlv_0x126 : WloginTlv
{
    unsigned short wVer; // +0xa
    NSData * randData; // +0x10
}
- (int)decode:(char * *)arg1 andBuffLen:(int *)arg2;
- (void)dealloc;
- (unsigned short)wVer;
- (void)setWVer:(unsigned short)arg1;
- (id)randData;
- (void)setRandData:(id)arg1;
@end
