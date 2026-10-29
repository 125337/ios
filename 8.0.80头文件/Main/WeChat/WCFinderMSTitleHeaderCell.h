@interface WCFinderMSTitleHeaderCell : WCFinderMSActivityBaseCell <WCFinderDataItemExt>
{
    WCFinderHeadImageView * _avatarView; // +0x8
    UIStackView * _actionStackView; // +0x10
    UILabel * _nickNameLabel; // +0x18
    UILabel * _authorBadgeLabel; // +0x20
    UIImageView * _finderIconImageView; // +0x28
}
+ (id)cellIdentifier;
+ (CGSize)calculateDisplaySize:(CGSize)arg1 forVM:(id)arg2 cellIdentifier:(id)arg3 showSceneIntroduce:(BOOL)arg4;
+ (id)displayNameString:(id)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)onContentVMChanged;
- (void)onClickHeader;
- (void)onLongPress:(id)arg1;
- (void)onFinderDataItemUpdate:(id)arg1 scene:(int)arg2 source:(long long)arg3;
- (id)avatarView;
- (void)setAvatarView:(id)arg1;
- (id)actionStackView;
- (void)setActionStackView:(id)arg1;
- (id)nickNameLabel;
- (void)setNickNameLabel:(id)arg1;
- (id)authorBadgeLabel;
- (void)setAuthorBadgeLabel:(id)arg1;
- (id)finderIconImageView;
- (void)setFinderIconImageView:(id)arg1;
- (void).cxx_destruct;
@end
