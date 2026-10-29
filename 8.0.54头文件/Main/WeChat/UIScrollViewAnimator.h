@interface UIScrollViewAnimator : NSObject
{
    UIScrollView * _scrollView; // +0x8
    double _duration; // +0x10
    id /* block */ _completionBlock; // +0x18
    CADisplayLink * _displayLink; // +0x20
    double _animationStartTime; // +0x28
    CGPoint _fromContentOffset; // +0x30
    CGPoint _toContentOffset; // +0x40
}
- (id)initWithScrollView:(id)arg1;
- (void)animateToContentOffset:(CGPoint)arg1 duration:(double)arg2 completion:(id /* block */)arg3;
- (void)updateScrollViewContentOffset:(id)arg1;
- (double)timingFuncEaseOut:(double)arg1;
- (id)scrollView;
- (void)setScrollView:(id)arg1;
- (double)duration;
- (void)setDuration:(double)arg1;
- (CGPoint)fromContentOffset;
- (void)setFromContentOffset:(CGPoint)arg1;
- (CGPoint)toContentOffset;
- (void)setToContentOffset:(CGPoint)arg1;
- (id /* block */)completionBlock;
- (void)setCompletionBlock:(id /* block */)arg1;
- (id)displayLink;
- (void)setDisplayLink:(id)arg1;
- (double)animationStartTime;
- (void)setAnimationStartTime:(double)arg1;
- (void).cxx_destruct;
@end

