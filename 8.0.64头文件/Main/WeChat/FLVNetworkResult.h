@interface FLVNetworkResult : NSObject
{
    unsigned int _videoQualityLevel; // +0x8
    unsigned int _avgSpeed; // +0xc
    unsigned int _avgFps; // +0x10
    long long _networkQuality; // +0x18
}
- (unsigned int)videoQualityLevel;
- (void)setVideoQualityLevel:(unsigned int)arg1;
- (unsigned int)avgSpeed;
- (void)setAvgSpeed:(unsigned int)arg1;
- (unsigned int)avgFps;
- (void)setAvgFps:(unsigned int)arg1;
- (long long)networkQuality;
- (void)setNetworkQuality:(long long)arg1;
@end
