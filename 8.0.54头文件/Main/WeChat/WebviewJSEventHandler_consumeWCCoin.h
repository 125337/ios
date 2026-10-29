@interface WebviewJSEventHandler_consumeWCCoin : WebviewJSEventHandlerBase <WCCoinConsumeLogicDelegate>
- (void)handleJSEvent:(id)arg1 HandlerFacade:(id)arg2 ExtraData:(id)arg3;
- (void)consumeDidFail:(id)arg1 error:(id)arg2;
- (void)consumeDidSuccess:(id)arg1 result:(id)arg2;
- (void)consumeDidCancel:(id)arg1;
@end

