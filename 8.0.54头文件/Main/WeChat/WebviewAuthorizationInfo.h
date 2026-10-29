@interface WebviewAuthorizationInfo : NSObject
{
    NSString * _appId; // +0x8
    NSString * _url; // +0x10
    NSString * _api; // +0x18
    NSString * _scope; // +0x20
    NSString * _signature; // +0x28
    NSString * _signatureMethod; // +0x30
    NSString * _timeStamp; // +0x38
    NSString * _nonce; // +0x40
}
- (id)appId;
- (void)setAppId:(id)arg1;
- (id)url;
- (void)setUrl:(id)arg1;
- (id)api;
- (void)setApi:(id)arg1;
- (id)scope;
- (void)setScope:(id)arg1;
- (id)signature;
- (void)setSignature:(id)arg1;
- (id)signatureMethod;
- (void)setSignatureMethod:(id)arg1;
- (id)timeStamp;
- (void)setTimeStamp:(id)arg1;
- (id)nonce;
- (void)setNonce:(id)arg1;
- (void).cxx_destruct;
@end

