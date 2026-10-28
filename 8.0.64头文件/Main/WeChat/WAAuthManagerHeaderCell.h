@interface WAAuthManagerHeaderCell : UICollectionViewCell <ZZFlexibleLayoutViewProtocol>
{
    MMWebImageView * _iconView; // +0x8
    UILabel * _nameLabel; // +0x10
    UILabel * _titleLabel; // +0x18
}
+ (double)viewHeightByDataModel:(id)arg1;
- (void)setViewDataModel:(id)arg1;
- (id)initWithFrame:(CGRect)arg1;
- (id)iconView;
- (void)setIconView:(id)arg1;
- (id)nameLabel;
- (void)setNameLabel:(id)arg1;
- (id)titleLabel;
- (void)setTitleLabel:(id)arg1;
- (void).cxx_destruct;
@end
