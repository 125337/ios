@interface CBTAsstBoardTimedSendMsgConfirmCellView : CBTAsstBoardBaseCellView
{
    UILabel * _titleLabel; // +0x8
    UIView * _contactRowView; // +0x10
    MMHeadImageView * _contactAvatarView; // +0x18
    UILabel * _contactNameLabel; // +0x20
    UIView * _dividerView; // +0x28
    UILabel * _timeLabel; // +0x30
    UILabel * _messageLabel; // +0x38
    UIButton * _actionButton; // +0x40
    id <NSObject> _notificationToken; // +0x48
    UIView * _leftDivider; // +0x50
    UIView * _rightDivider; // +0x58
    UILabel * _tailLabel; // +0x60
    CBTAsstBoardBaseViewModel * _lastTaskPeriodicalReportVM; // +0x68
}
- (void)prepareForReuse;
- (void)dealloc;
- (void)setupUI;
- (void)layoutSubviews;
- (void)setupAmoebaViewReportingWithViewModel:(id)arg1;
- (id)reportIfUnvalidForViewExp;
- (void)layoutContainerView;
- (void)layoutTitleLabel;
- (void)layoutContactRow;
- (void)layoutDivider;
- (void)layoutTimeLabel;
- (void)layoutMessageLabel;
- (void)layoutButton;
- (id)createButton;
- (void)updateButtonStyles;
- (void)layoutTailHint;
- (void)showTailHintStyle;
- (id)headerTextColor;
- (id)contactNameTextColor;
- (id)timeTextColor;
- (id)messageTextColor;
- (id)dividerColor;
- (id)tailNormalTextColor;
- (id)tailDividerColor;
- (void)buttonTouchDown:(id)arg1;
- (void)buttonTouchCancelled:(id)arg1;
- (void)buttonTapped:(id)arg1;
- (CGRect)getBubbleFrame;
- (BOOL)needsBubbleBackground;
- (id)getCellReuseId;
- (void)refreshTheme;
- (void)viewStateChangedNotification:(id)arg1;
- (id)titleLabel;
- (void)setTitleLabel:(id)arg1;
- (id)contactRowView;
- (void)setContactRowView:(id)arg1;
- (id)contactAvatarView;
- (void)setContactAvatarView:(id)arg1;
- (id)contactNameLabel;
- (void)setContactNameLabel:(id)arg1;
- (id)dividerView;
- (void)setDividerView:(id)arg1;
- (id)timeLabel;
- (void)setTimeLabel:(id)arg1;
- (id)messageLabel;
- (void)setMessageLabel:(id)arg1;
- (id)actionButton;
- (void)setActionButton:(id)arg1;
- (id)notificationToken;
- (void)setNotificationToken:(id)arg1;
- (id)leftDivider;
- (void)setLeftDivider:(id)arg1;
- (id)rightDivider;
- (void)setRightDivider:(id)arg1;
- (id)tailLabel;
- (void)setTailLabel:(id)arg1;
- (id)lastTaskPeriodicalReportVM;
- (void)setLastTaskPeriodicalReportVM:(id)arg1;
- (void).cxx_destruct;
@end
