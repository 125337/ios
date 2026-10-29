@interface SightThumbImageCollectionViewCell : UICollectionViewCell
{
    UIImage * _image; // +0x8
    UIImageView * _imageView; // +0x10
    NSIndexPath * _currentIndexPath; // +0x18
}
- (id)initWithFrame:(CGRect)arg1;
- (void)layoutSubviews;
- (void)prepareForReuse;
- (void)setImage:(id)arg1;
- (void)setImage:(id)arg1 animated:(BOOL)arg2;
- (id)image;
- (id)imageView;
- (void)setImageView:(id)arg1;
- (id)currentIndexPath;
- (void)setCurrentIndexPath:(id)arg1;
- (void).cxx_destruct;
@end

