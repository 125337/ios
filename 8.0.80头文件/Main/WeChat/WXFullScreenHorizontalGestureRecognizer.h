@interface WXFullScreenHorizontalGestureRecognizer : UIGestureRecognizer <UIGestureRecognizerDelegate>
{
    BOOL _enableDragLeftToClose; // +0x8
    BOOL _enableDragRightToClose; // +0x9
    BOOL _enableDragDownToClose; // +0xa
    BOOL _isLongPressHandled; // +0xb
    BOOL _shouldCloseWhenGestureEnd; // +0xc
    BOOL _hasBeginDrag; // +0xd
    BOOL _shouldIgnoreDrag; // +0xe
    id <FullScreenGestureDelegate> _m_delegate; // +0x10
    unsigned long long _panGestureLastTimeStamp; // +0x18
    double _panGestureAnimationDuration; // +0x20
    UIScrollView * _pagingScrollView; // +0x28
    UIScrollView * _innerScrollView; // +0x30
    UIView * _parentView; // +0x38
    UIPanGestureRecognizer * _panGestureRecognizer; // +0x40
    CGPoint _touchBeginPoint; // +0x48
    CGPoint _panGestureBeginPoint; // +0x58
    CGPoint _panGestureLastPosition; // +0x68
    CGPoint _originPagingContentOffset; // +0x78
    CGPoint _originInnerContentOffset; // +0x88
    CGRect _containerFrame; // +0x98
}
- (id)initWithView:(id)arg1;
- (id)panGestureRecognizer;
- (CGPoint)touchBeginPoint;
- (void)resetWithContainerFrame:(CGRect)arg1;
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
- (BOOL)enableDragToClose;
- (BOOL)enableDragDownToClose;
- (BOOL)gestureRecognizerShouldBegin:(id)arg1;
- (void)onDragging:(id)arg1;
- (BOOL)shouldHandleDragWithTranslation:(CGPoint)arg1;
- (void)handleDraggingChanged:(CGPoint)arg1 velocity:(CGPoint)arg2;
- (BOOL)shouldCloseWhenGestureEndWithTranslation:(CGPoint)arg1 velocity:(CGPoint)arg2;
- (double)distanceBetweenPointA:(CGPoint)arg1 pointB:(CGPoint)arg2;
- (double)durationFromCurPositionToTargetPointWithSpeed:(double)arg1 dist:(double)arg2;
- (id)m_delegate;
- (void)setM_delegate:(id)arg1;
- (BOOL)enableDragLeftToClose;
- (void)setEnableDragLeftToClose:(BOOL)arg1;
- (BOOL)enableDragRightToClose;
- (void)setEnableDragRightToClose:(BOOL)arg1;
- (void)setEnableDragDownToClose:(BOOL)arg1;
- (CGRect)containerFrame;
- (void)setContainerFrame:(CGRect)arg1;
- (void)setTouchBeginPoint:(CGPoint)arg1;
- (BOOL)isLongPressHandled;
- (void)setIsLongPressHandled:(BOOL)arg1;
- (CGPoint)panGestureBeginPoint;
- (void)setPanGestureBeginPoint:(CGPoint)arg1;
- (BOOL)shouldCloseWhenGestureEnd;
- (void)setShouldCloseWhenGestureEnd:(BOOL)arg1;
- (unsigned long long)panGestureLastTimeStamp;
- (void)setPanGestureLastTimeStamp:(unsigned long long)arg1;
- (CGPoint)panGestureLastPosition;
- (void)setPanGestureLastPosition:(CGPoint)arg1;
- (double)panGestureAnimationDuration;
- (void)setPanGestureAnimationDuration:(double)arg1;
- (BOOL)hasBeginDrag;
- (void)setHasBeginDrag:(BOOL)arg1;
- (BOOL)shouldIgnoreDrag;
- (void)setShouldIgnoreDrag:(BOOL)arg1;
- (CGPoint)originPagingContentOffset;
- (void)setOriginPagingContentOffset:(CGPoint)arg1;
- (CGPoint)originInnerContentOffset;
- (void)setOriginInnerContentOffset:(CGPoint)arg1;
- (id)pagingScrollView;
- (void)setPagingScrollView:(id)arg1;
- (id)innerScrollView;
- (void)setInnerScrollView:(id)arg1;
- (id)parentView;
- (void)setParentView:(id)arg1;
- (void)setPanGestureRecognizer:(id)arg1;
- (void).cxx_destruct;
@end
