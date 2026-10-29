@interface WAMainFrameTaskBarAIUseWeAppButton : UIButton
{
    BOOL _isInDarkMode; // +0x8
    double _sugCapsuleHeight; // +0x10
    id /* block */ _onTapHandler; // +0x18
    id /* block */ _onLongPressHandler; // +0x20
    CAGradientLayer * _bgGradientLayer; // +0x28
    UIView * _capsuleView; // +0x30
    UIImageView * _iconView; // +0x38
    UILabel * _titleLab; // +0x40
    UILabel * _subtitleLab; // +0x48
    double _pressBeganMediaTime; // +0x50
    double _cachedTitleTextWidth; // +0x58
    double _cachedSubtitleTextWidth; // +0x60
    UIFont * _cachedMeasuredTitleFont; // +0x68
    UIFont * _cachedMeasuredSubtitleFont; // +0x70
}
+ (double)defaultWidth;
+ (double)defaultHeight;
+ (id)aiUseWeAppIconImageWithColor:(id)arg1;
- (id)initWithFrame:(CGRect)arg1;
- (void)dealloc;
- (void)setupAppearance;
- (void)detectDarkMode;
- (void)mm_onColorAppearanceDidChange;
- (void)refreshAppearanceColors;
- (void)updateBackgroundVisibilityForProgress:(double)arg1;
- (void)setAlpha:(double)arg1;
- (void)layoutSubviews;
- (double)titleTextWidth;
- (double)subtitleTextWidth;
- (void)invalidateTextWidthCache;
- (id)displayTitleText;
- (id)displaySubtitleText;
- (void)updateTitleText:(id)arg1 subtitleText:(id)arg2;
- (double)labelMaxWidthForCapsuleWidth:(double)arg1;
- (double)displayTitleWidthForCapsuleWidth:(double)arg1;
- (double)displaySubtitleWidthForCapsuleWidth:(double)arg1;
- (BOOL)hasSubtitle;
- (double)capsuleHeight;
- (double)noSugHeight;
- (double)sugCapsuleBottomOffset;
- (double)preferredHeight;
- (CGRect)capsuleFrame;
- (BOOL)pointInside:(CGPoint)arg1 withEvent:(id)arg2;
- (void)onButtonTapped;
- (void)onButtonLongPressed:(id)arg1;
- (double)sugCapsuleHeight;
- (void)setSugCapsuleHeight:(double)arg1;
- (id /* block */)onTapHandler;
- (void)setOnTapHandler:(id /* block */)arg1;
- (id /* block */)onLongPressHandler;
- (void)setOnLongPressHandler:(id /* block */)arg1;
- (BOOL)isInDarkMode;
- (void)setIsInDarkMode:(BOOL)arg1;
- (id)bgGradientLayer;
- (void)setBgGradientLayer:(id)arg1;
- (id)capsuleView;
- (void)setCapsuleView:(id)arg1;
- (id)iconView;
- (void)setIconView:(id)arg1;
- (id)titleLab;
- (void)setTitleLab:(id)arg1;
- (id)subtitleLab;
- (void)setSubtitleLab:(id)arg1;
- (double)pressBeganMediaTime;
- (void)setPressBeganMediaTime:(double)arg1;
- (double)cachedTitleTextWidth;
- (void)setCachedTitleTextWidth:(double)arg1;
- (double)cachedSubtitleTextWidth;
- (void)setCachedSubtitleTextWidth:(double)arg1;
- (id)cachedMeasuredTitleFont;
- (void)setCachedMeasuredTitleFont:(id)arg1;
- (id)cachedMeasuredSubtitleFont;
- (void)setCachedMeasuredSubtitleFont:(id)arg1;
- (void).cxx_destruct;
@end
