@interface MinimizeEdgeGestureHandler : NSObject
{
    BOOL _shouldForceCancel; // +0x8
    id <MinimizeEdgeGestureHandlerDelegate> _delegate; // +0x10
    UIPercentDrivenInteractiveTransition * _interactiveTransition; // +0x18
    double _completionSpeed; // +0x20
    double _completionProgressThreshold; // +0x28
    CGPoint _gestureStartPoint; // +0x30
}
- (id)init;
- (void)setCompletionProgressThreshold:(double)arg1;
- (void)dealloc;
- (BOOL)isInteracting;
- (void)handleMinimizationEdgeGesture:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)interactiveTransition;
- (void)setInteractiveTransition:(id)arg1;
- (BOOL)shouldForceCancel;
- (void)setShouldForceCancel:(BOOL)arg1;
- (double)completionSpeed;
- (void)setCompletionSpeed:(double)arg1;
- (double)completionProgressThreshold;
- (CGPoint)gestureStartPoint;
- (void)setGestureStartPoint:(CGPoint)arg1;
- (void).cxx_destruct;
@end
