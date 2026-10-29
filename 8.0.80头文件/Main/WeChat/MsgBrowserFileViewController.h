@interface MsgBrowserFileViewController : MsgBrowserDefaultViewController <MessageTransferMgrExt>
- (void)dealloc;
- (void)viewDidLoad;
- (void)onMessageTransferComplete:(id)arg1 error:(id)arg2;
@end
