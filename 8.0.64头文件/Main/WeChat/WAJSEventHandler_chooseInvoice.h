@interface WAJSEventHandler_chooseInvoice : WAJSEventHandler_BaseEvent <WCCardChooseViewControllerDelegate>
- (void)handleJSEvent:(id)arg1;
- (void)onChooseSuccess:(id)arg1;
- (void)onChooseCancel;
@end
