@interface HearingAidPrepareAnimator : NSObject
{
    id /* block */ _frameUpdateCallback; // +0x8
    double _duration; // +0x10
    CADisplayLink * _displayLink; // +0x18
    double _startTime; // +0x20
}
- (id)initAnim:(double)arg1 frameUpdateCallback:(id /* block */)arg2;
- (void)dealloc;
- (void)start;
- (void)updateFrame:(id)arg1;
- (void)stop;
- (id /* block */)frameUpdateCallback;
- (void)setFrameUpdateCallback:(id /* block */)arg1;
- (double)duration;
- (void)setDuration:(double)arg1;
- (id)displayLink;
- (void)setDisplayLink:(id)arg1;
- (double)startTime;
- (void)setStartTime:(double)arg1;
- (void).cxx_destruct;
@end
