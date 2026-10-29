@interface MMFinderLiveGlobalRankSignView : UIView <CAAnimationDelegate>
{
    BOOL _isCustomizedAccessibilityLabel; // +0x8
    BOOL _forbidHaloEffectAnimation; // +0x9
    BOOL _customDraw; // +0xa
    BOOL _forceLayout; // +0xb
    BOOL _isHaloAnimating; // +0xc
    BOOL _isUpHaloStarAnimating; // +0xd
    BOOL _isDownHaloStarAnimating; // +0xe
    BOOL _isHaloActualAnimating; // +0xf
    BOOL _isUpHaloStarActualAnimating; // +0x10
    BOOL _isDownHaloStarActualAnimating; // +0x11
    BOOL _isStartHaloEffectAnimation; // +0x12
    BOOL _isInWindow; // +0x13
    BOOL _lightMask; // +0x14
    unsigned int _rank; // +0x18
    UIFont * _signLabelFont; // +0x20
    long long _uiStyle; // +0x28
    long long _uiMode; // +0x30
    UIImageView * _upHaloStarView; // +0x38
    UIImageView * _downHaloStarView; // +0x40
    UIView * _haloEffectView; // +0x48
    UIView * _animatedHaloView; // +0x50
    UIImageView * _gradientImgView; // +0x58
    CAGradientLayer * _gradientLayer; // +0x60
    CALayer * _colorLayer; // +0x68
    CAGradientLayer * _borderGradientLayer; // +0x70
    UIImageView * _rankImgView; // +0x78
    MMUILabel * _signLabel; // +0x80
    double _currentLayoutFontScale; // +0x88
    CAAnimation * _haloAnimation; // +0x90
    CAAnimation * _upHaloStarAnimation; // +0x98
    CAAnimation * _downHaloStarAnimation; // +0xa0
    NSMutableArray * _shiningStarImageViews; // +0xa8
    NSArray * _shiningConfigArray; // +0xb0
}
+ (CGSize)getGlobalRankSizeWithRank:(unsigned int)arg1 uiStyle:(long long)arg2;
+ (id)getRankImageWithRank:(unsigned int)arg1 size:(CGSize)arg2;
+ (id)getDarkUIModeBackgroundImageWithRank:(unsigned int)arg1;
+ (id)getLightUIModeBackgroundImageWithRank:(unsigned int)arg1;
+ (double)getSignIconWHPercentWithRank:(unsigned int)arg1;
+ (void)configRoundCornerHollowMaskLayerForView:(id)arg1 inset:(double)arg2;
+ (void)configRoundCornerMaskLayerForView:(id)arg1;
+ (id)signLabelFontForStyle:(long long)arg1;
+ (double)signIconWidthForStyle:(long long)arg1 forRank:(unsigned int)arg2;
+ (double)signIconHeightForStyle:(long long)arg1;
+ (double)insetLeftForStyle:(long long)arg1;
+ (double)insetRightForStyle:(long long)arg1;
+ (double)fixHeightForStyle:(long long)arg1;
+ (double)insetTopForStyle:(long long)arg1;
- (id)initWithUIStyle:(long long)arg1 uiMode:(long long)arg2;
- (id)initWithUIStyle:(long long)arg1 uiMode:(long long)arg2 customDraw:(BOOL)arg3 forceLayout:(BOOL)arg4;
- (id)initWithUIStyle:(long long)arg1 uiMode:(long long)arg2 customDraw:(BOOL)arg3 forceLayout:(BOOL)arg4 useLightMask:(BOOL)arg5;
- (void)dealloc;
- (void)layoutSubviews;
- (void)layoutUI;
- (void)layoutHaloEffectView;
- (void)updateHaloEffectSize;
- (void)layoutGradientImgView;
- (void)layoutRankImgView;
- (void)layoutSignLabel;
- (void)updateUIStyle:(long long)arg1;
- (void)updateUIMode:(long long)arg1;
- (void)updateRank:(unsigned int)arg1;
- (void)handleForRankChangedInNextRunLoop;
- (void)updateLayoutFontScale;
- (void)refresh;
- (id)accessibilityLabel;
- (void)setIsCustomizedAccessibilityLabel:(BOOL)arg1;
- (id)currentLiveTask;
- (BOOL)customDraw;
- (void)setAlpha:(double)arg1;
- (void)setHidden:(BOOL)arg1;
- (void)setSignLabelFont:(id)arg1;
- (void)willMoveToWindow:(id)arg1;
- (void)onAppearanceChanged;
- (void)initDefaultLayoutFontScale;
- (void)updateSelfSize;
- (void)updateWidgetSizeIfNeeded;
- (void)updateRankImgViewShadow;
- (void)updateSignLabelShadow;
- (id)getColorLayerBGColor;
- (void)updateLayers;
- (id)getSignTextColor;
- (id)getRankImage;
- (BOOL)needLayoutImmediately;
- (BOOL)needDisplayHaloEffectView;
- (double)getHaloEffectInnerBorderWidth;
- (id)getHaloEffectInnerBorderColor;
- (CGPoint)getUpHaloStarStartCenter;
- (CGPoint)getUpHaloStarEndCenter;
- (CGPoint)getDownHaloStarStartCenter;
- (CGPoint)getDownHaloStarEndCenter;
- (id)signLabelFontForStyle:(long long)arg1;
- (void)createGradientLayer;
- (void)createColorLayer;
- (void)createBorderGradientLayer;
- (CGRect)borderGradientLayerFrame;
- (void)updateBorderGradientLayerMask;
- (double)getBorderGradientLineWidth;
- (void)setupShiningStarAnimationIfNeeded;
- (void)scheduleShiningStartAnimationWithImageView:(id)arg1 config:(id)arg2 delay:(double)arg3;
- (unsigned int)haloEffectMinimumRank;
- (BOOL)enableStartHaloEffectAnimation;
- (void)startHaloEffectAnimated;
- (void)stopHaloEffectAnimated;
- (void)checkHaloEffectAnimatingEnd;
- (void)innerStartHaloEffectAnimationWithDelayTime:(double)arg1;
- (BOOL)isHaloEffectAnimating;
- (void)clearAnimatedHaloEffectViews;
- (void)invokeHaloEffectAnimated;
- (void)invokeCheckHaloEffectRunning;
- (void)checkHaloEffectRunning;
- (void)setIsUpHaloStarAnimating:(BOOL)arg1;
- (void)clearAnimatedUpHaloStarView:(BOOL)arg1;
- (void)invokeUpHaloStarAnimated;
- (void)createUpHaloStarView;
- (void)startUpHaloStarAnimation;
- (void)setIsDownHaloStarAnimating:(BOOL)arg1;
- (void)clearAnimatedDownHaloStarView:(BOOL)arg1;
- (void)invokeDownHaloStarAnimated;
- (void)createDownHaloStarView;
- (void)startDownHaloStarAnimation;
- (void)setIsHaloAnimating:(BOOL)arg1;
- (void)clearAnimatedHaloView;
- (void)invokeHaloAnimated;
- (void)createHaloView;
- (id)getHaloView;
- (double)getHaloRotateAngle;
- (void)startHaloAnimation;
- (CGPoint)getHaloInitCenter:(id)arg1;
- (CGPoint)getHaloFinalCenter:(id)arg1;
- (void)animationDidStart:(id)arg1;
- (void)animationDidStop:(id)arg1 finished:(BOOL)arg2;
- (BOOL)isCustomizedAccessibilityLabel;
- (BOOL)forbidHaloEffectAnimation;
- (void)setForbidHaloEffectAnimation:(BOOL)arg1;
- (id)signLabelFont;
- (unsigned int)rank;
- (void)setRank:(unsigned int)arg1;
- (long long)uiStyle;
- (void)setUiStyle:(long long)arg1;
- (long long)uiMode;
- (void)setUiMode:(long long)arg1;
- (id)upHaloStarView;
- (void)setUpHaloStarView:(id)arg1;
- (id)downHaloStarView;
- (void)setDownHaloStarView:(id)arg1;
- (id)haloEffectView;
- (void)setHaloEffectView:(id)arg1;
- (id)animatedHaloView;
- (void)setAnimatedHaloView:(id)arg1;
- (id)gradientImgView;
- (void)setGradientImgView:(id)arg1;
- (id)gradientLayer;
- (void)setGradientLayer:(id)arg1;
- (id)colorLayer;
- (void)setColorLayer:(id)arg1;
- (id)borderGradientLayer;
- (void)setBorderGradientLayer:(id)arg1;
- (id)rankImgView;
- (void)setRankImgView:(id)arg1;
- (id)signLabel;
- (void)setSignLabel:(id)arg1;
- (double)currentLayoutFontScale;
- (void)setCurrentLayoutFontScale:(double)arg1;
- (void)setCustomDraw:(BOOL)arg1;
- (BOOL)forceLayout;
- (void)setForceLayout:(BOOL)arg1;
- (BOOL)isHaloAnimating;
- (BOOL)isUpHaloStarAnimating;
- (BOOL)isDownHaloStarAnimating;
- (id)haloAnimation;
- (void)setHaloAnimation:(id)arg1;
- (id)upHaloStarAnimation;
- (void)setUpHaloStarAnimation:(id)arg1;
- (id)downHaloStarAnimation;
- (void)setDownHaloStarAnimation:(id)arg1;
- (BOOL)isHaloActualAnimating;
- (void)setIsHaloActualAnimating:(BOOL)arg1;
- (BOOL)isUpHaloStarActualAnimating;
- (void)setIsUpHaloStarActualAnimating:(BOOL)arg1;
- (BOOL)isDownHaloStarActualAnimating;
- (void)setIsDownHaloStarActualAnimating:(BOOL)arg1;
- (BOOL)isStartHaloEffectAnimation;
- (void)setIsStartHaloEffectAnimation:(BOOL)arg1;
- (BOOL)isInWindow;
- (void)setIsInWindow:(BOOL)arg1;
- (BOOL)lightMask;
- (void)setLightMask:(BOOL)arg1;
- (id)shiningStarImageViews;
- (void)setShiningStarImageViews:(id)arg1;
- (id)shiningConfigArray;
- (void)setShiningConfigArray:(id)arg1;
- (void).cxx_destruct;
@end
