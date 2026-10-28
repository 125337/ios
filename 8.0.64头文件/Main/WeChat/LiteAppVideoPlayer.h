@interface LiteAppVideoPlayer : NSObject <WCPlayerProtocol, WCPlayerControlProtocol, TXLivePlayListener, TXVideoCustomProcessDelegate, FlutterTexture, FlutterStreamHandler>
{
    BOOL _checkCache; // +0x8
    BOOL _disposed; // +0x9
    BOOL _dataCompleted; // +0xa
    BOOL _buffering; // +0xb
    BOOL _muted; // +0xc
    BOOL _loop; // +0xd
    WCPlayerView * playerView; // +0x10
    WCPlayerPlaybackInfo * playbackInfo; // +0x18
    WCPlayerPlayArgs * playerArgs; // +0x20
    FlutterEventChannel * _eventChannel; // +0x28
    LiteAppVideoPlayerFrameUpdater * _frameUpdater; // +0x30
    WCPlayerView * _player; // +0x38
    TXLivePlayer * _livePlayer; // +0x40
    MAVEffectRenderer * _effectRender; // +0x48
    AVPlayerItemVideoOutput * _AVPlayerOutput; // +0x50
    CADisplayLink * _displayLink; // +0x58
    double _bufferValue; // +0x60
    NSString * _url; // +0x68
    NSString * _referer; // +0x70
    NSString * _cacheKey; // +0x78
    long long _rotate; // +0x80
    unsigned long long _liveVideoInitialCurrentTime; // +0x88
    id /* block */ _eventSink; // +0x90
    __CVBuffer * _lastBuffer; // +0x98
    __CVBuffer * _latestPixelBuffer; // +0xa0
    NSObject * _initialEvent; // +0xa8
    NSObject * _errorEvent; // +0xb0
}
- (id)initWithFrameUpdater:(id)arg1;
- (void)createPlayer:(BOOL)arg1 isLive:(BOOL)arg2;
- (void)setUrl:(id)arg1;
- (void)disposePlayer;
- (void)dispose;
- (id)createPlayArgs:(BOOL)arg1;
- (id)generateDownloadArgsWrap;
- (id)generatePreviewArgsWrap;
- (void)startPlayer;
- (void)stopPlayer;
- (void)clearPlayer;
- (void)clearLeakPlayer;
- (void)playVideo;
- (void)pauseVideo;
- (double)currentTime;
- (void)setPlayBackRate:(float)arg1;
- (void)setPlayerToMuted:(BOOL)arg1;
- (void)setPlayerLoop:(BOOL)arg1;
- (void)forceSetPlayerToMuted:(BOOL)arg1;
- (void)onSliderScrubbingDidStart;
- (void)onScrubbedToTime:(double)arg1;
- (void)onSliderScrubbingDidEndAtTime:(double)arg1;
- (void)onAudioFirstFrameRendered;
- (void)onVideoFristFrameRendered;
- (void)onVideoPrepareToPlay:(id)arg1;
- (void)onVideoPlay;
- (void)onVideoPause;
- (void)onVideoPlayFail:(unsigned long long)arg1 errorCode:(int)arg2 LocalizedErrorDes:(id)arg3;
- (void)onVideoPlayFinish;
- (void)onVideoDidPlayToEndTime;
- (void)onDataSourceChangeStart:(id)arg1;
- (void)onDataSourceChangeSucc:(id)arg1;
- (void)onDataSourceChangeSuccessWithDownloadArgsWrap:(id)arg1;
- (void)showBufferingView;
- (void)hiddenBufferingView;
- (void)showPercentView;
- (void)hiddenPercentView;
- (void)onDownloadProgressChange:(id)arg1 finishLength:(unsigned long long)arg2 total:(unsigned long long)arg3;
- (void)updateVideoBufferPercent:(double)arg1;
- (void)updateVideoCurrentTime:(double)arg1;
- (void)onPlayerVideoFrameOut:(id)arg1;
- (void)onPlayerSeekCompelete:(double)arg1;
- (void)onPlayerSeekFail:(float)arg1;
- (void)onPlayerProcessStateChanged:(unsigned long long)arg1;
- (void)onPlayerStateChanged:(unsigned long long)arg1;
- (void)onPlayerCreated;
- (void)onPlayerProxyIsUnAvaiable;
- (void)onPlayEvent:(int)arg1 withParam:(id)arg2;
- (void)onNetStatus:(id)arg1;
- (BOOL)onPlayerPixelBuffer:(__CVBuffer *)arg1;
- (void)enqueueEvent:(id)arg1;
- (__CVBuffer *)copyPixelBuffer;
- (void)onTextureUnregistered:(id)arg1;
- (id)onCancelWithArguments:(id)arg1;
- (id)onListenWithArguments:(id)arg1 eventSink:(id /* block */)arg2;
- (id)playerView;
- (void)setPlayerView:(id)arg1;
- (id)playbackInfo;
- (void)setPlaybackInfo:(id)arg1;
- (id)playerArgs;
- (void)setPlayerArgs:(id)arg1;
- (id)eventChannel;
- (void)setEventChannel:(id)arg1;
- (id)frameUpdater;
- (void)setFrameUpdater:(id)arg1;
- (BOOL)checkCache;
- (void)setCheckCache:(BOOL)arg1;
- (BOOL)disposed;
- (void)setDisposed:(BOOL)arg1;
- (id)player;
- (void)setPlayer:(id)arg1;
- (id)livePlayer;
- (void)setLivePlayer:(id)arg1;
- (id)effectRender;
- (void)setEffectRender:(id)arg1;
- (id)AVPlayerOutput;
- (void)setAVPlayerOutput:(id)arg1;
- (id)displayLink;
- (void)setDisplayLink:(id)arg1;
- (double)bufferValue;
- (void)setBufferValue:(double)arg1;
- (BOOL)dataCompleted;
- (void)setDataCompleted:(BOOL)arg1;
- (BOOL)buffering;
- (void)setBuffering:(BOOL)arg1;
- (BOOL)muted;
- (void)setMuted:(BOOL)arg1;
- (BOOL)loop;
- (void)setLoop:(BOOL)arg1;
- (id)url;
- (id)referer;
- (void)setReferer:(id)arg1;
- (id)cacheKey;
- (void)setCacheKey:(id)arg1;
- (long long)rotate;
- (void)setRotate:(long long)arg1;
- (unsigned long long)liveVideoInitialCurrentTime;
- (void)setLiveVideoInitialCurrentTime:(unsigned long long)arg1;
- (id /* block */)eventSink;
- (void)setEventSink:(id /* block */)arg1;
- (__CVBuffer *)lastBuffer;
- (void)setLastBuffer:(__CVBuffer *)arg1;
- (__CVBuffer *)latestPixelBuffer;
- (void)setLatestPixelBuffer:(__CVBuffer *)arg1;
- (id)initialEvent;
- (void)setInitialEvent:(id)arg1;
- (id)errorEvent;
- (void)setErrorEvent:(id)arg1;
- (void).cxx_destruct;
@end
