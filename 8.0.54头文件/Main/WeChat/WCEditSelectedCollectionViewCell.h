@interface WCEditSelectedCollectionViewCell : UICollectionViewCell
{
    UIImageView * _imageView; // +0x8
    UIColor * _borderLineColor; // +0x10
}
- (id)initWithFrame:(CGRect)arg1;
- (void)prepareForReuse;
- (void)setupSubviews;
- (id)imageView;
- (id)borderLineColor;
- (void)showBorder:(BOOL)arg1;
- (void)setImageView:(id)arg1;
- (void)setBorderLineColor:(id)arg1;
- (void).cxx_destruct;
@end

