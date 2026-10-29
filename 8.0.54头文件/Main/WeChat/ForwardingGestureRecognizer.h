@interface ForwardingGestureRecognizer : UIGestureRecognizer <UIGestureRecognizerDelegate>
{
    WeakPtr<flutter::FlutterPlatformViewsController> _platformViewsController; // +0x8
    long long _currentTouchPointersCount; // +0x20
    scoped_nsobject<UIViewController> _flutterViewController; // +0x28
}
- (id)initWithTarget:(id)arg1 platformViewsController:(WeakPtr<flutter::FlutterPlatformViewsController>)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (void).cxx_destruct;
- (id).cxx_construct;
@end

