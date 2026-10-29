@interface WAJSEventHandler_openCard : WAJSEventHandler_BaseEvent <WCBatchViewCardHelpDelegate>
{
    WCBatchViewCardHelper * _viewCardHelp; // +0x8
}
- (void)handleJSEvent:(id)arg1;
- (id)getDelegateViewController;
- (void)onBatchViewCardReturn;
- (id)viewCardHelp;
- (void)setViewCardHelp:(id)arg1;
- (void).cxx_destruct;
@end

