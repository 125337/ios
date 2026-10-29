@interface WCFinderFeedSuperLikeAnimationView : UIView <CAAnimationDelegate>
{
    id /* block */ _complectionBlock; // +0x8
    double _duration; // +0x10
    CADisplayLink * _displayLink; // +0x18
    double _startTime; // +0x20
    CGPoint _animationEndPoint; // +0x28
    CGPoint _animationStartPoint; // +0x38
    CGPoint _animationControlPoint; // +0x48
}
- (id)init;
- (void)startAnimationWithEndPoint:(CGPoint)arg1 controlPoint:(CGPoint)arg2 complectionBlock:(id /* block */)arg3;
- (void)animationDidStop:(id)arg1 finished:(BOOL)arg2;
- (void)startDisplayLinkAnimationWithStartPoint:(CGPoint)arg1 endPoint:(CGPoint)arg2 controlPoint:(CGPoint)arg3 duration:(double)arg4 complectionBlock:(id /* block */)arg5;
- (void)updateFrame;
- (void)cancelAnimation;
- (CGPoint)calculateBezierPoint:(double)arg1;
- (double)easeIn:(double)arg1;
- (id /* block */)complectionBlock;
- (void)setComplectionBlock:(id /* block */)arg1;
- (CGPoint)animationEndPoint;
- (void)setAnimationEndPoint:(CGPoint)arg1;
- (CGPoint)animationStartPoint;
- (void)setAnimationStartPoint:(CGPoint)arg1;
- (CGPoint)animationControlPoint;
- (void)setAnimationControlPoint:(CGPoint)arg1;
- (double)duration;
- (void)setDuration:(double)arg1;
- (id)displayLink;
- (void)setDisplayLink:(id)arg1;
- (double)startTime;
- (void)setStartTime:(double)arg1;
- (void).cxx_destruct;
@end
