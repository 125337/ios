@interface ReflectProgressCircleView : UIView
{
    UIColor * _progressColor; // +0x8
    double _currentProgress; // +0x10
    CADisplayLink * _displayLink; // +0x18
    double _animationStartTime; // +0x20
    double _animationDuration; // +0x28
    CGRect _ovalRect; // +0x30
}
- (id)initWithFrame:(CGRect)arg1;
- (id)initWithCoder:(id)arg1;
- (void)initView;
- (void)layoutSubviews;
- (void)drawRect:(CGRect)arg1;
- (void)startProgressAnimation:(long long)arg1;
- (void)stopProgressAnimation;
- (void)setProgressColor:(id)arg1;
- (void)onDisplayLinkTick:(id)arg1;
- (id)progressColor;
- (double)currentProgress;
- (void)setCurrentProgress:(double)arg1;
- (id)displayLink;
- (void)setDisplayLink:(id)arg1;
- (double)animationStartTime;
- (void)setAnimationStartTime:(double)arg1;
- (double)animationDuration;
- (void)setAnimationDuration:(double)arg1;
- (CGRect)ovalRect;
- (void)setOvalRect:(CGRect)arg1;
- (void).cxx_destruct;
@end
