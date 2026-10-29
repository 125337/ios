@interface WCCanvasGeneralVideoComponent : WCCanvasComponent <WCCanvasImageLoaderObserver, VoiceComponentExt, WCPlayerDownloaderExt, WCCanvasAdControlViewDelegate, WCCanvasFullScreenVideoViewControllerDelegate, WCCanvasClickEventManagerDelegate>
{
    BOOL _isInFullScreen; // +0x8
    BOOL _componentHasInit; // +0x9
    BOOL _forbidCheckWaitPlayingState; // +0xa
    WCPlayerPlayArgs * _playInfo; // +0x10
    WCCanvasAdControlView * _controlView; // +0x18
    UIButton * _voiceIconButton; // +0x20
    WCPlayerView * _wcPlayerView; // +0x28
    WCMediaItem * _mediaData; // +0x30
    WCCanvasFullScreenVideoViewController * _fullscreenVC; // +0x38
    unsigned long long _playActionState; // +0x40
    WCCanvasClickEventManager * _clickManager; // +0x48
    CGSize _videoPlayerSize; // +0x50
}
+ (CGSize)calcSizeForCanvasItem:(id)arg1 advertiseInfo:(id)arg2 orientation:(long long)arg3;
- (id)initWithFrame:(CGRect)arg1;
- (void)dealloc;
- (void)layoutSubviews;
- (void)initAllSubviews;
- (void)configureWithCanvasItem:(id)arg1 advertiseInfo:(id)arg2 orientation:(long long)arg3;
- (BOOL)shouldForbidDelegateShowArrowDown;
- (BOOL)shouldForbidDelegateShowFloatActionBtn;
- (void)componentAppearFactorChagneInMainScreen;
- (void)componentWillAppearInMainScreen:(BOOL)arg1;
- (void)componentWillDisappearInMainScreen:(BOOL)arg1;
- (void)componentWillResumeState:(BOOL)arg1;
- (void)componentWillStopState:(BOOL)arg1;
- (void)componentDidEnterBackground;
- (void)componentWillEnterForeground;
- (void)tryToSetVideoPlayingState:(BOOL)arg1;
- (BOOL)shouldVideoComponentTryToPlay;
- (void)tryToPlayVideo;
- (void)tryToPauseVideo;
- (BOOL)isPlaying;
- (BOOL)isPause;
- (void)createAndSetupPlayer;
- (void)clearWCSightView;
- (void)tryToLoadVideo;
- (void)tryToStartWCPlayerWithAutoPlay:(BOOL)arg1;
- (void)tryToAutoResumeVideo;
- (void)tryToAutoPauseVideo;
- (id)createMediaItem;
- (id)createPlayerArgsWithPlayMode:(unsigned long long)arg1;
- (void)standardizedPlayerView:(id)arg1;
- (BOOL)shouldVideoLayerRasterize;
- (void)standardizedPlayerArgsInfo:(id)arg1 mute:(BOOL)arg2;
- (void)initThumbImageView;
- (id)controlView;
- (void)showControlView;
- (void)hideControlView;
- (void)setControllerViewVisible:(BOOL)arg1;
- (void)updateVoiceButtonState:(BOOL)arg1;
- (void)setDownArrowIconVisible:(BOOL)arg1;
- (id)voiceIconButton;
- (void)onVoiceIconBtnClick:(id)arg1;
- (void)onTapSightIconView;
- (void)onVideoPause;
- (void)onLoopPlayToEnd;
- (void)onToolViewAutoClose;
- (void)onGetVideoSize:(CGSize)arg1;
- (void)onUpdateCurrentVideoTime:(double)arg1;
- (void)onAudioButtonClick:(BOOL)arg1;
- (void)onProgressBarActionBtnClick:(BOOL)arg1;
- (void)onFullscreenBtnClick:(BOOL)arg1;
- (void)onControlViewSingleTap;
- (void)onControlViewDoubleTap;
- (BOOL)shouldAdaptProgressBarFrame;
- (BOOL)shouldHideVoiceBtn;
- (void)ImageDidLoad:(id)arg1 Url:(id)arg2;
- (void)ImageDidFail:(id)arg1;
- (void)onCanvasFullscreenVideoCloseBtnClick;
- (void)onFullscreenVideoDisappearAndResetVideoPlayer:(id)arg1 andControlView:(id)arg2 andAutoPlay:(BOOL)arg3;
- (void)onComponentClickForCid:(id)arg1;
- (void)reportGeneralVideoInitState;
- (void)reportFloatAreaExposedDataWithFloatAreaStayTime:(unsigned long long)arg1 floatAreaExposureCount:(unsigned int)arg2 buttonStayTime:(unsigned long long)arg3 buttonExposureCount:(unsigned int)arg4;
- (void)reportFloatAreaClickWithFullClick:(BOOL)arg1;
- (void)reportFullscreenVideoPlayEnd;
- (void)reportFullscreenVideoPlayStart;
- (id)fetchRelatedComponent;
- (id)clickManager;
- (void)canvasCloseBtnClick;
- (void)onVoiceComponentHasPlayWithSound:(id)arg1;
- (void)OnCdnDownloadSuccess:(id)arg1;
- (void)OnPlayerDownloadProgress:(id)arg1 finish:(unsigned long long)arg2 total:(unsigned long long)arg3;
- (void)turnToFullScreen;
- (void)quitFromFullScreen;
- (BOOL)isVideoFileExist;
- (BOOL)isAllowVoice;
- (void)setAllowVoiceFlag:(BOOL)arg1;
- (id)fetchFloatBarActionItem;
- (unsigned long long)fetchPlayerModeIfNotExist;
- (long long)fetchWCPlayerContentMode;
- (BOOL)shouldAutoPlayVideo;
- (void)showFloatJumpView:(BOOL)arg1;
- (id)playInfo;
- (void)setPlayInfo:(id)arg1;
- (void)setControlView:(id)arg1;
- (void)setVoiceIconButton:(id)arg1;
- (id)wcPlayerView;
- (void)setWcPlayerView:(id)arg1;
- (id)mediaData;
- (void)setMediaData:(id)arg1;
- (id)fullscreenVC;
- (void)setFullscreenVC:(id)arg1;
- (CGSize)videoPlayerSize;
- (void)setVideoPlayerSize:(CGSize)arg1;
- (BOOL)isInFullScreen;
- (void)setIsInFullScreen:(BOOL)arg1;
- (BOOL)componentHasInit;
- (void)setComponentHasInit:(BOOL)arg1;
- (unsigned long long)playActionState;
- (void)setPlayActionState:(unsigned long long)arg1;
- (void)setClickManager:(id)arg1;
- (BOOL)forbidCheckWaitPlayingState;
- (void)setForbidCheckWaitPlayingState:(BOOL)arg1;
- (void).cxx_destruct;
@end
