@interface WAScrollViewAnimView : UIView
{
    UIScrollView * _scrollView; // +0x8
    UIView * _animateView; // +0x10
    CADisplayLink * _displayLink; // +0x18
}
- (void)dealloc;
- (id)initWithFrame:(CGRect)arg1;
- (void)setFrame:(CGRect)arg1;
- (void)stopAnimate;
- (void)startAnimateWithDuration:(double)arg1 delay:(double)arg2 usingSpringWithDamping:(double)arg3 initialSpringVelocity:(double)arg4 options:(unsigned long long)arg5 startPoint:(CGPoint)arg6 endPoint:(CGPoint)arg7;
- (void)timeTick:(id)arg1;
- (void)setNeedsCancelAnimation;
- (id)scrollView;
- (void)setScrollView:(id)arg1;
- (id)animateView;
- (void)setAnimateView:(id)arg1;
- (id)displayLink;
- (void)setDisplayLink:(id)arg1;
- (void).cxx_destruct;
@end

