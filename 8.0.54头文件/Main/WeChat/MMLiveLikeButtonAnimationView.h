@interface MMLiveLikeButtonAnimationView : MMUIView
{
    BOOL _needUpdateBgProgress; // +0x8
    UIView * _animationView; // +0x10
    UIColor * _topColor; // +0x18
    UIColor * _bottomColor; // +0x20
    double _progressWidth; // +0x28
    double _progress; // +0x30
    CAShapeLayer * _bgProgressLayer; // +0x38
    CAShapeLayer * _progressLayer; // +0x40
    CALayer * _gradientLayer; // +0x48
}
- (void)refreshProgress:(double)arg1;
- (void)updateProgress:(double)arg1;
- (void)drawRect:(CGRect)arg1;
- (void)createBackgruondProgressView;
- (void)drawCycleProgress;
- (id)initWithFrame:(CGRect)arg1;
- (void)configWithTopColor:(id)arg1 bottomColor:(id)arg2 progressWidth:(double)arg3;
- (id)animationView;
- (void)setAnimationView:(id)arg1;
- (id)topColor;
- (void)setTopColor:(id)arg1;
- (id)bottomColor;
- (void)setBottomColor:(id)arg1;
- (double)progressWidth;
- (void)setProgressWidth:(double)arg1;
- (double)progress;
- (void)setProgress:(double)arg1;
- (id)bgProgressLayer;
- (void)setBgProgressLayer:(id)arg1;
- (BOOL)needUpdateBgProgress;
- (void)setNeedUpdateBgProgress:(BOOL)arg1;
- (id)progressLayer;
- (void)setProgressLayer:(id)arg1;
- (id)gradientLayer;
- (void)setGradientLayer:(id)arg1;
- (void).cxx_destruct;
@end

