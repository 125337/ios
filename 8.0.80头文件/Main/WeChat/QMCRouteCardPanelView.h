@interface QMCRouteCardPanelView : UIView <QMCScalable>
{
    QMCMapViewBridge * _bridge; // +0x8
    id <QMCCardPanelLayoutDelegate> _layoutDelegate; // +0x10
    id /* block */ _onRouteActionTap; // +0x18
    id /* block */ _onMainJumpTap; // +0x20
    id /* block */ _imageLoader; // +0x28
    QMCCardTabBarView * _cardTabBar; // +0x30
    UIView * _divider; // +0x38
    UIStackView * _primaryRow; // +0x40
    UILabel * _primaryTextLabel; // +0x48
    UIImageView * _primaryChevronView; // +0x50
    UILabel * _secondaryLeadingLabel; // +0x58
    UIView * _secondaryDivider; // +0x60
    UILabel * _secondaryTrailingLabel; // +0x68
    UIStackView * _secondaryRow; // +0x70
    QMCTransitTopologyView * _topologyView; // +0x78
    UIStackView * _actionButtonRow; // +0x80
    UIStackView * _infoLeftStack; // +0x88
    UITapGestureRecognizer * _mainJumpTapGesture; // +0x90
    NSDictionary * _currentMainJump; // +0x98
    NSLayoutConstraint * _infoWrapperHeightConstraint; // +0xa0
    UIStackView * _rootStack; // +0xa8
    QMCCardData * _cardData; // +0xb0
    long long _selectedTabIndex; // +0xb8
    double _scaleFactor; // +0xc0
    NSLayoutConstraint * _chevronWidthConstraint; // +0xc8
    NSLayoutConstraint * _chevronHeightConstraint; // +0xd0
    NSLayoutConstraint * _topologyRowHeightConstraint; // +0xd8
    NSMutableArray * _actionButtonWidthConstraints; // +0xe0
    NSMutableArray * _actionButtonHeightConstraints; // +0xe8
}
- (id)initWithFrame:(CGRect)arg1;
- (id)initWithCoder:(id)arg1;
- (void)_setup;
- (void)setBridge:(id)arg1;
- (void)hostDidReceiveAllMCPCommands;
- (void)configureWithCardData:(id)arg1;
- (void)_rebuildTabsWithSlots:(id)arg1;
- (void)_selectTabAtIndex:(long long)arg1 animated:(BOOL)arg2;
- (void)_refreshInfoSectionWithSlot:(id)arg1 cardData:(id)arg2;
- (void)_handleAllMCPCommandsReceived;
- (void)_handleSwitchToRouteParams:(id)arg1;
- (void)_sendSwitchRouteEventForSlot:(id)arg1 index:(long long)arg2;
- (void)_rebuildActionButtonsWithBiz:(id)arg1;
- (void)_updateMainJumpGesture;
- (void)_mainJumpTapped;
- (void)_actionButtonTapped:(id)arg1;
- (id)_makeSecondaryLabel;
- (_NSRange)_findDividerRangeInString:(id)arg1;
- (void)_applyShadow;
- (void)layoutSubviews;
- (id)_cardBgColor;
- (void)traitCollectionDidChange:(id)arg1;
- (id)_textTertiaryColor;
- (id)_dividerColor;
- (void)qmc_applyScale:(double)arg1;
- (void)didAddSubview:(id)arg1;
- (id)currentJumpParams;
- (id)bridge;
- (id)layoutDelegate;
- (void)setLayoutDelegate:(id)arg1;
- (id /* block */)onRouteActionTap;
- (void)setOnRouteActionTap:(id /* block */)arg1;
- (id /* block */)onMainJumpTap;
- (void)setOnMainJumpTap:(id /* block */)arg1;
- (id /* block */)imageLoader;
- (void)setImageLoader:(id /* block */)arg1;
- (id)cardTabBar;
- (void)setCardTabBar:(id)arg1;
- (id)divider;
- (void)setDivider:(id)arg1;
- (id)primaryRow;
- (void)setPrimaryRow:(id)arg1;
- (id)primaryTextLabel;
- (void)setPrimaryTextLabel:(id)arg1;
- (id)primaryChevronView;
- (void)setPrimaryChevronView:(id)arg1;
- (id)secondaryLeadingLabel;
- (void)setSecondaryLeadingLabel:(id)arg1;
- (id)secondaryDivider;
- (void)setSecondaryDivider:(id)arg1;
- (id)secondaryTrailingLabel;
- (void)setSecondaryTrailingLabel:(id)arg1;
- (id)secondaryRow;
- (void)setSecondaryRow:(id)arg1;
- (id)topologyView;
- (void)setTopologyView:(id)arg1;
- (id)actionButtonRow;
- (void)setActionButtonRow:(id)arg1;
- (id)infoLeftStack;
- (void)setInfoLeftStack:(id)arg1;
- (id)mainJumpTapGesture;
- (void)setMainJumpTapGesture:(id)arg1;
- (id)currentMainJump;
- (void)setCurrentMainJump:(id)arg1;
- (id)infoWrapperHeightConstraint;
- (void)setInfoWrapperHeightConstraint:(id)arg1;
- (id)rootStack;
- (void)setRootStack:(id)arg1;
- (id)cardData;
- (void)setCardData:(id)arg1;
- (long long)selectedTabIndex;
- (void)setSelectedTabIndex:(long long)arg1;
- (double)scaleFactor;
- (void)setScaleFactor:(double)arg1;
- (id)chevronWidthConstraint;
- (void)setChevronWidthConstraint:(id)arg1;
- (id)chevronHeightConstraint;
- (void)setChevronHeightConstraint:(id)arg1;
- (id)topologyRowHeightConstraint;
- (void)setTopologyRowHeightConstraint:(id)arg1;
- (id)actionButtonWidthConstraints;
- (void)setActionButtonWidthConstraints:(id)arg1;
- (id)actionButtonHeightConstraints;
- (void)setActionButtonHeightConstraints:(id)arg1;
- (void).cxx_destruct;
@end
