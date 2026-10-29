@interface WAJSEventHandler_showDatePickerView : WAJSEventHandler_BaseEvent <WAWebViewPluginPickerDelegate>
- (void)handleJSEvent:(id)arg1;
- (void)onCancel;
- (void)onDateTimeConfirm:(id)arg1;
@end
