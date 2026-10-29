@interface MMFinderLiveConnectMicModePageSheetNavigatingCell : UITableViewCell
{
    UILabel * _titleLabel; // +0x8
    UILabel * _valueLabel; // +0x10
    UIImageView * _rightChevronView; // +0x18
    UIView * _separatorBar; // +0x20
}
+ (id)reuseId;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (id)title;
- (void)setTitle:(id)arg1;
- (id)value;
- (void)setValue:(id)arg1;
- (void)layoutSubviews;
- (id)titleLabel;
- (void)setTitleLabel:(id)arg1;
- (id)valueLabel;
- (void)setValueLabel:(id)arg1;
- (id)rightChevronView;
- (void)setRightChevronView:(id)arg1;
- (id)separatorBar;
- (void)setSeparatorBar:(id)arg1;
- (void).cxx_destruct;
@end
