@interface MJCircleProgressView : CALayer
{
    double _progress; // +0x8
    double _lineWidth; // +0x10
    UIColor * _progressTintColor; // +0x18
    UIColor * _trackTintColor; // +0x20
    CAShapeLayer * _progressLayer; // +0x28
    CALayer * _progressBackgroundLayer; // +0x30
}
- (void)showProgressLayer;
- (void)hideProgressLayer;
- (id)circleLayerWithRect:(CGRect)arg1 startAngle:(double)arg2 endAngle:(double)arg3 lineWidth:(double)arg4;
- (void)updateProgressLayerWithProgress:(double)arg1 animated:(BOOL)arg2;
- (void)setProgress:(double)arg1;
- (void)setLineWidth:(double)arg1;
- (id)progressLayer;
- (id)progressBackgroundLayer;
- (double)progress;
- (double)lineWidth;
- (id)progressTintColor;
- (void)setProgressTintColor:(id)arg1;
- (id)trackTintColor;
- (void)setTrackTintColor:(id)arg1;
- (void)setProgressLayer:(id)arg1;
- (void)setProgressBackgroundLayer:(id)arg1;
- (void).cxx_destruct;
@end
