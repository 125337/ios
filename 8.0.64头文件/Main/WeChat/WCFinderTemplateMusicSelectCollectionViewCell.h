@interface WCFinderTemplateMusicSelectCollectionViewCell : UICollectionViewCell
{
    UIView * _gradientMaskView; // +0x8
    CAGradientLayer * _gradientLayer; // +0x10
    UILabel * _infoLabel; // +0x18
    MMUIImageView * _imageView; // +0x20
    WCStoryLyricWaveView * _waveView; // +0x28
}
+ (id)cellID;
- (id)initWithFrame:(CGRect)arg1;
- (id)initWithCoder:(id)arg1;
- (void)commonInit;
- (void)prepareForReuse;
- (void)setupViews;
- (void)updateWithInfo:(id)arg1;
- (void)setSelectState:(BOOL)arg1;
- (void)startAnimating;
- (void)stopAnimating;
- (void)startLyricAnimation;
- (void)stopLyricAnimation;
- (id)gradientMaskView;
- (void)setGradientMaskView:(id)arg1;
- (id)gradientLayer;
- (void)setGradientLayer:(id)arg1;
- (id)infoLabel;
- (void)setInfoLabel:(id)arg1;
- (id)imageView;
- (void)setImageView:(id)arg1;
- (id)waveView;
- (void)setWaveView:(id)arg1;
- (void).cxx_destruct;
@end
