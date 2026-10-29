@interface TextStateEmojiBoardIconCollectionCell : UICollectionViewCell
{
    TextStateIcon * _iconWrap; // +0x8
    MMWebImageView * _imageView; // +0x10
    UIImage * _iconImage; // +0x18
}
- (id)initWithFrame:(CGRect)arg1;
- (void)layoutSubviews;
- (id)imageView;
- (void)setIconWrap:(id)arg1;
- (id)iconWrap;
- (void)setImageView:(id)arg1;
- (id)iconImage;
- (void)setIconImage:(id)arg1;
- (void).cxx_destruct;
@end

