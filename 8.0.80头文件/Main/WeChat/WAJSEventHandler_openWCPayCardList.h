@interface WAJSEventHandler_openWCPayCardList : WAJSEventHandler_BaseEvent <WCPayJumpPayCardListLogicDelegate>
- (void)handleJSEvent:(id)arg1;
- (void)onWCPayJumpPayCardListLogicBack;
- (void)onWCPayJumpPayCardListLogicFail;
@end
