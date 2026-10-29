@interface WCFinderMentionUserContactTableViewCell : MMTableViewCell
{
    WCFinderHeadImageView * _avatarImageView; // +0x8
    AttributeLabel * _nickNameLabel; // +0x10
    WCFinderAuthInfoIconView * _authInfoIconView; // +0x18
    AttributeLabel * _authInfoLabel; // +0x20
    UIView * _separatorLine; // +0x28
}
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)initSubview;
- (void)prepareForReuse;
- (void)updateUIWith:(id)arg1 isShowSeparatorLine:(BOOL)arg2;
- (void)layoutSubviews;
- (CGSize)systemLayoutSizeFittingSize:(CGSize)arg1;
- (CGSize)sizeThatFits:(CGSize)arg1;
- (id)avatarImageView;
- (void)setAvatarImageView:(id)arg1;
- (id)nickNameLabel;
- (void)setNickNameLabel:(id)arg1;
- (id)authInfoIconView;
- (void)setAuthInfoIconView:(id)arg1;
- (id)authInfoLabel;
- (void)setAuthInfoLabel:(id)arg1;
- (id)separatorLine;
- (void)setSeparatorLine:(id)arg1;
- (void).cxx_destruct;
@end
