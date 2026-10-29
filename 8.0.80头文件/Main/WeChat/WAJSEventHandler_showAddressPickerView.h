@interface WAJSEventHandler_showAddressPickerView : WAJSEventHandler_BaseEvent <IWAWebViewPluginDelegate>
- (void)handleJSEvent:(id)arg1;
- (void)showPicker:(id)arg1 mode:(id)arg2;
- (void)onError:(id)arg1;
- (void)onSuccess:(id)arg1;
- (void)onConfirmCancel;
@end
