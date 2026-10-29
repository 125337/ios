@interface LocalJSEventHandler_showPickerView : LocalJSEventHandler_BaseEvent <MMWebViewPluginShowMultiPickerDelegate>
- (void)handleJSEvent:(id)arg1;
- (void)onMultiPickerFailWithMsg:(id)arg1;
- (void)onMultiPickerCancelWithMsg:(id)arg1;
- (void)onMultiPickerSuccessWithReustDict:(id)arg1;
@end

