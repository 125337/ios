@interface MJClippingPanel : MMUIView
{
    id <MJClippingPanelDelegate> _delegate; // +0x8
    unsigned long long _panelConfiguration; // +0x10
    MJPublisherPlaybackProgressSlider * _playbackProgressSlider; // +0x18
    MJComposingToolbar * _toolbar; // +0x20
    MMUIView * _contentView; // +0x28
    MMUIView * _bottomBackgroundView; // +0x30
}
- (id)initWithPanelConfiguration:(unsigned long long)arg1;
- (void)setupViews;
- (void)layoutViews;
- (void)configWith:(unsigned long long)arg1 animated:(BOOL)arg2;
- (void)setupBottomBackgroundViewDefault;
- (void)setupBottomBackgroundViewForLyricEditing;
- (id)hitTest:(CGPoint)arg1 withEvent:(id)arg2;
- (id)viewHitInSubview:(id)arg1 point:(CGPoint)arg2 event:(id)arg3;
- (void)setIsPlaying:(BOOL)arg1;
- (void)setPlaybackTime:(struct)arg1;
- (void)setPlaybackDuration:(struct)arg1;
- (void)setVideoFrameDuration:(struct)arg1;
- (void)hidePlaybackProgressSliderAnimated:(BOOL)arg1;
- (void)showPlaybackProgressSliderAnimated:(BOOL)arg1;
- (void)hideUndoRedoAnimated:(BOOL)arg1;
- (void)showUndoRedoAnimated:(BOOL)arg1;
- (void)setIsToolbarHidden:(BOOL)arg1 alpha:(double)arg2;
- (void)setIsUndoEnabled:(BOOL)arg1;
- (void)setIsRedoEnabled:(BOOL)arg1;
- (void)playbackControlViewValueChanged:(id)arg1;
- (void)playbackControlViewTouchDown:(id)arg1;
- (void)playbackControlViewTouchEnd:(id)arg1;
- (void)toolbarPlayButtonTouchUpInside:(id)arg1;
- (void)toolbarUndoButtonTouchUpInside:(id)arg1;
- (void)toolbarRedoButtonTouchUpInside:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (unsigned long long)panelConfiguration;
- (id)playbackProgressSlider;
- (id)toolbar;
- (id)contentView;
- (id)bottomBackgroundView;
- (void)setBottomBackgroundView:(id)arg1;
- (void).cxx_destruct;
@end
