@interface WAAllTouchRecognizer : UIGestureRecognizer <UIGestureRecognizerDelegate>
{
    id <WAAllTouchRecognizerDelegate> _touchDelegate; // +0x8
}
- (id)init;
- (BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (id)touchDelegate;
- (void)setTouchDelegate:(id)arg1;
- (void).cxx_destruct;
@end

