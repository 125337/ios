@interface CBTAsstBoardTextWithButtonCellView : CBTAsstBoardBaseCellView
{
    UILabel * _titleLabel; // +0x8
    MMHeadImageView * _avatarView; // +0x10
    UILabel * _usernameLabel; // +0x18
    UILabel * _contentLabel; // +0x20
    UIButton * _actionButton; // +0x28
    id <NSObject> _notificationToken; // +0x30
}
- (void)prepareForReuse;
- (void)dealloc;
- (void)setupUI;
- (void)layoutSubviews;
- (void)parseData;
- (void)layoutTitleLabel;
- (void)layoutUserInfoView;
- (void)layoutContainerView;
- (void)layoutContentLabel;
- (void)layoutActionButton;
- (void)updateButtonStyle;
- (void)buttonTouchDown:(id)arg1;
- (void)buttonTouchCancelled:(id)arg1;
- (CGRect)getBubbleFrame;
- (BOOL)needsBubbleBackground;
- (id)getCellReuseId;
- (void)refreshTheme;
- (void)buttonTapped:(id)arg1;
- (void)viewStateChangedNotification:(id)arg1;
- (void)setupAmoebaViewReportingWithViewModel:(id)arg1;
- (id)titleLabel;
- (void)setTitleLabel:(id)arg1;
- (id)avatarView;
- (void)setAvatarView:(id)arg1;
- (id)usernameLabel;
- (void)setUsernameLabel:(id)arg1;
- (id)contentLabel;
- (void)setContentLabel:(id)arg1;
- (id)actionButton;
- (void)setActionButton:(id)arg1;
- (id)notificationToken;
- (void)setNotificationToken:(id)arg1;
- (void).cxx_destruct;
@end
