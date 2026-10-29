@interface ContactAddSocialBlackListLogic : MMObject <ContactsDataLogicDelegate>
{
    ContactsDataLogic * m_contactsDataLogic; // +0x8
}
+ (void)reportBatchSocialBlackWithActionCode:(unsigned int)arg1 andSelectFriendNum:(unsigned long long)arg2 andModifiedSucFriendNum:(unsigned long long)arg3 andModifiedSucFriendsStr:(id)arg4 andBeforSocialBlackFriendNum:(unsigned long long)arg5 andAfterSocialblackFriendNum:(unsigned long long)arg6 andActionOperateNum:(unsigned long long)arg7 andSelectTagName:(id)arg8 andSelectTagID:(id)arg9 andStayTime:(double)arg10 andSessionID:(id)arg11;
- (id)init;
- (void)initData;
- (id)getAddContactLoadContactListWithScene:(unsigned int)arg1;
- (id)getContactsDataLogic;
- (id)getAddContactLoadContactListFromChatRoom:(id)arg1;
- (id)getAddContactLoadContactListFromContactTagData:(id)arg1;
- (void)onContactsDataChange;
- (BOOL)onFilterContactCandidate:(id)arg1;
- (void).cxx_destruct;
@end
