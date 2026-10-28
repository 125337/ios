@interface WAJSEventHandler_showMultiPickerView : WAJSEventHandler_BaseEvent <WAWebViewPluginPickerDelegate>
- (void)handleJSEvent:(id)arg1;
- (void)onCancel;
- (void)onConfirm:(id)arg1 values:(id)arg2;
@end
