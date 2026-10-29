@interface WAWebViewPlugin_WebViewInputKeyboard : WAWebViewPluginBase
- (id)init;
- (void)onKeyboardWillShow:(id)arg1;
- (void)onKeyboardWillHide:(id)arg1;
- (void)sendOnKeyboardHeightChangeEventWithHeight:(double)arg1 duration:(double)arg2;
@end

