@interface FlutterTouchInterceptingView : UIView
{
    scoped_nsobject<DelayingGestureRecognizer> _delayingRecognizer; // +0x8
    int _blockingPolicy; // +0x10
    UIView * _embeddedView; // +0x18
    NSObject * _flutterAccessibilityContainer; // +0x20
}
- (id)initWithEmbeddedView:(id)arg1 platformViewsController:(WeakPtr<flutter::FlutterPlatformViewsController>)arg2 gestureRecognizersBlockingPolicy:(int)arg3;
- (id)embeddedView;
- (void)releaseGesture;
- (BOOL)containsWebView:(id)arg1 remainingSubviewDepth:(int)arg2;
- (void)blockGesture;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)setFlutterAccessibilityContainer:(id)arg1;
- (id)accessibilityContainer;
- (void).cxx_destruct;
- (id).cxx_construct;
@end
