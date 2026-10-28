@interface MMLongImageCropTipsView : UIView
{
    CAGradientLayer * _gradientLayer; // +0x8
    UIImageView * _iconImgView; // +0x10
    MMUILabel * _tipsLabel; // +0x18
}
- (void)setupSubviewsWithIconImage:(id)arg1 labelText:(id)arg2 gradientLayerLocations:(id)arg3 gradientLayerColors:(id)arg4;
- (void)layoutSubviews;
- (id)gradientLayer;
- (void)setGradientLayer:(id)arg1;
- (id)iconImgView;
- (void)setIconImgView:(id)arg1;
- (id)tipsLabel;
- (void)setTipsLabel:(id)arg1;
- (void).cxx_destruct;
@end
