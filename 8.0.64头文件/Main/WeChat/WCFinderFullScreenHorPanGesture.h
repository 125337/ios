@interface WCFinderFullScreenHorPanGesture : UIGestureRecognizer <UIGestureRecognizerDelegate>
{
    BOOL _enableDragToClose; // +0x8
    BOOL _hasBeginDrag; // +0x9
    BOOL _shouldCloseWhenGestureEnd; // +0xa
    id <WCFinderFullScreenHorPanGestureDelegate> _m_delegate; // +0x10
    UIPanGestureRecognizer * _panGesture; // +0x18
    unsigned long long _panGestureLastTimeStamp; // +0x20
    double _panGestureAnimationDuration; // +0x28
    UIScrollView * _pagingScrollView; // +0x30
    UIScrollView * _innerScrollView; // +0x38
    CGPoint _touchBeginPoint; // +0x40
    CGPoint _panGestureBeginPoint; // +0x50
    CGPoint _panGestureLastPosition; // +0x60
}
- (id)initWithView:(id)arg1 customDelegate:(id)arg2;
- (void)setupGestures:(id)arg1;
- (void)reset;
- (void)onSingleTap;
- (void)cancelPressEvents;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (BOOL)gestureRecognizerShouldBegin:(id)arg1;
- (void)onDragging:(id)arg1;
- (void)handleDraggingChanged:(CGPoint)arg1 velocity:(CGPoint)arg2;
- (BOOL)shouldCloseWhenGestureEndWithTranslation:(CGPoint)arg1 velocity:(CGPoint)arg2;
- (double)distanceBetweenPointA:(CGPoint)arg1 pointB:(CGPoint)arg2;
- (double)durationFromCurPositionToTargetPointWithSpeed:(double)arg1 dist:(double)arg2;
- (BOOL)enableDragToClose;
- (void)setEnableDragToClose:(BOOL)arg1;
- (id)m_delegate;
- (void)setM_delegate:(id)arg1;
- (id)panGesture;
- (void)setPanGesture:(id)arg1;
- (CGPoint)touchBeginPoint;
- (void)setTouchBeginPoint:(CGPoint)arg1;
- (BOOL)hasBeginDrag;
- (void)setHasBeginDrag:(BOOL)arg1;
- (BOOL)shouldCloseWhenGestureEnd;
- (void)setShouldCloseWhenGestureEnd:(BOOL)arg1;
- (CGPoint)panGestureBeginPoint;
- (void)setPanGestureBeginPoint:(CGPoint)arg1;
- (CGPoint)panGestureLastPosition;
- (void)setPanGestureLastPosition:(CGPoint)arg1;
- (unsigned long long)panGestureLastTimeStamp;
- (void)setPanGestureLastTimeStamp:(unsigned long long)arg1;
- (double)panGestureAnimationDuration;
- (void)setPanGestureAnimationDuration:(double)arg1;
- (id)pagingScrollView;
- (void)setPagingScrollView:(id)arg1;
- (id)innerScrollView;
- (void)setInnerScrollView:(id)arg1;
- (void).cxx_destruct;
@end
