@interface WACircleLoadingView : UIView
{
    BOOL _animating; // +0x8
    float _progress; // +0xc
    float _circleDuration; // +0x10
    float _progressAnimationDuration; // +0x14
    float _pointSize; // +0x18
    float _pointBorderWidth; // +0x1c
    float _backLineWidth; // +0x20
    float _progressWidth; // +0x24
    CAShapeLayer * _backLayer; // +0x28
    CAShapeLayer * _progressLayer; // +0x30
    CAShapeLayer * _pointLayer; // +0x38
}
- (id)initWithFrame:(CGRect)arg1 backLineWidth:(float)arg2 progressWidth:(float)arg3;
- (void)buildLayout;
- (void)setProgress:(float)arg1;
- (void)startCircleAnimate;
- (void)traitCollectionDidChange:(id)arg1;
- (float)progress;
- (float)circleDuration;
- (void)setCircleDuration:(float)arg1;
- (float)progressAnimationDuration;
- (void)setProgressAnimationDuration:(float)arg1;
- (float)pointSize;
- (void)setPointSize:(float)arg1;
- (float)pointBorderWidth;
- (void)setPointBorderWidth:(float)arg1;
- (id)backLayer;
- (void)setBackLayer:(id)arg1;
- (id)progressLayer;
- (void)setProgressLayer:(id)arg1;
- (id)pointLayer;
- (void)setPointLayer:(id)arg1;
- (float)backLineWidth;
- (void)setBackLineWidth:(float)arg1;
- (float)progressWidth;
- (void)setProgressWidth:(float)arg1;
- (BOOL)animating;
- (void)setAnimating:(BOOL)arg1;
- (void).cxx_destruct;
@end

