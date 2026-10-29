@interface WCFinderTemplateMusicSelectEntranceView : UIView
{
    id <WCFinderTemplateMusicSelectEntranceViewDelegate> _delegate; // +0x8
    MMUIImageView * _musicIconView; // +0x10
    UILabel * _musicTitleLabel; // +0x18
    MMUIImageView * _arrowView; // +0x20
    UIView * _gradientMaskView; // +0x28
    CAGradientLayer * _gradientLayer; // +0x30
}
+ (CGSize)viewSuggestSizeWithMaxW:(double)arg1;
+ (double)viewMargin;
+ (double)viewHeight;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(CGRect)arg1;
- (void)commonInit;
- (void)setupViews;
- (void)setupGesture;
- (void)commonLayoutSubViews;
- (void)updateWithTitle:(id)arg1;
- (void)onTap:(id)arg1;
- (void)startAnimation;
- (void)stopAnimation;
- (void)stopAnimationAndCenterDisplay;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)musicIconView;
- (void)setMusicIconView:(id)arg1;
- (id)musicTitleLabel;
- (void)setMusicTitleLabel:(id)arg1;
- (id)arrowView;
- (void)setArrowView:(id)arg1;
- (id)gradientMaskView;
- (void)setGradientMaskView:(id)arg1;
- (id)gradientLayer;
- (void)setGradientLayer:(id)arg1;
- (void).cxx_destruct;
@end
