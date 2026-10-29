@interface WebviewJSEventHandler_consumedShareCard : WebviewJSEventHandlerBase <IWCShareCardPkgExt, WCNewShareCardConsumedViewDelegate>
{
    NSString * _consumedCardId; // +0x8
    NSString * _consumedCode; // +0x10
    WCNewShareCardConsumedView * _newconsumedView; // +0x18
}
- (void)handleJSEvent:(id)arg1 HandlerFacade:(id)arg2 ExtraData:(id)arg3;
- (void)onShareCardAfterConsumed:(BOOL)arg1;
- (void)onShareCardConsumedViewCloseBtnClick;
- (void).cxx_destruct;
@end

