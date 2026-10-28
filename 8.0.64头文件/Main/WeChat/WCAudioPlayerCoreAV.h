@interface WCAudioPlayerCoreAV : NSObject <IWCAudioPlayerCore>
{
    BOOL _isPreparing; // +0x8
    BOOL _isObserving; // +0x9
    BOOL _isReuse; // +0xa
    BOOL _isPausedBeforeReset; // +0xb
    unsigned long long _mode; // +0x10
    id <IWCAudioPlayerCoreDelegate> _delegate; // +0x18
    unsigned long long _status; // +0x20
    double _bufferedTime; // +0x28
    AVPlayer * _innerPlayer; // +0x30
}
- (void)dealloc;
- (id)innerPlayer;
- (void)setStatus:(unsigned long long)arg1;
- (void)onEvent:(unsigned long long)arg1;
- (double)currentTime;
- (double)displayTime;
- (double)duration;
- (float)playRate;
- (void)setPlayRate:(float)arg1;
- (void)setVolume:(float)arg1;
- (float)volume;
- (id)currentInfo;
- (void)playWithAudioInfo:(id)arg1 startTime:(double)arg2;
- (void)resume;
- (void)pause;
- (void)stop;
- (void)reset;
- (void)seekToTime:(double)arg1 autoPlay:(BOOL)arg2;
- (BOOL)isPlaying;
- (BOOL)isPaused;
- (void)removeAVObserver;
- (void)addAVObserver:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)onDidPlayToEndTimeNotification:(id)arg1;
- (void)onFailedToPlayToEndTimeNotification:(id)arg1;
- (unsigned long long)mode;
- (void)setMode:(unsigned long long)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (unsigned long long)status;
- (double)bufferedTime;
- (void)setBufferedTime:(double)arg1;
- (void)setInnerPlayer:(id)arg1;
- (BOOL)isPreparing;
- (void)setIsPreparing:(BOOL)arg1;
- (BOOL)isObserving;
- (void)setIsObserving:(BOOL)arg1;
- (BOOL)isReuse;
- (void)setIsReuse:(BOOL)arg1;
- (BOOL)isPausedBeforeReset;
- (void)setIsPausedBeforeReset:(BOOL)arg1;
- (void).cxx_destruct;
@end
