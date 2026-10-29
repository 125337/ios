@interface MMProgressViewEx : UIView <CAAnimationDelegate>
{
    double total; // +0x8
    double current; // +0x10
    UIColor * frontColor; // +0x18
    UIColor * backColor; // +0x20
    double stepDuration; // +0x28
    BOOL hideOnCompleteProcess; // +0x30
    MMProgressViewExLayer * m_layer; // +0x38
    BOOL _autoContinue; // +0x40
}
- (id)initWithFrame:(CGRect)arg1;
- (void)dealloc;
- (void)doAnimation;
- (void)doAnimation_v2;
- (void)hideSelf;
- (void)animateBecomeActive:(id)arg1;
- (void)didMoveToWindow;
- (void)animationDidStop:(id)arg1 finished:(BOOL)arg2;
- (void)drawRect:(CGRect)arg1;
- (void)setTotal:(double)arg1;
- (void)setCurrent:(double)arg1;
- (void)setFrame:(CGRect)arg1;
- (void)autoContinueAnimate;
- (void)startLoading;
- (void)startLoadingWithImage:(id)arg1;
- (void)stopLoading;
- (double)total;
- (double)current;
- (id)frontColor;
- (void)setFrontColor:(id)arg1;
- (id)backColor;
- (void)setBackColor:(id)arg1;
- (double)stepDuration;
- (void)setStepDuration:(double)arg1;
- (BOOL)hideOnCompleteProcess;
- (void)setHideOnCompleteProcess:(BOOL)arg1;
- (BOOL)autoContinue;
- (void)setAutoContinue:(BOOL)arg1;
- (void).cxx_destruct;
@end

