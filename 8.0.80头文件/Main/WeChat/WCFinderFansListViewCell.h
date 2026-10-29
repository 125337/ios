@interface WCFinderFansListViewCell : MMMultiMenuTableViewCell
{
    UILabel * _nickName; // +0x40
    WCFinderHeadImageView * _headImageView; // +0x48
    UIView * _separator; // +0x50
    UIImageView * _finderLogoView; // +0x58
    UIImageView * _authIconImageView; // +0x60
    WCFinderUserRelationshipTagLabel * _userTagLabel; // +0x68
}
+ (double)cellHeight;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)setUpUI;
- (void)prepareForReuse;
- (void)updateWithContact:(id)arg1;
- (void)updateUserTagWithContact:(id)arg1;
- (void)showSeparator:(BOOL)arg1;
- (void)setupRevertMenu;
- (void)setupDeleteMenu;
- (id)nickName;
- (id)headImageView;
- (id)separator;
- (void)layoutSubviews;
- (void)setNickName:(id)arg1;
- (void)setHeadImageView:(id)arg1;
- (void)setSeparator:(id)arg1;
- (id)finderLogoView;
- (void)setFinderLogoView:(id)arg1;
- (id)authIconImageView;
- (void)setAuthIconImageView:(id)arg1;
- (id)userTagLabel;
- (void)setUserTagLabel:(id)arg1;
- (void).cxx_destruct;
@end
