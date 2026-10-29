@interface WCCanvasStreamVideoCDNComponent : WCCanvasVideoBaseComponent <WCCanvasImageLoaderObserver, WCCanvasAdControlViewDelegate>
{
    BOOL _waitForUserClickToPlay; // +0x8
}
+ (CGSize)calcSizeForCanvasItem:(id)arg1 advertiseInfo:(id)arg2 orientation:(long long)arg3;
- (id)initWithFrame:(CGRect)arg1;
- (void)dealloc;
- (void)configureWithCanvasItem:(id)arg1 advertiseInfo:(id)arg2 orientation:(long long)arg3;
- (void)initAllSubviews;
- (BOOL)tryToStartWCPlayerWithAutoPlayFlag:(BOOL)arg1;
- (BOOL)tryToPlayVideo;
- (BOOL)tryToPauseVideo;
- (BOOL)isAllowVoice;
- (void)setAllowVoiceFlag:(BOOL)arg1;
- (id)fetchFloatBarActionItem;
- (id)createMediaItem;
- (long long)fetchWCPlayerContentMode;
- (BOOL)shouldLandscapeWhenTurnToFullscreen;
- (void)initThumbImageView;
- (void)tryToLoadVideo;
- (void)componentWillAppearInMainScreen:(BOOL)arg1;
- (void)componentWillDisappearInMainScreen:(BOOL)arg1;
- (void)componentAppearFactorChagneInMainScreen;
- (void)componentWillResumeState:(BOOL)arg1;
- (void)componentWillStopState:(BOOL)arg1;
- (void)componentWillEnterForeground;
- (void)componentDidEnterBackground;
- (void)tryToSetVideoPlayingState:(BOOL)arg1;
- (void)ImageDidLoad:(id)arg1 Url:(id)arg2;
- (void)ImageDidFail:(id)arg1;
- (void)onFullscreenBtnClick:(BOOL)arg1;
- (void)onTapSightIconView;
- (void)onAudioButtonClick:(BOOL)arg1;
- (void)onProgressBarActionBtnClick:(BOOL)arg1;
- (void)onGetVideoSize:(CGSize)arg1;
- (void)onControlViewSingleTap;
- (void)onControlViewDoubleTap;
- (BOOL)shouldAutoPlayStreamVideo;
- (void)doStreamVideoReport:(int)arg1;
- (void)reportFloatAreaExposedDataWithFloatAreaStayTime:(unsigned long long)arg1 floatAreaExposureCount:(unsigned int)arg2 buttonStayTime:(unsigned long long)arg3 buttonExposureCount:(unsigned int)arg4;
- (void)reportFloatAreaClickWithFullClick:(BOOL)arg1;
- (void)reportFullscreenVideoPlayEnd;
- (void)reportFullscreenVideoPlayStart;
- (void)createAndSetupPlayer;
- (void)doOnPlayEnd;
- (void)tryToAutoResumeVideo;
- (void)tryToAutoPauseVideo;
- (BOOL)waitForUserClickToPlay;
- (void)setWaitForUserClickToPlay:(BOOL)arg1;
@end

