@interface WAJSEventHandler_sendSms : WAJSEventHandler_BaseEvent <MFMessageComposeViewControllerDelegate>
- (void)handleJSEvent:(id)arg1;
- (BOOL)checkContentLengthAvailable:(id)arg1;
- (void)messageComposeViewController:(id)arg1 didFinishWithResult:(long long)arg2;
@end

