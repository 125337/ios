@interface MJActionPanelMainMenuItemCell : UICollectionViewCell
{
    UILabel * _titleLabel; // +0x8
    MMWebImageView * _iconImageView; // +0x10
}
- (id)initWithFrame:(CGRect)arg1;
- (id)initWithCoder:(id)arg1;
- (void)commonInit;
- (void)configWithItem:(id)arg1;
- (id)titleLabel;
- (void)setTitleLabel:(id)arg1;
- (id)iconImageView;
- (void)setIconImageView:(id)arg1;
- (void).cxx_destruct;
@end

