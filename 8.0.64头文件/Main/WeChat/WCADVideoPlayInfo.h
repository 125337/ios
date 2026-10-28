@interface WCADVideoPlayInfo : NSObject
{
    int playCount; // +0x8
    unsigned long long startPlayTime; // +0x10
    unsigned long long endPlayTime; // +0x18
    unsigned long long playTotalTime; // +0x20
    unsigned long long videoTotalTime; // +0x28
    long long playMode; // +0x30
    long long playOrientation; // +0x38
    unsigned long long _currentPlaybackTime; // +0x40
    unsigned long long _totalPlaybackTime; // +0x48
}
- (id)init;
- (void)mergeTotalPlaybackTime;
- (unsigned long long)fetchTotalPlaybackTime;
- (int)playCount;
- (void)setPlayCount:(int)arg1;
- (unsigned long long)startPlayTime;
- (void)setStartPlayTime:(unsigned long long)arg1;
- (unsigned long long)endPlayTime;
- (void)setEndPlayTime:(unsigned long long)arg1;
- (unsigned long long)playTotalTime;
- (void)setPlayTotalTime:(unsigned long long)arg1;
- (unsigned long long)videoTotalTime;
- (void)setVideoTotalTime:(unsigned long long)arg1;
- (long long)playMode;
- (void)setPlayMode:(long long)arg1;
- (long long)playOrientation;
- (void)setPlayOrientation:(long long)arg1;
- (unsigned long long)currentPlaybackTime;
- (void)setCurrentPlaybackTime:(unsigned long long)arg1;
- (unsigned long long)totalPlaybackTime;
- (void)setTotalPlaybackTime:(unsigned long long)arg1;
@end
