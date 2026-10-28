@interface MMFinderLiveConnectMicAnchorDisplayItem : NSObject
{
    unsigned long long _type; // +0x8
    MMFinderLiveConnectMicUser * _micUser; // +0x10
}
- (unsigned long long)type;
- (void)setType:(unsigned long long)arg1;
- (id)micUser;
- (void)setMicUser:(id)arg1;
- (void).cxx_destruct;
@end
