@interface WAJSEventHandler_buyWCCoin : WAJSEventHandler_BaseEvent <WCCoinBuyCoinLogicDelegate>
- (void)handleJSEvent:(id)arg1;
- (void)buyCoinCancel:(id)arg1;
- (void)buyCoinFail:(id)arg1;
- (void)buyCoinSuccess:(id)arg1;
@end

