@interface MJShootReferenceVideoView : UIView <WCFinderFeedContentMediaActionProtocol>
{
    BOOL _landscapeVideo; // +0x8
    BOOL _collapsed; // +0x9
    BOOL _floatingPresentation; // +0xa
    BOOL _shouldPlayFromBeginningOnExpand; // +0xb
    id /* block */ _collapseButtonHandler; // +0x10
    UIView * _contentContainerView; // +0x18
    MJShootComposingAdaptiveBlurView * _collapsedBackgroundView; // +0x20
    UIView * _referenceHostView; // +0x28
    WCFinderSimplePlayerView * _playerView; // +0x30
    MJGradientView * _topGradientMaskView; // +0x38
    MJGradientView * _bottomGradientMaskView; // +0x40
    _TtC6WeChat25WCFinderSimpleProgressBar * _progressBar; // +0x48
    MMUIButton * _collapseButton; // +0x50
}
- (id)initWithConfig:(id)arg1;
- (void)dealloc;
- (void)setupSubviewsWithConfig:(id)arg1;
- (void)setupGradientMaskViews;
- (void)setFloatingPresentation:(BOOL)arg1;
- (void)setCollapsed:(BOOL)arg1;
- (void)updateGradientMaskVisibility;
- (long long)referenceVideoPlayerContentMode;
- (void)updatePlayerContentMode;
- (void)setCollapseButtonInteractionEnabled:(BOOL)arg1;
- (BOOL)accessibilityActivate;
- (void)playFromBeginning;
- (void)pause;
- (void)stop;
- (void)playWithStartTime:(double)arg1;
- (void)collapseButtonDidTouchUpInside;
- (void)onVideoUpdatePosition:(double)arg1 videoDuration:(double)arg2 maxPlayVideoTime:(double)arg3;
- (BOOL)isLandscapeVideo;
- (void)setLandscapeVideo:(BOOL)arg1;
- (BOOL)isCollapsed;
- (id /* block */)collapseButtonHandler;
- (void)setCollapseButtonHandler:(id /* block */)arg1;
- (id)contentContainerView;
- (void)setContentContainerView:(id)arg1;
- (id)collapsedBackgroundView;
- (void)setCollapsedBackgroundView:(id)arg1;
- (id)referenceHostView;
- (void)setReferenceHostView:(id)arg1;
- (id)playerView;
- (void)setPlayerView:(id)arg1;
- (id)topGradientMaskView;
- (void)setTopGradientMaskView:(id)arg1;
- (id)bottomGradientMaskView;
- (void)setBottomGradientMaskView:(id)arg1;
- (id)progressBar;
- (void)setProgressBar:(id)arg1;
- (id)collapseButton;
- (void)setCollapseButton:(id)arg1;
- (BOOL)isFloatingPresentation;
- (BOOL)shouldPlayFromBeginningOnExpand;
- (void)setShouldPlayFromBeginningOnExpand:(BOOL)arg1;
- (void).cxx_destruct;
@end
