@interface WeuiPluginImpl : NSObject <FlutterStreamHandler, MMFlutterPlugin>
{
    id /* block */ eventSink; // +0x8
    double lastKeyboardHeight; // +0x10
    double lastInputAccessoryHeight; // +0x18
    BOOL isShowKeyboard; // +0x20
    BOOL _lastKeyboardHeightValid; // +0x21
    BOOL _isWaitKeyboardAnimation; // +0x22
    BOOL _originalEnablesReturnKeyAutomatically; // +0x23
    int _keyboardState; // +0x24
    long long _notificationTime; // +0x28
    UIViewController * _associateViewController; // +0x30
    UIView<UITextInput> * _flutterTextInput; // +0x38
    UIView * _keyboardGuideView; // +0x40
    CADisplayLink * _displayLink; // +0x48
    double _lastCurrentKeyboardHeight; // +0x50
    unsigned long long _keyboardShowGeneration; // +0x58
    NSNotification * _lastWillShowNotification; // +0x60
    FlutterEventChannel * _externalKeyboardChannel; // +0x68
    ExternalKeyboardStreamHandler * _externalKeyboardHandler; // +0x70
    FlutterMethodChannel * _returnKeyChannel; // +0x78
    FlutterEngine * _returnKeyEngine; // +0x80
    NSString * _returnKeySession; // +0x88
    UIView<UITextInput> * _returnKeyInput; // +0x90
}
+ (id)plugin;
- (id)init;
- (id)onCancelWithArguments:(id)arg1;
- (id)onListenWithArguments:(id)arg1 eventSink:(id /* block */)arg2;
- (void)onAttachedToEngine:(id)arg1;
- (void)onDetachedFromEngine:(id)arg1;
- (void)registEvent;
- (void)clearReturnKeySession;
- (void)handleReturnKeyCall:(id)arg1 result:(id /* block */)arg2;
- (void)checkValidAndFindTextInput;
- (void)invalidatePendingKeyboardShow;
- (void)onKeyboardWillShow:(id)arg1;
- (void)setupKeyboardLayoutGuide;
- (void)caculateKeyboardLayoutGuide:(id)arg1;
- (void)onKeyboardWillHide:(id)arg1;
- (void)onKeyboardDidShow:(id)arg1;
- (void)onKeyboardDidHide:(id)arg1;
- (void)onKeyboardWillChangeFrame:(id)arg1;
- (void)onKeyboardDidChangeFrame:(id)arg1;
- (void)dealloc;
- (id)jsonWithState:(int)arg1 keyboardHeight:(double)arg2 inputAccessoryHeight:(double)arg3 keyboardHeightValid:(BOOL)arg4 notificationTime:(long long)arg5 currentKeyboardHeight:(double)arg6;
- (void)checkIsKeyboardOpen:(id)arg1;
- (id)getKeyboardFrame:(id)arg1;
- (double)bottomObstructionHeightForKeyboardFrame:(CGRect)arg1 notification:(id)arg2;
- (double)visibleInputAccessoryHeightForKeyboardFrame:(CGRect)arg1 notification:(id)arg2;
- (void)onAttachedToViewController:(id)arg1;
- (void)onDetachedToViewController;
- (long long)notificationTime;
- (void)setNotificationTime:(long long)arg1;
- (int)keyboardState;
- (void)setKeyboardState:(int)arg1;
- (id)associateViewController;
- (void)setAssociateViewController:(id)arg1;
- (id)flutterTextInput;
- (void)setFlutterTextInput:(id)arg1;
- (id)keyboardGuideView;
- (void)setKeyboardGuideView:(id)arg1;
- (id)displayLink;
- (void)setDisplayLink:(id)arg1;
- (double)lastCurrentKeyboardHeight;
- (void)setLastCurrentKeyboardHeight:(double)arg1;
- (BOOL)lastKeyboardHeightValid;
- (void)setLastKeyboardHeightValid:(BOOL)arg1;
- (BOOL)isWaitKeyboardAnimation;
- (void)setIsWaitKeyboardAnimation:(BOOL)arg1;
- (unsigned long long)keyboardShowGeneration;
- (void)setKeyboardShowGeneration:(unsigned long long)arg1;
- (id)lastWillShowNotification;
- (void)setLastWillShowNotification:(id)arg1;
- (id)externalKeyboardChannel;
- (void)setExternalKeyboardChannel:(id)arg1;
- (id)externalKeyboardHandler;
- (void)setExternalKeyboardHandler:(id)arg1;
- (id)returnKeyChannel;
- (void)setReturnKeyChannel:(id)arg1;
- (id)returnKeyEngine;
- (void)setReturnKeyEngine:(id)arg1;
- (id)returnKeySession;
- (void)setReturnKeySession:(id)arg1;
- (id)returnKeyInput;
- (void)setReturnKeyInput:(id)arg1;
- (BOOL)originalEnablesReturnKeyAutomatically;
- (void)setOriginalEnablesReturnKeyAutomatically:(BOOL)arg1;
- (void).cxx_destruct;
@end
