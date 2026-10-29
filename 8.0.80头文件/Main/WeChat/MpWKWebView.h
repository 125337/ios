@interface MpWKWebView : WKWebView
{
    BOOL _contentOffsetLocked; // +0x8
    CGPoint _lockedOffset; // +0x10
    BOOL _contentInsetControlEnabled; // +0x20
    double _controlledInsetBottom; // +0x28
    double _pendingInsetBottom; // +0x30
    BOOL _hasPendingInset; // +0x38
    UIView * _customInputAccessoryView; // +0x40
    UIView * _customInputView; // +0x48
    BOOL _keyboardFocusEnabled; // +0x50
    BOOL _keyboardFocusSet; // +0x51
    BOOL _contentViewHookInstalled; // +0x52
}
- (id)initWithFrame:(CGRect)arg1 configuration:(id)arg2;
- (void)mp_lockContentOffset;
- (void)mp_unlockContentOffset;
- (BOOL)mp_isContentOffsetLocked;
- (void)mp_enableContentInsetControl;
- (void)mp_disableContentInsetControl;
- (BOOL)mp_isContentInsetControlEnabled;
- (void)mp_setControlledInsetBottom:(double)arg1;
- (BOOL)mp_flushPendingInsetBottom;
- (void)_mp_startKeyboardObserver;
- (void)_mp_stopKeyboardObserver;
- (void)_mp_ensureContentViewHookInstalled;
- (void)mp_setInputAccessoryView:(id)arg1;
- (id)mp_inputAccessoryView;
- (void)mp_setInputView:(id)arg1;
- (id)mp_inputView;
- (void)mp_reloadInputViews;
- (void)mp_enableKeyboardFocusOnce;
- (void)mp_resetKeyboardFocus;
- (void)_mp_onKeyboardDidShowForFocusReset:(id)arg1;
- (void)dealloc;
- (void).cxx_destruct;
@end
