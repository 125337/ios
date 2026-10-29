@interface WCAudioPlayer : NSObject <IWCAudioPlayerCoreDelegate, WCAudioModuleDelegate, IWCAudioPlayer>
{
    BOOL _enableProgressCallback; // +0x8
    BOOL _enableAudioModule; // +0x9
    BOOL _isReuse; // +0xa
    id <IWCAudioPlayerCore> _playerCore; // +0x10
    MMTimer * _progressCheckTimer; // +0x18
}
- (void)dealloc;
- (unsigned long long)status;
- (unsigned long long)mode;
- (void)setMode:(unsigned long long)arg1;
- (double)currentTime;
- (double)displayTime;
- (double)duration;
- (double)bufferedTime;
- (float)playRate;
- (void)setPlayRate:(float)arg1;
- (void)setVolume:(float)arg1;
- (float)volume;
- (id)currentInfo;
- (BOOL)playWithAudioInfo:(id)arg1;
- (BOOL)playWithAudioInfo:(id)arg1 startTime:(double)arg2;
- (void)resume;
- (void)pause;
- (void)stop;
- (void)reset;
- (void)seekToTime:(double)arg1 autoPlay:(BOOL)arg2;
- (BOOL)isPlaying;
- (BOOL)isPaused;
- (BOOL)canPlay;
- (BOOL)isCurrentInfoSameWith:(id)arg1;
- (void)onAudioPlayerEvent:(unsigned long long)arg1 withAudioInfo:(id)arg2 error:(id)arg3;
- (void)setEnableProgressCallback:(BOOL)arg1;
- (void)startProgressCheckTimer;
- (void)stopProgressCheckTimer;
- (void)onProgressCheckTimerCallback;
- (void)wcAudioPlayerCore:(id)arg1 statusChanged:(unsigned long long)arg2 audioInfo:(id)arg3;
- (void)wcAudioPlayerCore:(id)arg1 onEvent:(unsigned long long)arg2 audioInfo:(id)arg3 error:(id)arg4;
- (BOOL)activeAudioModule;
- (void)deactiveAudioModule;
- (void)audioModuleInterruptionBegin:(id)arg1 param:(id)arg2;
- (void)audioModuleInterruptionEnd:(id)arg1 param:(id)arg2;
- (BOOL)enableProgressCallback;
- (BOOL)enableAudioModule;
- (void)setEnableAudioModule:(BOOL)arg1;
- (id)playerCore;
- (void)setPlayerCore:(id)arg1;
- (id)progressCheckTimer;
- (void)setProgressCheckTimer:(id)arg1;
- (BOOL)isReuse;
- (void)setIsReuse:(BOOL)arg1;
- (void).cxx_destruct;
@end

