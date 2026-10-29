@interface MMFinderLiveFansGroupAnchorEditInfoCell : MMFinderLiveFansGroupAnchorEditTableCellBase
{
    unsigned long long _layoutStyle; // +0x8
    UILabel * _lineLabel; // +0x10
    UILabel * _titleLabel; // +0x18
    UILabel * _descLabel; // +0x20
    MMWebImageView * _webImageView; // +0x28
}
+ (id)reuseId;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)initUI;
- (void)layoutSubviews;
- (void)configWithTitle:(id)arg1 desc:(id)arg2 imgUrl:(id)arg3 image:(id)arg4;
- (id)getTitle;
- (void)setLayoutStyle:(unsigned long long)arg1;
- (id)lineLabel;
- (id)titleLabel;
- (id)descLabel;
- (id)webImageView;
- (unsigned long long)layoutStyle;
- (void)setLineLabel:(id)arg1;
- (void)setTitleLabel:(id)arg1;
- (void)setDescLabel:(id)arg1;
- (void)setWebImageView:(id)arg1;
- (void).cxx_destruct;
@end
