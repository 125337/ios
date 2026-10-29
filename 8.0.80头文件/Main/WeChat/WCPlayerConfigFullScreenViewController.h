@interface WCPlayerConfigFullScreenViewController : FullScreenViewController <WCPlayerConfigDelegate, FullScreenGestureDelegate, WCPlayerEventExt, WCPlayerDownloaderExt, WCFacadeExt, MonoServiceMgrExt, WCMomentsForwardExt, WCMomentsForwardVideoOpDelegate, UIGestureRecognizerDelegate, WCMomentsPlayerViewContainerDelegate, SNSVideoABTestExt>
{
    BOOL m_isPresented; // +0x71
    BOOL _bDismissSelfOnPresentOther; // +0x72
    BOOL _isNeedChangeContentModeAtExist; // +0x73
    BOOL _forceDisableProgressBar; // +0x74
    BOOL _isShareVideoForbidden; // +0x75
    BOOL _isShareButtonVisible; // +0x76
    BOOL _isAnimatingToShowFullScreen; // +0x77
    BOOL _bPreventRotate; // +0x78
    BOOL _m_toolViewHidden; // +0x79
    BOOL _isBufferingViewLoading; // +0x7a
    BOOL _isAnimatingToCloseFullScreen; // +0x7b
    BOOL _hasStartedClosingPlayerAnimation; // +0x7c
    BOOL _isShowingFullScreen; // +0x7d
    BOOL _needsResetPlayerViewFrameWhenAnimationEnd; // +0x7e
    BOOL _shouldResumeAtApear; // +0x7f
    WCPlayerView * _playerView; // +0x80
    unsigned long long _playerScene; // +0x88
    long long _browseScene; // +0x90
    long long _enterScene; // +0x98
    UIImage * _thumbImage; // +0xa0
    WCPlayerPlayArgs * _playerInfo; // +0xa8
    id /* block */ _originViewProvider; // +0xb0
    UIViewController * _originViewController; // +0xb8
    UIView * _originViewHiddenDuringPlayback; // +0xc0
    NSString * _attachTitle; // +0xc8
    NSObject<WCPlayerMediaExt> * _mediaWrap; // +0xd0
    WCDataItem * _dataItem; // +0xd8
    NSObject<WCPlayerConfigViewControllerDelegate> * _delegate; // +0xe0
    id <WCPlayerConfigFullScreenViewControllerPostDelegate> _postDelegate; // +0xe8
    WCWidgetPlayer * _customWidgetPlayer; // +0xf0
    UIView * _fullScreenContent; // +0xf8
    WCMomentsPlayerViewContainer * _playerViewContainer; // +0x100
    WCPlayerFullScreenConfigControlView * _controlView; // +0x108
    WXFullScreenGestureRecognizer * _gestureReconizer; // +0x110
    UIView * _gestureView; // +0x118
    SEL _completeSelector; // +0x120
    id _context; // +0x128
    UIView * _accessibilityView; // +0x130
    long long _videoProgressBarType; // +0x138
    WCSNSPlayerPanelOperationReporter * _playerPanelOperationReporter; // +0x140
    NSString * _flutterAlbumMediaId; // +0x148
    CGRect _originRect; // +0x150
}
- (void)dealloc;
- (id)initWithMeidaWrap:(id)arg1 dataItem:(id)arg2;
- (void)initPlayerPanelOperationReporter;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)onAVAudioSessionRouteChange:(id)arg1;
- (void)pauseVideoForAudioRouteChangeIfNeeded;
- (void)viewWillBePushOrPresent:(BOOL)arg1;
- (void)viewDidBePopedOrDismissed:(BOOL)arg1;
- (void)beginFlutterAlbumCoordinationWithMediaId:(id)arg1;
- (void)viewWillBeDismissed:(BOOL)arg1;
- (BOOL)canShowMiniTaskStarFloatingView;
- (BOOL)shouldFixParentAppearEventWhenPresented;
- (void)PresentModalViewController:(id)arg1 animated:(BOOL)arg2;
- (void)viewDidLayoutSubviews;
- (void)viewDidTransitionToNewSize;
- (void)resetPlayerViewFrame;
- (void)resetPlayerViewFrameForSize:(CGSize)arg1;
- (CGRect)suitablePlayerViewFrameForVideoSize:(CGSize)arg1;
- (CGSize)suitablePlayerViewSizeForVideoSize:(CGSize)arg1;
- (CGSize)playerViewVideoSize;
- (void)initPlayerViewContainer;
- (void)_initCustomWidgetPlayer;
- (void)_relayoutCustomWidgetPlayerWithVideoFrame:(CGRect)arg1;
- (void)_cleanCustomWidgetPlayer;
- (void)_relayoutPlayerViewWithFrame:(CGRect)arg1;
- (CGRect)adjustShowAreaWithShrinkForDisplayFrame:(CGRect)arg1 viewHeight:(double)arg2;
- (CGRect)adjustShowAreaForDisplayFrame:(CGRect)arg1 viewHeight:(double)arg2;
- (void)applyPlayerViewSafeAreaRule;
- (void)prepareForAccessibility;
- (id)gestureReconizer;
- (id)controlView;
- (id)generateConfig;
- (void)showVCAnimation;
- (void)checkNeedsResetPlayerViewFrameWhenAnimationEnd;
- (void)updateGestureContainerFrame;
- (void)stopAndCloseFullScreenWindow;
- (void)stopAndCloseFullScreenWindowAnimated:(BOOL)arg1 withCompletion:(id /* block */)arg2;
- (void)hideVCAnimation;
- (BOOL)currentHeroTargetFrame:(CGRect *)arg1;
- (void)animateClosingPlayerAnimated:(BOOL)arg1;
- (void)changePresentedState:(BOOL)arg1;
- (void)clearSubviews;
- (BOOL)shouldShowProgressBar;
- (BOOL)shouldShowProgressBarWithoutThreshold;
- (BOOL)autoShowProgressBarWithThreshold;
- (void)forwardVideoToFriend:(id)arg1;
- (void)_forwardVideoToFriend:(id)arg1;
- (void)favoriteVideo;
- (void)_favoriteVideoOnGetAllData;
- (void)saveVideo;
- (void)_saveVideoOnGetAllData;
- (void)fetchAllVideoDataWithCompleteSelector:(SEL)arg1 context:(id)arg2;
- (BOOL)isChatPlayerMode;
- (void)onFullScreenSingleTap;
- (void)onFullScreenDragBegin;
- (void)onFullScreenDragCancel;
- (void)onFullScreenDragEnd;
- (void)onFullScreenClose;
- (void)onFullScreenLongPressEnd;
- (void)onFullScreenDragToRect:(CGRect)arg1;
- (void)onFullScreenBackgroundColorAlphaChange:(double)arg1;
- (void)onFullScreenItemChangeAlpha:(double)arg1;
- (void)onForwardOpDidSend:(id)arg1;
- (void)onForwardOpDidCancel:(id)arg1;
- (id)forwardVideoOpGetPlayerView:(id)arg1;
- (void)onSightIconProgressEnd;
- (void)onTapSightIconView;
- (void)onTapCloseButton:(id)arg1;
- (void)onTapAttachButton:(id)arg1;
- (void)onVideoPlay;
- (void)onVideoPause;
- (void)showPausedProgressBarIfNeeded;
- (void)onLoopPlayToEnd;
- (void)onPlayToEnd;
- (void)onSeekToTime:(double)arg1;
- (void)onToolViewAutoClose;
- (void)onGetVideoSize:(CGSize)arg1;
- (void)onClickShareButton:(id)arg1;
- (void)_playVideo;
- (void)_playCustomWidgetPlayer;
- (void)_pauseVideo;
- (void)_pauseCustomWidgetPlayer;
- (void)_seekVideoToTimeSec:(double)arg1;
- (void)_seekCustomWidgetPlayerToTimeSec:(double)arg1;
- (void)_stopVideo;
- (void)_stopCustomWidgetPlayer;
- (void)onPlayerStartPlay:(id)arg1;
- (void)OnCdnDownloadSuccess:(id)arg1;
- (void)OnPlayerDownloadProgress:(id)arg1 finish:(unsigned long long)arg2 total:(unsigned long long)arg3;
- (void)OnCdnDownloadError:(id)arg1;
- (void)onTimeLineVcWillPop;
- (void)onAudioMonoServiceBussinessAdded:(id)arg1 inMainScene:(BOOL)arg2;
- (void)playerViewContainerDidZoom:(id)arg1;
- (void)playerViewContainerWillBeginZooming:(id)arg1 withView:(id)arg2;
- (void)playerViewContainerDidEndZooming:(id)arg1 withView:(id)arg2 atScale:(double)arg3;
- (id)playerView;
- (void)setPlayerView:(id)arg1;
- (unsigned long long)playerScene;
- (void)setPlayerScene:(unsigned long long)arg1;
- (long long)browseScene;
- (void)setBrowseScene:(long long)arg1;
- (long long)enterScene;
- (void)setEnterScene:(long long)arg1;
- (id)thumbImage;
- (void)setThumbImage:(id)arg1;
- (id)playerInfo;
- (void)setPlayerInfo:(id)arg1;
- (CGRect)originRect;
- (void)setOriginRect:(CGRect)arg1;
- (id /* block */)originViewProvider;
- (void)setOriginViewProvider:(id /* block */)arg1;
- (id)originViewController;
- (void)setOriginViewController:(id)arg1;
- (id)originViewHiddenDuringPlayback;
- (void)setOriginViewHiddenDuringPlayback:(id)arg1;
- (id)attachTitle;
- (void)setAttachTitle:(id)arg1;
- (BOOL)bDismissSelfOnPresentOther;
- (void)setBDismissSelfOnPresentOther:(BOOL)arg1;
- (id)mediaWrap;
- (void)setMediaWrap:(id)arg1;
- (id)dataItem;
- (void)setDataItem:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)postDelegate;
- (void)setPostDelegate:(id)arg1;
- (BOOL)isNeedChangeContentModeAtExist;
- (void)setIsNeedChangeContentModeAtExist:(BOOL)arg1;
- (BOOL)forceDisableProgressBar;
- (void)setForceDisableProgressBar:(BOOL)arg1;
- (id)customWidgetPlayer;
- (void)setCustomWidgetPlayer:(id)arg1;
- (BOOL)isShareVideoForbidden;
- (void)setIsShareVideoForbidden:(BOOL)arg1;
- (BOOL)isShareButtonVisible;
- (void)setIsShareButtonVisible:(BOOL)arg1;
- (id)fullScreenContent;
- (void)setFullScreenContent:(id)arg1;
- (id)playerViewContainer;
- (void)setPlayerViewContainer:(id)arg1;
- (BOOL)isAnimatingToShowFullScreen;
- (void)setIsAnimatingToShowFullScreen:(BOOL)arg1;
- (void)setControlView:(id)arg1;
- (void)setGestureReconizer:(id)arg1;
- (id)gestureView;
- (void)setGestureView:(id)arg1;
- (BOOL)bPreventRotate;
- (void)setBPreventRotate:(BOOL)arg1;
- (SEL)completeSelector;
- (void)setCompleteSelector:(SEL)arg1;
- (id)context;
- (void)setContext:(id)arg1;
- (BOOL)m_toolViewHidden;
- (void)setM_toolViewHidden:(BOOL)arg1;
- (BOOL)isBufferingViewLoading;
- (void)setIsBufferingViewLoading:(BOOL)arg1;
- (BOOL)isAnimatingToCloseFullScreen;
- (void)setIsAnimatingToCloseFullScreen:(BOOL)arg1;
- (BOOL)hasStartedClosingPlayerAnimation;
- (void)setHasStartedClosingPlayerAnimation:(BOOL)arg1;
- (BOOL)isShowingFullScreen;
- (void)setIsShowingFullScreen:(BOOL)arg1;
- (BOOL)needsResetPlayerViewFrameWhenAnimationEnd;
- (void)setNeedsResetPlayerViewFrameWhenAnimationEnd:(BOOL)arg1;
- (id)accessibilityView;
- (void)setAccessibilityView:(id)arg1;
- (BOOL)shouldResumeAtApear;
- (void)setShouldResumeAtApear:(BOOL)arg1;
- (long long)videoProgressBarType;
- (void)setVideoProgressBarType:(long long)arg1;
- (id)playerPanelOperationReporter;
- (void)setPlayerPanelOperationReporter:(id)arg1;
- (id)flutterAlbumMediaId;
- (void)setFlutterAlbumMediaId:(id)arg1;
- (void).cxx_destruct;
@end
