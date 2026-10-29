@interface LiteAppJsApiTingBase : LiteAppJsApi <JSEventHandler>
{
    WebviewJSEventHandlerTingBase * _tingHandler; // +0x20
}
- (id)init;
- (void)invokeJsApi:(id)arg1 param:(id)arg2 isFromView:(BOOL)arg3;
- (id)tingEventPlugin;
- (id)genTingEventHandler;
- (void)onEndEvent:(id)arg1 withResult:(id)arg2;
- (id)GetCurrentWebviewViewController;
- (id)tingHandler;
- (void)setTingHandler:(id)arg1;
- (void).cxx_destruct;
@end

