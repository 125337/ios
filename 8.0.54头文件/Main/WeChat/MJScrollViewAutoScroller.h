@interface MJScrollViewAutoScroller : NSObject
{
    BOOL _isAutoScrolling; // +0x8
    double _minScrollVelocity; // +0x10
    double _maxScrollVelocity; // +0x18
    UIScrollView * _scrollView; // +0x20
    CADisplayLink * _displayLink; // +0x28
    double _lastAutoScrollTimestamp; // +0x30
    double _minimumMoveDistance; // +0x38
    CGPoint _lastTouchPoint; // +0x40
    CGPoint _originalTouchPoint; // +0x50
    UIEdgeInsets _autoScrollEdgeInsets; // +0x60
}
- (id)initWithScrollView:(id)arg1;
- (void)start;
- (void)stop;
- (void)startDisplayLinkIfNeeded;
- (void)invalidateDisplayLinkIfNeeded;
- (void)handleDisplayLink:(id)arg1;
- (void)updateWithTouchPointInScrollViewContainer:(CGPoint)arg1;
- (double)autoScrollVelocity;
- (UIEdgeInsets)autoScrollEdgeInsets;
- (void)setAutoScrollEdgeInsets:(UIEdgeInsets)arg1;
- (double)minScrollVelocity;
- (void)setMinScrollVelocity:(double)arg1;
- (double)maxScrollVelocity;
- (void)setMaxScrollVelocity:(double)arg1;
- (id)scrollView;
- (BOOL)isAutoScrolling;
- (void)setIsAutoScrolling:(BOOL)arg1;
- (id)displayLink;
- (void)setDisplayLink:(id)arg1;
- (double)lastAutoScrollTimestamp;
- (void)setLastAutoScrollTimestamp:(double)arg1;
- (CGPoint)lastTouchPoint;
- (void)setLastTouchPoint:(CGPoint)arg1;
- (CGPoint)originalTouchPoint;
- (void)setOriginalTouchPoint:(CGPoint)arg1;
- (double)minimumMoveDistance;
- (void)setMinimumMoveDistance:(double)arg1;
- (void).cxx_destruct;
@end

