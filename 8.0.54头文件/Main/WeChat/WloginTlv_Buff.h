@interface WloginTlv_Buff : WloginTlv
{
    NSData * acSigBuff; // +0x10
}
- (int)decode:(char * *)arg1 andBuffLen:(int *)arg2;
- (int)encode:(id)arg1;
- (void)dealloc;
- (id)copy;
- (id)acSigBuff;
- (void)setAcSigBuff:(id)arg1;
@end

