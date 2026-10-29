@interface WCFinderFastPagingDisplayLinkAnimator : NSObject <WCFinderFastPagingAnimationProtocol>
{
    BOOL _isRunning; // +0x8
    CADisplayLink * _displayLink; // +0x10
    double _startTime; // +0x18
    double _duration; // +0x20
    double _fromValue; // +0x28
    double _toValue; // +0x30
    id /* block */ _completionBlock; // +0x38
    id /* block */ _animationProgressBlock; // +0x40
    long long _targetFrameCount; // +0x48
    long long _currentFrame; // +0x50
    double _lastFrameTime; // +0x58
    double _actualFrameRate; // +0x60
    double _accumulatedTime; // +0x68
}
- (void)animateFromValue:(double)arg1 toValue:(double)arg2 duration:(double)arg3 animationBlock:(id /* block */)arg4 completion:(id /* block */)arg5;
- (void)startDisplayLinkIfNeeded;
- (void)handleDisplayLinkUpdate:(id)arg1;
- (void)stopAnimation;
- (BOOL)isAnimating;
- (double)easeInOut:(double)arg1;
- (id)displayLink;
- (void)setDisplayLink:(id)arg1;
- (double)startTime;
- (void)setStartTime:(double)arg1;
- (double)duration;
- (void)setDuration:(double)arg1;
- (double)fromValue;
- (void)setFromValue:(double)arg1;
- (double)toValue;
- (void)setToValue:(double)arg1;
- (id /* block */)completionBlock;
- (void)setCompletionBlock:(id /* block */)arg1;
- (id /* block */)animationProgressBlock;
- (void)setAnimationProgressBlock:(id /* block */)arg1;
- (BOOL)isRunning;
- (void)setIsRunning:(BOOL)arg1;
- (long long)targetFrameCount;
- (void)setTargetFrameCount:(long long)arg1;
- (long long)currentFrame;
- (void)setCurrentFrame:(long long)arg1;
- (double)lastFrameTime;
- (void)setLastFrameTime:(double)arg1;
- (double)actualFrameRate;
- (void)setActualFrameRate:(double)arg1;
- (double)accumulatedTime;
- (void)setAccumulatedTime:(double)arg1;
- (void).cxx_destruct;
@end
