@interface RingToneAvPlayer : AVPlayer <RingToneVibrateDataSource, RingTonePlayer>
{
    BOOL _enableVibrate; // +0x10
    BOOL _customVibrateEnabled; // +0x11
    RingToneVibrateController * _vibrateController; // +0x18
    double _lastPlayTime; // +0x20
    unsigned long long _playTimeStamp; // +0x28
    RingToneDetail * _curRing; // +0x30
    NSString * _ringId; // +0x38
    NSObject * _timeObserver; // +0x40
    NSString * _curPlayFile; // +0x48
}
- (id)init;
- (void)dealloc;
- (void)playRing:(id)arg1;
- (void)playDefaultRing;
- (void)stopPlay;
- (void)clearResource;
- (void)playMusicFile:(id)arg1;
- (void)playAudioFile:(id)arg1;
- (void)startToPlay;
- (void)onPlayEnd;
- (void)onFailPlayEnd;
- (void)setCurRing:(id)arg1;
- (void)continuePlayWhenAppEnterForeground;
- (void)vibrateWithCaller:(id)arg1;
- (void)vibrateWithRing:(id)arg1;
- (id)vibrateController;
- (void)pause;
- (void)resume;
- (void)setMute:(BOOL)arg1;
- (void)restart;
- (double)currentPlayTime;
- (BOOL)enableVibrate;
- (void)setEnableVibrate:(BOOL)arg1;
- (BOOL)customVibrateEnabled;
- (void)setCustomVibrateEnabled:(BOOL)arg1;
- (void)setVibrateController:(id)arg1;
- (double)lastPlayTime;
- (void)setLastPlayTime:(double)arg1;
- (unsigned long long)playTimeStamp;
- (void)setPlayTimeStamp:(unsigned long long)arg1;
- (id)curRing;
- (id)ringId;
- (void)setRingId:(id)arg1;
- (id)timeObserver;
- (void)setTimeObserver:(id)arg1;
- (id)curPlayFile;
- (void)setCurPlayFile:(id)arg1;
- (void).cxx_destruct;
@end

