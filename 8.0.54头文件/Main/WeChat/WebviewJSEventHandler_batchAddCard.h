@interface WebviewJSEventHandler_batchAddCard : WebviewJSEventHandlerBase <WCCardAddHelperDelegate>
{
    JSEvent * _jsEvent; // +0x8
    WCCardAddHelper * _addHelper; // +0x10
}
- (void)handleJSEvent:(id)arg1 HandlerFacade:(id)arg2 ExtraData:(id)arg3;
- (id)getViewController;
- (void)onAddSuccess:(id)arg1;
- (void)onAddFail:(id)arg1;
- (void)onAddCancel;
- (void).cxx_destruct;
@end

