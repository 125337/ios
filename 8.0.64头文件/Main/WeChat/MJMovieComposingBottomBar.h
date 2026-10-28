@interface MJMovieComposingBottomBar : MMUIView
{
    id <MJMovieComposingBottomBarReportDelegate> _delegate; // +0x8
    id /* block */ _didClickButtonAction; // +0x10
    MJPublisherPlaybackProgressSlider * _playbackProgressSlider; // +0x18
    UIStackView * _panelButtonsContainer; // +0x20
    MMUIButton * _musicButton; // +0x28
    MMUIButton * _stickerButton; // +0x30
    MMUIButton * _textButton; // +0x38
    MMUIButton * _narrationButton; // +0x40
    MMUIButton * _clippingButton; // +0x48
    MMUIButton * _moreButton; // +0x50
    MMUIButton * _doneButton; // +0x58
}
- (id)initWithFrame:(CGRect)arg1;
- (void)setupViews;
- (id)playbackProgressSlider;
- (void)layoutViews;
- (void)buttonTouchUpInside:(id)arg1;
- (id)hitTest:(CGPoint)arg1 withEvent:(id)arg2;
- (id)viewHitInSubview:(id)arg1 point:(CGPoint)arg2 event:(id)arg3;
- (BOOL)shouldShowMusicEntryButton;
- (id)getReportDict;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id /* block */)didClickButtonAction;
- (void)setDidClickButtonAction:(id /* block */)arg1;
- (void)setPlaybackProgressSlider:(id)arg1;
- (id)panelButtonsContainer;
- (void)setPanelButtonsContainer:(id)arg1;
- (id)musicButton;
- (void)setMusicButton:(id)arg1;
- (id)stickerButton;
- (void)setStickerButton:(id)arg1;
- (id)textButton;
- (void)setTextButton:(id)arg1;
- (id)narrationButton;
- (void)setNarrationButton:(id)arg1;
- (id)clippingButton;
- (void)setClippingButton:(id)arg1;
- (id)moreButton;
- (void)setMoreButton:(id)arg1;
- (id)doneButton;
- (void)setDoneButton:(id)arg1;
- (void).cxx_destruct;
@end
