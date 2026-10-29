@interface MJShootComposingFaceGeneratingCoverView : UIView
{
    UIVisualEffectView * _blurView; // +0x8
    MMWebImageView * _imageView; // +0x10
}
- (id)initWithFrame:(CGRect)arg1;
- (id)initWithCoder:(id)arg1;
- (void)setupViews;
- (void)setImageURL:(id)arg1;
- (id)blurView;
- (void)setBlurView:(id)arg1;
- (id)imageView;
- (void)setImageView:(id)arg1;
- (void).cxx_destruct;
@end
