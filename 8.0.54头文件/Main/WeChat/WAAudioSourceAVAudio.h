@interface WAAudioSourceAVAudio : NSObject <AVAudioPlayerDelegate, WAAudioSource>
{
    AVAudioPlayer * _player; // +0x8
    BOOL _isForcePause; // +0x10
    double _forcePausedPosition; // +0x18
    BOOL _obeyMuteSwitch; // +0x20
    BOOL _loop; // +0x21
    float _duration; // +0x24
    NSString * _appId; // +0x28
    NSString * _audioId; // +0x30
    NSString * _src; // +0x38
    long long _state; // +0x40
    id <WAAudioSourceDelegate> _delegate; // +0x48
}
- (id)initWithAudioId:(id)arg1 src:(id)arg2 fileData:(id)arg3 appId:(id)arg4;
- (id)fileTypeHintWithSrc:(id)arg1;
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
- (void)audioPlayerDidFinishPlaying:(id)arg1 successfully:(BOOL)arg2;
- (void)audioPlayerDecodeErrorDidOccur:(id)arg1 error:(id)arg2;
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
- (void).cxx_destruct;
@end

