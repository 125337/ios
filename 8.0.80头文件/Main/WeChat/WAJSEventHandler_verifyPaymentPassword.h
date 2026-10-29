@interface WAJSEventHandler_verifyPaymentPassword : WAJSEventHandler_BaseEvent <WCPayJSApiVerifyDelegate>
{
    NSMutableDictionary * _param; // +0x8
}
- (void)handleJSEvent:(id)arg1;
- (void)onVerifyResult:(id)arg1;
- (id)getParam;
- (id)getCurrentURL;
- (id)param;
- (void)setParam:(id)arg1;
- (void).cxx_destruct;
@end
