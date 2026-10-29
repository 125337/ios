@interface WAJSEventHandler_bindPaymentCard : WAJSEventHandler_BaseEvent <WCPayAddPayCardDelegate>
{
    NSMutableDictionary * _param; // +0x8
}
- (void)handleJSEvent:(id)arg1;
- (id)getParams;
- (id)getCurrentURL;
- (void)onAddPayCardResult:(BOOL)arg1;
- (id)param;
- (void)setParam:(id)arg1;
- (void).cxx_destruct;
@end

