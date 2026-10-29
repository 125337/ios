@interface WCCanvasVideoBaseComponent : WCCanvasComponent <WCCanvasImageLoaderObserver, VoiceComponentExt, WCCanvasAdControlViewDelegate, WCCanvasFullScreenVideoViewControllerDelegate, WCCanvasClickEventManagerDelegate>
{
    BOOL _isInFullScreen; // +0x8
    BOOL _isVideoPauseByUserOperation; // +0x9
    BOOL _componentHasInit; // +0xa
    WCPlayerPlayArgs * _playInfo; // +0x10
    WCCanvasAdControlView * _controlView; // +0x18
    WCPlayerView * _wcplayerView; // +0x20
    WCMediaItem * _mediaData; // +0x28
    WCCanvasFullScreenVideoViewController * _fullscreenVC; // +0x30
    WCCanvasClickEventManager * _clickManager; // +0x38
    CGSize _videoPlayerSize; // +0x40
}
- (id)initWithFrame:(CGRect)arg1;
- (void)layoutSubviews;
- (void)dealloc;
- (void)configureWithCanvasItem:(id)arg1 advertiseInfo:(id)arg2 orientation:(long long)arg3;
- (id)clickManager;
- (BOOL)isPlaying;
- (BOOL)isPause;
- (void)showControlView;
- (void)hideControlView;
- (void)showFloatJumpView:(BOOL)arg1;
- (BOOL)shouldForbidDelegateShowArrowDown;
- (BOOL)shouldForbidDelegateShowFloatActionBtn;
- (id)createPlayerArgsWithPlayMode:(unsigned long long)arg1;
- (BOOL)tryToPlayVideo;
- (BOOL)tryToPauseVideo;
- (void)doOnPlayEnd;
- (void)initAllSubviews;
- (long long)fetchWCPlayerContentMode;
- (BOOL)isForbiddenControlViewShow;
- (BOOL)isAllowVoice;
- (id)createMediaItem;
- (void)setAllowVoiceFlag:(BOOL)arg1;
- (id)fetchFloatBarActionItem;
- (BOOL)shouldLandscapeWhenTurnToFullscreen;
- (void)componentWillResumeState:(BOOL)arg1;
- (void)componentWillDisappearInMainScreen:(BOOL)arg1;
- (BOOL)shouldVideoComponentTryToPlay;
- (void)onToolViewAutoClose;
- (void)onUpdateCurrentVideoTime:(double)arg1;
- (void)onVideoPlay;
- (void)onVideoPause;
- (void)onLoopPlayToEnd;
- (void)onGetVideoSize:(CGSize)arg1;
- (BOOL)shouldAdaptProgressBarFrame;
- (BOOL)shouldHideVoiceBtn;
- (id)createControlViewWithFrame:(CGRect)arg1 andPlayerMode:(unsigned long long)arg2;
- (void)onCanvasFullscreenVideoCloseBtnClick;
- (void)onFullscreenVideoDisappearAndResetVideoPlayer:(id)arg1 andControlView:(id)arg2 andAutoPlay:(BOOL)arg3;
- (void)onComponentClickForCid:(id)arg1;
- (void)reportFloatAreaExposedDataWithFloatAreaStayTime:(unsigned long long)arg1 floatAreaExposureCount:(unsigned int)arg2 buttonStayTime:(unsigned long long)arg3 buttonExposureCount:(unsigned int)arg4;
- (void)reportFloatAreaClickWithFullClick:(BOOL)arg1;
- (void)reportFullscreenVideoPlayEnd;
- (void)reportFullscreenVideoPlayStart;
- (id)fetchRelatedComponent;
- (void)onVoiceComponentHasPlayWithSound:(id)arg1;
- (void)showOrHideControllerViewInner:(BOOL)arg1;
- (void)showOrHideDownArrowIconInner:(BOOL)arg1;
- (void)clearWCSightView;
- (void)turnToFullScreen;
- (void)quitFromFullScreen;
- (BOOL)shouldVideoLayerRasterize;
- (void)standardizedPlayerView:(id)arg1;
- (void)standardizedPlayerArgsInfo:(id)arg1 mute:(BOOL)arg2;
- (id)playInfo;
- (void)setPlayInfo:(id)arg1;
- (id)controlView;
- (void)setControlView:(id)arg1;
- (id)wcplayerView;
- (void)setWcplayerView:(id)arg1;
- (id)mediaData;
- (void)setMediaData:(id)arg1;
- (id)fullscreenVC;
- (void)setFullscreenVC:(id)arg1;
- (BOOL)isInFullScreen;
- (void)setIsInFullScreen:(BOOL)arg1;
- (BOOL)isVideoPauseByUserOperation;
- (void)setIsVideoPauseByUserOperation:(BOOL)arg1;
- (CGSize)videoPlayerSize;
- (void)setVideoPlayerSize:(CGSize)arg1;
- (BOOL)componentHasInit;
- (void)setComponentHasInit:(BOOL)arg1;
- (void)setClickManager:(id)arg1;
- (void).cxx_destruct;
@end

