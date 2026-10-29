@interface WCFinderCreateLivePrepareParamsModel : NSObject
{
    int _reqScene; // +0x8
    unsigned int _liveEntranceType; // +0xc
    NSString * _finderUsername; // +0x10
    NSString * _micFinderUsername; // +0x18
    unsigned long long _micObjectId; // +0x20
    unsigned long long _micLiveId; // +0x28
}
- (id)finderUsername;
- (void)setFinderUsername:(id)arg1;
- (id)micFinderUsername;
- (void)setMicFinderUsername:(id)arg1;
- (unsigned long long)micObjectId;
- (void)setMicObjectId:(unsigned long long)arg1;
- (unsigned long long)micLiveId;
- (void)setMicLiveId:(unsigned long long)arg1;
- (int)reqScene;
- (void)setReqScene:(int)arg1;
- (unsigned int)liveEntranceType;
- (void)setLiveEntranceType:(unsigned int)arg1;
- (void).cxx_destruct;
@end
