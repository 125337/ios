@interface YYTextKeyboardManager : NSObject
{
    NSHashTable * _observers; // +0x8
    CGRect _fromFrame; // +0x10
    BOOL _fromVisible; // +0x30
    long long _fromOrientation; // +0x38
    CGRect _notificationFromFrame; // +0x40
    CGRect _notificationToFrame; // +0x60
    double _notificationDuration; // +0x80
    long long _notificationCurve; // +0x88
    BOOL _hasNotification; // +0x90
    CGRect _observedToFrame; // +0x98
    BOOL _hasObservedChange; // +0xb8
    BOOL _lastIsNotification; // +0xb9
}
+ (id)defaultManager;
+ (void)load;
- (id)init;
- (id)_init;
- (void)_initFrameObserver;
- (void)dealloc;
- (void)addObserver:(id)arg1;
- (void)removeObserver:(id)arg1;
- (id)keyboardWindow;
- (id)keyboardView;
- (BOOL)isKeyboardVisible;
- (CGRect)keyboardFrame;
- (double)_systemVersion;
- (id)_getKeyboardViewFromWindow:(id)arg1;
- (void)_keyboardFrameWillChangeNotification:(id)arg1;
- (void)_keyboardFrameDidChangeNotification:(id)arg1;
- (void)_keyboardFrameChanged:(id)arg1;
- (void)_notifyAllObservers;
- (CGRect)convertRect:(CGRect)arg1 toView:(id)arg2;
- (void).cxx_destruct;
@end

