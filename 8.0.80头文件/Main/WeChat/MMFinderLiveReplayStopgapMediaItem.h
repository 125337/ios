@interface MMFinderLiveReplayStopgapMediaItem : NSObject
{
    unsigned int _qualityLevel; // +0x8
    unsigned int _codec; // +0xc
    unsigned long long _stopgapId; // +0x10
    NSString * _qualityTag; // +0x18
    NSString * _uri; // +0x20
    double _preloadRatio; // +0x28
    double _preloadUnixEpochTime; // +0x30
}
- (id)stopgapKey;
- (unsigned long long)stopgapId;
- (void)setStopgapId:(unsigned long long)arg1;
- (unsigned int)qualityLevel;
- (void)setQualityLevel:(unsigned int)arg1;
- (unsigned int)codec;
- (void)setCodec:(unsigned int)arg1;
- (id)qualityTag;
- (void)setQualityTag:(id)arg1;
- (id)uri;
- (void)setUri:(id)arg1;
- (double)preloadRatio;
- (void)setPreloadRatio:(double)arg1;
- (double)preloadUnixEpochTime;
- (void)setPreloadUnixEpochTime:(double)arg1;
- (void).cxx_destruct;
@end
