@interface WAAlertInnerShowModel : NSObject <IWAWebViewPluginDelegate>
{
    id <WAJSEventHandlerContextDelegate> _context; // +0x8
    WAWebViewController * _webViewController; // +0x10
    WAWebViewPlugin_InputKeyboard * _keyboardPlugin; // +0x18
    WAWebViewPlugin_NativeView * _nativeInstance; // +0x20
    WAAlertModel * _alertModel; // +0x28
}
- (id)initWithContext:(id)arg1 webViewController:(id)arg2;
- (void)showAlert:(id)arg1;
- (void)onError:(id)arg1;
- (void)onSuccess:(id)arg1;
- (id)context;
- (void)setContext:(id)arg1;
- (id)webViewController;
- (void)setWebViewController:(id)arg1;
- (id)keyboardPlugin;
- (void)setKeyboardPlugin:(id)arg1;
- (id)nativeInstance;
- (void)setNativeInstance:(id)arg1;
- (id)alertModel;
- (void)setAlertModel:(id)arg1;
- (void).cxx_destruct;
@end
