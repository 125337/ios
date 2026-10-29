@interface FTSTitleCell : MMTableViewCell
{
    UILabel * _titleLabel; // +0x8
    UIView * _topLine; // +0x10
    UIView * _lineView; // +0x18
}
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)initView;
- (void)updateTitle:(id)arg1;
- (double)getTopMargin;
- (void)layoutSubviews;
- (void).cxx_destruct;
@end
