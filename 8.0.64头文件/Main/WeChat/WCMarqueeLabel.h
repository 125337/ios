@interface WCMarqueeLabel : UIView <CAAnimationDelegate>
{
    BOOL _showGradientLayerAnimation; // +0x8
    BOOL _disableAutoPlayAnimation; // +0x9
    BOOL _isPendingRebuildAnimation; // +0xa
    BOOL _shouldStopAnimation; // +0xb
    BOOL _isAnimating; // +0xc
    BOOL _needResetFromValueToDefault; // +0xd
    unsigned int _repeatCount; // +0x10
    NSString * _text; // +0x18
    UIColor * _textColor; // +0x20
    UIFont * _font; // +0x28
    double _spacing; // +0x30
    double _speed; // +0x38
    double _startMargin; // +0x40
    double _marqueeMaxWidth; // +0x48
    double _leftGradientWidth; // +0x50
    double _rightGradientWidth; // +0x58
    UIView * _containerView; // +0x60
    UILabel * _textLabel1; // +0x68
    UILabel * _textLabel2; // +0x70
    double _animationValue; // +0x78
    CAGradientLayer * _gradientLayer; // +0x80
    NSArray * _gradientColors; // +0x88
    NSArray * _locations; // +0x90
}
- (id)initWithFrame:(CGRect)arg1;
- (void)dealloc;
- (void)triggerStartAnimation;
- (void)didReceiveDidBecomeActiveNotification;
- (void)didReceiveDidEnterBackgroundNotification;
- (id)containerView;
- (id)textLabel1;
- (id)textLabel2;
- (void)setFrame:(CGRect)arg1;
- (void)didMoveToWindow;
- (CGSize)sizeThatFits:(CGSize)arg1;
- (void)setText:(id)arg1;
- (void)setTextColor:(id)arg1;
- (void)setFont:(id)arg1;
- (void)rebuildAnimationIfNeeded:(BOOL)arg1;
- (void)startAnimation;
- (void)p_startContainerViewAnimation:(unsigned int)arg1;
- (void)stopAnimation;
- (void)startGradientShowAnimation;
- (void)startGradientHideAnimation;
- (BOOL)checkGradientLayerLogic;
- (void)internalStartGradientLayer:(id)arg1 endColor:(id)arg2 startLocation:(id)arg3 endLocation:(id)arg4;
- (id)animationFakeColors;
- (id)animationFakeLocations;
- (BOOL)needAnimating;
- (void)rebuildGradientLayer;
- (void)hideGradientLayer;
- (void)animationDidStop:(id)arg1 finished:(BOOL)arg2;
- (id)text;
- (id)textColor;
- (id)font;
- (unsigned int)repeatCount;
- (void)setRepeatCount:(unsigned int)arg1;
- (double)spacing;
- (void)setSpacing:(double)arg1;
- (double)speed;
- (void)setSpeed:(double)arg1;
- (double)startMargin;
- (void)setStartMargin:(double)arg1;
- (double)marqueeMaxWidth;
- (void)setMarqueeMaxWidth:(double)arg1;
- (double)leftGradientWidth;
- (void)setLeftGradientWidth:(double)arg1;
- (double)rightGradientWidth;
- (void)setRightGradientWidth:(double)arg1;
- (BOOL)showGradientLayerAnimation;
- (void)setShowGradientLayerAnimation:(BOOL)arg1;
- (BOOL)disableAutoPlayAnimation;
- (void)setDisableAutoPlayAnimation:(BOOL)arg1;
- (void)setContainerView:(id)arg1;
- (void)setTextLabel1:(id)arg1;
- (void)setTextLabel2:(id)arg1;
- (BOOL)isPendingRebuildAnimation;
- (void)setIsPendingRebuildAnimation:(BOOL)arg1;
- (BOOL)shouldStopAnimation;
- (void)setShouldStopAnimation:(BOOL)arg1;
- (BOOL)isAnimating;
- (void)setIsAnimating:(BOOL)arg1;
- (double)animationValue;
- (void)setAnimationValue:(double)arg1;
- (id)gradientLayer;
- (void)setGradientLayer:(id)arg1;
- (id)gradientColors;
- (void)setGradientColors:(id)arg1;
- (id)locations;
- (void)setLocations:(id)arg1;
- (BOOL)needResetFromValueToDefault;
- (void)setNeedResetFromValueToDefault:(BOOL)arg1;
- (void).cxx_destruct;
@end
