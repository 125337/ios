@interface WCPayJSRequestHKCashierLogic : WCPayJSAuthBaseLogic
{
    id <WCPayJSRequestHKCashierLogicDelegate> _delegate; // +0x38
}
- (id)initWithJSEvent:(id)arg1 param:(id)arg2 delegate:(id)arg3;
- (void)authOk;
- (void)authFail;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (void).cxx_destruct;
@end

