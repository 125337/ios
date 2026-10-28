@interface MinimizePanGestureHandler : NSObject
{
    BOOL _shouldForceCancel; // +0x8
    id <MinimizePanGestureHandlerDelegate> _delegate; // +0x10
    UIPercentDrivenInteractiveTransition * _interactiveTransition; // +0x18
    double _completionSpeed; // +0x20
    unsigned long long _direction; // +0x28
    CGPoint _gestureStartPoint; // +0x30
}
- (void)dealloc;
- (BOOL)isInteracting;
- (void)handleMinimizationPanGesture:(id)arg1;
- (double)progressWithTranslation:(CGPoint)arg1 containerSize:(CGSize)arg2 panDirection:(unsigned long long)arg3;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)interactiveTransition;
- (void)setInteractiveTransition:(id)arg1;
- (BOOL)shouldForceCancel;
- (void)setShouldForceCancel:(BOOL)arg1;
- (double)completionSpeed;
- (void)setCompletionSpeed:(double)arg1;
- (unsigned long long)direction;
- (void)setDirection:(unsigned long long)arg1;
- (CGPoint)gestureStartPoint;
- (void)setGestureStartPoint:(CGPoint)arg1;
- (void).cxx_destruct;
@end
