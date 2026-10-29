@interface CBTCoopSubAgentInfoCellView : CBTAsstBoardBaseCellView
{
    MMHeadImageView * _avatarView; // +0x8
    UILabel * _nicknameLabel; // +0x10
    UIButton * _removeButton; // +0x18
}
+ (double)infoAvatarSize;
+ (double)infoAvatarToTextSpacing;
+ (double)infoRemoveBtnLeftMargin;
- (BOOL)disablesLongPressMenu;
- (void)prepareForReuse;
- (id)subAgentInfoViewModel;
- (void)setupCellWithViewModel:(id)arg1;
- (void)setupUI;
- (void)layoutAvatarView;
- (void)layoutNicknameLabel;
- (void)layoutRemoveButton;
- (double)estimateRemoveButtonWidth;
- (void)onRemoveButtonClicked;
- (void)traitCollectionDidChange:(id)arg1;
- (void)refreshTheme;
- (id)avatarView;
- (void)setAvatarView:(id)arg1;
- (id)nicknameLabel;
- (void)setNicknameLabel:(id)arg1;
- (id)removeButton;
- (void)setRemoveButton:(id)arg1;
- (void).cxx_destruct;
@end
