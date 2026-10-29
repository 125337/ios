@interface WCSKAdNetworkItem : NSObject <NSCopying, NSCoding>
{
    NSString * _version; // +0x8
    NSString * _adNetworkId; // +0x10
    long long _campaignId; // +0x18
    NSString * _itunesItemId; // +0x20
    NSString * _nonce; // +0x28
    NSString * _sourceAppId; // +0x30
    long long _timestamp; // +0x38
    NSString * _signature; // +0x40
}
- (id)initWithProductId:(id)arg1;
- (id)initWithItem:(id)arg1 targetAppId:(id)arg2;
- (id)initWithParamsInfo:(id)arg1;
- (id)copyWithZone:(_NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)appendSKAdInfoToParameters:(id)arg1 forProduct:(id)arg2;
- (id)description;
- (id)version;
- (void)setVersion:(id)arg1;
- (id)adNetworkId;
- (void)setAdNetworkId:(id)arg1;
- (long long)campaignId;
- (void)setCampaignId:(long long)arg1;
- (id)itunesItemId;
- (void)setItunesItemId:(id)arg1;
- (id)nonce;
- (void)setNonce:(id)arg1;
- (id)sourceAppId;
- (void)setSourceAppId:(id)arg1;
- (long long)timestamp;
- (void)setTimestamp:(long long)arg1;
- (id)signature;
- (void)setSignature:(id)arg1;
- (void).cxx_destruct;
@end

