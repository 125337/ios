@interface WAWebViewPlugin_InputKeyboard : WAWebViewPlugin_embedView <UIGestureRecognizerDelegate, UIScrollViewDelegate, TenpayMiniProgramKeyboardDelegate, WATextInputDelegate>
{
    double _toolBarHeight; // +0x8
    long long _orientation; // +0x10
    NSMutableDictionary * _textInputs; // +0x18
    BOOL _keyboardDidShow; // +0x20
    BOOL _viewDisappear; // +0x21
    BOOL _canShowKeyboard; // +0x22
    BOOL _hidding; // +0x23
    BOOL _modalMask; // +0x24
    BOOL _systemKeyboard; // +0x25
    BOOL _customHiddingKeyboard; // +0x26
    BOOL _isExptEnableInputRecover; // +0x27
    id <InputKeyboardDelegate> _inputDelegate; // +0x28
    WANativeKeyboardAccessoryView * _nativeInputAccessoryView; // +0x30
    id <WATextInputInterface> _field; // +0x38
    WACustomKeyboard * _customKeyboard; // +0x40
    double _keyboardHeight; // +0x48
    NSDictionary * _delayParam; // +0x50
    WAJSEventHandler_BaseEvent * _handler; // +0x58
    double _offset; // +0x60
    id <WATextInputInterface> _checkingField; // +0x68
    NSTimer * _ignoreSafeAreaChangeTimer; // +0x70
    NSHashTable * _blankFields; // +0x78
}
- (id)init;
- (void)showKeyBoard:(id)arg1;
- (void)showKeyboardForExistInput:(id)arg1;
- (void)showSystemKeyboard:(BOOL)arg1;
- (void)showCustomKeyboard:(long long)arg1 confirmButton:(BOOL)arg2;
- (void)onKeyboardDidReady;
- (void)addNotifications;
- (long long)getTextFieldReturnKeyType:(id)arg1;
- (long long)getTextViewReturnKeyType:(id)arg1;
- (long long)getReturnKeyType:(id)arg1 defaultType:(long long)arg2;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)setInputValue:(id)arg1 cursorPos:(long long)arg2;
- (void)dealloc;
- (BOOL)handleEvent:(unsigned long long)arg1 userInfo:(id)arg2;
- (void)setSystemKeyboardMode:(BOOL)arg1;
- (void)updateInputView:(id)arg1;
- (void)updateKeyboardAccessoryViewForInput:(id)arg1;
- (void)onSystemKeyboardWillShow:(id)arg1;
- (void)setWebviewInputFocusing:(BOOL)arg1;
- (BOOL)isWebviewInputFocusing;
- (void)didResize;
- (void)enterBackground:(id)arg1;
- (void)adjustViewPosition:(BOOL)arg1;
- (void)onKeyboardDidShow:(id)arg1;
- (void)onKeyboardWillHide:(id)arg1;
- (void)sendOnKeyboardHeightChangeEventWithHeight:(double)arg1 duration:(double)arg2 inputId:(unsigned int)arg3;
- (BOOL)keyboardVisible;
- (void)setDelayedHandler:(id)arg1 withParam:(id)arg2;
- (void)onKeyboardDidHide:(id)arg1;
- (void)hideKeyBoard:(BOOL)arg1;
- (void)onDone;
- (unsigned int)insertTextField:(id)arg1;
- (void)parseSafePasswordParam:(id)arg1 field:(id)arg2;
- (BOOL)removeTextField:(unsigned int)arg1;
- (BOOL)updateTextField:(id)arg1;
- (BOOL)focusInput:(id)arg1;
- (unsigned int)insertTextArea:(id)arg1;
- (BOOL)removeTextArea:(unsigned int)arg1;
- (BOOL)updateTextArea:(id)arg1;
- (void)onFocus:(id)arg1;
- (void)didValueChange:(id)arg1 pos:(long long)arg2 input:(id)arg3 keyCode:(unsigned short)arg4;
- (void)onCaretBreak;
- (void)didHeightChange:(double)arg1 lineNum:(long long)arg2 input:(id)arg3;
- (BOOL)onReturn:(id)arg1;
- (long long)getLineCount:(unsigned int)arg1;
- (double)getContentHeight:(unsigned int)arg1;
- (void)onDeleteDrop:(id)arg1 input:(id)arg2;
- (void)onSelectDrop:(id)arg1 input:(id)arg2;
- (void)onScrollViewWillBeginDragging:(id)arg1;
- (void)onScrollViewDidEndScroll:(id)arg1;
- (id)getInput;
- (void)setDrapDown:(id)arg1 field:(id)arg2;
- (void)showDropDown:(id)arg1;
- (void)setCurrentViewOffset:(double)arg1;
- (void)setKeyboardAppearance:(id)arg1 WithStr:(id)arg2;
- (id)nativeInputAccessoryView;
- (void)setKeyboardHeight:(double)arg1;
- (void)miniProgramKeybaordTouchNumber:(id)arg1;
- (void)miniProgramKeybaordTouchDelete:(id)arg1;
- (void)miniProgramKeybaordFinish:(id)arg1;
- (id)parseFontFamily:(id)arg1;
- (id)inputDelegate;
- (void)setInputDelegate:(id)arg1;
- (BOOL)modalMask;
- (void)setModalMask:(BOOL)arg1;
- (void)setNativeInputAccessoryView:(id)arg1;
- (id)field;
- (void)setField:(id)arg1;
- (BOOL)systemKeyboard;
- (void)setSystemKeyboard:(BOOL)arg1;
- (id)customKeyboard;
- (void)setCustomKeyboard:(id)arg1;
- (double)keyboardHeight;
- (id)delayParam;
- (void)setDelayParam:(id)arg1;
- (id)handler;
- (void)setHandler:(id)arg1;
- (BOOL)customHiddingKeyboard;
- (void)setCustomHiddingKeyboard:(BOOL)arg1;
- (double)offset;
- (void)setOffset:(double)arg1;
- (id)checkingField;
- (void)setCheckingField:(id)arg1;
- (id)ignoreSafeAreaChangeTimer;
- (void)setIgnoreSafeAreaChangeTimer:(id)arg1;
- (BOOL)isExptEnableInputRecover;
- (void)setIsExptEnableInputRecover:(BOOL)arg1;
- (id)blankFields;
- (void)setBlankFields:(id)arg1;
- (void).cxx_destruct;
@end
