@interface MMFlutterEdgeGesture : UIGestureRecognizer
{
    NSObject<MMFlutterEdgeGestureDelegate> * _touchDelegate; // +0x8
}
- (id)initWithTarget:(id)arg1 action:(SEL)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (BOOL)canPreventGestureRecognizer:(id)arg1;
- (BOOL)canBePreventedByGestureRecognizer:(id)arg1;
- (id)touchDelegate;
- (void)setTouchDelegate:(id)arg1;
@end
