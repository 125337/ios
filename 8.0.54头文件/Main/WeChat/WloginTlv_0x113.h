@interface WloginTlv_0x113 : WloginTlv
{
    unsigned int dwUin; // +0xc
    unsigned short wNameTag; // +0x10
    NSString * sName; // +0x18
}
- (int)decode:(char * *)arg1 andBuffLen:(int *)arg2;
- (void)dealloc;
- (unsigned short)wNameTag;
- (void)setWNameTag:(unsigned short)arg1;
- (unsigned int)dwUin;
- (void)setDwUin:(unsigned int)arg1;
- (id)sName;
- (void)setSName:(id)arg1;
@end

