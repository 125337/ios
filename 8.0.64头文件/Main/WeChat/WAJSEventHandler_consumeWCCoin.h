@interface WAJSEventHandler_consumeWCCoin : WAJSEventHandler_BaseEvent <WCCoinConsumeLogicDelegate>
- (void)handleJSEvent:(id)arg1;
- (void)consumeDidFail:(id)arg1 error:(id)arg2;
- (void)consumeDidSuccess:(id)arg1 result:(id)arg2;
- (void)consumeDidCancel:(id)arg1;
@end
