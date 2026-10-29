@interface WloginTlv_0x125 : WloginTlv_Buff
{
    NSData * openId; // +0x18
}
- (int)decode:(char * *)arg1 andBuffLen:(int *)arg2;
- (void)dealloc;
- (id)openId;
- (void)setOpenId:(id)arg1;
@end

