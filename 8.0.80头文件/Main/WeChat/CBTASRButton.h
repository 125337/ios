@interface CBTASRButton : UIButton
{
    CBTASRBoard * _asrBoard; // +0x8
    BOOL _hasWrappedBoardVisibility; // +0x10
    BOOL _isInDarkMode; // +0x11
    BOOL _hasAppliedCapsuleStyle; // +0x12
    BOOL _lastAppliedStyleDark; // +0x13
    long long _colorMode; // +0x18
    double _capsuleHorizontalMargin; // +0x20
    double _sugCapsuleHeight; // +0x28
    long long _capsuleVerticalAlignment; // +0x30
    long long _capsuleHorizontalAlignment; // +0x38
    UIImage * _iconImage; // +0x40
    UIColor * _titleColor; // +0x48
    UIColor * _subtitleColor; // +0x50
    UIFont * _titleFont; // +0x58
    UIFont * _subtitleFont; // +0x60
    id /* block */ _onTapHandler; // +0x68
    id /* block */ _onLongPressHandler; // +0x70
    id /* block */ _headlessBridgeProvider; // +0x78
    UIView * _capsuleView; // +0x80
    UIImageView * _iconView; // +0x88
    UILabel * _titleLab; // +0x90
    UILabel * _subtitleLab; // +0x98
    CAGradientLayer * _bgGradientLayer; // +0xa0
    CALayer * _bgSolidLayer; // +0xa8
    double _pressBeganMediaTime; // +0xb0
    double _cachedTitleTextWidth; // +0xb8
    double _cachedSubtitleTextWidth; // +0xc0
    UIFont * _cachedMeasuredTitleFont; // +0xc8
    UIFont * _cachedMeasuredSubtitleFont; // +0xd0
    CBTHeadlessBridge * _headlessBridge; // +0xd8
}
+ (double)defaultWidth;
+ (double)defaultHeight;
+ (id)iconImageWithColor:(id)arg1;
- (id)initWithFrame:(CGRect)arg1;
- (id)initWithTitleText:(id)arg1 subtitleText:(id)arg2;
- (id)initWithColorMode:(long long)arg1;
- (void)dealloc;
- (void)setCapsuleHorizontalMargin:(double)arg1;
- (void)setSugCapsuleHeight:(double)arg1;
- (void)setCapsuleVerticalAlignment:(long long)arg1;
- (void)setCapsuleHorizontalAlignment:(long long)arg1;
- (void)setColorMode:(long long)arg1;
- (void)setIconImage:(id)arg1;
- (void)setTitleColor:(id)arg1;
- (void)setSubtitleColor:(id)arg1;
- (void)setTitleFont:(id)arg1;
- (void)setSubtitleFont:(id)arg1;
- (void)setupAppearance;
- (void)setupBackgroundLayers;
- (void)setupCapsuleView;
- (void)setupContentViews;
- (void)detectDarkMode;
- (BOOL)isEffectiveDarkMode;
- (void)applyCapsuleStyle;
- (void)mm_onColorAppearanceDidChange;
- (void)refreshAppearanceColors;
- (void)layoutSubviews;
- (void)layoutCapsuleContentViews;
- (double)titleTextWidth;
- (double)subtitleTextWidth;
- (void)invalidateTextWidthCache;
- (id)displayTitleText;
- (id)displaySubtitleText;
- (void)updateTitleText:(id)arg1 subtitleText:(id)arg2;
- (double)labelMaxWidthForCapsuleWidth:(double)arg1;
- (double)displayTitleWidthForCapsuleWidth:(double)arg1;
- (double)displaySubtitleWidthForCapsuleWidth:(double)arg1;
- (double)gradientHeight;
- (double)preferredHeight;
- (CGRect)capsuleFrame;
- (BOOL)pointInside:(CGPoint)arg1 withEvent:(id)arg2;
- (double)capsuleHeight;
- (double)capsuleMinWidth;
- (double)capsuleHorizontalPadding;
- (double)solidVerticalInset;
- (double)solidHeight;
- (double)sugGradientTopPadding;
- (double)heightWithoutSug;
- (double)iconSideLength;
- (double)iconTitleGap;
- (double)titleRowHeight;
- (double)subtitleRowHeight;
- (double)tapMaxDuration;
- (id)backgroundSolidColor;
- (id)capsuleTintColor;
- (void)applyCapsuleShadow;
- (id)currentIconImage;
- (void)onButtonTapped;
- (void)onButtonLongPressed:(id)arg1;
- (id)asrBoard;
- (void)prepareDefaultVoiceChain;
- (void)wrapAsrBoardVisibilityCallbackIfNeeded;
- (long long)colorMode;
- (double)capsuleHorizontalMargin;
- (double)sugCapsuleHeight;
- (long long)capsuleVerticalAlignment;
- (long long)capsuleHorizontalAlignment;
- (id)iconImage;
- (id)titleColor;
- (id)subtitleColor;
- (id)titleFont;
- (id)subtitleFont;
- (id /* block */)onTapHandler;
- (void)setOnTapHandler:(id /* block */)arg1;
- (id /* block */)onLongPressHandler;
- (void)setOnLongPressHandler:(id /* block */)arg1;
- (id /* block */)headlessBridgeProvider;
- (void)setHeadlessBridgeProvider:(id /* block */)arg1;
- (id)capsuleView;
- (void)setCapsuleView:(id)arg1;
- (id)iconView;
- (void)setIconView:(id)arg1;
- (id)titleLab;
- (void)setTitleLab:(id)arg1;
- (id)subtitleLab;
- (void)setSubtitleLab:(id)arg1;
- (BOOL)isInDarkMode;
- (void)setIsInDarkMode:(BOOL)arg1;
- (id)bgGradientLayer;
- (void)setBgGradientLayer:(id)arg1;
- (id)bgSolidLayer;
- (void)setBgSolidLayer:(id)arg1;
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
- (id)headlessBridge;
- (void)setHeadlessBridge:(id)arg1;
- (BOOL)hasAppliedCapsuleStyle;
- (void)setHasAppliedCapsuleStyle:(BOOL)arg1;
- (BOOL)lastAppliedStyleDark;
- (void)setLastAppliedStyleDark:(BOOL)arg1;
- (void).cxx_destruct;
@end
