@interface WCFinderMentionSearchContactTableViewCell : UITableViewCell
{
    WCFinderHeadImageView * _avatarImageView; // +0x8
    FavAttributeCPLabel * _nickNameLabel; // +0x10
    WCFinderAuthInfoIconView * _authInfoIconView; // +0x18
    AttributeLabel * _authInfoLabel; // +0x20
    UIView * _separatorLine; // +0x28
    WCFinderSearchInfo * _searchInfo; // +0x30
}
+ (double)cellHeightWith:(id)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)awakeFromNib;
- (void)setSelected:(BOOL)arg1 animated:(BOOL)arg2;
- (void)prepareForReuse;
- (void)updateUIWith:(id)arg1 isShowSeparatorLine:(BOOL)arg2 shouldHideFollow:(BOOL)arg3;
- (void)layoutSubviews;
- (id)getAttributeText:(id)arg1;
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
- (id)searchInfo;
- (void)setSearchInfo:(id)arg1;
- (void).cxx_destruct;
@end
