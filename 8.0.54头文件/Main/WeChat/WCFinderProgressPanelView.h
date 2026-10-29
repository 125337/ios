@interface WCFinderProgressPanelView : UIView
{
    id <WCFinderProgressPanelViewDelegate> _delegate; // +0x8
    MMUIButton * _pauseButton; // +0x10
    UIButton * _playRateButton; // +0x18
    UIButton * _bulletButton; // +0x20
    MMUIButton * _subtitleButton; // +0x28
    MMUIButton * _backButton; // +0x30
    WCFinderProgressBar * _progressBar; // +0x38
    UIButton * _playButton; // +0x40
    WCFinderTimeLabel * _timeLabel; // +0x48
    WCFinderProgressControlPanelConfigParamsModel * _paramsModel; // +0x50
}
- (BOOL)responseToHitGes:(CGPoint)arg1;
- (BOOL)pointInside:(CGPoint)arg1 withEvent:(id)arg2;
- (void)globalUpdatePanelWithParams:(id)arg1;
- (void)updateUIStateWithPaused:(BOOL)arg1;
- (void)updateSubviewsStyle;
- (void)updateTimeLabelWithCurrentPlayPos:(double)arg1 videoTotalTime:(double)arg2 layoutBlock:(id /* block */)arg3;
- (void)updateConfig;
- (void)updateProgressElementsWithCurrentPlayPosition:(double)arg1 videoDuration:(double)arg2 forbidProgressBarMovAnim:(BOOL)arg3 contentVM:(id)arg4 manual:(BOOL)arg5;
- (void)_udpateProgressSubViewHiddenState;
- (void)checkProgressBarStatus;
- (void)layoutProgressBar;
- (void)updateProgressBarValueWithCurrentPlayProgress:(double)arg1;
- (void)resetUIViewState;
- (BOOL)isShowing;
- (void)onPlayerProgressBarCurPlayPrecent:(double)arg1 dragState:(unsigned long long)arg2;
- (id)lightWhiteColor;
- (id)lightLink80Color;
- (id)dynamicFontOfSize:(double)arg1;
- (id)fontOfSize:(double)arg1;
- (id)dynamicWhiteColor;
- (void)onClickPauseButton:(id)arg1;
- (void)onPlayToggle:(id)arg1;
- (void)onChangePlayRate:(id)arg1;
- (void)onClickBulletButton:(id)arg1;
- (void)onClickSubtitleButton:(id)arg1;
- (void)onClickBackButton:(id)arg1;
- (void)startLoading;
- (void)stopLoading;
- (BOOL)isAnimating;
- (BOOL)isNewLoading;
- (id)pauseButton;
- (id)playButton;
- (id)playRateButton;
- (id)bulletButton;
- (id)subtitleButton;
- (id)backButton;
- (id)timeLabel;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (void)setPauseButton:(id)arg1;
- (void)setPlayRateButton:(id)arg1;
- (void)setBulletButton:(id)arg1;
- (void)setSubtitleButton:(id)arg1;
- (void)setBackButton:(id)arg1;
- (id)progressBar;
- (void)setProgressBar:(id)arg1;
- (void)setPlayButton:(id)arg1;
- (void)setTimeLabel:(id)arg1;
- (id)paramsModel;
- (void)setParamsModel:(id)arg1;
- (void).cxx_destruct;
@end

