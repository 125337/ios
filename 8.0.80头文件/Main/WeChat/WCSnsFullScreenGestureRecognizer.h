@interface WCSnsFullScreenGestureRecognizer : WXFullScreenGestureRecognizer
{
    UIView * _dragHostView; // +0x8
    id <FullScreenGestureDelegate> _pendingDragCancellationDelegate; // +0x10
    unsigned long long _dragCancellationGeneration; // +0x18
    CGSize _dragContainerSize; // +0x20
    CGPoint _pageDragBeginPoint; // +0x30
}
- (id)initWithView:(id)arg1;
- (BOOL)usesPageDragSize;
- (void)onDragging:(id)arg1;
- (void)handleDraggingChanged:(CGPoint)arg1 velocity:(CGPoint)arg2;
- (double)dragDistanceAtPoint:(CGPoint)arg1;
- (CGRect)restingDragFrame;
- (CGRect)dragFrameAtPoint:(CGPoint)arg1;
- (double)dragAlphaAtPoint:(CGPoint)arg1;
- (void)cancelDragWithDelegate:(id)arg1;
- (void)finishPendingDragCancellation;
- (CGSize)dragContainerSize;
- (void)setDragContainerSize:(CGSize)arg1;
- (id)dragHostView;
- (void)setDragHostView:(id)arg1;
- (CGPoint)pageDragBeginPoint;
- (void)setPageDragBeginPoint:(CGPoint)arg1;
- (id)pendingDragCancellationDelegate;
- (void)setPendingDragCancellationDelegate:(id)arg1;
- (unsigned long long)dragCancellationGeneration;
- (void)setDragCancellationGeneration:(unsigned long long)arg1;
- (void).cxx_destruct;
@end
