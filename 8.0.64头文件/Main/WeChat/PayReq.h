@interface PayReq : BaseReq
{
    unsigned int timeStamp; // +0x18
    NSString * nonceStr; // +0x20
    NSString * package; // +0x28
    NSString * partnerId; // +0x30
    NSString * prepayId; // +0x38
    NSString * sign; // +0x40
}
- (id)nonceStr;
- (void)setNonceStr:(id)arg1;
- (id)package;
- (void)setPackage:(id)arg1;
- (id)partnerId;
- (void)setPartnerId:(id)arg1;
- (id)prepayId;
- (void)setPrepayId:(id)arg1;
- (unsigned int)timeStamp;
- (void)setTimeStamp:(unsigned int)arg1;
- (id)sign;
- (void)setSign:(id)arg1;
- (void).cxx_destruct;
@end
