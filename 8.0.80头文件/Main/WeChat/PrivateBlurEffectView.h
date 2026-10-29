@interface PrivateBlurEffectView : UIView
{
    UIImageView * _imageView; // +0x8
    UIImageView * _loadingIcon; // +0x10
}
- (id)initWithFrame:(CGRect)arg1;
- (void)layoutSubviews;
- (void)setBase64Image:(id)arg1;
- (void)startLoading;
- (void)stopLoading;
- (id)applyGaussianBlurToImage:(id)arg1 radius:(double)arg2;
- (id)imageView;
- (void)setImageView:(id)arg1;
- (id)loadingIcon;
- (void)setLoadingIcon:(id)arg1;
- (void).cxx_destruct;
@end
