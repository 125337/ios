@interface WCFinderVideoTemplateSelectCollectionViewCell : UICollectionViewCell <MMWebImageViewDelegate>
{
    MMWebImageView * _imageView; // +0x8
    MMUIActivityIndicatorView * _customLoadingView; // +0x10
}
+ (id)cellID;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(CGRect)arg1;
- (void)setup;
- (void)setTemplate:(id)arg1;
- (void)setCoverUrl:(id)arg1;
- (void)showBorder:(BOOL)arg1;
- (void)onLoadImageOK:(id)arg1;
- (id)imageView;
- (void)setImageView:(id)arg1;
- (id)customLoadingView;
- (void)setCustomLoadingView:(id)arg1;
- (void).cxx_destruct;
@end

