@interface WCProgressCircleView : UIView
{
    long long _stepMode; // +0x8
    double _progressBorderWidth; // +0x10
    UIColor * _progressFrontColor; // +0x18
    UIColor * _progressBackColor; // +0x20
    CAShapeLayer * _progressBackShapeLayer; // +0x28
    CAShapeLayer * _progressFrontShapeLayer; // +0x30
    double _currentProgress; // +0x38
}
- (id)initWithFrame:(CGRect)arg1;
- (void)setFrame:(CGRect)arg1;
- (void)layoutSubviews;
- (void)setInfinity;
- (void)setInfinityWithProgress:(double)arg1;
- (void)setProgress:(double)arg1;
- (double)progress;
- (void)resetProgress;
- (void)setProgressBorderWidth:(double)arg1;
- (void)setProgressFrontColor:(id)arg1;
- (void)setProgressBackColor:(id)arg1;
- (void)setProgress:(double)arg1 animated:(BOOL)arg2;
- (double)_getValidProgressFrom:(double)arg1;
- (void)resizeView;
- (void)resetDefaultStyle;
- (void)initView;
- (long long)stepMode;
- (void)setStepMode:(long long)arg1;
- (double)progressBorderWidth;
- (id)progressFrontColor;
- (id)progressBackColor;
- (id)progressBackShapeLayer;
- (void)setProgressBackShapeLayer:(id)arg1;
- (id)progressFrontShapeLayer;
- (void)setProgressFrontShapeLayer:(id)arg1;
- (double)currentProgress;
- (void)setCurrentProgress:(double)arg1;
- (void).cxx_destruct;
@end

