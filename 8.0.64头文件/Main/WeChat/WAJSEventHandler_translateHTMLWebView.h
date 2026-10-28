@interface WAJSEventHandler_translateHTMLWebView : WAJSEventHandler_BaseEvent <WAWebViewPlugin_HTMLWeb_Ext>
{
    BOOL _translate; // +0x8
    WAWebViewPlugin_HTMLWeb * _htmlWeb; // +0x10
}
- (void)dealloc;
- (void)handleJSEvent:(id)arg1;
- (void)onHTMLWeb:(id)arg1 translateFinish:(BOOL)arg2;
- (void)onHTMLWeb:(id)arg1 translateRevertFinish:(BOOL)arg2;
- (id)htmlWeb;
- (void)setHtmlWeb:(id)arg1;
- (BOOL)translate;
- (void)setTranslate:(BOOL)arg1;
- (void).cxx_destruct;
@end
