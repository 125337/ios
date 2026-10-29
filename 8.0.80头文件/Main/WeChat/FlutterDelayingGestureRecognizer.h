@interface FlutterDelayingGestureRecognizer : UIGestureRecognizer <UIGestureRecognizerDelegate>
{
    BOOL _shouldEndInNextTouchesEnded; // +0x8
    BOOL _touchedEndedWithoutBlocking; // +0x9
    UIGestureRecognizer * _forwardingRecognizer; // +0x10
    FlutterTouchInterceptingView * _interceptingView; // +0x18
}
- (id)initWithTarget:(id)arg1 action:(SEL)arg2 forwardingRecognizer:(id)arg3;
- (BOOL)isInsidePlatformView:(id)arg1;
- (BOOL)gestureRecognizer:(id)arg1 shouldBeRequiredToFailByGestureRecognizer:(id)arg2;
- (BOOL)gestureRecognizer:(id)arg1 shouldRequireFailureOfGestureRecognizer:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (BOOL)shouldEndInNextTouchesEnded;
- (void)setShouldEndInNextTouchesEnded:(BOOL)arg1;
- (BOOL)touchedEndedWithoutBlocking;
- (void)setTouchedEndedWithoutBlocking:(BOOL)arg1;
- (id)forwardingRecognizer;
- (void)setForwardingRecognizer:(id)arg1;
- (id)interceptingView;
- (void)setInterceptingView:(id)arg1;
- (void).cxx_destruct;
@end
