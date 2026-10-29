@interface WCPayJSLaunchGroupPayPfLogic : WCPayControlLogic <WCPayGppfLaunchControlLogicDelegate>
{
    id <WCPayJSLaunchGroupPayPfLogicDelegate> _logicDelegate; // +0x38
    JSEvent * _jsEvent; // +0x40
    NSDictionary * _param; // +0x48
}
- (id)initWithJSEvent:(id)arg1 param:(id)arg2;
- (void)setJsPfLaunchLogicDelegate:(id)arg1;
- (void)startLogic;
- (void)onPfLaunchControlLogicDidStop:(BOOL)arg1;
- (id)logicDelegate;
- (void)setLogicDelegate:(id)arg1;
- (id)jsEvent;
- (void)setJsEvent:(id)arg1;
- (id)param;
- (void)setParam:(id)arg1;
- (void).cxx_destruct;
@end

