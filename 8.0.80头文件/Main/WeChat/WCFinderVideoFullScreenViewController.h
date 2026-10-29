@interface WCFinderVideoFullScreenViewController : MMUIViewController <UIViewControllerTransitioningDelegate>
{
    WCFinderMegaVideo * _videoSource; // +0x70
    WCPlayerView * _playerView; // +0x78
    WCFinderPlayBar * _playBar; // +0x80
    UIPercentDrivenInteractiveTransition * _animator; // +0x88
}
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)arg1;
- (void)setupUI;
- (CGSize)videoSizeFromWCFinderMegaVideoMedia:(id)arg1;
- (id)createPlayArgsForMedia:(id)arg1;
- (BOOL)isLocalMedia:(id)arg1;
- (void)setupClose;
- (void)setUpBottomView;
- (void)tapToExit:(id)arg1;
- (void)dragPanGesture:(id)arg1;
- (id)animationControllerForDismissedController:(id)arg1;
- (id)interactionControllerForDismissal:(id)arg1;
- (void)onWCAudioSessionOldDeviceUnavailable;
- (id)videoSource;
- (void)setVideoSource:(id)arg1;
- (id)playerView;
- (void)setPlayerView:(id)arg1;
- (id)playBar;
- (void)setPlayBar:(id)arg1;
- (id)animator;
- (void)setAnimator:(id)arg1;
- (void).cxx_destruct;
@end
