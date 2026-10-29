@interface MMBezierDisplayLinkAnimator : NSObject
{
    double _beginValue; // +0x8
    double _endValue; // +0x10
    CADisplayLink * _displayLink; // +0x18
    double _startTime; // +0x20
    double _duration; // +0x28
    id /* block */ _progressHandler; // +0x30
    id /* block */ _completeHandler; // +0x38
    id /* block */ _animator; // +0x40
    CGPoint _controlPoint1; // +0x48
    CGPoint _controlPoint2; // +0x58
}
- (id)initWithDuration:(double)arg1;
- (void)addProgressCallback:(id /* block */)arg1;
- (void)addCompleteCallback:(id /* block */)arg1;
- (void)addUIViewAnimator:(id /* block */)arg1;
- (void)setBezierCurveWithTimingFunction:(id)arg1;
- (void)setBezierCurveWithControlPoint1:(CGPoint)arg1 controlPoint2:(CGPoint)arg2;
- (void)startAnimation;
- (void)stopAnimation;
- (void)updateAnimation;
- (double)cubicBezier:(double)arg1 c1x:(double)arg2 c1y:(double)arg3 c2x:(double)arg4 c2y:(double)arg5;
- (double)beginValue;
- (void)setBeginValue:(double)arg1;
- (double)endValue;
- (void)setEndValue:(double)arg1;
- (id)displayLink;
- (void)setDisplayLink:(id)arg1;
- (double)startTime;
- (void)setStartTime:(double)arg1;
- (double)duration;
- (void)setDuration:(double)arg1;
- (CGPoint)controlPoint1;
- (void)setControlPoint1:(CGPoint)arg1;
- (CGPoint)controlPoint2;
- (void)setControlPoint2:(CGPoint)arg1;
- (id /* block */)progressHandler;
- (void)setProgressHandler:(id /* block */)arg1;
- (id /* block */)completeHandler;
- (void)setCompleteHandler:(id /* block */)arg1;
- (id /* block */)animator;
- (void)setAnimator:(id /* block */)arg1;
- (void).cxx_destruct;
@end
