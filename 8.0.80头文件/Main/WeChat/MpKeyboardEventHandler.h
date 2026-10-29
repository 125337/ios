@interface MpKeyboardEventHandler : NSObject <FlutterStreamHandler>
{
    BOOL _isKeyboardShown; // +0x8
    BOOL _isWaitKeyboardAnimation; // +0x9
    int _keyboardState; // +0xc
    id /* block */ _eventSink; // +0x10
    double _lastKeyboardHeight; // +0x18
    double _lastInputAccessoryHeight; // +0x20
    long long _notificationTime; // +0x28
    NSObject<FlutterPluginRegistrar> * _registrar; // +0x30
    UIView<UITextInput> * _textInput; // +0x38
    UIView * _keyboardGuideView; // +0x40
    CADisplayLink * _displayLink; // +0x48
    double _lastCurrentKeyboardHeight; // +0x50
    NSNotification * _lastWillShowNotification; // +0x58
}
- (id)init;
- (id)mpKeyWindow;
- (id)associateViewController;
- (void)checkValidAndFindTextInput;
- (double)currentInputAccessoryHeight;
- (void)setupKeyboardLayoutGuide;
- (void)caculateKeyboardLayoutGuide:(id)arg1;
- (double)currentKeyboardHeightFromGuide;
- (void)startObserving;
- (void)stopObserving;
- (void)onKeyboardWillShow:(id)arg1;
- (void)onKeyboardDidShow:(id)arg1;
- (void)onKeyboardWillHide:(id)arg1;
- (void)onKeyboardDidHide:(id)arg1;
- (void)checkIsKeyboardOpen:(id)arg1;
- (int)defaultAnimationDuration;
- (id)getKeyboardHeight:(id)arg1;
- (void)sendEventWithKeyboardHeight:(double)arg1 inputAccessoryHeight:(double)arg2 notificationTime:(long long)arg3 currentKeyboardHeight:(double)arg4 animationDuration:(int)arg5;
- (id)onListenWithArguments:(id)arg1 eventSink:(id /* block */)arg2;
- (id)onCancelWithArguments:(id)arg1;
- (void)dealloc;
- (id /* block */)eventSink;
- (void)setEventSink:(id /* block */)arg1;
- (BOOL)isKeyboardShown;
- (void)setIsKeyboardShown:(BOOL)arg1;
- (double)lastKeyboardHeight;
- (void)setLastKeyboardHeight:(double)arg1;
- (double)lastInputAccessoryHeight;
- (void)setLastInputAccessoryHeight:(double)arg1;
- (int)keyboardState;
- (void)setKeyboardState:(int)arg1;
- (long long)notificationTime;
- (void)setNotificationTime:(long long)arg1;
- (id)registrar;
- (void)setRegistrar:(id)arg1;
- (id)textInput;
- (void)setTextInput:(id)arg1;
- (id)keyboardGuideView;
- (void)setKeyboardGuideView:(id)arg1;
- (id)displayLink;
- (void)setDisplayLink:(id)arg1;
- (double)lastCurrentKeyboardHeight;
- (void)setLastCurrentKeyboardHeight:(double)arg1;
- (BOOL)isWaitKeyboardAnimation;
- (void)setIsWaitKeyboardAnimation:(BOOL)arg1;
- (id)lastWillShowNotification;
- (void)setLastWillShowNotification:(id)arg1;
- (void).cxx_destruct;
@end
