@interface WebviewJSEventHandler_secureTunnel : WebviewJSEventHandlerBase <SecureTunnelLogicDelegate>
{
    NSMutableSet * logics; // +0x8
}
- (id)init;
- (BOOL)inputValidate:(id)arg1;
- (void)handleJSEvent:(id)arg1 HandlerFacade:(id)arg2 ExtraData:(id)arg3;
- (void)onSecureTunnelLogicSuccess:(id)arg1 from:(id)arg2;
- (void)onSecureTunnelLogicFail:(id)arg1 from:(id)arg2;
- (void).cxx_destruct;
@end
