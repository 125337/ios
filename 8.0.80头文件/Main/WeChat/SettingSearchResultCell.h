@interface SettingSearchResultCell : UITableViewCell
{
    UILabel * _titleLabel; // +0x8
    UILabel * _pathLabel; // +0x10
}
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)setupViews;
- (void)layoutSubviews;
- (void)configureWithNode:(id)arg1 highlightedTitle:(id)arg2;
- (id)titleLabel;
- (void)setTitleLabel:(id)arg1;
- (id)pathLabel;
- (void)setPathLabel:(id)arg1;
- (void).cxx_destruct;
@end
