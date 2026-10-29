@interface WCFinderRefuseLikeListTableViewCell : MMMultiMenuTableViewCell
{
    BOOL _separatorAlignAvatarLeft; // +0x40
    UILabel * _nickName; // +0x48
    WCFinderHeadImageView * _headImageView; // +0x50
    UIView * _separator; // +0x58
}
+ (id)cellId;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)prepareForReuse;
- (void)updateWithNameHeadInfo:(id)arg1;
- (void)showSeparator:(BOOL)arg1;
- (id)nickName;
- (id)headImageView;
- (id)separator;
- (BOOL)separatorAlignAvatarLeft;
- (void)setSeparatorAlignAvatarLeft:(BOOL)arg1;
- (void)setNickName:(id)arg1;
- (void)setHeadImageView:(id)arg1;
- (void)setSeparator:(id)arg1;
- (void).cxx_destruct;
@end

