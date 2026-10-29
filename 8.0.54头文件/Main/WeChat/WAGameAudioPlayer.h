@interface WAGameAudioPlayer : MMObject <WAAudioSourceDelegate, WAAudioPlayerInterface>
{
    long long _state; // +0x8
    BOOL _autoLoop; // +0x10
    BOOL _autoPlay; // +0x11
    BOOL _obeyMuteSwitch; // +0x12
    NSURL * _url; // +0x18
    NSString * _appId; // +0x20
    NSString * _audioId; // +0x28
    NSString * _src; // +0x30
    double _startTime; // +0x38
    double _bufferTime; // +0x40
    double _volume; // +0x48
    NSData * _fileData; // +0x50
    WAOpenALAudioDecodeInfo * _alDecodeInfo; // +0x58
    id <WAAudioSource> _source; // +0x60
    id <IWAAudioPlayerDelegate> _delegate; // +0x68
    double _playbackRate; // +0x70
}
- (void)dealloc;
- (id)initWithAudioId:(id)arg1 appId:(id)arg2 delegate:(id)arg3;
- (void)setPlayerWithSrc:(id)arg1 url:(id)arg2 startTime:(double)arg3 autoPlay:(BOOL)arg4 loop:(BOOL)arg5 obeyMuteSwitch:(BOOL)arg6 volume:(double)arg7 fileData:(id)arg8 playbackRate:(double)arg9 referrer:(id)arg10;
- (void)play;
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
- (double)volume;
- (long long)state;
- (double)playbackRate;
- (BOOL)backgroundLoadData:(id)arg1 src:(id)arg2;
- (BOOL)bUseOpenAL;
- (void)initSourceOnMainThread;
- (void)endLoad;
- (void)setState:(long long)arg1 error:(id)arg2;
- (void)setOpenALContext;
- (void)sourceStartPlaying:(id)arg1;
- (void)sourcePaused:(id)arg1;
- (void)sourceStop:(id)arg1;
- (void)sourceSeeking:(id)arg1;
- (void)sourceSeeked:(id)arg1;
- (void)sourceDidFinishPlaying:(id)arg1;
- (void)sourceDidError:(id)arg1 error:(id)arg2;
- (BOOL)autoLoop;
- (void)setAutoLoop:(BOOL)arg1;
- (BOOL)autoPlay;
- (void)setAutoPlay:(BOOL)arg1;
- (id)url;
- (void)setUrl:(id)arg1;
- (id)appId;
- (void)setAppId:(id)arg1;
- (void)setAudioId:(id)arg1;
- (void)setSrc:(id)arg1;
- (void)setStartTime:(double)arg1;
- (void)setBufferTime:(double)arg1;
- (BOOL)obeyMuteSwitch;
- (void)setObeyMuteSwitch:(BOOL)arg1;
- (void)setVolume:(double)arg1;
- (id)fileData;
- (void)setFileData:(id)arg1;
- (id)alDecodeInfo;
- (void)setAlDecodeInfo:(id)arg1;
- (id)source;
- (void)setSource:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (void)setPlaybackRate:(double)arg1;
- (void).cxx_destruct;
@end

