@interface FLTStatusService : MMUserService <MMServiceProtocol>
{
    FLTStatusCallbackProcessor * _callbackProcessor; // +0x8
    FLTStatusRegisterCmdIdHandler * _registerCmdIdHandler; // +0x10
}
- (void)registerCommonApi:(id)arg1 forCommandList:(id)arg2;
- (void)unregisterCommonApi:(id)arg1 forCommandList:(id)arg2;
- (void)unregisterCommonApiForAllCommands:(id)arg1;
- (id)callbackProcessor;
- (void)setCallbackProcessor:(id)arg1;
- (id)registerCmdIdHandler;
- (void)setRegisterCmdIdHandler:(id)arg1;
- (void).cxx_destruct;
@end
