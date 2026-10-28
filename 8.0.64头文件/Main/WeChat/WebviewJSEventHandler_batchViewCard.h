@interface WebviewJSEventHandler_batchViewCard : WebviewJSEventHandlerBase <WCBatchViewCardHelpDelegate>
{
    WCBatchViewCardHelper * _viewCardHelp; // +0x8
}
- (void)handleJSEvent:(id)arg1 HandlerFacade:(id)arg2 ExtraData:(id)arg3;
- (id)getDelegateViewController;
- (void)onBatchViewCardReturn;
- (id)viewCardHelp;
- (void)setViewCardHelp:(id)arg1;
- (void).cxx_destruct;
@end
