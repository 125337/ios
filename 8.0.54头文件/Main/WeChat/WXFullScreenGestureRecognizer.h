@interface WXFullScreenGestureRecognizer : UIGestureRecognizer <UIGestureRecognizerDelegate>
{
    CGPoint _panGestureBeginPoint; // +0x8
    BOOL _shouldCloseWhenGestureEnd; // +0x18
    unsigned long long _panGestureLastTimeStamp; // +0x20
    CGPoint _panGestureLastPosition; // +0x28
    double _panGestureAnimationDuration; // +0x38
    BOOL _hasBeginDrag; // +0x40
    BOOL _shouldIgnoreDrag; // +0x41
    CGPoint _originPagingContentOffset; // +0x48
    CGPoint _originInnerContentOffset; // +0x58
    UIScrollView * _pagingScrollView; // +0x68
    UIScrollView * _innerScrollView; // +0x70
    UIView * _parentView; // +0x78
    UIPanGestureRecognizer * _panGestureRecognizer; // +0x80
    BOOL _enableDragDownToClose; // +0x88
    BOOL _enableLeftToRight; // +0x89
    BOOL _enableRightToLeft; // +0x8a
    BOOL _isLongPressHandled; // +0x8b
    id <FullScreenGestureDelegate> _m_delegate; // +0x90
    CGPoint _touchBeginPoint; // +0x98
    CGRect _containerFrame; // +0xa8
}
- (id)initWithView:(id)arg1;
- (id)panGestureRecognizer;
- (CGPoint)touchBeginPoint;
- (void)initGestures;
- (BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (void)LongPressBegin;
- (void)LongPressEvents;
- (void)pressedEvents;
- (void)reset;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)cancelPressEvents;
- (double)distanceBetweenPointA:(CGPoint)arg1 pointB:(CGPoint)arg2;
- (double)durationFromCurPositionToTargetPointWithSpeed:(double)arg1;
- (BOOL)shouldCloseWhenGestureEndWithTranslation:(CGPoint)arg1;
- (void)onDragging:(id)arg1;
- (id)m_delegate;
- (void)setM_delegate:(id)arg1;
- (BOOL)enableDragDownToClose;
- (void)setEnableDragDownToClose:(BOOL)arg1;
- (BOOL)enableLeftToRight;
- (void)setEnableLeftToRight:(BOOL)arg1;
- (BOOL)enableRightToLeft;
- (void)setEnableRightToLeft:(BOOL)arg1;
- (CGRect)containerFrame;
- (void)setContainerFrame:(CGRect)arg1;
- (void)setTouchBeginPoint:(CGPoint)arg1;
- (BOOL)isLongPressHandled;
- (void)setIsLongPressHandled:(BOOL)arg1;
- (void).cxx_destruct;
@end

