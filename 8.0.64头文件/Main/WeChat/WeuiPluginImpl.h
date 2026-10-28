@interface WeuiPluginImpl : NSObject <FlutterStreamHandler, MMFlutterPlugin>
{
    id /* block */ eventSink; // +0x8
    double lastKeyboardHeight; // +0x10
    double lastInputAccessoryHeight; // +0x18
    BOOL isShowKeyboard; // +0x20
    UIViewController * _associateViewController; // +0x28
    UIView<UITextInput> * _flutterTextInput; // +0x30
}
+ (id)plugin;
- (id)init;
- (id)onCancelWithArguments:(id)arg1;
- (id)onListenWithArguments:(id)arg1 eventSink:(id /* block */)arg2;
- (void)onAttachedToEngine:(id)arg1;
- (void)onDetachedFromEngine:(id)arg1;
- (void)registEvent;
- (void)checkValidAndFindTextInput;
- (void)onKeyboardWillShow:(id)arg1;
- (void)onKeyboardWillHide:(id)arg1;
- (void)onKeyboardDidShow:(id)arg1;
- (void)dealloc;
- (id)showKeyboard:(BOOL)arg1 keyboardHeight:(double)arg2 inputAccessoryHeight:(double)arg3;
- (void)checkIsKeyboardOpen:(id)arg1;
- (id)getKeyboardHeight:(id)arg1;
- (void)onAttachedToViewController:(id)arg1;
- (void)onDetachedToViewController;
- (id)associateViewController;
- (void)setAssociateViewController:(id)arg1;
- (id)flutterTextInput;
- (void)setFlutterTextInput:(id)arg1;
- (void).cxx_destruct;
@end
