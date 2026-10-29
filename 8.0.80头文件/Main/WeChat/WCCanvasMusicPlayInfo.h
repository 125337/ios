@interface WCCanvasMusicPlayInfo : MMObject
{
    unsigned int _playCount; // +0x8
    unsigned int _playCompletedCount; // +0xc
    unsigned int _maxPlayTime; // +0x10
    NSString * _musicId; // +0x18
    MMMusicInfo * _musicInfo; // +0x20
    long long _playState; // +0x28
    double _defaultDuration; // +0x30
    double _duration; // +0x38
    double _currentTime; // +0x40
    WCCanvasComponentItem * _musicComponentItem; // +0x48
    unsigned long long _playedTime; // +0x50
    WCStatTimerHelper * _playTimeHelper; // +0x58
}
- (id)init;
- (double)fetchDuration;
- (BOOL)isPlaying;
- (id)musicId;
- (void)setMusicId:(id)arg1;
- (id)musicInfo;
- (void)setMusicInfo:(id)arg1;
- (long long)playState;
- (void)setPlayState:(long long)arg1;
- (double)defaultDuration;
- (void)setDefaultDuration:(double)arg1;
- (double)duration;
- (void)setDuration:(double)arg1;
- (double)currentTime;
- (void)setCurrentTime:(double)arg1;
- (id)musicComponentItem;
- (void)setMusicComponentItem:(id)arg1;
- (unsigned int)playCount;
- (void)setPlayCount:(unsigned int)arg1;
- (unsigned int)playCompletedCount;
- (void)setPlayCompletedCount:(unsigned int)arg1;
- (unsigned long long)playedTime;
- (void)setPlayedTime:(unsigned long long)arg1;
- (unsigned int)maxPlayTime;
- (void)setMaxPlayTime:(unsigned int)arg1;
- (id)playTimeHelper;
- (void)setPlayTimeHelper:(id)arg1;
- (void).cxx_destruct;
@end
