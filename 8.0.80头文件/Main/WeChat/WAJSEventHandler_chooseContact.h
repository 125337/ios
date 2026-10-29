@interface WAJSEventHandler_chooseContact : WAJSEventHandler_BaseEvent <CNContactPickerDelegate>
- (void)handleJSEvent:(id)arg1;
- (id)getWebviewController;
- (void)contactPickerDidCancel:(id)arg1;
- (void)contactPicker:(id)arg1 didSelectContactProperty:(id)arg2;
@end
