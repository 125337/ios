@interface ForwardingGestureRecognizer : UIGestureRecognizer <UIGestureRecognizerDelegate>
{
    FlutterPlatformViewsController * _platformViewsController; // +0x8
    long long _currentTouchPointersCount; // +0x10
    UIViewController<FlutterViewResponder> * _flutterViewController; // +0x18
}
- (id)initWithTarget:(id)arg1 platformViewsController:(id)arg2;
- (id)recreateRecognizerWithTarget:(id)arg1;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)forceResetStateIfNeeded;
- (BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (void).cxx_destruct;
@end
