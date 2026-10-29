@interface StorageCacheClassCell : UITableViewCell
{
    BOOL _isSelected; // +0x8
    NSString * _titleString; // +0x10
    NSString * _sizeString; // +0x18
    UIImageView * _selectIconView; // +0x20
    MMUILabel * _titleLabel; // +0x28
    MMUILabel * _sizeLabel; // +0x30
}
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)initView;
- (void)updateView;
- (void)layoutSubviews;
- (id)titleString;
- (void)setTitleString:(id)arg1;
- (id)sizeString;
- (void)setSizeString:(id)arg1;
- (BOOL)isSelected;
- (void)setIsSelected:(BOOL)arg1;
- (id)selectIconView;
- (void)setSelectIconView:(id)arg1;
- (id)titleLabel;
- (void)setTitleLabel:(id)arg1;
- (id)sizeLabel;
- (void)setSizeLabel:(id)arg1;
- (void).cxx_destruct;
@end

