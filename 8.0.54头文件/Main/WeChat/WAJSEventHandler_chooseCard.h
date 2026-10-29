@interface WAJSEventHandler_chooseCard : WAJSEventHandler_BaseEvent <WCCardChooseViewControllerDelegate>
- (void)handleJSEvent:(id)arg1;
- (void)onChooseSuccess:(id)arg1;
- (void)onChooseCancel;
@end

