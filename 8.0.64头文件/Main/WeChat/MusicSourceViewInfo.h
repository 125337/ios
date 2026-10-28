@interface MusicSourceViewInfo : NSObject
{
    BOOL _enableExpandAnimation; // +0x8
    int _audioType; // +0xc
    long long _loopCount; // +0x10
}
- (int)audioType;
- (void)setAudioType:(int)arg1;
- (long long)loopCount;
- (void)setLoopCount:(long long)arg1;
- (BOOL)enableExpandAnimation;
- (void)setEnableExpandAnimation:(BOOL)arg1;
@end
