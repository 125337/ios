@interface FBSDKTooltipView : UIView
{
    CGPoint _positionInView; // +0x8
    double _displayTime; // +0x18
    double _minimumDisplayDuration; // +0x20
    UILabel * _textLabel; // +0x28
    UITapGestureRecognizer * _insideTapGestureRecognizer; // +0x30
    double _leftWidth; // +0x38
    double _rightWidth; // +0x40
    double _arrowMidpoint; // +0x48
    BOOL _pointingUp; // +0x50
    BOOL _isFadingOut; // +0x51
    UIColor * _innerStrokeColor; // +0x58
    double _arrowHeight; // +0x60
    double _textPadding; // +0x68
    double _maximumTextWidth; // +0x70
    double _verticalTextOffset; // +0x78
    double _verticalCrossOffset; // +0x80
    unsigned long long _colorStyle; // +0x88
    NSArray * _gradientColors; // +0x90
    UIColor * _crossCloseGlyphColor; // +0x98
    double _displayDuration; // +0xa0
    NSString * _message; // +0xa8
    NSString * _tagline; // +0xb0
}
- (id)initWithTagline:(id)arg1 message:(id)arg2 colorStyle:(unsigned long long)arg3;
- (void)dealloc;
- (void)setMessage:(id)arg1;
- (void)setTagline:(id)arg1;
- (void)presentFromView:(id)arg1;
- (void)presentInView:(id)arg1 withArrowPosition:(CGPoint)arg2 direction:(unsigned long long)arg3;
- (void)dismiss;
- (unsigned long long)colorStyle;
- (void)setColorStyle:(unsigned long long)arg1;
- (void)animateFadeIn;
- (void)animateFadeOutWithCompletion:(id /* block */)arg1;
- (void)onTapInTooltip:(id)arg1;
- (void)drawRect:(CGRect)arg1;
- (void)layoutSubviews;
- (CGRect)layoutSubviewsAndDetermineFrame;
- (void)setMessage:(id)arg1 tagline:(id)arg2;
- (void)scheduleAutomaticFadeout;
- (void)scheduleFadeoutRespectingMinimumDisplayDuration;
- (void)cancelAllScheduledFadeOutMethods;
- (double)displayDuration;
- (void)setDisplayDuration:(double)arg1;
- (id)message;
- (id)tagline;
- (void).cxx_destruct;
@end
