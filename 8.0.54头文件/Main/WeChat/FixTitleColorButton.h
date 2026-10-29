@interface FixTitleColorButton : MMUIButton
{
    NSMutableSet * m_titleColorStateSet; // +0x8
    NSMutableSet * m_backgroundImageStateSet; // +0x10
    double m_fixHeight; // +0x18
    double m_fixWidth; // +0x20
    double m_fixLeftRightMargin; // +0x28
    UIColor * m_fixBackgroundColor; // +0x30
    BOOL _loading; // +0x38
    BOOL _isBlurForDefault; // +0x39
    BOOL _isBlurForDisable; // +0x3a
    BOOL _oldStyle; // +0x3b
    BOOL _wideStyle; // +0x3c
    BOOL _bigStyle; // +0x3d
    BOOL _halfScreenStyle; // +0x3e
    BOOL _mediumStyle; // +0x3f
    BOOL _smallStyle; // +0x40
    BOOL _weakStyle; // +0x41
    NSMutableDictionary * m_titleColorStateDict; // +0x48
    UIColor * _m_highlighBorderColor; // +0x50
    UIColor * _m_disabledBorderColor; // +0x58
    UIColor * _m_normalBorderColor; // +0x60
    UIColor * _defaultBGColor; // +0x68
    UIColor * _defaultFGColor; // +0x70
    UIColor * _disableBGColor; // +0x78
    UIColor * _disableFGColor; // +0x80
    double _maxWidth; // +0x88
    ButtonAttachManager * _attachManager; // +0x90
    double _verticalPadding; // +0x98
    double _horizontalPadding; // +0xa0
    MMUIActivityIndicatorView * _indicatorView; // +0xa8
    UIView * _animatedMaskView; // +0xb0
}
+ (id /* block */)zz_create;
- (id)zz_setup;
- (void)setTitleColor:(id)arg1 forState:(unsigned long long)arg2;
- (void)setBackgroundImage:(id)arg1 forState:(unsigned long long)arg2;
- (void)setBackgroundColor:(id)arg1;
- (void)setLoading:(BOOL)arg1;
- (void)setIsBlurForDefault:(BOOL)arg1;
- (void)setIsBlurForDisable:(BOOL)arg1;
- (void)didMoveToSuperview;
- (void)didMoveToWindow;
- (void)layoutSubviews;
- (BOOL)isClearColor:(id)arg1;
- (void)updateRedesignBackgroundColor;
- (void)addTouchAnimations;
- (void)setTitle:(id)arg1 forState:(unsigned long long)arg2;
- (void)setImage:(id)arg1 forState:(unsigned long long)arg2;
- (void)setAttributedTitle:(id)arg1 forState:(unsigned long long)arg2;
- (CGSize)calAttributedSize;
- (UIEdgeInsets)imageEdgeInsets;
- (UIEdgeInsets)imageEdgeInsetsWithSize:(CGSize)arg1;
- (double)iconImgPadding;
- (double)iconImgHeight;
- (UIEdgeInsets)titleEdgeInsets;
- (CGSize)calImageFitSizeByImage:(id)arg1;
- (double)calTitleVerticalEdge;
- (CGSize)calculateFittingSize;
- (double)calcWidthNoAttr;
- (CGSize)sizeThatFits:(CGSize)arg1;
- (double)adjustWidthForWidth:(double)arg1 ignoreFixWidth:(BOOL)arg2;
- (double)adjustWidthForWidth:(double)arg1;
- (double)adjustHeight;
- (void)setFrame:(CGRect)arg1;
- (void)setFixWidth:(double)arg1;
- (double)fixWidth;
- (void)setFixHeight:(double)arg1;
- (void)setFixLeftRightMargin:(double)arg1;
- (void)setHighlighted:(BOOL)arg1;
- (void)setEnabled:(BOOL)arg1;
- (id)init;
- (void)setVerticalPadding:(double)arg1;
- (void)setHorizontalPadding:(double)arg1;
- (CGSize)intrinsicContentSize;
- (id)indicatorView;
- (id)animatedMaskView;
- (void)sendAction:(id)arg1;
- (void)sendActionsForControlEvents:(unsigned long long)arg1;
- (void)sendAction:(SEL)arg1 to:(id)arg2 forEvent:(id)arg3;
- (id)currentImage;
- (id)currentAttributedTitle;
- (BOOL)adjustsImageWhenHighlighted;
- (id)m_titleColorStateDict;
- (void)setM_titleColorStateDict:(id)arg1;
- (id)m_backgroundImageStateSet;
- (void)setM_backgroundImageStateSet:(id)arg1;
- (id)m_highlighBorderColor;
- (void)setM_highlighBorderColor:(id)arg1;
- (id)m_disabledBorderColor;
- (void)setM_disabledBorderColor:(id)arg1;
- (id)m_normalBorderColor;
- (void)setM_normalBorderColor:(id)arg1;
- (id)defaultBGColor;
- (void)setDefaultBGColor:(id)arg1;
- (id)defaultFGColor;
- (void)setDefaultFGColor:(id)arg1;
- (id)disableBGColor;
- (void)setDisableBGColor:(id)arg1;
- (id)disableFGColor;
- (void)setDisableFGColor:(id)arg1;
- (BOOL)loading;
- (BOOL)isBlurForDefault;
- (BOOL)isBlurForDisable;
- (BOOL)oldStyle;
- (void)setOldStyle:(BOOL)arg1;
- (BOOL)wideStyle;
- (void)setWideStyle:(BOOL)arg1;
- (BOOL)bigStyle;
- (void)setBigStyle:(BOOL)arg1;
- (BOOL)halfScreenStyle;
- (void)setHalfScreenStyle:(BOOL)arg1;
- (BOOL)mediumStyle;
- (void)setMediumStyle:(BOOL)arg1;
- (BOOL)smallStyle;
- (void)setSmallStyle:(BOOL)arg1;
- (BOOL)weakStyle;
- (void)setWeakStyle:(BOOL)arg1;
- (double)maxWidth;
- (void)setMaxWidth:(double)arg1;
- (id)attachManager;
- (void)setAttachManager:(id)arg1;
- (double)verticalPadding;
- (double)horizontalPadding;
- (void)setIndicatorView:(id)arg1;
- (void)setAnimatedMaskView:(id)arg1;
- (void).cxx_destruct;
@end

