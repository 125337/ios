@interface WloginTlv_0x129 : WloginTlv
{
    unsigned int dwHoldTime; // +0xc
    unsigned int dwTimeout; // +0x10
    NSString * phoneNo; // +0x18
}
- (int)decode:(char * *)arg1 andBuffLen:(int *)arg2;
- (void)dealloc;
- (unsigned int)dwTimeout;
- (void)setDwTimeout:(unsigned int)arg1;
- (unsigned int)dwHoldTime;
- (void)setDwHoldTime:(unsigned int)arg1;
- (id)phoneNo;
- (void)setPhoneNo:(id)arg1;
@end
