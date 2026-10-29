@interface WCPlayerConfigFullScreenViewController : FullScreenViewController <WCPlayerConfigDelegate, FullScreenGestureDelegate, WCPlayerEventExt, WCPlayerDownloaderExt, WCFacadeExt, MonoServiceMgrExt, WCMomentsForwardExt, WCMomentsForwardVideoOpDelegate, UIGestureRecognizerDelegate, WCMomentsPlayerViewContainerDelegate, SNSVideoABTestExt>
{
    BOOL m_isPresented; // +0x69
    BOOL _bDismissSelfOnPresentOther; // +0x6a
    BOOL _isNeedChangeContentModeAtExist; // +0x6b
    BOOL _forceDisableProgressBar; // +0x6c
    BOOL _isShareVideoForbidden; // +0x6d
    BOOL _isShareButtonVisible; // +0x6e
    BOOL _isAnimatingToShowFullScreen; // +0x6f
    BOOL _bPreventRotate; // +0x70
    BOOL _m_toolViewHidden; // +0x71
    BOOL _isBufferingViewLoading; // +0x72
    BOOL _isAnimatingToCloseFullScreen; // +0x73
    BOOL _isShowingFullScreen; // +0x74
    BOOL _needsResetPlayerViewFrameWhenAnimationEnd; // +0x75
    BOOL _shouldResumeAtApear; // +0x76
    WCPlayerView * _playerView; // +0x78
    unsigned long long _playerScene; // +0x80
    long long _browseScene; // +0x88
    UIImage * _thumbImage; // +0x90
    WCPlayerPlayArgs * _playerInfo; // +0x98
    NSString * _attachTitle; // +0xa0
    NSObject<WCPlayerMediaExt> * _mediaWrap; // +0xa8
    WCDataItem * _dataItem; // +0xb0
    NSObject<WCPlayerConfigViewControllerDelegate> * _delegate; // +0xb8
    id <WCPlayerConfigFullScreenViewControllerPostDelegate> _postDelegate; // +0xc0
    WCWidgetPlayer * _customWidgetPlayer; // +0xc8
    UIView * _fullScreenContent; // +0xd0
    WCMomentsPlayerViewContainer * _playerViewContainer; // +0xd8
    WCPlayerFullScreenConfigControlView * _controlView; // +0xe0
    WXFullScreenGestureRecognizer * _gestureReconizer; // +0xe8
    UIView * _gestureView; // +0xf0
    SEL _completeSelector; // +0xf8
    id _context; // +0x100
    UIView * _accessibilityView; // +0x108
    long long _videoProgressBarType; // +0x110
    CGRect _originRect; // +0x118
}
- (id)initWithMeidaWrap:(id)arg1 dataItem:(id)arg2;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewWillBePushOrPresent:(BOOL)arg1;
- (void)viewDidBePopedOrDismissed:(BOOL)arg1;
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
- (id)thumbImage;
- (void)setThumbImage:(id)arg1;
- (id)playerInfo;
- (void)setPlayerInfo:(id)arg1;
- (CGRect)originRect;
- (void)setOriginRect:(CGRect)arg1;
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
- (void).cxx_destruct;
@end

