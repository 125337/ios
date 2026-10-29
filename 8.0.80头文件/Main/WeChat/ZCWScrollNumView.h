@interface ZCWScrollNumView : UIView
{
    NSMutableArray * _numberViews; // +0x8
    BOOL _isDotViewTransparent; // +0x10
    BOOL _isNeedShowMaskView; // +0x11
    BOOL _isAnimating; // +0x12
    unsigned long long numberSize; // +0x18
    unsigned long long numberValue; // +0x20
    UIView * backgroundView; // +0x28
    UIView * digitBackgroundView; // +0x30
    UIFont * digitFont; // +0x38
    double splitSpaceWidth; // +0x40
    double topAndBottomPadding; // +0x48
    UIColor * _digitColor; // +0x50
    unsigned long long _randomLength; // +0x58
    long long _dotPos; // +0x60
    UIView * _dotView; // +0x68
    double _dotWidth; // +0x70
    id <IZCWScrollNumViewDelegate> _delegate; // +0x78
}
+ (unsigned long long)digitFromNum:(unsigned long long)arg1 withIndex:(unsigned long long)arg2;
+ (id)dotImageWithColor:(id)arg1 width:(double)arg2 height:(double)arg3;
- (id)initWithFrame:(CGRect)arg1;
- (id)initWithCoder:(id)arg1;
- (void)initScrollNumView;
- (double)getBaseLine;
- (void)setNumber:(unsigned long long)arg1 withAnimationType:(int)arg2 animationTime:(double)arg3 stopTimeStep:(double)arg4;
- (void)animationDidStop;
- (unsigned long long)digitIndex:(unsigned long long)arg1;
- (id)getDefaultDotView;
- (void)didConfigFinish;
- (unsigned long long)numberSize;
- (void)setNumberSize:(unsigned long long)arg1;
- (unsigned long long)numberValue;
- (id)backgroundView;
- (void)setBackgroundView:(id)arg1;
- (id)digitBackgroundView;
- (void)setDigitBackgroundView:(id)arg1;
- (id)digitFont;
- (void)setDigitFont:(id)arg1;
- (id)numberViews;
- (double)splitSpaceWidth;
- (void)setSplitSpaceWidth:(double)arg1;
- (double)topAndBottomPadding;
- (void)setTopAndBottomPadding:(double)arg1;
- (id)digitColor;
- (void)setDigitColor:(id)arg1;
- (unsigned long long)randomLength;
- (void)setRandomLength:(unsigned long long)arg1;
- (long long)dotPos;
- (void)setDotPos:(long long)arg1;
- (id)dotView;
- (void)setDotView:(id)arg1;
- (double)dotWidth;
- (void)setDotWidth:(double)arg1;
- (BOOL)isDotViewTransparent;
- (void)setIsDotViewTransparent:(BOOL)arg1;
- (BOOL)isNeedShowMaskView;
- (void)setIsNeedShowMaskView:(BOOL)arg1;
- (BOOL)isAnimating;
- (void)setIsAnimating:(BOOL)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (void).cxx_destruct;
@end
