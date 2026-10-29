@interface MMLiveObjectManipulationGestureRecognizer : UIGestureRecognizer <MMLiveObjectManipulationGestureRecognizing>
{
    CGPoint _currentTouchPosition; // +0x8
    CGAffineTransformComponents _transformComponents; // +0x18
    CGAffineTransformComponents _transformComponentsAtGesetureBeginning; // +0x48
}
- (id)initWithTarget:(id)arg1 action:(SEL)arg2;
- (CGAffineTransform)transform;
- (CGAffineTransform)transformAtGesetureBeginning;
- (void)overrideCurrentTransformComponents:(CGAffineTransformComponents)arg1;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)reset;
- (void)updateTouchPositionWithTouches:(id)arg1;
- (void)updateTransformAndTouchPositionWithTouches:(id)arg1;
- (void)updateTransformWithTouch:(id)arg1;
- (void)updateTransformWithTouchA:(id)arg1 andTouchB:(id)arg2;
- (void)resetState;
- (CGAffineTransformComponents)decomposeManipulationTransform:(CGAffineTransform)arg1;
- (CGAffineTransformComponents)transformComponents;
- (void)setTransformComponents:(CGAffineTransformComponents)arg1;
- (CGAffineTransformComponents)transformComponentsAtGesetureBeginning;
- (void)setTransformComponentsAtGesetureBeginning:(CGAffineTransformComponents)arg1;
- (CGPoint)currentTouchPosition;
- (void)setCurrentTouchPosition:(CGPoint)arg1;
@end
