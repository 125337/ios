@interface WCKeyboardFrameMonitorView : UIView
{
    BOOL _isLayoutInvalid; // +0x8
    id <WCKeyboardFrameMonitorDelegate> _notifyDelegate; // +0x10
    id /* block */ _keyboardFrameChange; // +0x18
    NSNotification * _pendingWillChangeNotification; // +0x20
    NSNotification * _pendingDidChangeNotification; // +0x28
    CGRect _lastFrame; // +0x30
}
- (id)initWithFrame:(CGRect)arg1;
- (void)layoutSubviews;
- (void)updateKeyboardFrame:(CGRect)arg1;
- (void)didMoveToSuperview;
- (void)didMoveToWindow;
- (void)markLayoutInvalid;
- (void)onSystemKeyboardFrameWillChange:(id)arg1;
- (void)onSystemKeyboardFrameDidChange:(id)arg1;
- (CGRect)lastFrame;
- (void)setLastFrame:(CGRect)arg1;
- (id)notifyDelegate;
- (void)setNotifyDelegate:(id)arg1;
- (id /* block */)keyboardFrameChange;
- (void)setKeyboardFrameChange:(id /* block */)arg1;
- (BOOL)isLayoutInvalid;
- (void)setIsLayoutInvalid:(BOOL)arg1;
- (id)pendingWillChangeNotification;
- (void)setPendingWillChangeNotification:(id)arg1;
- (id)pendingDidChangeNotification;
- (void)setPendingDidChangeNotification:(id)arg1;
- (void).cxx_destruct;
@end
