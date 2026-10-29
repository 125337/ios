@interface WAPNAuthProvider : NSObject
{
    WAPNAuthCoordinator * _coordinator; // +0x8
}
- (void)requestPhoneNumberWithExtraData:(id)arg1 appid:(id)arg2 pagePath:(id)arg3 agentMode:(BOOL)arg4 fromAgentRuntime:(BOOL)arg5 fromVC:(id)arg6 completion:(id /* block */)arg7;
- (void)cancel;
- (id)coordinator;
- (void)setCoordinator:(id)arg1;
- (void).cxx_destruct;
@end
