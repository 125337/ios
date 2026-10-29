@interface QMCTravelCardPanelView : UIView <QMCScalable, UIGestureRecognizerDelegate>
{
    QMCMapViewBridge * _bridge; // +0x8
    id <QMCCardPanelLayoutDelegate> _layoutDelegate; // +0x10
    id /* block */ _onMainJumpTap; // +0x18
    id /* block */ _onTravelPlanActionTap; // +0x20
    id /* block */ _imageLoader; // +0x28
    UIView * _panelBackgroundView; // +0x30
    QMCCardTabBarView * _cardTabBar; // +0x38
    UIView * _tabUnderlineDivider; // +0x40
    UILabel * _primaryTextLabel; // +0x48
    UIImageView * _titleIconView; // +0x50
    UILabel * _secondaryLeadingLabel; // +0x58
    UILabel * _secondaryTrailingLabel; // +0x60
    UIView * _secondaryDivider; // +0x68
    QMCCardData * _cardData; // +0x70
    long long _selectedTabIndex; // +0x78
    QMCSlotData * _displayedSlot; // +0x80
    UIStackView * _actionButtonRow; // +0x88
    UIStackView * _infoRow; // +0x90
    UITapGestureRecognizer * _mainJumpTapGesture; // +0x98
    double _scaleFactor; // +0xa0
    NSLayoutConstraint * _titleIconWidthConstraint; // +0xa8
    NSLayoutConstraint * _titleIconHeightConstraint; // +0xb0
    NSLayoutConstraint * _infoRowMinHeightConstraint; // +0xb8
    NSMutableArray * _actionButtonWidthConstraints; // +0xc0
    NSMutableArray * _actionButtonHeightConstraints; // +0xc8
}
- (id)initWithFrame:(CGRect)arg1;
- (id)initWithCoder:(id)arg1;
- (void)_setup;
- (void)_setTabStripVisible:(BOOL)arg1;
- (id)_makeSecondaryLabel;
- (void)setBridge:(id)arg1;
- (void)configureWithCardData:(id)arg1;
- (void)hostDidReceiveAllMCPCommands;
- (void)_rebuildTabsWithSlots:(id)arg1;
- (void)_selectTabAtIndex:(long long)arg1 animated:(BOOL)arg2 sendEvent:(BOOL)arg3;
- (void)_refreshInfoWithSlot:(id)arg1;
- (void)_updateMainJumpGestureWithBiz:(id)arg1;
- (void)_mainJumpTapped;
- (BOOL)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (id)_buttonsArrayFromBiz:(id)arg1;
- (id)_resolvedButtonsArrayForSlot:(id)arg1;
- (void)_rebuildActionButtonsWithBiz:(id)arg1 slot:(id)arg2;
- (void)_actionButtonTapped:(id)arg1;
- (void)_sendSwitchTabEventForSlot:(id)arg1 index:(long long)arg2;
- (_NSRange)_findDividerRangeInString:(id)arg1;
- (void)layoutSubviews;
- (void)traitCollectionDidChange:(id)arg1;
- (id)_cardBgColor;
- (id)_dividerColor;
- (void)qmc_applyScale:(double)arg1;
- (void)didAddSubview:(id)arg1;
- (id)currentJumpParams;
- (id)bridge;
- (id)layoutDelegate;
- (void)setLayoutDelegate:(id)arg1;
- (id /* block */)onMainJumpTap;
- (void)setOnMainJumpTap:(id /* block */)arg1;
- (id /* block */)onTravelPlanActionTap;
- (void)setOnTravelPlanActionTap:(id /* block */)arg1;
- (id /* block */)imageLoader;
- (void)setImageLoader:(id /* block */)arg1;
- (id)panelBackgroundView;
- (void)setPanelBackgroundView:(id)arg1;
- (id)cardTabBar;
- (void)setCardTabBar:(id)arg1;
- (id)tabUnderlineDivider;
- (void)setTabUnderlineDivider:(id)arg1;
- (id)primaryTextLabel;
- (void)setPrimaryTextLabel:(id)arg1;
- (id)titleIconView;
- (void)setTitleIconView:(id)arg1;
- (id)secondaryLeadingLabel;
- (void)setSecondaryLeadingLabel:(id)arg1;
- (id)secondaryTrailingLabel;
- (void)setSecondaryTrailingLabel:(id)arg1;
- (id)secondaryDivider;
- (void)setSecondaryDivider:(id)arg1;
- (id)cardData;
- (void)setCardData:(id)arg1;
- (long long)selectedTabIndex;
- (void)setSelectedTabIndex:(long long)arg1;
- (id)displayedSlot;
- (void)setDisplayedSlot:(id)arg1;
- (id)actionButtonRow;
- (void)setActionButtonRow:(id)arg1;
- (id)infoRow;
- (void)setInfoRow:(id)arg1;
- (id)mainJumpTapGesture;
- (void)setMainJumpTapGesture:(id)arg1;
- (double)scaleFactor;
- (void)setScaleFactor:(double)arg1;
- (id)titleIconWidthConstraint;
- (void)setTitleIconWidthConstraint:(id)arg1;
- (id)titleIconHeightConstraint;
- (void)setTitleIconHeightConstraint:(id)arg1;
- (id)infoRowMinHeightConstraint;
- (void)setInfoRowMinHeightConstraint:(id)arg1;
- (id)actionButtonWidthConstraints;
- (void)setActionButtonWidthConstraints:(id)arg1;
- (id)actionButtonHeightConstraints;
- (void)setActionButtonHeightConstraints:(id)arg1;
- (void).cxx_destruct;
@end
