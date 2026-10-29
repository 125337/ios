@interface WloginTlv_0x141 : WloginTlv
{
    unsigned short wDataVer; // +0xa
    NSString * sOperator; // +0x10
    unsigned short wNetType; // +0x18
    unsigned short wResvLen; // +0x1a
}
- (int)encode:(id)arg1;
- (void)dealloc;
- (unsigned short)wDataVer;
- (void)setWDataVer:(unsigned short)arg1;
- (id)sOperator;
- (void)setSOperator:(id)arg1;
- (unsigned short)wNetType;
- (void)setWNetType:(unsigned short)arg1;
- (unsigned short)wResvLen;
- (void)setWResvLen:(unsigned short)arg1;
@end
