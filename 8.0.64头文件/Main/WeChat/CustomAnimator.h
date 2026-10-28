@interface CustomAnimator : NSObject
{
    BOOL _isPaused; // +0x8
    BOOL _isRunning; // +0x9
    double _duration; // +0x10
    double _delay; // +0x18
    id /* block */ _updateBlock; // +0x20
    id /* block */ _completionBlock; // +0x28
    CADisplayLink * _displayLink; // +0x30
    double _startTime; // +0x38
    double _pausedTime; // +0x40
}
- (id)initWithDuration:(double)arg1;
- (void)startAnimation;
- (void)updateAnimation;
- (void)stopAnimation;
- (void)pauseAnimation;
- (void)resumeAnimation;
- (double)easeInOut:(double)arg1;
- (void)dealloc;
- (double)duration;
- (void)setDuration:(double)arg1;
- (double)delay;
- (void)setDelay:(double)arg1;
- (id /* block */)updateBlock;
- (void)setUpdateBlock:(id /* block */)arg1;
- (id /* block */)completionBlock;
- (void)setCompletionBlock:(id /* block */)arg1;
- (id)displayLink;
- (void)setDisplayLink:(id)arg1;
- (double)startTime;
- (void)setStartTime:(double)arg1;
- (double)pausedTime;
- (void)setPausedTime:(double)arg1;
- (BOOL)isPaused;
- (void)setIsPaused:(BOOL)arg1;
- (BOOL)isRunning;
- (void)setIsRunning:(BOOL)arg1;
- (void).cxx_destruct;
@end
