@interface TLProfileMediaContainerView : UIView <TLProfileBaseMediaViewDelegate, WCPlayerEventExt>
{
    BOOL _useCoverForContent; // +0x8
    UIView<TLProfileBaseMediaView> * _mediaView; // +0x10
    id <TLProfileBaseMediaViewDelegate> _delegate; // +0x18
    double _mediaAspectRatio; // +0x20
    UIView * _mediaCoverView; // +0x28
    UIView * _mediaBackgroundView; // +0x30
    double _aspectRatio; // +0x38
    long long _effect; // +0x40
    double _transitionProgress; // +0x48
    double _visibleHeight; // +0x50
    double _minVisibleHeight; // +0x58
    double _minHeight; // +0x60
    double _maxHeight; // +0x68
    MMMusicFadeOutLayer * _maskLayer; // +0x70
    MMMusicFadeOutLayer * _coverMaskLayer; // +0x78
    UIView * _effectView; // +0x80
    UIVisualEffectView * _blurView; // +0x88
    UIViewPropertyAnimator * _blurAnimator; // +0x90
    UIView * _backgroundBlurView; // +0x98
    TLProfileModel * _profileModel; // +0xa0
}
- (void)updateModel:(id)arg1;
- (void)dealloc;
- (id)initWithFrame:(CGRect)arg1;
- (void)initSubviews;
- (void)layoutSubviews;
- (void)resetMediaViewMask;
- (BOOL)hidesBlurForMediaViewSize:(CGSize)arg1;
- (BOOL)isSizeParamsInvalid;
- (void)setMediaView:(id)arg1;
- (id)mediaView;
- (void)setMediaCoverView:(id)arg1;
- (void)setMediaBackgroundView:(id)arg1;
- (void)setUseCoverForContent:(BOOL)arg1;
- (void)refreshSubviewLevel;
- (void)setMediaAspectRatio:(double)arg1;
- (void)setEffect:(long long)arg1;
- (void)setTransitionProgress:(double)arg1;
- (void)didMoveToWindow;
- (void)willEnterForeground;
- (void)addBlurViewEffect;
- (void)removeBlurViewEffect;
- (void)willEnterHover;
- (void)enterHover;
- (void)didEnterHover;
- (void)willExitHover;
- (void)exitHover;
- (void)didExitHover;
- (BOOL)shouldHandleMedia;
- (void)startPlayMedia;
- (void)pausePlayMedia;
- (void)stopPlayMedia;
- (void)pausePlayMediaVideoStream;
- (void)setMuted:(BOOL)arg1;
- (BOOL)isMuted;
- (void)resetPlayMedia;
- (void)onMediaFinishPlaying;
- (void)onMediaViewRefresh;
- (void)onMuteForExternalPlaybackMode:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (double)mediaAspectRatio;
- (id)mediaCoverView;
- (id)mediaBackgroundView;
- (double)aspectRatio;
- (void)setAspectRatio:(double)arg1;
- (long long)effect;
- (double)transitionProgress;
- (double)visibleHeight;
- (void)setVisibleHeight:(double)arg1;
- (double)minVisibleHeight;
- (void)setMinVisibleHeight:(double)arg1;
- (double)minHeight;
- (void)setMinHeight:(double)arg1;
- (double)maxHeight;
- (void)setMaxHeight:(double)arg1;
- (BOOL)useCoverForContent;
- (id)maskLayer;
- (void)setMaskLayer:(id)arg1;
- (id)coverMaskLayer;
- (void)setCoverMaskLayer:(id)arg1;
- (id)effectView;
- (void)setEffectView:(id)arg1;
- (id)blurView;
- (void)setBlurView:(id)arg1;
- (id)blurAnimator;
- (void)setBlurAnimator:(id)arg1;
- (id)backgroundBlurView;
- (void)setBackgroundBlurView:(id)arg1;
- (id)profileModel;
- (void)setProfileModel:(id)arg1;
- (void).cxx_destruct;
@end

