@interface BizBoxCovTimeInfoNative : NSObject
{
    unsigned int _type; // +0x8
    unsigned int _time; // +0xc
}
- (unsigned int)type;
- (void)setType:(unsigned int)arg1;
- (unsigned int)time;
- (void)setTime:(unsigned int)arg1;
@end
