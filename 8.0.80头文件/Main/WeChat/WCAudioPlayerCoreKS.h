@interface WCAudioPlayerCoreKS : NSObject <IWCAudioPlayerCore>
{
    BOOL _isKSResuming; // +0x8
    unsigned long long _mode; // +0x10
    id <IWCAudioPlayerCoreDelegate> _delegate; // +0x18
    KSAudioPlayer * _innerPlayer; // +0x20
    unsigned long long _status; // +0x28
    WCAudioPlayerCoreKSPauseContext * _pauseContext; // +0x30
    WCAudioPlayerSeekingContext * _seekingContext; // +0x38
}
+ (void)initialize;
+ (id)cacheRootPath;
+ (void)cleanCache;
- (void)dealloc;
- (id)innerPlayer;
- (id)fileCacheIdForAudioInfo:(id)arg1;
- (double)currentTime;
- (double)displayTime;
- (double)duration;
- (double)bufferedTime;
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
- (unsigned long long)_updateStateWithStatus:(unsigned long long)arg1 songInfo:(id)arg2 params:(id)arg3;
- (void)audioPlayer:(id)arg1 status:(unsigned long long)arg2 params:(id)arg3;
- (void)audioPlayer:(id)arg1 dataBuffering:(double)arg2;
- (unsigned long long)mode;
- (void)setMode:(unsigned long long)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (void)setInnerPlayer:(id)arg1;
- (unsigned long long)status;
- (void)setStatus:(unsigned long long)arg1;
- (id)pauseContext;
- (void)setPauseContext:(id)arg1;
- (BOOL)isKSResuming;
- (void)setIsKSResuming:(BOOL)arg1;
- (id)seekingContext;
- (void)setSeekingContext:(id)arg1;
- (void).cxx_destruct;
@end
