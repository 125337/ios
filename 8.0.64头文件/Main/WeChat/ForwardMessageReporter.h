@interface ForwardMessageReporter : MMUserService <MMServiceProtocol>
{
    NSMutableArray * _sessionStack; // +0x8
    NSArray * _arrForwardRecentUsedUserName; // +0x10
}
- (void)onServiceInit;
- (id)pushSession;
- (id)popSession;
- (id)currentSession;
- (void)reportArrForwardRecentUsed:(id)arg1;
- (void)reportClickHeadImage:(id)arg1;
- (void)reportViewContentList:(id)arg1;
- (void)reportClickChatroomContact:(id)arg1;
- (void)reportClickSendButton:(id)arg1 arrContacts:(id)arg2 hasInput:(BOOL)arg3 originSelectMsgList:(id)arg4;
- (void)reportViewContentView:(id)arg1;
- (id)sessionStack;
- (void)setSessionStack:(id)arg1;
- (id)arrForwardRecentUsedUserName;
- (void)setArrForwardRecentUsedUserName:(id)arg1;
- (void).cxx_destruct;
@end
