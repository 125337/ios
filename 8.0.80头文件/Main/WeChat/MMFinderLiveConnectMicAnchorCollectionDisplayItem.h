@interface MMFinderLiveConnectMicAnchorCollectionDisplayItem : NSObject <NSCopying>
{
    unsigned long long _type; // +0x8
    MMFinderLiveConnectMicUser * _micUser; // +0x10
}
- (id)initWithType:(unsigned long long)arg1 micUser:(id)arg2;
- (id)copyWithZone:(_NSZone *)arg1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (unsigned long long)type;
- (void)setType:(unsigned long long)arg1;
- (id)micUser;
- (void)setMicUser:(id)arg1;
- (void).cxx_destruct;
@end
