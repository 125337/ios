@interface MMFinderLiveCompleteViewReplaySettingsCheckboxCell : UITableViewCell
{
    UIImageView * _checkboxIconView; // +0x8
    UILabel * _titleLabel; // +0x10
    UIView * _separatorBar; // +0x18
}
+ (id)reuseId;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (id)title;
- (void)setTitle:(id)arg1;
- (void)setSelected:(BOOL)arg1 animated:(BOOL)arg2;
- (void)setSeparatorInset:(UIEdgeInsets)arg1;
- (void)layoutSubviews;
- (id)checkboxIconView;
- (void)setCheckboxIconView:(id)arg1;
- (id)titleLabel;
- (void)setTitleLabel:(id)arg1;
- (id)separatorBar;
- (void)setSeparatorBar:(id)arg1;
- (void).cxx_destruct;
@end

