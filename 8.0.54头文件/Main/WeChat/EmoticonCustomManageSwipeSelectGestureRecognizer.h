@interface EmoticonCustomManageSwipeSelectGestureRecognizer : UIGestureRecognizer
{
    BOOL _gestureRecognized; // +0x8
    CGPoint _startPoint; // +0x10
    CGPoint _lastPoint; // +0x20
}
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)cleanAll;
- (BOOL)gestureRecognized;
- (void)setGestureRecognized:(BOOL)arg1;
- (CGPoint)startPoint;
- (void)setStartPoint:(CGPoint)arg1;
- (CGPoint)lastPoint;
- (void)setLastPoint:(CGPoint)arg1;
@end

