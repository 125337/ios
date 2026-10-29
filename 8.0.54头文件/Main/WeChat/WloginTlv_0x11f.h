@interface WloginTlv_0x11f : WloginTlv
{
    unsigned int dwExchangeTime; // +0xc
    unsigned int dwPriority; // +0x10
}
- (int)decode:(char * *)arg1 andBuffLen:(int *)arg2;
- (unsigned int)dwPriority;
- (void)setDwPriority:(unsigned int)arg1;
- (unsigned int)dwExchangeTime;
- (void)setDwExchangeTime:(unsigned int)arg1;
@end

