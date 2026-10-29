@interface MMLiveInputController : WCInputController
- (id)init;
- (void)initNotification;
- (void)dealloc;
- (void)setFKeyboardHeight:(double)arg1;
- (void)liveInputKeyboardDidShow:(id)arg1;
- (void)notifyInputViewHeightChanged;
@end

