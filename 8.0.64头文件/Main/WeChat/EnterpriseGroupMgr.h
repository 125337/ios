@interface EnterpriseGroupMgr : MMUserService <MMServiceProtocol, PBMessageObserverDelegate>
- (void)dealloc;
- (BOOL)createEnterpriseGroup:(id)arg1 extKey:(id)arg2;
- (BOOL)quitEnterpriseGroup:(id)arg1;
- (BOOL)addMemeberList:(id)arg1 group:(id)arg2 brand:(id)arg3;
- (BOOL)deleteMemberList:(id)arg1 group:(id)arg2 brand:(id)arg3;
- (BOOL)updateGroupName:(id)arg1 groupName:(id)arg2;
- (BOOL)updateGroupSetting:(id)arg1 bizFlag:(unsigned int)arg2;
- (BOOL)initiateBizChat:(id)arg1 chatTitle:(id)arg2 users:(id)arg3 callBackId:(id)arg4;
- (BOOL)convertBizChat:(id)arg1 chatId:(id)arg2 chatType:(id)arg3 callBackId:(id)arg4;
- (BOOL)updateGroupMemberListToSvr:(id)arg1;
- (BOOL)updateGroupContactAttrToSvr:(id)arg1;
- (void)handleCreateBizChatInfo:(id)arg1;
- (void)handleUpdateBizChat:(id)arg1;
- (void)handleUpdateBizChatMemberList:(id)arg1;
- (void)handleQuitBizChat:(id)arg1;
- (void)handleInitiateBizChat:(id)arg1;
- (void)handleConvertBizChat:(id)arg1;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
@end
