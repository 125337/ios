@interface WCPayNativeCgiTunnelImpl : NSObject <PBMessageObserverDelegate>
{
    id <WCPayNativeCgiTunnelImplDelegate> _logicDelegate; // +0x8
    NSDictionary * _paramDict; // +0x10
}
- (void)dealloc;
- (id)initWithDelegate:(id)arg1 param:(id)arg2;
- (void)startLogic;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (id)logicDelegate;
- (void)setLogicDelegate:(id)arg1;
- (id)paramDict;
- (void)setParamDict:(id)arg1;
- (void).cxx_destruct;
@end

