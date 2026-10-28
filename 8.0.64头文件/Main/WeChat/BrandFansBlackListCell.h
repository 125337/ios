@interface BrandFansBlackListCell : MMBaseMultiMenuTableViewCell
{
    UIImageView * _avatarImageView; // +0x38
    UILabel * _nameLabel; // +0x40
    InteractiveUserInfo * _userInfo; // +0x48
}
+ (id)reuseIdentifier;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)setupUI;
- (void)prepareForReuse;
- (void)updateWithUserInfo:(id)arg1;
- (id)avatarImageView;
- (void)setAvatarImageView:(id)arg1;
- (id)nameLabel;
- (void)setNameLabel:(id)arg1;
- (id)userInfo;
- (void)setUserInfo:(id)arg1;
- (void).cxx_destruct;
@end
