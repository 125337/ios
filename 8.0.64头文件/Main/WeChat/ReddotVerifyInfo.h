@interface ReddotVerifyInfo : NSObject
{
    unsigned int _version; // +0x8
    NSString * _signature; // +0x10
    NSString * _nonce; // +0x18
    NSString * _timestamp; // +0x20
}
- (id)signature;
- (void)setSignature:(id)arg1;
- (id)nonce;
- (void)setNonce:(id)arg1;
- (id)timestamp;
- (void)setTimestamp:(id)arg1;
- (unsigned int)version;
- (void)setVersion:(unsigned int)arg1;
- (void).cxx_destruct;
@end
