@interface LVDelayingGestureRecognizer : UIGestureRecognizer <UIGestureRecognizerDelegate>
{
    BOOL _isGestureHandledByFlutter; // +0x8
}
- (id)initWithTarget:(id)arg1 action:(SEL)arg2;
- (BOOL)gestureRecognizer:(id)arg1 shouldBeRequiredToFailByGestureRecognizer:(id)arg2;
- (BOOL)gestureRecognizer:(id)arg1 shouldRequireFailureOfGestureRecognizer:(id)arg2;
- (void)releaseGesture;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (BOOL)isGestureHandledByFlutter;
- (void)setIsGestureHandledByFlutter:(BOOL)arg1;
@end
