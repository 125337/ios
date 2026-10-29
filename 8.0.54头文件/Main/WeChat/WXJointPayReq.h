@interface WXJointPayReq : BaseReq
{
    unsigned int _timeStamp; // +0x18
    NSString * _partnerId; // +0x20
    NSString * _prepayId; // +0x28
    NSString * _nonceStr; // +0x30
    NSString * _package; // +0x38
    NSString * _sign; // +0x40
}
- (id)partnerId;
- (void)setPartnerId:(id)arg1;
- (id)prepayId;
- (void)setPrepayId:(id)arg1;
- (id)nonceStr;
- (void)setNonceStr:(id)arg1;
- (unsigned int)timeStamp;
- (void)setTimeStamp:(unsigned int)arg1;
- (id)package;
- (void)setPackage:(id)arg1;
- (id)sign;
- (void)setSign:(id)arg1;
- (void).cxx_destruct;
@end

