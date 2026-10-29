@interface MMFinderLiveFansGroupAnchorEditTitleDetailCell : MMFinderLiveFansGroupAnchorEditTableCellBase
{
    NSString * _title; // +0x8
    NSString * _detail; // +0x10
    UILabel * _titleLabel; // +0x18
    UILabel * _detailLabel; // +0x20
}
+ (id)reuseId;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)setTitle:(id)arg1;
- (void)setDetail:(id)arg1;
- (void)layoutSubviews;
- (id)title;
- (id)detail;
- (id)titleLabel;
- (void)setTitleLabel:(id)arg1;
- (id)detailLabel;
- (void)setDetailLabel:(id)arg1;
- (void).cxx_destruct;
@end

