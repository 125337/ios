@interface MMFinderLiveFansGroupIntroView : UIView
{
    BOOL _highlighted; // +0x8
    MMFinderLiveFansGroupIntroViewConfig * _config; // +0x10
    UIImageView * _iconImageView; // +0x18
    UIImageView * _wecoinImageView; // +0x20
    UIImageView * _bgFanGroupImageView; // +0x28
    MMLiveColorfulLabel * _titleLabel; // +0x30
    MMLiveColorfulLabel * _priceDescLabel; // +0x38
    MMLiveColorfulLabel * _rightDetailLabel; // +0x40
    CAGradientLayer * _bgGradientLayer; // +0x48
    CAGradientLayer * _borderGradientLayer; // +0x50
}
- (id)initWithConfig:(id)arg1;
- (void)resizeToFitWidth;
- (void)initUI;
- (id)buildColorfulLabel;
- (void)updateColorfulLabelColor:(id)arg1;
- (void)reloadUI;
- (void)createGradientLayers;
- (void)clearGradientLayers;
- (void)layoutSubviews;
- (CGSize)getIconImageSize;
- (id)getIconImage;
- (id)getWecoinImage;
- (id)getFanBGImage;
- (void)setHighlighted:(BOOL)arg1;
- (BOOL)highlighted;
- (id)config;
- (void)setConfig:(id)arg1;
- (id)iconImageView;
- (void)setIconImageView:(id)arg1;
- (id)wecoinImageView;
- (void)setWecoinImageView:(id)arg1;
- (id)bgFanGroupImageView;
- (void)setBgFanGroupImageView:(id)arg1;
- (id)titleLabel;
- (void)setTitleLabel:(id)arg1;
- (id)priceDescLabel;
- (void)setPriceDescLabel:(id)arg1;
- (id)rightDetailLabel;
- (void)setRightDetailLabel:(id)arg1;
- (id)bgGradientLayer;
- (void)setBgGradientLayer:(id)arg1;
- (id)borderGradientLayer;
- (void)setBorderGradientLayer:(id)arg1;
- (void).cxx_destruct;
@end
