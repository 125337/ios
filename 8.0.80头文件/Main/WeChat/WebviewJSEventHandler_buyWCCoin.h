@interface WebviewJSEventHandler_buyWCCoin : WebviewJSEventHandlerBase <WCCoinBuyCoinLogicDelegate>
- (void)handleJSEvent:(id)arg1 HandlerFacade:(id)arg2 ExtraData:(id)arg3;
- (void)buyCoinCancel:(id)arg1;
- (void)buyCoinFail:(id)arg1;
- (void)buyCoinSuccess:(id)arg1;
@end
