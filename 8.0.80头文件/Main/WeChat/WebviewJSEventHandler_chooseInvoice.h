@interface WebviewJSEventHandler_chooseInvoice : WebviewJSEventHandlerBase <WCCardChooseViewControllerDelegate>
{
    JSEvent * _jsEvent; // +0x8
}
- (void)handleJSEvent:(id)arg1 HandlerFacade:(id)arg2 ExtraData:(id)arg3;
- (void)onChooseSuccess:(id)arg1;
- (void)onChooseCancel;
- (id)jsEvent;
- (void)setJsEvent:(id)arg1;
- (void).cxx_destruct;
@end
