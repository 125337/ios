@interface WAMainFrameAudioCenterView_V4 : WAMainFrameAudioCenterBaseView <ITingPlayCenterMgrExt, UIGestureRecognizerDelegate, MMWebImageViewDelegate>
{
    MMUILabel * _mainTitle; // +0x8
    UIView * _recentPlayArea; // +0x10
    UIView * _rightBackgroundContainerView; // +0x18
    MMUIButton * _playOrPauseButton; // +0x20
    WCMarqueeLabel * _audioTitleLabel; // +0x28
    MMUILabel * _rightPartTitleLabel; // +0x30
    UILabel * _recentPlayLabel; // +0x38
    UIView * _musicArea; // +0x40
    MMUIButton * _musicButton; // +0x48
    MMUILabel * _musicLabel; // +0x50
    UIView * _audioArea; // +0x58
    MMUIButton * _audioButton; // +0x60
    MMUILabel * _audioLabel; // +0x68
    MMUIButton * _notifyContainerBtn; // +0x70
    MMUILabel * _notifyLabel; // +0x78
    UIView * _redDotView; // +0x80
    UIImageView * _arrowIconView; // +0x88
    UIImageView * _loadingIconView; // +0x90
}
- (double)contentHeight;
- (int)taskBarVersion;
- (id)initWithFrame:(CGRect)arg1;
- (void)dealloc;
- (void)applyLastSyncItem;
- (void)initViews;
- (void)initNotifyBtn;
- (void)onNotifyClicked;
- (double)rightPartDescLength;
- (void)layoutSubviews;
- (void)layoutNotfiyBtn;
- (double)onelineLabelHeightForFontSize:(double)arg1;
- (void)updateCurPlayingInfo;
- (void)tryShowFirstTask;
- (void)willBecomeVisible;
- (void)onBecomeVisible;
- (void)onBecomeUnVisible;
- (unsigned int)buttonIconStyle;
- (id)musicButtonImage;
- (id)audioButtonImage;
- (void)updateEntryButtonsImageIfNeed;
- (void)onPlayOrPauseButtonClicked;
- (void)onRightBackgroundClicked;
- (void)doOpenAppFromTaskBar;
- (void)onMusicButtonClicked;
- (void)onAudioButtonClicked;
- (void)onShowClearActionSheet;
- (void)onMusicButtonLongClicked;
- (void)onAudioButtonLongClicked;
- (void)onTingPlayingInfoUpdate:(id)arg1;
- (void)applyViewModel:(id)arg1;
- (void)onTingTaskBarSyncInfoChanged;
- (void)updateUIComptsWithPlayInfo:(id)arg1;
- (void)updateStateWithPlayInfo:(id)arg1;
- (void)updateStateWithPlayInfo:(id)arg1 enable:(BOOL)arg2;
- (id)playPauseParamsWithPlayInfo:(id)arg1;
- (id)dataReportParamsWithPlayInfo:(id)arg1;
- (void)setIsLoading:(BOOL)arg1;
- (void)onHideWAMainFrameTaskBar;
- (BOOL)gestureRecognizerShouldBegin:(id)arg1;
- (id)mainTitle;
- (void)setMainTitle:(id)arg1;
- (id)recentPlayArea;
- (void)setRecentPlayArea:(id)arg1;
- (id)rightBackgroundContainerView;
- (void)setRightBackgroundContainerView:(id)arg1;
- (id)playOrPauseButton;
- (void)setPlayOrPauseButton:(id)arg1;
- (id)audioTitleLabel;
- (void)setAudioTitleLabel:(id)arg1;
- (id)rightPartTitleLabel;
- (void)setRightPartTitleLabel:(id)arg1;
- (id)recentPlayLabel;
- (void)setRecentPlayLabel:(id)arg1;
- (id)musicArea;
- (void)setMusicArea:(id)arg1;
- (id)musicButton;
- (void)setMusicButton:(id)arg1;
- (id)musicLabel;
- (void)setMusicLabel:(id)arg1;
- (id)audioArea;
- (void)setAudioArea:(id)arg1;
- (id)audioButton;
- (void)setAudioButton:(id)arg1;
- (id)audioLabel;
- (void)setAudioLabel:(id)arg1;
- (id)notifyContainerBtn;
- (void)setNotifyContainerBtn:(id)arg1;
- (id)notifyLabel;
- (void)setNotifyLabel:(id)arg1;
- (id)redDotView;
- (void)setRedDotView:(id)arg1;
- (id)arrowIconView;
- (void)setArrowIconView:(id)arg1;
- (id)loadingIconView;
- (void)setLoadingIconView:(id)arg1;
- (void).cxx_destruct;
@end

