@interface CBTAsstBoardConfirmCardCellView : CBTAsstBoardBaseCellView
{
    UILabel * _titleLabel; // +0x8
    UILabel * _subtitleLabel; // +0x10
    UIButton * _denyButton; // +0x18
    UIButton * _allowButton; // +0x20
    id <NSObject> _notificationToken; // +0x28
    UIView * _leftDivider; // +0x30
    UIView * _rightDivider; // +0x38
    UILabel * _tailLabel; // +0x40
}
- (void)prepareForReuse;
- (void)dealloc;
- (void)setupUI;
- (void)layoutSubviews;
- (void)setupAmoebaViewReportingWithViewModel:(id)arg1;
- (void)layoutContainerView;
- (void)layoutTitleLabel;
- (void)layoutSubtitleLabel;
- (void)layoutTailHint;
- (void)showTailHintStyle;
- (id)tailNormalTextColor;
- (id)tailDividerColor;
- (void)layoutButtons;
- (id)createButton;
- (void)updateButtonStyles;
- (id)titleTextColor;
- (id)subtitleTextColor;
- (id)defaultAllowText;
- (id)defaultDenyText;
- (void)buttonTouchDown:(id)arg1;
- (void)buttonTouchCancelled:(id)arg1;
- (void)buttonTapped:(id)arg1;
- (BOOL)actionKeyHasPicker:(id)arg1 inCardData:(id)arg2;
- (CGRect)getBubbleFrame;
- (BOOL)needsBubbleBackground;
- (id)getCellReuseId;
- (void)refreshTheme;
- (void)viewStateChangedNotification:(id)arg1;
- (id)titleLabel;
- (void)setTitleLabel:(id)arg1;
- (id)subtitleLabel;
- (void)setSubtitleLabel:(id)arg1;
- (id)denyButton;
- (void)setDenyButton:(id)arg1;
- (id)allowButton;
- (void)setAllowButton:(id)arg1;
- (id)notificationToken;
- (void)setNotificationToken:(id)arg1;
- (id)leftDivider;
- (void)setLeftDivider:(id)arg1;
- (id)rightDivider;
- (void)setRightDivider:(id)arg1;
- (id)tailLabel;
- (void)setTailLabel:(id)arg1;
- (void).cxx_destruct;
@end
