@interface WCCanvasSightComponent : WCCanvasComponent <SightViewDelegate, WCCanvasImageLoaderObserver, WCSightLoaderObserver, VoiceComponentExt, WCCanvasDynamicDataLoaderDelegate>
{
    BOOL _sightReady; // +0x8
    BOOL _sightPlaying; // +0x9
    BOOL _bSlientPlay; // +0xa
    SightView * _sightView; // +0x10
    UIButton * _button; // +0x18
    UIButton * _voiceIconButton; // +0x20
    NSString * _currentSightUrl; // +0x28
    UIButton * _jumpStreamVideoBtn; // +0x30
    UIView * _bottomLineView; // +0x38
    WCCanvasDynamicDataLoader * _dataLoader; // +0x40
    CGSize _sightSize; // +0x48
}
+ (CGSize)calcSizeForCanvasItem:(id)arg1 advertiseInfo:(id)arg2 orientation:(long long)arg3;
- (id)initWithFrame:(CGRect)arg1;
- (void)clear;
- (void)setup;
- (void)layoutSubviews;
- (void)dealloc;
- (void)configureWithCanvasItem:(id)arg1 advertiseInfo:(id)arg2 orientation:(long long)arg3;
- (void)componentAppearFactorChagneInMainScreen;
- (void)componentWillDisappearInMainScreen:(BOOL)arg1;
- (void)componentDidEnterBackground;
- (void)componentWillEnterForeground;
- (void)componentWillStopState:(BOOL)arg1;
- (void)componentWillResumeState:(BOOL)arg1;
- (BOOL)tryToLoadThumbImage;
- (BOOL)tryToLoadSight;
- (void)tryToPlaySight;
- (void)trytoPauseSight;
- (void)tryToSetVideoPlayingState:(BOOL)arg1;
- (void)onVoiceIconBtnClick:(id)arg1;
- (unsigned long long)getSightViewScene;
- (void)tryToPauseWithShowThumb:(BOOL)arg1;
- (void)onClickIconViewOfSightView:(id)arg1;
- (BOOL)sightView:(id)arg1 playbackDidReadEnd:(BOOL)arg2;
- (void)onSightDurationUpdate:(struct)arg1;
- (BOOL)shouldVideoLayerRasterize;
- (BOOL)shouldCheckPlayerHasInitWhenSetThumbImageContentMode;
- (void)ImageDidLoad:(id)arg1 Url:(id)arg2;
- (void)ImageDidFail:(id)arg1;
- (void)ImageDidLoadWithData:(id)arg1 Url:(id)arg2;
- (void)SightWillBeginLoadForUrl:(id)arg1;
- (void)SightDidReceiveProgress:(double)arg1 Url:(id)arg2;
- (void)SightDidLoad:(id)arg1 Url:(id)arg2;
- (void)SightDidFailForUrl:(id)arg1;
- (id)sightView;
- (id)voiceIconButton;
- (BOOL)sightPlaying;
- (id)button;
- (id)dataLoader;
- (void)onVoiceComponentHasPlayWithSound:(id)arg1;
- (void)onUxCanvasDynamicXMLReturn:(id)arg1 error:(int)arg2 forCanvasId:(id)arg3;
- (void)onClickStreamVideoBtn:(id)arg1;
- (void)onClickSight:(id)arg1;
- (BOOL)hasFloatComponentInfo;
- (void)startWaitForTriggerTime;
- (void)onNotifyToShowFloatComponent;
- (void)cancelFloatComponentTrigger;
- (void)checkAndStartFloatTimer;
- (void)resetSightViewAudioState:(BOOL)arg1;
- (void)setSightView:(id)arg1;
- (void)setButton:(id)arg1;
- (void)setVoiceIconButton:(id)arg1;
- (BOOL)sightReady;
- (void)setSightReady:(BOOL)arg1;
- (void)setSightPlaying:(BOOL)arg1;
- (id)currentSightUrl;
- (void)setCurrentSightUrl:(id)arg1;
- (CGSize)sightSize;
- (void)setSightSize:(CGSize)arg1;
- (id)jumpStreamVideoBtn;
- (void)setJumpStreamVideoBtn:(id)arg1;
- (id)bottomLineView;
- (void)setBottomLineView:(id)arg1;
- (BOOL)bSlientPlay;
- (void)setBSlientPlay:(BOOL)arg1;
- (void)setDataLoader:(id)arg1;
- (void).cxx_destruct;
@end
