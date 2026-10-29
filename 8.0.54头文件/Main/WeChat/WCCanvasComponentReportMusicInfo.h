@interface WCCanvasComponentReportMusicInfo : WCCanvasComponentReportBasicInfo
{
    unsigned int _musicDuration; // +0x20
    unsigned int _playCount; // +0x24
    unsigned int _playCompletedCount; // +0x28
    unsigned int _maxPlayTime; // +0x2c
    unsigned long long _playedTime; // +0x30
}
- (id)dictionaryRepresentation;
- (unsigned int)musicDuration;
- (void)setMusicDuration:(unsigned int)arg1;
- (unsigned int)playCount;
- (void)setPlayCount:(unsigned int)arg1;
- (unsigned int)playCompletedCount;
- (void)setPlayCompletedCount:(unsigned int)arg1;
- (unsigned long long)playedTime;
- (void)setPlayedTime:(unsigned long long)arg1;
- (unsigned int)maxPlayTime;
- (void)setMaxPlayTime:(unsigned int)arg1;
@end

