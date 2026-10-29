@interface WAAudioSourceOpenAL : NSObject <WAAudioSource>
{
    unsigned int _sourceId; // +0x8
    WAOpenALBuffer * _buffer; // +0x10
    MMTimer * _endTimer; // +0x18
    float _startTime; // +0x20
    double _volume; // +0x28
    BOOL _delayPaused; // +0x30
    BOOL _obeyMuteSwitch; // +0x31
    BOOL _loop; // +0x32
    float _duration; // +0x34
    NSString * _appId; // +0x38
    NSString * _audioId; // +0x40
    NSString * _src; // +0x48
    long long _state; // +0x50
    id <WAAudioSourceDelegate> _delegate; // +0x58
    double _delayCallEndedSec; // +0x60
}
- (id)initWithAudioId:(id)arg1 src:(id)arg2 decodeInfo:(id)arg3 appId:(id)arg4;
- (void)dealloc;
- (void)play;
- (void)pause;
- (void)forcePause;
- (void)stop;
- (void)seek:(double)arg1;
- (void)setLooping:(BOOL)arg1;
- (void)setVolume:(float)arg1;
- (void)setPlaybackRate:(float)arg1;
- (float)currentTime;
- (void)setCurrentTime:(float)arg1;
- (float)duration;
- (BOOL)isPlaying;
- (BOOL)isPaused;
- (void)ended:(id)arg1;
- (void)assertMainThreadAndPrintLogWithFunctionName:(const char *)arg1;
- (id)appId;
- (void)setAppId:(id)arg1;
- (id)audioId;
- (void)setAudioId:(id)arg1;
- (id)src;
- (void)setSrc:(id)arg1;
- (long long)state;
- (void)setState:(long long)arg1;
- (void)setDuration:(float)arg1;
- (BOOL)obeyMuteSwitch;
- (void)setObeyMuteSwitch:(BOOL)arg1;
- (BOOL)loop;
- (void)setLoop:(BOOL)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (double)delayCallEndedSec;
- (void)setDelayCallEndedSec:(double)arg1;
- (void).cxx_destruct;
@end

