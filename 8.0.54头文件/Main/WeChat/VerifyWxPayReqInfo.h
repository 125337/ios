@interface VerifyWxPayReqInfo : MMObject
{
    NSString * _appid; // +0x8
    NSString * _timeStamp; // +0x10
    NSString * _nonceStr; // +0x18
    NSString * _packageStr; // +0x20
    NSString * _signType; // +0x28
    NSString * _paySign; // +0x30
}
- (id)appid;
- (void)setAppid:(id)arg1;
- (id)timeStamp;
- (void)setTimeStamp:(id)arg1;
- (id)nonceStr;
- (void)setNonceStr:(id)arg1;
- (id)packageStr;
- (void)setPackageStr:(id)arg1;
- (id)signType;
- (void)setSignType:(id)arg1;
- (id)paySign;
- (void)setPaySign:(id)arg1;
- (void).cxx_destruct;
@end

