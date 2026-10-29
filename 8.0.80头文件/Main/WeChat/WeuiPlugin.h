@interface WeuiPlugin : NSObject <FlutterStreamHandler, FlutterPlugin>
{
    id /* block */ eventSink; // +0x8
    int lastKeyboardHeight; // +0x10
    BOOL isShowKeyboard; // +0x14
}
+ (void)registerWithRegistrar:(id)arg1;
- (id)onCancelWithArguments:(id)arg1;
- (id)onListenWithArguments:(id)arg1 eventSink:(id /* block */)arg2;
- (void)registEvent;
- (void)onKeyboardWillShow:(id)arg1;
- (void)onKeyboardWillHide:(id)arg1;
- (void)onKeyboardDidShow:(id)arg1;
- (void)dealloc;
- (id)showKeyboard:(BOOL)arg1 keyboardHeight:(double)arg2;
- (void)checkIsKeyboardOpen:(id)arg1;
- (id)getKeyboardHeight:(id)arg1;
- (void).cxx_destruct;
@end
