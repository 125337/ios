@interface LiteAppJsApiSendSms : LiteAppJsApi <MFMessageComposeViewControllerDelegate>
- (void)invokeJsApi:(id)arg1 param:(id)arg2 isFromView:(BOOL)arg3;
- (BOOL)checkContentLengthAvailable:(id)arg1;
- (void)messageComposeViewController:(id)arg1 didFinishWithResult:(long long)arg2;
@end
