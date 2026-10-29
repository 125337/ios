@interface ScrollViewTimingDelegate : NSObject
{
    BOOL _animationStarted; // +0x8
    UIScrollView * _scrollView; // +0x10
    CADisplayLink * _displayLink; // +0x18
    CAMediaTimingFunction * _timingFunction; // +0x20
    double _duration; // +0x28
    double _beginTime; // +0x30
    CGPoint _beginContentOffset; // +0x38
    CGPoint _deltaContentOffset; // +0x48
}
- (void)dealloc;
- (void)setContentOffset:(CGPoint)arg1 withTimingFunction:(id)arg2;
- (void)setContentOffset:(CGPoint)arg1 withTimingFunction:(id)arg2 duration:(double)arg3;
- (void)updateContentOffset:(id)arg1;
- (void)updateProgress:(double)arg1;
- (void)stopAnimation;
- (id)scrollView;
- (void)setScrollView:(id)arg1;
- (id)displayLink;
- (void)setDisplayLink:(id)arg1;
- (id)timingFunction;
- (void)setTimingFunction:(id)arg1;
- (double)duration;
- (void)setDuration:(double)arg1;
- (BOOL)animationStarted;
- (void)setAnimationStarted:(BOOL)arg1;
- (double)beginTime;
- (void)setBeginTime:(double)arg1;
- (CGPoint)beginContentOffset;
- (void)setBeginContentOffset:(CGPoint)arg1;
- (CGPoint)deltaContentOffset;
- (void)setDeltaContentOffset:(CGPoint)arg1;
- (void).cxx_destruct;
@end

