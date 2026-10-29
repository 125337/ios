@interface WloginTlv_0x127 : WloginTlv
{
    unsigned short wVer; // +0xa
    NSString * msgCode; // +0x10
    NSData * randData; // +0x18
}
- (int)encode:(id)arg1;
- (void)dealloc;
- (id)msgCode;
- (void)setMsgCode:(id)arg1;
- (unsigned short)wVer;
- (void)setWVer:(unsigned short)arg1;
- (id)randData;
- (void)setRandData:(id)arg1;
@end
