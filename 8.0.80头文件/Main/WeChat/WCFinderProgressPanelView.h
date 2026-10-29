@interface WCFinderProgressPanelView : UIView <WCFinderJumpInfoPanelViewDelegate>
{
    id <WCFinderProgressPanelViewDelegate> _delegate; // +0x8
    MMUIButton * _pauseButton; // +0x10
    UIButton * _playRateButton; // +0x18
    UIButton * _bulletButton; // +0x20
    MMUIButton * _subtitleButton; // +0x28
    MMUIButton * _backButton; // +0x30
    WCFinderProgressBar * _progressBar; // +0x38
    WCFinderJumpInfoPanelView * _leftJumpInfoPanelView; // +0x40
    UILabel * _currentHighlightTitleLabel; // +0x48
    WCFinderTimeLabel * _timeLabel; // +0x50
    NSMutableArray * _leftJumpInfoArray; // +0x58
    WCFinderFeedHighlightStyle * _highlightStyleInfo; // +0x60
    NSNumber * _bulletSwitchStateBeforeClick; // +0x68
    WCFinderProgressControlPanelConfigParamsModel * _paramsModel; // +0x70
    WCFinderProgressSpritesView * _progressPreviewView; // +0x78
    WCFinderSkipForwardBackwardButton * _skipForwardBtn; // +0x80
    WCFinderSkipForwardBackwardButton * _skipBackwardBtn; // +0x88
}
- (id)initWithFrame:(CGRect)arg1;
- (void)dealloc;
- (BOOL)responseToHitGes:(CGPoint)arg1;
- (BOOL)pointInside:(CGPoint)arg1 withEvent:(id)arg2;
- (void)globalUpdatePanelWithParams:(id)arg1;
- (void)checkAndUpdateHighlightStyleInfo;
- (void)configLeftJumpInfoPanelView;
- (void)updateUIStateWithPaused:(BOOL)arg1;
- (void)updateSubviewsStyle;
- (id)currentBulletButtonIconName;
- (void)refreshBulletButtonIcon;
- (void)updateTimeLabelWithCurrentPlayPos:(double)arg1 videoTotalTime:(double)arg2 layoutBlock:(id /* block */)arg3;
- (void)updateHighlightTitleLabelWithCurrentPlayPos:(double)arg1;
- (void)updateConfig;
- (void)updateProgressElementsWithCurrentPlayPosition:(double)arg1 videoDuration:(double)arg2 forbidProgressBarMovAnim:(BOOL)arg3 contentVM:(id)arg4 manual:(BOOL)arg5;
- (void)_udpateProgressSubViewHiddenState;
- (void)checkProgressBarStatus;
- (void)layoutProgressBar;
- (void)_handleClickSkipForwardBtn;
- (void)_handleClickSkipBackwardBtn;
- (BOOL)isLandScapePanelView;
- (void)updateProgressBarValueWithCurrentPlayProgress:(double)arg1;
- (void)resetUIViewState;
- (BOOL)isShowing;
- (BOOL)canShowLeftJumpInfoPanelView;
- (BOOL)shouldIgnoreLeftJumpInfo;
- (void)debugSetProgressPreviewWithPrecent:(double)arg1;
- (id)genReportDict;
- (id)genSkipButtonReportDictWithEventID:(id)arg1;
- (void)onPlayerProgressBarCurPlayPrecent:(double)arg1 dragState:(unsigned long long)arg2;
- (void)updateProgressPreviewHiddenStateIfNeeded:(BOOL)arg1;
- (void)updateProgressPreviewPercent:(double)arg1;
- (id)lightWhiteColor;
- (id)dynamicFontOfSize:(double)arg1;
- (id)fontOfSize:(double)arg1;
- (id)dynamicWhiteColor;
- (void)onClickPauseButton:(id)arg1;
- (void)onChangePlayRate:(id)arg1;
- (void)onClickBulletButton:(id)arg1;
- (void)onClickSubtitleButton:(id)arg1;
- (void)onClickBackButton:(id)arg1;
- (void)onClickSkipForwardBtn:(id)arg1;
- (void)onClickSkipBackwardBtn:(id)arg1;
- (void)setupNotification;
- (void)removeNotification;
- (void)onVoiceOverStatusChanged;
- (void)startLoading;
- (void)stopLoading;
- (BOOL)isAnimating;
- (BOOL)isNewLoading;
- (id)pauseButton;
- (id)playRateButton;
- (void)updatePlayRateButtonStyle;
- (id)bulletButton;
- (id)subtitleButton;
- (id)backButton;
- (id)timeLabel;
- (id)currentHighlightTitleLabel;
- (id)progressPreviewView;
- (id)skipForwardBtn;
- (id)skipBackwardBtn;
- (void)onFinderJumpInfoViewDidClick:(id)arg1;
- (id)finderJumpInfoPanelViewGetContentVM;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (void)setPauseButton:(id)arg1;
- (void)setPlayRateButton:(id)arg1;
- (void)setBulletButton:(id)arg1;
- (void)setSubtitleButton:(id)arg1;
- (void)setBackButton:(id)arg1;
- (id)progressBar;
- (void)setProgressBar:(id)arg1;
- (id)leftJumpInfoPanelView;
- (void)setLeftJumpInfoPanelView:(id)arg1;
- (void)setCurrentHighlightTitleLabel:(id)arg1;
- (void)setTimeLabel:(id)arg1;
- (id)leftJumpInfoArray;
- (void)setLeftJumpInfoArray:(id)arg1;
- (id)highlightStyleInfo;
- (void)setHighlightStyleInfo:(id)arg1;
- (id)bulletSwitchStateBeforeClick;
- (void)setBulletSwitchStateBeforeClick:(id)arg1;
- (id)paramsModel;
- (void)setParamsModel:(id)arg1;
- (void)setProgressPreviewView:(id)arg1;
- (void)setSkipForwardBtn:(id)arg1;
- (void)setSkipBackwardBtn:(id)arg1;
- (void).cxx_destruct;
@end
