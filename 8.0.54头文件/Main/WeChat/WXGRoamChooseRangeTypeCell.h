@interface WXGRoamChooseRangeTypeCell : UITableViewCell
{
    UIImageView * _iconView; // +0x8
    UILabel * _titleLabel; // +0x10
    UIImageView * _selectedIcon; // +0x18
    UIImageView * _rightIcon; // +0x20
}
+ (double)cellHeight;
- (void)setCellWidth:(double)arg1 index:(long long)arg2 type:(unsigned long long)arg3 count:(long long)arg4;
- (id)iconView;
- (void)setIconView:(id)arg1;
- (id)titleLabel;
- (void)setTitleLabel:(id)arg1;
- (id)selectedIcon;
- (void)setSelectedIcon:(id)arg1;
- (id)rightIcon;
- (void)setRightIcon:(id)arg1;
- (void).cxx_destruct;
@end

