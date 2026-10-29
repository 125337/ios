@interface QMCRealtimeTransitLineItemView : UIView <QMCScalable, UIGestureRecognizerDelegate>
{
    BOOL _isCardSelected; // +0x8
    BOOL _hasSwitchIcon; // +0x9
    id /* block */ _onCardTap; // +0x10
    id /* block */ _onSwitchTap; // +0x18
    id /* block */ _onButtonTap; // +0x20
    id /* block */ _imageLoader; // +0x28
    UILabel * _titleLabel; // +0x30
    UIImageView * _chevronView; // +0x38
    NSLayoutConstraint * _chevronWidthConstraint; // +0x40
    NSLayoutConstraint * _chevronHeightConstraint; // +0x48
    UIButton * _switchButton; // +0x50
    UIImageView * _switchIconView; // +0x58
    UILabel * _switchTextLabel; // +0x60
    UILabel * _secondLineLabel; // +0x68
    UILabel * _thirdLineLabel; // +0x70
    UIView * _infoPill; // +0x78
    UILabel * _queryStopLabel; // +0x80
    UIImageView * _waveIconView; // +0x88
    UILabel * _realtimeInfoLabel; // +0x90
    UILabel * _staticInfoLabel; // +0x98
    UILabel * _crowdingTextLabel; // +0xa0
    UIImageView * _crowdingIconView; // +0xa8
    UIStackView * _buttonsStack; // +0xb0
    NSDictionary * _currentBizData; // +0xb8
    double _scaleFactor; // +0xc0
    NSLayoutConstraint * _switchButtonHeightConstraint; // +0xc8
    NSLayoutConstraint * _waveIconWidthConstraint; // +0xd0
    NSLayoutConstraint * _waveIconHeightConstraint; // +0xd8
    NSLayoutConstraint * _crowdingIconWidthConstraint; // +0xe0
    NSLayoutConstraint * _crowdingIconHeightConstraint; // +0xe8
}
- (id)initWithFrame:(CGRect)arg1;
- (void)layoutSubviews;
- (void)_setupItemViews;
- (void)configureWithBizData:(id)arg1;
- (void)setCardSelected:(BOOL)arg1;
- (void)_configureButtons:(id)arg1;
- (id)_makeIconButtonWithTitle:(id)arg1 icon:(id)arg2 jump:(id)arg3;
- (id)_fallbackButtonIconForTitle:(id)arg1;
- (void)_buttonAction:(id)arg1;
- (void)_cardTapped;
- (void)_switchTapped;
- (BOOL)gestureRecognizerShouldBegin:(id)arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (void)_reloadCrowdingIcon;
- (void)_reloadChevronIcon;
- (id)_pillBgColor;
- (id)_switchBgColor;
- (id)_switchBorderColor;
- (id)_switchTintColor;
- (void)qmc_applyScale:(double)arg1;
- (id /* block */)onCardTap;
- (void)setOnCardTap:(id /* block */)arg1;
- (id /* block */)onSwitchTap;
- (void)setOnSwitchTap:(id /* block */)arg1;
- (id /* block */)onButtonTap;
- (void)setOnButtonTap:(id /* block */)arg1;
- (id /* block */)imageLoader;
- (void)setImageLoader:(id /* block */)arg1;
- (id)titleLabel;
- (void)setTitleLabel:(id)arg1;
- (id)chevronView;
- (void)setChevronView:(id)arg1;
- (id)chevronWidthConstraint;
- (void)setChevronWidthConstraint:(id)arg1;
- (id)chevronHeightConstraint;
- (void)setChevronHeightConstraint:(id)arg1;
- (id)switchButton;
- (void)setSwitchButton:(id)arg1;
- (id)switchIconView;
- (void)setSwitchIconView:(id)arg1;
- (id)switchTextLabel;
- (void)setSwitchTextLabel:(id)arg1;
- (id)secondLineLabel;
- (void)setSecondLineLabel:(id)arg1;
- (id)thirdLineLabel;
- (void)setThirdLineLabel:(id)arg1;
- (id)infoPill;
- (void)setInfoPill:(id)arg1;
- (id)queryStopLabel;
- (void)setQueryStopLabel:(id)arg1;
- (id)waveIconView;
- (void)setWaveIconView:(id)arg1;
- (id)realtimeInfoLabel;
- (void)setRealtimeInfoLabel:(id)arg1;
- (id)staticInfoLabel;
- (void)setStaticInfoLabel:(id)arg1;
- (id)crowdingTextLabel;
- (void)setCrowdingTextLabel:(id)arg1;
- (id)crowdingIconView;
- (void)setCrowdingIconView:(id)arg1;
- (id)buttonsStack;
- (void)setButtonsStack:(id)arg1;
- (id)currentBizData;
- (void)setCurrentBizData:(id)arg1;
- (BOOL)isCardSelected;
- (void)setIsCardSelected:(BOOL)arg1;
- (BOOL)hasSwitchIcon;
- (void)setHasSwitchIcon:(BOOL)arg1;
- (double)scaleFactor;
- (void)setScaleFactor:(double)arg1;
- (id)switchButtonHeightConstraint;
- (void)setSwitchButtonHeightConstraint:(id)arg1;
- (id)waveIconWidthConstraint;
- (void)setWaveIconWidthConstraint:(id)arg1;
- (id)waveIconHeightConstraint;
- (void)setWaveIconHeightConstraint:(id)arg1;
- (id)crowdingIconWidthConstraint;
- (void)setCrowdingIconWidthConstraint:(id)arg1;
- (id)crowdingIconHeightConstraint;
- (void)setCrowdingIconHeightConstraint:(id)arg1;
- (void).cxx_destruct;
@end
