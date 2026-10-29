@interface WCTPPlayer : NSObject <ITPPlayerDelegate>
{
    BOOL _enableCallbackVideoFrame; // +0x8
    BOOL _outputAudioFrame; // +0x9
    BOOL _enableSEICallback; // +0xa
    BOOL _enableRenderOptYuv420; // +0xb
    BOOL _muted; // +0xc
    BOOL _bInitialSeekAccurate; // +0xd
    BOOL _bBeginFrameRendered; // +0xe
    BOOL _bStopped; // +0xf
    BOOL _isLoopback; // +0x10
    BOOL _isPrepared; // +0x11
    BOOL _isOpenAudioQueueNewLatency; // +0x12
    float _expectBufferLen; // +0x14
    float _playbackInterval; // +0x18
    float _initialSeekPos; // +0x1c
    float _bufferMinDurationWhenNoData; // +0x20
    unsigned int _taskId; // +0x24
    unsigned int _switchCount; // +0x28
    unsigned long long _previousState; // +0x30
    unsigned long long _playerState; // +0x38
    id <WCTPPlayerDelegate> _delegate; // +0x40
    long long _videoFrameRate; // +0x48
    long long _enableRendererSharpen; // +0x50
    long long _enableRendererLucid; // +0x58
    long long _enableRendererClarity; // +0x60
    long long _audioSpeedProcessorType; // +0x68
    long long _decoderStrategy; // +0x70
    NSString * _hlsPemKey; // +0x78
    UIView * _displayView; // +0x80
    id <ITPPlayer> _player; // +0x88
    NSObject<OS_dispatch_source> * _dispatchTimer; // +0x90
    id /* block */ _intervalCallBackBlock; // +0x98
    TPVideoInfo * _videoInfo; // +0xa0
    long long _callbackPosition; // +0xa8
}
- (id)initWithTaskId:(unsigned int)arg1 queue:(id)arg2;
- (void)dealloc;
- (void)setPlayerState:(unsigned long long)arg1;
- (void)setPlayerDisplayView:(id)arg1;
- (void)setInitialSeekPos:(float)arg1;
- (void)setBufferMinDurationWhenNoData:(float)arg1;
- (void)setLoopback:(BOOL)arg1 startPos:(float)arg2 endPos:(float)arg3;
- (void)setInitialSeekPos:(float)arg1 Accurate:(BOOL)arg2;
- (void)setVolume:(double)arg1;
- (double)getVolume;
- (id)generateNewVideoInfo:(id)arg1 resourceType:(long long)arg2;
- (void)setMuted:(BOOL)arg1;
- (void)setPlaySpeedRatio:(float)arg1;
- (float)playSpeedRatio;
- (long long)videoFrameRate;
- (void)switchResourceloaderDelegate:(id)arg1 resourceUrl:(id)arg2 resourceType:(long long)arg3 swithMode:(long long)arg4;
- (void)switchResourceloaderDelegate:(id)arg1 delegateQueue:(id)arg2 resourceUrl:(id)arg3 resourceType:(long long)arg4 swithMode:(long long)arg5;
- (void)setResourceloaderDelegate:(id)arg1 resourceUrl:(id)arg2 resourceType:(long long)arg3;
- (void)setResourceloaderDelegate:(id)arg1 delegateQueue:(id)arg2 resourceUrl:(id)arg3 resourceType:(long long)arg4;
- (void)cleanPlayer;
- (void)prepareAsync;
- (void)play;
- (void)pause;
- (void)pauseBuffering;
- (void)resumeBuffering;
- (void)addPeriodicTimeObserverForInterval:(float)arg1 queue:(id)arg2 usingBlock:(id /* block */)arg3;
- (void)removePeriodicTimeObserver;
- (void)seekBeigin;
- (void)seekTo:(double)arg1;
- (void)seekTo:(double)arg1 AccurateSeek:(BOOL)arg2;
- (void)setVideoRenderInBackgroundEnable:(BOOL)arg1;
- (void)setPlayerOptionalParams;
- (float)duration;
- (double)currentTime;
- (CGSize)presentationSize;
- (long long)videoBitrate;
- (long long)audioBitrate;
- (long long)videoDecodeFrmCnt;
- (long long)videoRenderFrmCnt;
- (void)setLoopback:(BOOL)arg1;
- (void)setAllowsExternalPlayback:(BOOL)arg1;
- (float)bufferPos;
- (float)playablePos;
- (float)playbackPos;
- (id)syncCaptureVideo;
- (void)captureVideoWithFinishBlock:(id /* block */)arg1;
- (void)setContentMode:(long long)arg1;
- (long long)getVideoCodecID;
- (long long)getAudioCodecID;
- (void)setEnableCallbackVideoFrame:(BOOL)arg1;
- (void)onStartRenderFrame;
- (void)startTimer;
- (void)stopTimer;
- (void)onCompletion:(id)arg1;
- (void)onPrepared:(id)arg1;
- (void)onPlayer:(id)arg1 errorType:(long long)arg2 errorCode:(long long)arg3 arg1:(long long)arg4 arg2:(long long)arg5;
- (void)onSeekComplete:(id)arg1;
- (void)onDemuxerPauseContinueBufferingCompleted;
- (void)onPlayer:(id)arg1 info:(unsigned long long)arg2 extra1:(long long)arg3 extra2:(long long)arg4 extraObject:(id)arg5;
- (void)onPlayerDownloadUpdate:(id)arg1;
- (void)onPlayer:(id)arg1 subtitleData:(id)arg2;
- (void)onPlayer:(id)arg1 videoFrameOut:(id)arg2;
- (void)onPlayer:(id)arg1 audioFrameOut:(id)arg2;
- (void)onVideoSizeChanged:(id)arg1 width:(int)arg2 height:(int)arg3;
- (unsigned long long)previousState;
- (void)setPreviousState:(unsigned long long)arg1;
- (unsigned long long)playerState;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (float)expectBufferLen;
- (void)setExpectBufferLen:(float)arg1;
- (BOOL)enableCallbackVideoFrame;
- (void)setVideoFrameRate:(long long)arg1;
- (BOOL)outputAudioFrame;
- (void)setOutputAudioFrame:(BOOL)arg1;
- (BOOL)enableSEICallback;
- (void)setEnableSEICallback:(BOOL)arg1;
- (BOOL)enableRenderOptYuv420;
- (void)setEnableRenderOptYuv420:(BOOL)arg1;
- (long long)enableRendererSharpen;
- (void)setEnableRendererSharpen:(long long)arg1;
- (long long)enableRendererLucid;
- (void)setEnableRendererLucid:(long long)arg1;
- (long long)enableRendererClarity;
- (void)setEnableRendererClarity:(long long)arg1;
- (BOOL)muted;
- (long long)audioSpeedProcessorType;
- (void)setAudioSpeedProcessorType:(long long)arg1;
- (long long)decoderStrategy;
- (void)setDecoderStrategy:(long long)arg1;
- (id)hlsPemKey;
- (void)setHlsPemKey:(id)arg1;
- (id)displayView;
- (void)setDisplayView:(id)arg1;
- (id)player;
- (void)setPlayer:(id)arg1;
- (id)dispatchTimer;
- (void)setDispatchTimer:(id)arg1;
- (float)playbackInterval;
- (void)setPlaybackInterval:(float)arg1;
- (id /* block */)intervalCallBackBlock;
- (void)setIntervalCallBackBlock:(id /* block */)arg1;
- (float)initialSeekPos;
- (BOOL)bInitialSeekAccurate;
- (void)setBInitialSeekAccurate:(BOOL)arg1;
- (float)bufferMinDurationWhenNoData;
- (BOOL)bBeginFrameRendered;
- (void)setBBeginFrameRendered:(BOOL)arg1;
- (BOOL)bStopped;
- (void)setBStopped:(BOOL)arg1;
- (unsigned int)taskId;
- (void)setTaskId:(unsigned int)arg1;
- (BOOL)isLoopback;
- (void)setIsLoopback:(BOOL)arg1;
- (BOOL)isPrepared;
- (void)setIsPrepared:(BOOL)arg1;
- (id)videoInfo;
- (void)setVideoInfo:(id)arg1;
- (unsigned int)switchCount;
- (void)setSwitchCount:(unsigned int)arg1;
- (long long)callbackPosition;
- (void)setCallbackPosition:(long long)arg1;
- (BOOL)isOpenAudioQueueNewLatency;
- (void)setIsOpenAudioQueueNewLatency:(BOOL)arg1;
- (void).cxx_destruct;
@end

