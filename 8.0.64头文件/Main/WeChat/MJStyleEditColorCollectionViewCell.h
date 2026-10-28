@interface MJStyleEditColorCollectionViewCell : UICollectionViewCell <MJStyleEditCollectionViewCellProtocol>
{
    MMWebImageView * _imageView; // +0x8
    UIView * _selectedView; // +0x10
}
- (id)initWithFrame:(CGRect)arg1;
- (void)setupViews;
- (void)prepareForReuse;
- (void)updateImageWith:(id)arg1;
- (void)updateSelected:(id)arg1;
- (id)imageView;
- (id)selectedView;
- (void)setImageView:(id)arg1;
- (void)setSelectedView:(id)arg1;
- (void).cxx_destruct;
@end
