@interface WCPayJSApiNativeCgiTunnelLogic : WCPayControlLogic <PBMessageObserverDelegate>
{
    id <WCPayJSApiNativeCgiTunnelLogicDelegate> _logicDelegate; // +0x38
    NSDictionary * _paramDict; // +0x40
}
- (id)initLogicWithDelegate:(id)arg1 jsEvent:(id)arg2 param:(id)arg3;
- (void)dealloc;
- (void)pause;
- (void)startLogic;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (id)logicDelegate;
- (void)setLogicDelegate:(id)arg1;
- (id)paramDict;
- (void)setParamDict:(id)arg1;
- (void).cxx_destruct;
@end
