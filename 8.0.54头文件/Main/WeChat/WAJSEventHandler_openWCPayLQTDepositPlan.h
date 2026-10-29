@interface WAJSEventHandler_openWCPayLQTDepositPlan : WAJSEventHandler_BaseEvent <WCPayJSOpenLQTDepositPlanLogicDelegate>
- (void)handleJSEvent:(id)arg1;
- (void)onOk;
- (void)onFail;
- (void)onWCPayJSOpenLQTDepositPlanLogicOk;
- (void)onWCPayJSOpenLQTDepositPlanLogicFail;
@end

