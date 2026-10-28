@interface FlutterThumbPlayerForMegaVideo : FlutterThumbPlayer <WCFinderFeedContentMediaActionProtocol>
{
    WCFinderSimplePlayerView * _finderPlayer; // +0x8
    double _initStartPlayTime; // +0x10
}
- (id)initWithPlayerId:(id)arg1 registry:(id)arg2;
- (void)setupFinderObject:(id)arg1;
- (void)setupStartPlayPostionMs:(long long)arg1;
- (void)updaetFinderPlayer:(id)arg1;
- (CGSize)getVideoSize;
- (double)getVideoDuration;
- (int)getCommentScene;
- (void)prepare;
- (void)updatePlayerSize:(int)arg1 height:(int)arg2 x:(int)arg3 y:(int)arg4;
- (void)play;
- (void)pause;
- (void)seek:(double)arg1;
- (void)setMute:(BOOL)arg1;
- (void)setLoop:(BOOL)arg1;
- (void)stop;
- (void)destroy;
- (void)setPlaySpeed:(float)arg1;
- (__CVBuffer *)getCVPixelBuffer;
- (unsigned long long)playerState;
- (unsigned long long)flutterPlayerStateFromPlayerState:(unsigned long long)arg1;
- (id)getFeedbackInfo;
- (void)playerView:(id)arg1 onVideoPrepareToPlay:(id)arg2;
- (void)playerView:(id)arg1 onVideoFrameOut:(id)arg2;
- (void)onVideoUpdatePosition:(double)arg1 videoDuration:(double)arg2 maxPlayVideoTime:(double)arg3;
- (void)onPlayerStateChanged:(unsigned long long)arg1;
- (void)contentMediaDidEndPlay:(id)arg1;
- (void)onVideoShowBufferingView;
- (void)onVideoHiddenBufferingView;
- (id)finderPlayer;
- (void)setFinderPlayer:(id)arg1;
- (double)initStartPlayTime;
- (void)setInitStartPlayTime:(double)arg1;
- (void).cxx_destruct;
@end
