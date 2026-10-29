@interface WAForwardChatbotMsgService : MMUserService <MMServiceProtocol>
- (void)tryGetChatbotAttach:(id)arg1 msgWrap:(id)arg2 toContacts:(id)arg3 forwardLogic:(id)arg4;
- (void)launchHeadlessAppTask:(id)arg1 msgWrap:(id)arg2 completion:(id /* block */)arg3;
@end
