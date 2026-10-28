@interface WCFinderFeedDetailVideoProgressView : UIView
{
    BOOL _fullScreenState; // +0x8
    id <WCFinderFeedDetailVideoProgressViewDelegate> _delegate; // +0x10
    WCFinderFeedContentVM * _contentVM; // +0x18
    WCFinderNormalProgressBar * _progressBar; // +0x20
    MMUIButton * _pauseButton; // +0x28
    UILabel * _timeLabelInLeft; // +0x30
    UILabel * _timeLabelInRight; // +0x38
    MMUIButton * _playRateButton; // +0x40
    MMUIButton * _fullScreenBtn; // +0x48
    MMUIButton * _bulletButton; // +0x50
    UIButton * _bulletSwitchButton; // +0x58
    UIButton * _bulletInputButton; // +0x60
    UIView * _closeBtnView; // +0x68
    WCFinderGradientView * _progressBarGradientView; // +0x70
    CGRect _layoutBounds; // +0x78
}
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(CGRect)arg1;
- (void)setup;
- (void)setupViews;
- (void)updatePauseButtonImage;
- (void)layoutViews;
- (void)layoutSubviews;
- (void)updateWithContentVM:(id)arg1;
- (void)updateFullScreenState:(BOOL)arg1;
- (void)updateBulletState;
- (void)updateBulletUIStateWithDataItem:(id)arg1 isLandScape:(BOOL)arg2;
- (void)changeProgressValueWithCurrentTime:(double)arg1 totalTime:(double)arg2 forbitProgressBarMovAni:(BOOL)arg3;
- (void)changeTimeLabelWithCurStr:(id)arg1 totalStr:(id)arg2;
- (void)setProgressBarHighlight:(BOOL)arg1;
- (double)progressBarValue;
- (void)setPauseBtnAlpha:(double)arg1;
- (void)setPauseBtnStateIsPause:(BOOL)arg1;
- (BOOL)getPauseBtnStateIsPause;
- (void)setHidden:(BOOL)arg1 autoHide:(BOOL)arg2;
- (void)hideSelf;
- (void)onClickPauseBtn:(id)arg1;
- (void)onClickFullScreenBtn;
- (void)onClickBulletBtn;
- (void)onClickBulletInputButton;
- (void)onClickBulletSwitchButton:(id)arg1;
- (void)onClickPlayRateButton;
- (void)onCloseButtonClicked;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)contentVM;
- (void)setContentVM:(id)arg1;
- (id)progressBar;
- (void)setProgressBar:(id)arg1;
- (id)pauseButton;
- (void)setPauseButton:(id)arg1;
- (id)timeLabelInLeft;
- (void)setTimeLabelInLeft:(id)arg1;
- (id)timeLabelInRight;
- (void)setTimeLabelInRight:(id)arg1;
- (id)playRateButton;
- (void)setPlayRateButton:(id)arg1;
- (id)fullScreenBtn;
- (void)setFullScreenBtn:(id)arg1;
- (id)bulletButton;
- (void)setBulletButton:(id)arg1;
- (id)bulletSwitchButton;
- (void)setBulletSwitchButton:(id)arg1;
- (id)bulletInputButton;
- (void)setBulletInputButton:(id)arg1;
- (id)closeBtnView;
- (void)setCloseBtnView:(id)arg1;
- (id)progressBarGradientView;
- (void)setProgressBarGradientView:(id)arg1;
- (BOOL)fullScreenState;
- (void)setFullScreenState:(BOOL)arg1;
- (CGRect)layoutBounds;
- (void)setLayoutBounds:(CGRect)arg1;
- (void).cxx_destruct;
@end
