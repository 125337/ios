@interface CBTContactRowView : UIView
{
    NSString * _username; // +0x8
    NSString * _subTitle; // +0x10
    long long _options; // +0x18
    id /* block */ _onTapped; // +0x20
    MMHeadImageView * _avatarView; // +0x28
    UILabel * _usernameLabel; // +0x30
    UILabel * _subTitleLabel; // +0x38
    MMImageView * _checkMarkView; // +0x40
    MMImageView * _arrowView; // +0x48
    UIView * _separatorView; // +0x50
    NSString * _titleName; // +0x58
    NSString * _titleCountSuffix; // +0x60
}
+ (double)rowHeightWithSubTitle:(id)arg1;
- (id)initWithFrame:(CGRect)arg1 username:(id)arg2 options:(long long)arg3;
- (id)initWithFrame:(CGRect)arg1 username:(id)arg2 subTitle:(id)arg3 options:(long long)arg4;
- (void)setupUI;
- (void)layoutAvatarView;
- (id)titleTextColor;
- (id)subTitleTextColor;
- (void)layoutUsernameLabel;
- (void)layoutSubTitleLabel;
- (void)layoutCheckMarkView;
- (void)layoutArrowView;
- (void)layoutSeparatorView;
- (void)layoutSubviews;
- (void)setGrayed:(BOOL)arg1;
- (id)username;
- (void)setUsername:(id)arg1;
- (id)subTitle;
- (void)setSubTitle:(id)arg1;
- (long long)options;
- (void)setOptions:(long long)arg1;
- (id /* block */)onTapped;
- (void)setOnTapped:(id /* block */)arg1;
- (id)avatarView;
- (void)setAvatarView:(id)arg1;
- (id)usernameLabel;
- (void)setUsernameLabel:(id)arg1;
- (id)subTitleLabel;
- (void)setSubTitleLabel:(id)arg1;
- (id)checkMarkView;
- (void)setCheckMarkView:(id)arg1;
- (id)arrowView;
- (void)setArrowView:(id)arg1;
- (id)separatorView;
- (void)setSeparatorView:(id)arg1;
- (id)titleName;
- (void)setTitleName:(id)arg1;
- (id)titleCountSuffix;
- (void)setTitleCountSuffix:(id)arg1;
- (void).cxx_destruct;
@end
