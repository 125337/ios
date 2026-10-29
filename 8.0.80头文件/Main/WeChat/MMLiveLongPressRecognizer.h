@interface MMLiveLongPressRecognizer : UILongPressGestureRecognizer
{
    id <MMLiveGestureRecognizerDelegate> _liveGestureDelegate; // +0x8
}
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (id)liveGestureDelegate;
- (void)setLiveGestureDelegate:(id)arg1;
- (void).cxx_destruct;
@end
