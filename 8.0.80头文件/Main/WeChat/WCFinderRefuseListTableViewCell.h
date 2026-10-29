@interface WCFinderRefuseListTableViewCell : MMMultiMenuTableViewCell
{
    UILabel * _nickName; // +0x40
    WCFinderHeadImageView * _headImageView; // +0x48
    UIView * _separator; // +0x50
}
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)prepareForReuse;
- (void)updateWithContact:(id)arg1;
- (void)showSeparator:(BOOL)arg1;
- (void)setupRevertMenu;
- (void)setupDeleteMenu;
- (id)nickName;
- (id)headImageView;
- (id)separator;
- (void)setNickName:(id)arg1;
- (void)setHeadImageView:(id)arg1;
- (void)setSeparator:(id)arg1;
- (void).cxx_destruct;
@end
