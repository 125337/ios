@interface MMSightRecordView : UIView
{
    BOOL _delayAnimationOnlyForNormalState; // +0x8
    long long _state; // +0x10
    UIColor * _outerBgColor; // +0x18
    UIColor * _innerBgColor; // +0x20
    UIView * _outerDotBg; // +0x28
    UIView * _outerDotBlurBg; // +0x30
    UIView * _outerDot; // +0x38
    UIView * _innerDot; // +0x40
    UILabel * _timerTextLabel; // +0x48
    UIImageView * _timerCancellerIcon; // +0x50
    CAShapeLayer * _outerDotLayer; // +0x58
    long long _style; // +0x60
}
- (id)initWithFrame:(CGRect)arg1;
- (id)initWithFrame:(CGRect)arg1 style:(long long)arg2;
- (void)showTimerSec:(long long)arg1;
- (void)hideTimerSec;
- (void)setupSubViews;
- (void)setState:(long long)arg1;
- (void)stateTransitionAnimation;
- (id)radiusAnimationFrom:(double)arg1 to:(double)arg2;
- (id)frameAnimationFrom:(CGRect)arg1 to:(CGRect)arg2;
- (id)getOuterBgColor;
- (id)getInnerBgColor;
- (void)setOuterBgColor:(id)arg1;
- (void)setInnerBgColor:(id)arg1;
- (BOOL)delayAnimationOnlyForNormalState;
- (void)setDelayAnimationOnlyForNormalState:(BOOL)arg1;
- (long long)state;
- (id)outerBgColor;
- (id)innerBgColor;
- (id)outerDotBg;
- (void)setOuterDotBg:(id)arg1;
- (id)outerDotBlurBg;
- (void)setOuterDotBlurBg:(id)arg1;
- (id)outerDot;
- (void)setOuterDot:(id)arg1;
- (id)innerDot;
- (void)setInnerDot:(id)arg1;
- (id)timerTextLabel;
- (void)setTimerTextLabel:(id)arg1;
- (id)timerCancellerIcon;
- (void)setTimerCancellerIcon:(id)arg1;
- (id)outerDotLayer;
- (void)setOuterDotLayer:(id)arg1;
- (long long)style;
- (void)setStyle:(long long)arg1;
- (void).cxx_destruct;
@end

