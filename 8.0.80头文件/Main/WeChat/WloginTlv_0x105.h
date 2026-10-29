@interface WloginTlv_0x105 : WloginTlv
{
    NSData * acSig; // +0x10
    NSData * acPicData; // +0x18
}
- (int)decode:(char * *)arg1 andBuffLen:(int *)arg2;
- (void)dealloc;
- (id)acSig;
- (void)setAcSig:(id)arg1;
- (id)acPicData;
- (void)setAcPicData:(id)arg1;
@end
