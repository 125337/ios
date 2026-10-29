@interface WCFinderBgmListParams : NSObject
{
    unsigned long long _type; // +0x8
    unsigned long long _requireMusicCount; // +0x10
    NSData * _sessionBuffer; // +0x18
    unsigned long long _videoDuration; // +0x20
    WCFinderBgmListOptionalParams * _optionalParams; // +0x28
    NSString * _query; // +0x30
}
- (id)init;
- (unsigned long long)type;
- (void)setType:(unsigned long long)arg1;
- (unsigned long long)requireMusicCount;
- (void)setRequireMusicCount:(unsigned long long)arg1;
- (id)sessionBuffer;
- (void)setSessionBuffer:(id)arg1;
- (unsigned long long)videoDuration;
- (void)setVideoDuration:(unsigned long long)arg1;
- (id)optionalParams;
- (void)setOptionalParams:(id)arg1;
- (id)query;
- (void)setQuery:(id)arg1;
- (void).cxx_destruct;
@end
