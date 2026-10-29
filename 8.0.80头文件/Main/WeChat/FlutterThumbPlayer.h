@interface FlutterThumbPlayer : UIView <FlutterTexture, WCPlayerControlProtocol>
{
    BOOL _isPlayerPrepared; // +0x8
    BOOL _isFirstFrameRendered; // +0x9
    BOOL _isPlayCompleted; // +0xa
    BOOL _couldProduceFrame; // +0xb
    int _renderWidth; // +0xc
    int _renderHeight; // +0x10
    int _currentState; // +0x14
    WCPlayerView * playerView; // +0x18
    long long _textureId; // +0x20
    NSNumber * _playerId; // +0x28
    NSDictionary * _playReport; // +0x30
    id /* block */ _showBufferingBlock; // +0x38
    id /* block */ _hideBufferingBlock; // +0x40
    id /* block */ _stateChangeBlock; // +0x48
    id /* block */ _seekCompletedBlock; // +0x50
    NSObject<FlutterTextureRegistry> * _registry; // +0x58
    MAVEffectRenderer * _effectRender; // +0x60
    long long _rotate; // +0x68
    NSMutableDictionary * _effectMap; // +0x70
    id /* block */ _listener; // +0x78
    WCPlayerView * _player; // +0x80
    __CVBuffer * _latestPixelBuffer; // +0x88
    long long _scaleType; // +0x90
    id /* block */ _onPreparedListener; // +0x98
    id /* block */ _onFirstFrameRenderedListener; // +0xa0
    id /* block */ _onPlayCompleted; // +0xa8
    long long _frameCount; // +0xb0
    double _startCountTime; // +0xb8
    id <FlutterThumbPlayerAudioFrameProcessor> _audioFrameProcessor; // +0xc0
}
+ (void)registerAudioFrameProcessorFactory:(id /* block */)arg1 forIdentifier:(id)arg2;
+ (void)unregisterAudioFrameProcessorFactoryForIdentifier:(id)arg1;
+ (id)audioFrameProcessorForIdentifier:(id)arg1 playerId:(id)arg2;
- (id)initWithPlayerId:(id)arg1 registry:(id)arg2;
- (void)initPlayerSize:(int)arg1 height:(int)arg2;
- (void)updatePlayerSize:(int)arg1 height:(int)arg2 x:(int)arg3 y:(int)arg4;
- (CGSize)getVideoSize;
- (double)getVideoDuration;
- (void)setupPlayArgs:(id)arg1;
- (void)setScaleType:(int)arg1;
- (void)prepare;
- (void)play;
- (void)pause;
- (void)seek:(double)arg1;
- (void)setMute:(BOOL)arg1;
- (void)onPlayerSeekCompelete:(double)arg1;
- (void)setProgressChange:(id /* block */)arg1;
- (__CVBuffer *)getCVPixelBuffer;
- (void)setLoop:(BOOL)arg1;
- (void)stop;
- (void)destroy;
- (double)doubleFromDict:(id)arg1 key:(id)arg2 defValue:(double)arg3;
- (id)createEffect:(id)arg1;
- (void)addEffect:(id)arg1;
- (void)removeEffect:(id)arg1;
- (void)updateEffect:(id)arg1;
- (void)clearEffect;
- (__CVBuffer *)copyPixelBuffer;
- (void)setOnPreparedListener:(id /* block */)arg1;
- (void)setOnPlayCompletedListener:(id /* block */)arg1;
- (void)setOnFirstFrameRenderedListener:(id /* block */)arg1;
- (void)setOnPlayerShowBufferingListener:(id /* block */)arg1;
- (void)setOnPlayerHidenBufferingListener:(id /* block */)arg1;
- (unsigned long long)playerState;
- (id)getFeedbackInfo;
- (void)setInterruptedWhenAppResignActive:(BOOL)arg1;
- (void)onVideoPrepareToPlay:(id)arg1;
- (void)onVideoPlay;
- (void)onVideoPause;
- (void)onVideoPlayFail:(unsigned long long)arg1 LocalizedErrorDes:(id)arg2;
- (void)onVideoPlayFinish;
- (void)onVideoDidPlayToEndTime;
- (void)onCreateThumbImage:(id)arg1;
- (void)onDataSourceChangeStart:(id)arg1;
- (void)onDataSourceChangeSucc:(id)arg1;
- (void)showBufferingView;
- (void)hiddenBufferingView;
- (void)showPercentView;
- (void)hiddenPercentView;
- (void)showThumbImageView;
- (void)hiddenThumbImageView;
- (void)startObserveVolume;
- (void)stopObserveVolume;
- (void)onVideoSizeChange:(CGSize)arg1;
- (void)updateVideoBufferPercent:(double)arg1;
- (void)updateVideoCurrentTime:(double)arg1;
- (void)resetAudioFrameProcessor;
- (void)onPlayerVideoFrameOut:(id)arg1;
- (id)onPlayerAudioProcessFrameOut:(id)arg1;
- (void)onPlayerSeekFail:(float)arg1;
- (void)onPlayerProcessStateChanged:(unsigned long long)arg1;
- (void)onPlayerStateChanged:(unsigned long long)arg1;
- (void)setPlaySpeed:(float)arg1;
- (id)playerView;
- (void)setPlayerView:(id)arg1;
- (long long)textureId;
- (void)setTextureId:(long long)arg1;
- (id)playerId;
- (void)setPlayerId:(id)arg1;
- (BOOL)isPlayerPrepared;
- (void)setIsPlayerPrepared:(BOOL)arg1;
- (BOOL)isFirstFrameRendered;
- (void)setIsFirstFrameRendered:(BOOL)arg1;
- (BOOL)isPlayCompleted;
- (void)setIsPlayCompleted:(BOOL)arg1;
- (id)playReport;
- (void)setPlayReport:(id)arg1;
- (id /* block */)showBufferingBlock;
- (void)setShowBufferingBlock:(id /* block */)arg1;
- (id /* block */)hideBufferingBlock;
- (void)setHideBufferingBlock:(id /* block */)arg1;
- (id /* block */)stateChangeBlock;
- (void)setStateChangeBlock:(id /* block */)arg1;
- (id /* block */)seekCompletedBlock;
- (void)setSeekCompletedBlock:(id /* block */)arg1;
- (id)registry;
- (id)effectRender;
- (void)setEffectRender:(id)arg1;
- (long long)rotate;
- (void)setRotate:(long long)arg1;
- (id)effectMap;
- (void)setEffectMap:(id)arg1;
- (id /* block */)listener;
- (void)setListener:(id /* block */)arg1;
- (id)player;
- (void)setPlayer:(id)arg1;
- (int)renderWidth;
- (void)setRenderWidth:(int)arg1;
- (int)renderHeight;
- (void)setRenderHeight:(int)arg1;
- (int)currentState;
- (void)setCurrentState:(int)arg1;
- (__CVBuffer *)latestPixelBuffer;
- (long long)scaleType;
- (id /* block */)onPreparedListener;
- (id /* block */)onFirstFrameRenderedListener;
- (id /* block */)onPlayCompleted;
- (void)setOnPlayCompleted:(id /* block */)arg1;
- (BOOL)couldProduceFrame;
- (void)setCouldProduceFrame:(BOOL)arg1;
- (long long)frameCount;
- (void)setFrameCount:(long long)arg1;
- (double)startCountTime;
- (void)setStartCountTime:(double)arg1;
- (id)audioFrameProcessor;
- (void)setAudioFrameProcessor:(id)arg1;
- (void).cxx_destruct;
@end
