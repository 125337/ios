@interface WCFinderPlayerViewForTing : WCFinderSimplePlayerView
{
    id <WCFinderPlayerViewForTingDelegate> _tingDelegate; // +0x8
}
- (void)playWithParams:(id)arg1;
- (void)stopPlay;
- (id)getPlayerViewAndClear;
- (void)restorePlayerView:(id)arg1;
- (void)tryHookDisplayViewAddSubviewFunc;
- (void)tryRemoveHookDisplayViewAddSubviewFunc;
- (void)tryHookDisplayViewLayoutSubviewFunc;
- (void)tryRemoveHookDisplayViewLayoutSubviewFunc;
- (id)hookTagForSelector:(SEL)arg1;
- (void)layoutSubviews;
- (void)finderPlayerControllerViewUpdateVideoCurrentTime:(double)arg1 videoDuration:(double)arg2 maxPlayVideoTime:(double)arg3;
- (long long)playerContentMode;
- (void)onVideoFrameOut:(id)arg1;
- (void)onVideoPrepareToPlay:(id)arg1;
- (void)onVideoPause;
- (void)onVideoPlay;
- (void)onPlayToEnd;
- (void)showBufferingView;
- (void)hiddenBufferingView;
- (void)onVideoPlayFail:(unsigned long long)arg1 errorCode:(int)arg2 LocalizedErrorDes:(id)arg3;
- (id)tingDelegate;
- (void)setTingDelegate:(id)arg1;
- (void).cxx_destruct;
@end
