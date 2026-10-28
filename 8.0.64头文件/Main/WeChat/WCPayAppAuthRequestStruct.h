@interface WCPayAppAuthRequestStruct : NSObject
{
    NSString * appId; // +0x8
    NSString * partnerId; // +0x10
    NSString * prepayId; // +0x18
    NSString * nonceStr; // +0x20
    NSString * timeStamp; // +0x28
    NSString * package; // +0x30
    NSString * sign; // +0x38
    NSString * signType; // +0x40
    NSString * scene; // +0x48
    NSString * bundleId; // +0x50
}
- (id)appId;
- (void)setAppId:(id)arg1;
- (id)nonceStr;
- (void)setNonceStr:(id)arg1;
- (id)package;
- (void)setPackage:(id)arg1;
- (id)partnerId;
- (void)setPartnerId:(id)arg1;
- (id)prepayId;
- (void)setPrepayId:(id)arg1;
- (id)sign;
- (void)setSign:(id)arg1;
- (id)timeStamp;
- (void)setTimeStamp:(id)arg1;
- (id)signType;
- (void)setSignType:(id)arg1;
- (id)scene;
- (void)setScene:(id)arg1;
- (id)bundleId;
- (void)setBundleId:(id)arg1;
- (void).cxx_destruct;
@end
