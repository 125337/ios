@interface WCFinderPanelTapToEnterLivingView : UIView
{
    id <WCFinderPanelTapToEnterLivingViewDelegate> _delegate; // +0x8
    UIView * _contentView; // +0x10
    UILabel * _tapToEnterLabel; // +0x18
    UIView * _blurBackgroundView; // +0x20
    UIView * _lineContainerView; // +0x28
    unsigned long long _style; // +0x30
    UIView * _breatheContainerView; // +0x38
    CAAnimationGroup * _breatheAnimationGroup; // +0x40
    double _loopDuration; // +0x48
    double _loopInterval; // +0x50
}
+ (double)defaultHeight;
- (id)initWithFrame:(CGRect)arg1;
- (void)startBreatheAnimation:(double)arg1 loopInterval:(double)arg2;
- (void)stopBreatheAnimation;
- (void)loopPauseAnimation;
- (void)loopResumeAnimation;
- (void)layoutSubviews;
- (void)prepareForReuse;
- (void)updateStyle:(unsigned long long)arg1 animate:(BOOL)arg2;
- (void)updateTapToEnterLabel:(id)arg1;
- (void)addViews;
- (void)addContentView;
- (void)addBlurBackgroundView;
- (void)addLineContainerView;
- (id)contentView;
- (id)lineContainerView;
- (id)tapToEnterLabel;
- (id)blurBackgroundView;
- (id)breatheContainerView;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (void)setContentView:(id)arg1;
- (void)setTapToEnterLabel:(id)arg1;
- (void)setBlurBackgroundView:(id)arg1;
- (void)setLineContainerView:(id)arg1;
- (unsigned long long)style;
- (void)setStyle:(unsigned long long)arg1;
- (void)setBreatheContainerView:(id)arg1;
- (id)breatheAnimationGroup;
- (void)setBreatheAnimationGroup:(id)arg1;
- (double)loopDuration;
- (void)setLoopDuration:(double)arg1;
- (double)loopInterval;
- (void)setLoopInterval:(double)arg1;
- (void).cxx_destruct;
@end

