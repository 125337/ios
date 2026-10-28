@interface MMLiveDisplayLinkAnimator : NSObject
{
    BOOL _useHighFrameRate; // +0x8
    double _duration; // +0x10
    id /* block */ _animation; // +0x18
    id /* block */ _completed; // +0x20
    double _startTime; // +0x28
    CADisplayLink * _displayLink; // +0x30
}
- (id)initWithDuration:(double)arg1 animationBlock:(id /* block */)arg2 completedBlock:(id /* block */)arg3;
- (void)start;
- (void)stop;
- (void)animateWithDisplayLink:(id)arg1;
- (void)invalidate;
- (BOOL)useHighFrameRate;
- (void)setUseHighFrameRate:(BOOL)arg1;
- (double)duration;
- (void)setDuration:(double)arg1;
- (id /* block */)animation;
- (void)setAnimation:(id /* block */)arg1;
- (id /* block */)completed;
- (void)setCompleted:(id /* block */)arg1;
- (double)startTime;
- (void)setStartTime:(double)arg1;
- (id)displayLink;
- (void)setDisplayLink:(id)arg1;
- (void).cxx_destruct;
@end
