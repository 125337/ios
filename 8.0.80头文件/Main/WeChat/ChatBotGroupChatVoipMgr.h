@interface ChatBotGroupChatVoipMgr : MMUserService <MMServiceProtocol>
{
    NSMutableDictionary * _activeSessions; // +0x8
}
- (void)onServiceInit;
- (void)checkAndHandleGroupChatAtMessage:(id)arg1 msgWrap:(id)arg2;
- (id)sessionKeyForGroup:(id)arg1 asstId:(id)arg2;
- (void)handleGroupChatAtMessage:(id)arg1 groupId:(id)arg2 asstId:(id)arg3 fromUsername:(id)arg4;
- (void)leaveGroupChatRoom:(id)arg1 asstId:(id)arg2;
- (BOOL)hasActiveSessionForGroup:(id)arg1 asstId:(id)arg2;
- (void)onGroupChatSessionTimeout:(id)arg1;
- (id)findCustasstInAtUserList:(id)arg1;
- (id)parseAtUserList:(id)arg1;
- (id)activeSessions;
- (void)setActiveSessions:(id)arg1;
- (void).cxx_destruct;
@end
