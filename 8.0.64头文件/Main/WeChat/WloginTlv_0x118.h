@interface WloginTlv_0x118 : WloginTlv
{
    unsigned int dwFlag; // +0xc
    NSString * sName; // +0x10
}
- (int)decode:(char * *)arg1 andBuffLen:(int *)arg2;
- (void)dealloc;
- (id)sName;
- (void)setSName:(id)arg1;
- (unsigned int)dwFlag;
- (void)setDwFlag:(unsigned int)arg1;
@end
