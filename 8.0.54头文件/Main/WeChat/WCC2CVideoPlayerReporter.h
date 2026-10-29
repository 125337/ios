@interface WCC2CVideoPlayerReporter : NSObject
{
    BOOL _isPlaying; // +0x8
    unsigned int _scene; // +0xc
    unsigned int _totalTime; // +0x10
    unsigned int _reportID; // +0x14
    float _currentPlayRate; // +0x18
    CMessageWrap * _msgWrap; // +0x20
    unsigned long long _enterTimestamp; // +0x28
    unsigned long long _lastRecordTimestamp; // +0x30
    OrderedDictionary * _playRateDuration; // +0x38
    unsigned long long _didPlayRealTime; // +0x40
    unsigned long long _didPlayVideoTime; // +0x48
}
- (id)init;
- (void)setMsgWrap:(id)arg1;
- (id)commonReportInfo;
- (void)onVideoAreaClicked:(BOOL)arg1;
- (void)onControlAreaClicked:(BOOL)arg1;
- (void)onPlayRateChangeFrom:(float)arg1 toRate:(float)arg2;
- (void)onProgressBarDrag:(BOOL)arg1;
- (void)onEnterVideoPlayerView;
- (void)onVideoPlay;
- (void)onVideoPause;
- (void)onLeaveVideoPlayerView;
- (unsigned int)scene;
- (void)setScene:(unsigned int)arg1;
- (id)msgWrap;
- (unsigned int)totalTime;
- (void)setTotalTime:(unsigned int)arg1;
- (unsigned int)reportID;
- (void)setReportID:(unsigned int)arg1;
- (BOOL)isPlaying;
- (void)setIsPlaying:(BOOL)arg1;
- (float)currentPlayRate;
- (void)setCurrentPlayRate:(float)arg1;
- (unsigned long long)enterTimestamp;
- (void)setEnterTimestamp:(unsigned long long)arg1;
- (unsigned long long)lastRecordTimestamp;
- (void)setLastRecordTimestamp:(unsigned long long)arg1;
- (id)playRateDuration;
- (void)setPlayRateDuration:(id)arg1;
- (unsigned long long)didPlayRealTime;
- (void)setDidPlayRealTime:(unsigned long long)arg1;
- (unsigned long long)didPlayVideoTime;
- (void)setDidPlayVideoTime:(unsigned long long)arg1;
- (void).cxx_destruct;
@end

