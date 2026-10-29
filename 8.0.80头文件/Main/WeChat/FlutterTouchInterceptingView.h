@interface FlutterTouchInterceptingView : UIView
{
    int _blockingPolicy; // +0x8
    id _flutterAccessibilityContainer; // +0x10
    UIView * _embeddedView; // +0x18
    FlutterDelayingGestureRecognizer * _delayingRecognizer; // +0x20
}
- (id)initWithEmbeddedView:(id)arg1 platformViewsController:(id)arg2 gestureRecognizersBlockingPolicy:(int)arg3;
- (void)forceResetForwardingGestureRecognizerState;
- (void)releaseGesture;
- (BOOL)containsWebView:(id)arg1 remainingSubviewDepth:(int)arg2;
- (void)blockGesture;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (id)accessibilityContainer;
- (id)flutterAccessibilityContainer;
- (void)setFlutterAccessibilityContainer:(id)arg1;
- (id)embeddedView;
- (id)delayingRecognizer;
- (int)blockingPolicy;
- (void).cxx_destruct;
@end
