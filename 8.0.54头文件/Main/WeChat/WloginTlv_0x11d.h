@interface WloginTlv_0x11d : WloginTlv
{
    unsigned int dwAppid; // +0xc
    NSData * acSigKey; // +0x10
    NSData * acSig; // +0x18
}
- (int)decode:(char * *)arg1 andBuffLen:(int *)arg2;
- (void)dealloc;
- (unsigned int)dwAppid;
- (void)setDwAppid:(unsigned int)arg1;
- (id)acSig;
- (void)setAcSig:(id)arg1;
- (id)acSigKey;
- (void)setAcSigKey:(id)arg1;
@end

