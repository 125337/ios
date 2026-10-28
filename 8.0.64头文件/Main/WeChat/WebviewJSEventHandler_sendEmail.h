@interface WebviewJSEventHandler_sendEmail : WebviewJSEventHandlerBase <MFMailComposeViewControllerDelegate>
- (void)handleJSEvent:(id)arg1 HandlerFacade:(id)arg2 ExtraData:(id)arg3;
- (void)mailComposeController:(id)arg1 didFinishWithResult:(long long)arg2 error:(id)arg3;
@end
