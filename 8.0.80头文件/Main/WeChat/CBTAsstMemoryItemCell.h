@interface CBTAsstMemoryItemCell : UITableViewCell
{
    BOOL _menuHighlighted; // +0x8
    UILabel * _titleLabel; // +0x10
    UIImageView * _arrowView; // +0x18
    UIView * _separatorView; // +0x20
}
+ (double)preferredHeightForTitle:(id)arg1 width:(double)arg2;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)layoutSubviews;
- (void)updateWithTitle:(id)arg1 showSeparator:(BOOL)arg2;
- (void)setMenuHighlighted:(BOOL)arg1;
- (id)titleLabel;
- (void)setTitleLabel:(id)arg1;
- (id)arrowView;
- (void)setArrowView:(id)arg1;
- (id)separatorView;
- (void)setSeparatorView:(id)arg1;
- (BOOL)menuHighlighted;
- (void).cxx_destruct;
@end
