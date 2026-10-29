@interface CBTAsstBoardContactBadgeCellView : CBTAsstBoardBaseCellView
{
    MMHeadImageView * _avatarView; // +0x8
    UILabel * _usernameLabel; // +0x10
    NSString * _username; // +0x18
    UILabel * _titleLabel; // +0x20
}
- (id)badgeBackgroundColor;
- (id)badgeTitleColor;
- (id)badgeBorderColor;
- (void)prepareForReuse;
- (void)setupUI;
- (void)layoutSubviews;
- (void)parseData;
- (void)layoutContainerView;
- (void)layoutTitleLabel;
- (void)layoutAvatarView;
- (void)layoutUsernameLabel;
- (void)setupAmoebaViewReportingWithViewModel:(id)arg1;
- (CGRect)getBubbleFrame;
- (BOOL)needsBubbleBackground;
- (id)getCellReuseId;
- (void)refreshTheme;
- (id)avatarView;
- (void)setAvatarView:(id)arg1;
- (id)usernameLabel;
- (void)setUsernameLabel:(id)arg1;
- (id)username;
- (void)setUsername:(id)arg1;
- (id)titleLabel;
- (void)setTitleLabel:(id)arg1;
- (void).cxx_destruct;
@end
