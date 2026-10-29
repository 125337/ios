@interface MJMovieComposingBottomBar : MMUIView
{
    BOOL _shouldShowShootTemplateEntry; // +0x8
    BOOL _globalFilterEnabled; // +0x9
    id <MJMovieComposingBottomBarReportDelegate> _delegate; // +0x10
    id /* block */ _didClickButtonAction; // +0x18
    MJPublisherPlaybackProgressSlider * _playbackProgressSlider; // +0x20
    MMUIButton * _shootTemplateButton; // +0x28
    MMUIButton * _filterButton; // +0x30
    UIStackView * _panelButtonsContainer; // +0x38
    MMUIButton * _musicButton; // +0x40
    MMUIButton * _stickerButton; // +0x48
    MMUIButton * _textButton; // +0x50
    MMUIButton * _narrationButton; // +0x58
    MMUIButton * _clippingButton; // +0x60
    MMUIButton * _moreButton; // +0x68
    MMUIButton * _doneButton; // +0x70
}
- (id)initWithFrame:(CGRect)arg1;
- (id)initWithGlobalFilterEnabled:(BOOL)arg1;
- (void)setupViews;
- (void)setShouldShowShootTemplateEntry:(BOOL)arg1;
- (id)shootTemplateButton;
- (void)updateShootTemplateButtonVisibility;
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
- (BOOL)shouldShowShootTemplateEntry;
- (void)setShootTemplateButton:(id)arg1;
- (BOOL)globalFilterEnabled;
- (void)setGlobalFilterEnabled:(BOOL)arg1;
- (id)filterButton;
- (void)setFilterButton:(id)arg1;
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
