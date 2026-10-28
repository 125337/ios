@interface MMCameraTouchEventView : MMUIView
{
    id <MMCameraTouchEventViewDelegate> _delegate; // +0x8
}
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)makeAllGestureRecognizerNotCancelsTouches;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (void).cxx_destruct;
@end
