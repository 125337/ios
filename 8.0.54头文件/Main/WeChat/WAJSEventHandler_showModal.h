@interface WAJSEventHandler_showModal : WAJSEventHandler_BaseEvent <IWAWebViewPluginDelegate>
{
    WAWebViewPlugin_InputKeyboard * _keyboardPlugin; // +0x8
    WAWebViewPlugin_NativeView * _nativeInstance; // +0x10
}
- (void)handleJSEvent:(id)arg1;
- (void)onError:(id)arg1;
- (void)onSuccess:(id)arg1;
- (id)keyboardPlugin;
- (void)setKeyboardPlugin:(id)arg1;
- (id)nativeInstance;
- (void)setNativeInstance:(id)arg1;
- (void).cxx_destruct;
@end

