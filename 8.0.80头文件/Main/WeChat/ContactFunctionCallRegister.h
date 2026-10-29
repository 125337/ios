@interface ContactFunctionCallRegister : FunctionCallBaseRegister
- (id)moduleName;
- (id)getAllowUsernamesSet;
- (BOOL)isContactInAllowList:(id)arg1 allowedUsernamesSet:(id)arg2;
- (id)getExtendSearchContacts;
- (id)buildChatDictForContact:(id)arg1 recentChatTime:(double)arg2 matchedKeyword:(id)arg3;
- (id)buildMemberInfoForUsername:(id)arg1 groupContact:(id)arg2;
- (id)buildGroupChatDict:(id)arg1 sessionInfo:(id)arg2 matchedKeyword:(id)arg3 matchTip:(id)arg4;
- (BOOL)doesGroupMatchStatusFilter:(id)arg1 groupStatus:(long long)arg2;
- (BOOL)shouldExcludeChatRoomFromSearch:(id)arg1;
- (BOOL)doesGroupMatchMemberCountFilter:(id)arg1 minNumber:(long long)arg2 maxNumber:(long long)arg3;
- (void)registerModuleFunctions;
@end
