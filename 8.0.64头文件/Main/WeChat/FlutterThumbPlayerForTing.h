@interface FlutterThumbPlayerForTing : FlutterThumbPlayer <WCFinderPlayerViewForTingDelegate>
{
    WCFinderPlayerViewForTing * _finderPlayer; // +0x8
}
- (id)initWithPlayerId:(id)arg1 registry:(id)arg2;
- (void)setupFinderObject:(id)arg1;
- (CGSize)getVideoSize;
- (double)getVideoDuration;
- (void)prepare;
- (void)play;
- (void)pause;
- (void)seek:(double)arg1;
- (void)setMute:(BOOL)arg1;
- (void)setLoop:(BOOL)arg1;
- (void)stop;
- (void)destroy;
- (__CVBuffer *)getCVPixelBuffer;
- (void)setPlaySpeed:(float)arg1;
- (unsigned long long)playerState;
- (void)finderPlayerViewForTing:(id)arg1 onVideoPrepareToPlay:(id)arg2;
- (void)finderPlayerViewForTing:(id)arg1 onVideoFrameOut:(id)arg2;
- (void)finderPlayerViewForTing:(id)arg1 onCurrentTimeUpdated:(double)arg2 duration:(double)arg3;
- (id)finderPlayer;
- (void)setFinderPlayer:(id)arg1;
- (void).cxx_destruct;
@end
