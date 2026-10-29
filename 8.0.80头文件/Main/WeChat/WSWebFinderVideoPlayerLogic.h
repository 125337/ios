@interface WSWebFinderVideoPlayerLogic : WSWebNativeVideoPlayerLogic <WCPlayerControlProtocol>
{
    WCPlayerView * playerView; // +0x8
    WCPlayerView * _retainPlayerView; // +0x10
    WCPlayerPlayArgs * _playerPlayArgs; // +0x18
}
- (id)initWithViewId:(unsigned int)arg1 andPlayerPlayArgs:(id)arg2 andDelegate:(id)arg3;
- (void)dealloc;
- (id)createPlayerView:(CGRect)arg1;
- (BOOL)isPlaying;
- (void)play;
- (void)pause;
- (void)stop;
- (void)destroy;
- (void)setPlayerContentMode:(long long)arg1;
- (void)setMuted:(BOOL)arg1;
- (void)setLoop:(BOOL)arg1;
- (void)seek:(double)arg1;
- (void)onAudioFirstFrameRendered;
- (void)onVideoFristFrameRendered;
- (void)onVideoPrepareToPlay:(id)arg1;
- (void)onVideoPlay;
- (void)onVideoPause;
- (void)onVideoPlayFail:(unsigned long long)arg1 errorCode:(int)arg2 LocalizedErrorDes:(id)arg3;
- (void)onVideoDidPlayToEndTime;
- (void)onDownloadProgressChange:(id)arg1 finishLength:(unsigned long long)arg2 total:(unsigned long long)arg3;
- (void)onReceiveAllVideoData:(id)arg1;
- (void)updateVideoBufferPercent:(double)arg1;
- (void)updateVideoCurrentTime:(double)arg1;
- (void)onPlayerProcessStateChanged:(unsigned long long)arg1;
- (void)onPlayerStateChanged:(unsigned long long)arg1;
- (id)playerView;
- (void)setPlayerView:(id)arg1;
- (id)retainPlayerView;
- (void)setRetainPlayerView:(id)arg1;
- (id)playerPlayArgs;
- (void)setPlayerPlayArgs:(id)arg1;
- (void).cxx_destruct;
@end
