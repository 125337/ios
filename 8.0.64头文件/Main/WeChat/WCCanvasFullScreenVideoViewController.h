@interface WCCanvasFullScreenVideoViewController : FullScreenViewController <WCAdInteractionViewDelegate>
{
    BOOL _bPlay; // +0x71
    BOOL _forceLanscapeWhenTurnToFullscreen; // +0x72
    BOOL _isVideoPlayWhenExit; // +0x73
    id <WCCanvasFullScreenVideoViewControllerDelegate> _delegate; // +0x78
    WCCanvasComponentItem * _componentItem; // +0x80
    WCAdvertiseInfo * _advertiseInfo; // +0x88
    WCPlayerView * _playerView; // +0x90
    WCCanvasAdControlView * _controlView; // +0x98
    UIView * _fullScreenContent; // +0xa0
    UIButton * _closeButton; // +0xa8
    WCAdInteractionView * _floatAreaView; // +0xb0
    WCStatTimerHelper * _timerHelper; // +0xb8
    CGRect _originRect; // +0xc0
}
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidLayoutSubviews;
- (void)closeFullscreen;
- (void)didControlViewHidden:(BOOL)arg1;
- (void)resetPlayerViewFrame;
- (void)resetPlayerViewFrameForSize:(CGSize)arg1;
- (void)showVCAnimation;
- (void)stopAndCloseFullScreenWindow;
- (void)makeSurePortraitAndDismissFullScreenWindow;
- (void)hideVCAnimation;
- (void)dismissFullScreenWindow;
- (void)clearSubviews;
- (id)closeButton;
- (void)onClickCloseButton;
- (void)setOriginRect:(CGRect)arg1;
- (void)tryToForceOrientationToLanscape;
- (void)tryToSetCurrentOrientations:(unsigned long long)arg1;
- (void)generateFloatAreaViewForComponentItem:(id)arg1;
- (void)reportFloatAreaExposedData;
- (id)fetchFloatBarInfo;
- (void)interactionViewDeterminationWasMadeWithRelatedId:(id)arg1 forType:(unsigned long long)arg2;
- (void)pauseVideoInner;
- (void)startVideoInner;
- (id)timerHelper;
- (unsigned long long)fetchStayTotalTime;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)componentItem;
- (void)setComponentItem:(id)arg1;
- (id)advertiseInfo;
- (void)setAdvertiseInfo:(id)arg1;
- (id)playerView;
- (void)setPlayerView:(id)arg1;
- (id)controlView;
- (void)setControlView:(id)arg1;
- (BOOL)bPlay;
- (void)setBPlay:(BOOL)arg1;
- (BOOL)forceLanscapeWhenTurnToFullscreen;
- (void)setForceLanscapeWhenTurnToFullscreen:(BOOL)arg1;
- (CGRect)originRect;
- (id)fullScreenContent;
- (void)setFullScreenContent:(id)arg1;
- (BOOL)isVideoPlayWhenExit;
- (void)setIsVideoPlayWhenExit:(BOOL)arg1;
- (void)setCloseButton:(id)arg1;
- (id)floatAreaView;
- (void)setFloatAreaView:(id)arg1;
- (void)setTimerHelper:(id)arg1;
- (void).cxx_destruct;
@end
