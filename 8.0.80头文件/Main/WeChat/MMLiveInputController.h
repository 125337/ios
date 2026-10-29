@interface MMLiveInputController : WCInputController <ClickStatSwizzleExt>
{
    double _lastTouchEventTimestamp; // +0x80
}
- (id)init;
- (void)initNotification;
- (void)dealloc;
- (void)setFKeyboardHeight:(double)arg1;
- (void)liveInputKeyboardDidShow:(id)arg1;
- (void)notifyInputViewHeightChanged;
- (void)onSendEvent:(id)arg1;
- (void)onHitTextViewWithEvent:(id)arg1;
- (double)lastTouchEventTimestamp;
- (void)setLastTouchEventTimestamp:(double)arg1;
@end
