@interface MJShootSideToolboxPanelCollectionViewCell : UICollectionViewCell
{
    MMUIImageView * _iconImageView; // +0x8
    MMUILabel * _nameLabel; // +0x10
    MMUILabel * _descLabel; // +0x18
}
- (id)initWithFrame:(CGRect)arg1;
- (void)setupWithItem:(id)arg1;
- (void)prepareForReuse;
- (void)_reset;
- (id)iconImageView;
- (void)setIconImageView:(id)arg1;
- (id)nameLabel;
- (void)setNameLabel:(id)arg1;
- (id)descLabel;
- (void)setDescLabel:(id)arg1;
- (void).cxx_destruct;
@end
