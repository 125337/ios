@interface WCFinderProfileCoverView : UIView
{
    WCFinderBGCover * _cover; // +0x8
    UIImageView * _imageView; // +0x10
    CALayer * _maskLayer; // +0x18
    CAGradientLayer * _gradientLayer; // +0x20
}
- (id)initWithFrame:(CGRect)arg1;
- (void)setCover:(id)arg1;
- (void)reloadCover;
- (void)parseCoverColor:(id)arg1;
- (void)updateGradientColor:(id)arg1;
- (void)layoutSubviews;
- (id)cover;
- (id)imageView;
- (void)setImageView:(id)arg1;
- (id)maskLayer;
- (void)setMaskLayer:(id)arg1;
- (id)gradientLayer;
- (void)setGradientLayer:(id)arg1;
- (void).cxx_destruct;
@end

