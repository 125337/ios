@interface WCMomentsUserTableViewCell : MMTableViewCell
{
    CContact * _userContact; // +0x8
    MMHeadImageView * _headerView; // +0x10
    UILabel * _nicknameLabel; // +0x18
    UIView * _separatorLine; // +0x20
}
+ (id)defaultIdentifier;
+ (double)heightForTableView:(id)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)setUserContact:(id)arg1;
- (void)loadSubviews;
- (void)layoutSubviews;
- (id)userContact;
- (id)headerView;
- (void)setHeaderView:(id)arg1;
- (id)nicknameLabel;
- (void)setNicknameLabel:(id)arg1;
- (id)separatorLine;
- (void)setSeparatorLine:(id)arg1;
- (void).cxx_destruct;
@end
