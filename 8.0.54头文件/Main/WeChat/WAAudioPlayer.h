@interface WAAudioPlayer : MMObject <WAAudioPlayerInterface>
{
    long long _state; // +0x8
    BOOL _autoLoop; // +0x10
    BOOL _autoPlay; // +0x11
    BOOL _isSeeking; // +0x12
    BOOL _readyToPlay; // +0x13
    id <IWAAudioPlayerDelegate> _delegate; // +0x18
    AVPlayer * _player; // +0x20
    NSString * _appId; // +0x28
    NSString * _audioId; // +0x30
    NSString * _src; // +0x38
    double _startTime; // +0x40
    double _startPostion; // +0x48
    double _bufferTime; // +0x50
    double _playbackRate; // +0x58
}
- (void)dealloc;
- (void)addObserver;
- (void)removeObserver;
- (id)initWithAudioId:(id)arg1 appId:(id)arg2 delegate:(id)arg3;
- (void)setPlayerWithSrc:(id)arg1 url:(id)arg2 startTime:(double)arg3 autoPlay:(BOOL)arg4 loop:(BOOL)arg5 obeyMuteSwitch:(BOOL)arg6 volume:(double)arg7 fileData:(id)arg8 playbackRate:(double)arg9 referrer:(id)arg10;
- (void)play;
- (void)realPlay;
- (void)pause;
- (void)forcePause;
- (void)stop;
- (void)seekTo:(double)arg1;
- (BOOL)isSet;
- (BOOL)isPlaying;
- (BOOL)isPaused;
- (BOOL)isWaiting;
- (BOOL)isIdle;
- (id)audioId;
- (id)src;
- (double)startTime;
- (double)curTime;
- (double)duration;
- (double)bufferTime;
- (double)playbackRate;
- (double)volume;
- (long long)state;
- (void)setState:(long long)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)tryToSeekAfterReadyToPlay;
- (void)onPlayerDidFinishPlaying;
- (void)onPlayerItemFailedToPlayToEndTime:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)player;
- (void)setPlayer:(id)arg1;
- (id)appId;
- (void)setAppId:(id)arg1;
- (void)setAudioId:(id)arg1;
- (void)setSrc:(id)arg1;
- (void)setStartTime:(double)arg1;
- (double)startPostion;
- (void)setStartPostion:(double)arg1;
- (void)setBufferTime:(double)arg1;
- (BOOL)autoLoop;
- (void)setAutoLoop:(BOOL)arg1;
- (BOOL)autoPlay;
- (void)setAutoPlay:(BOOL)arg1;
- (BOOL)isSeeking;
- (void)setIsSeeking:(BOOL)arg1;
- (BOOL)readyToPlay;
- (void)setReadyToPlay:(BOOL)arg1;
- (void)setPlaybackRate:(double)arg1;
- (void).cxx_destruct;
@end

