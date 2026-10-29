@interface WebviewJSEventHandler_showPickerView : WebviewJSEventHandlerBase <MMWebViewPluginShowMultiPickerDelegate>
- (void)handleJSEvent:(id)arg1 HandlerFacade:(id)arg2 ExtraData:(id)arg3;
- (void)onMultiPickerFailWithMsg:(id)arg1;
- (void)onMultiPickerCancelWithMsg:(id)arg1;
- (void)onMultiPickerSuccessWithReustDict:(id)arg1;
@end

