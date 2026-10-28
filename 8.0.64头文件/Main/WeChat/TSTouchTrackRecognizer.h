@interface TSTouchTrackRecognizer : UITapGestureRecognizer <UIGestureRecognizerDelegate>
{
    id /* block */ _eventHandler; // +0x8
}
- (id)initWithEventHandler:(id /* block */)arg1;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)ignoreTouch:(id)arg1 forEvent:(id)arg2;
- (BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (id /* block */)eventHandler;
- (void)setEventHandler:(id /* block */)arg1;
- (void).cxx_destruct;
@end
