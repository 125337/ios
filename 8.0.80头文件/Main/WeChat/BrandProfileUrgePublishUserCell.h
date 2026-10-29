@interface BrandProfileUrgePublishUserCell : MMTableViewCell
{
    UIImageView * _avatarImageView; // +0x8
    UILabel * _nameLabel; // +0x10
    UIStackView * _nameStackView; // +0x18
    UIImageView * _serviceTypeIconView; // +0x20
    UIView * _separatorView; // +0x28
    NSString * _headImageURL; // +0x30
}
+ (id)reuseIdentifier;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)setupUI;
- (void)prepareForReuse;
- (void)updateWithUserInfo:(id)arg1 showsSeparator:(BOOL)arg2;
- (id)avatarImageView;
- (void)setAvatarImageView:(id)arg1;
- (id)nameLabel;
- (void)setNameLabel:(id)arg1;
- (id)nameStackView;
- (void)setNameStackView:(id)arg1;
- (id)serviceTypeIconView;
- (void)setServiceTypeIconView:(id)arg1;
- (id)separatorView;
- (void)setSeparatorView:(id)arg1;
- (id)headImageURL;
- (void)setHeadImageURL:(id)arg1;
- (void).cxx_destruct;
@end
