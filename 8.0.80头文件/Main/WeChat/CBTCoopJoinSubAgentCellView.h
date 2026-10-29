@interface CBTCoopJoinSubAgentCellView : CBTAsstBoardBaseCellView
{
    MMUIView * _contentContainer; // +0x8
    UILabel * _titleLabel; // +0x10
    MMHeadImageView * _avatarView; // +0x18
    UILabel * _nicknameLabel; // +0x20
    UIView * _aiTagView; // +0x28
    UILabel * _aiTagLabel; // +0x30
    UILabel * _descLabel; // +0x38
    UIImageView * _verifiedIcon; // +0x40
    UIButton * _actionButton; // +0x48
}
+ (double)joinCardPadding;
+ (double)joinAvatarSize;
+ (double)joinAITagHeight;
+ (double)joinAITagHPadding;
+ (double)joinButtonHeight;
- (BOOL)disablesLongPressMenu;
- (void)prepareForReuse;
- (id)joinSubAgentViewModel;
- (void)setupCellWithViewModel:(id)arg1;
- (void)setupUI;
- (void)layoutContentContainer;
- (void)layoutTitleLabel;
- (void)layoutAvatarAndInfo;
- (void)layoutActionButton;
- (void)applyActionButtonDefaultStyle;
- (void)applyActionButtonClickedStyle;
- (void)onActionButtonClicked;
- (void)setupLongPressGesture;
- (void)traitCollectionDidChange:(id)arg1;
- (void)refreshTheme;
- (id)contentContainer;
- (void)setContentContainer:(id)arg1;
- (id)titleLabel;
- (void)setTitleLabel:(id)arg1;
- (id)avatarView;
- (void)setAvatarView:(id)arg1;
- (id)nicknameLabel;
- (void)setNicknameLabel:(id)arg1;
- (id)aiTagView;
- (void)setAiTagView:(id)arg1;
- (id)aiTagLabel;
- (void)setAiTagLabel:(id)arg1;
- (id)descLabel;
- (void)setDescLabel:(id)arg1;
- (id)verifiedIcon;
- (void)setVerifiedIcon:(id)arg1;
- (id)actionButton;
- (void)setActionButton:(id)arg1;
- (void).cxx_destruct;
@end
