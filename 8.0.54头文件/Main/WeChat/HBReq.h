@interface HBReq : BaseReq
{
    unsigned int timeStamp; // +0x18
    NSString * nonceStr; // +0x20
    NSString * package; // +0x28
    NSString * sign; // +0x30
}
- (id)nonceStr;
- (void)setNonceStr:(id)arg1;
- (id)package;
- (void)setPackage:(id)arg1;
- (unsigned int)timeStamp;
- (void)setTimeStamp:(unsigned int)arg1;
- (id)sign;
- (void)setSign:(id)arg1;
- (void).cxx_destruct;
@end

