@interface WloginTlv : NSObject <WloginProtocolBuff>
{
    unsigned short wTlvT; // +0x8
}
- (id)initWithTag:(unsigned short)arg1;
- (int)decode:(char * *)arg1 andBuffLen:(int *)arg2;
- (int)encode:(id)arg1;
- (id)getTlvTagString;
- (id)copy;
- (unsigned short)wTlvT;
- (void)setWTlvT:(unsigned short)arg1;
@end
