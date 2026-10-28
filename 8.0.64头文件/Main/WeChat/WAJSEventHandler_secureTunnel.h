@interface WAJSEventHandler_secureTunnel : WAJSEventHandler_BaseEvent <SecureTunnelLogicDelegate>
{
    WCPayJSApiSecureTunnelControlLogic * logic; // +0x8
}
- (void)handleJSEvent:(id)arg1;
- (void)onSecureTunnelLogicSuccess:(id)arg1 from:(id)arg2;
- (void)onSecureTunnelLogicFail:(id)arg1 from:(id)arg2;
- (void).cxx_destruct;
@end
