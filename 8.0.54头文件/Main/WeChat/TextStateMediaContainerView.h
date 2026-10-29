@interface TextStateMediaContainerView : UIView <TextStateBaseMediaViewDelegate>
{
    BOOL _forceAspectRatio; // +0x8
    BOOL _useCoverForContent; // +0x9
    BOOL _staticContent; // +0xa
    BOOL _hideBigIconForDefaultImage; // +0xb
    BOOL _forbidUpdateData; // +0xc
    BOOL _disable3rdPartyContent; // +0xd
    BOOL _playing; // +0xe
    BOOL _wantToPlay; // +0xf
    BOOL _autoPausedWhenEnterBackground; // +0x10
    BOOL _firstRefreshBackground; // +0x11
    unsigned int _effects; // +0x14
    double _mediaAspectRatio; // +0x18
    id <TextStateBaseMediaViewDelegate> _delegate; // +0x20
    UIView<TextStateBaseMediaView> * _mediaView; // +0x28
    UIView * _mediaCoverView; // +0x30
    UIView * _mediaBackgroundView; // +0x38
    double _aspectRatio; // +0x40
    double _transitionProgress; // +0x48
    id <TextState3rdPartyHandler> _thirdPartyHandler; // +0x50
    id /* block */ _mediaProgressChangeHandler; // +0x58
    TextStateIcon * _icon; // +0x60
    double _yOffset; // +0x68
    UIView * _containerView; // +0x70
    MMMusicFadeOutLayer * _maskLayer; // +0x78
    MMMusicFadeOutLayer * _coverMaskLayer; // +0x80
    TextStateMediaEffectCompositeView * _effectsCompositeView; // +0x88
    UIView * _backgroundBlurView; // +0x90
}
+ (id)containerViewFromUsername:(id)arg1 model:(id)arg2;
- (id)initWithFrame:(CGRect)arg1;
- (void)updateUsername:(id)arg1 model:(id)arg2;
- (void)updateFrom3rdPartyHandler:(id)arg1;
- (void)dealloc;
- (void)initSubviews;
- (void)layoutSubviews;
- (void)setMediaView:(id)arg1;
- (void)setMediaCoverView:(id)arg1;
- (void)setMediaBackgroundView:(id)arg1;
- (void)setUseCoverForContent:(BOOL)arg1;
- (void)setStaticContent:(BOOL)arg1;
- (void)refreshSubviewLevel;
- (void)setMediaAspectRatio:(double)arg1;
- (double)mediaAspectRatio;
- (void)setEffects:(unsigned int)arg1;
- (void)setTransitionProgress:(double)arg1;
- (void)setYOffset:(double)arg1;
- (void)setHideBigIconForDefaultImage:(BOOL)arg1;
- (void)willEnterForeground;
- (void)didEnterBackground;
- (BOOL)shouldHandleMedia;
- (void)startPlayMedia;
- (BOOL)longPressEvent:(BOOL)arg1;
- (BOOL)residentPlayMedia;
- (BOOL)shouldResidentPlayMedia;
- (void)pausePlayMedia;
- (void)stopPlayMedia;
- (void)pausePlayMediaVideoStream;
- (void)setMuted:(BOOL)arg1;
- (BOOL)isMuted;
- (void)setForceMuted:(BOOL)arg1;
- (BOOL)isForceMuted;
- (void)resetPlayMedia;
- (void)checkValidFor3rdPartyMediaWithCacheOnly:(BOOL)arg1;
- (void)__checkValidFor3rdPartyMediaWithCacheOnly:(BOOL)arg1;
- (void)requestUpdateDataSource;
- (void)onMediaFinishPlaying;
- (void)onMediaViewRefresh;
- (void)onMediaProgressChange:(double)arg1;
- (BOOL)displayDataReady;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)mediaView;
- (id)mediaCoverView;
- (id)mediaBackgroundView;
- (double)aspectRatio;
- (void)setAspectRatio:(double)arg1;
- (BOOL)forceAspectRatio;
- (void)setForceAspectRatio:(BOOL)arg1;
- (unsigned int)effects;
- (double)transitionProgress;
- (id)thirdPartyHandler;
- (void)setThirdPartyHandler:(id)arg1;
- (id /* block */)mediaProgressChangeHandler;
- (void)setMediaProgressChangeHandler:(id /* block */)arg1;
- (id)icon;
- (void)setIcon:(id)arg1;
- (BOOL)useCoverForContent;
- (BOOL)staticContent;
- (double)yOffset;
- (BOOL)hideBigIconForDefaultImage;
- (BOOL)forbidUpdateData;
- (void)setForbidUpdateData:(BOOL)arg1;
- (id)containerView;
- (void)setContainerView:(id)arg1;
- (id)maskLayer;
- (void)setMaskLayer:(id)arg1;
- (id)coverMaskLayer;
- (void)setCoverMaskLayer:(id)arg1;
- (id)effectsCompositeView;
- (void)setEffectsCompositeView:(id)arg1;
- (id)backgroundBlurView;
- (void)setBackgroundBlurView:(id)arg1;
- (BOOL)disable3rdPartyContent;
- (void)setDisable3rdPartyContent:(BOOL)arg1;
- (BOOL)isPlaying;
- (void)setPlaying:(BOOL)arg1;
- (BOOL)wantToPlay;
- (void)setWantToPlay:(BOOL)arg1;
- (BOOL)autoPausedWhenEnterBackground;
- (void)setAutoPausedWhenEnterBackground:(BOOL)arg1;
- (BOOL)firstRefreshBackground;
- (void)setFirstRefreshBackground:(BOOL)arg1;
- (void).cxx_destruct;
@end

