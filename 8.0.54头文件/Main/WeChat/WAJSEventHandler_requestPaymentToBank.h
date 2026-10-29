@interface WAJSEventHandler_requestPaymentToBank : WAJSEventHandler_BaseEvent <WCPayCheckoutCounterLogicDelegate>
{
    NSDictionary * _param; // +0x8
}
- (void)handleJSEvent:(id)arg1;
- (id)getWCPayCheckoutParam;
- (void)onWCPayCheckoutSuccess:(id)arg1;
- (void)onWCPayCheckoutFail:(id)arg1 dicResult:(id)arg2;
- (id)param;
- (void)setParam:(id)arg1;
- (void).cxx_destruct;
@end

