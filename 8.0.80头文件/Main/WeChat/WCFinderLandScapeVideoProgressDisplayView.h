@interface WCFinderLandScapeVideoProgressDisplayView : MMUIView
{
    id <WCFinderLandScapeVideoProgressDisplayViewDelegate> _delegate; // +0x8
    WCFinderDataItem * _dataItem; // +0x10
    WCFinderLandScapePlayerParam * _param; // +0x18
    WCFinderNormalProgressBar * _progressBar; // +0x20
    MMUIButton * _pauseButton; // +0x28
    UILabel * _timeLabelInPortrait; // +0x30
    UILabel * _timeLabelInLandScapeLeft; // +0x38
    UILabel * _timeLabelInLandScapeRight; // +0x40
    WCFinderPlayRateButton * _playRateButton; // +0x48
    MMUIButton * _rotateBtn; // +0x50
    MMUIButton * _bulletButton; // +0x58
    UIButton * _bulletSwitchButton; // +0x60
    UIButton * _bulletInputButton; // +0x68
    MMUIButton * _returnBtn; // +0x70
}
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(CGRect)arg1;
- (void)setup;
- (void)setupSubViews;
- (void)setupViewLandScapeState;
- (void)updateWithDataItem:(id)arg1 param:(id)arg2;
- (double)progressBarValue;
- (void)setPauseBtnStateIsPause:(BOOL)arg1;
- (void)changeProgressValueWithCurrentTime:(double)arg1 totalTime:(double)arg2 forbitProgressBarMovAni:(BOOL)arg3;
- (void)changeTimeLabelWithCurStr:(id)arg1 totalStr:(id)arg2;
- (void)setPauseBtnAlpha:(double)arg1;
- (void)autoSetHidden:(BOOL)arg1;
- (double)progressViewPlayRate;
- (void)hideSelf;
- (void)landScapeStateWillChange:(BOOL)arg1;
- (void)updateBulletState;
- (void)updateBulletUIStateWithDataItem:(id)arg1 isLandScape:(BOOL)arg2;
- (void)layoutSubviews;
- (BOOL)shouldShowRotateBtnWithLandscape:(BOOL)arg1;
- (double)progressBarWidth;
- (void)onClickPauseBtn:(id)arg1;
- (void)onClickRotateBtn;
- (void)onClickReturnBtn;
- (void)onClickBulletBtn;
- (void)onClickBulletInputButton;
- (void)onClickBulletSwitchButton:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)dataItem;
- (void)setDataItem:(id)arg1;
- (id)param;
- (void)setParam:(id)arg1;
- (id)progressBar;
- (void)setProgressBar:(id)arg1;
- (id)pauseButton;
- (void)setPauseButton:(id)arg1;
- (id)timeLabelInPortrait;
- (void)setTimeLabelInPortrait:(id)arg1;
- (id)timeLabelInLandScapeLeft;
- (void)setTimeLabelInLandScapeLeft:(id)arg1;
- (id)timeLabelInLandScapeRight;
- (void)setTimeLabelInLandScapeRight:(id)arg1;
- (id)playRateButton;
- (void)setPlayRateButton:(id)arg1;
- (id)rotateBtn;
- (void)setRotateBtn:(id)arg1;
- (id)bulletButton;
- (void)setBulletButton:(id)arg1;
- (id)bulletSwitchButton;
- (void)setBulletSwitchButton:(id)arg1;
- (id)bulletInputButton;
- (void)setBulletInputButton:(id)arg1;
- (id)returnBtn;
- (void)setReturnBtn:(id)arg1;
- (void).cxx_destruct;
@end
