@interface BizPrivateMsgInputTapObserver : NSObject <UIGestureRecognizerDelegate>
{
    UIView * _view; // +0x8
    UITapGestureRecognizer * _tapRecognizer; // +0x10
    BOOL _wasFocusedOnTouchBegin; // +0x18
    id /* block */ _onTap; // +0x20
}
- (void)dealloc;
- (void)attachToView:(id)arg1 onTap:(id /* block */)arg2;
- (void)onTapRecognized:(id)arg1;
- (BOOL)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (void).cxx_destruct;
@end
