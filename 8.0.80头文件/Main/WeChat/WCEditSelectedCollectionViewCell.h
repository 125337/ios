@interface WCEditSelectedCollectionViewCell : UICollectionViewCell
{
    UIImageView * _imageView; // +0x8
    UIColor * _borderLineColor; // +0x10
    UIImageView * _tagBgView; // +0x18
    UILabel * _gifLogoView; // +0x20
}
- (id)initWithFrame:(CGRect)arg1;
- (void)setupSubviews;
- (void)showGifLogo:(CGRect)arg1;
- (void)hideGifLogo;
- (id)imageView;
- (id)borderLineColor;
- (void)showBorder:(BOOL)arg1;
- (void)setImageView:(id)arg1;
- (void)setBorderLineColor:(id)arg1;
- (id)tagBgView;
- (void)setTagBgView:(id)arg1;
- (id)gifLogoView;
- (void)setGifLogoView:(id)arg1;
- (void).cxx_destruct;
@end
