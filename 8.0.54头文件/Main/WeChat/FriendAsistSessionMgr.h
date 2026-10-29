@interface FriendAsistSessionMgr : MMUserService <MMServiceProtocol, IMsgExt, IMMNewSessionMgrExt, IContactMgrExt>
{
    NSMutableDictionary * m_dicUnReadCount; // +0x8
}
- (void)onServiceInit;
- (id)init;
- (unsigned int)getUnreadCountForChat:(id)arg1;
- (id)GetHelloUsers:(id)arg1 Limit:(int)arg2 OnlyUnread:(BOOL)arg3;
- (id)GetHelloMsg:(id)arg1 HelloUser:(id)arg2 Limit:(int)arg3 OnlyTo:(BOOL)arg4;
- (void)ClearUnRead:(id)arg1 HelloUser:(id)arg2;
- (void)ClearMsg:(id)arg1;
- (void)ClearMsg:(id)arg1 HelloUser:(id)arg2;
- (id)GetLastMessage:(id)arg1 OnlyTo:(BOOL)arg2;
- (id)GetLastMessage:(id)arg1 HelloUser:(id)arg2 OnlyTo:(BOOL)arg3;
- (void)AddHelloMsg:(id)arg1 helloWord:(id)arg2 opCode:(unsigned int)arg3;
- (void)AddFirstHelloMsg:(id)arg1 helloWord:(id)arg2 opCode:(unsigned int)arg3;
- (BOOL)SetSayHelloStatus:(id)arg1 LocalID:(unsigned int)arg2 Status:(unsigned int)arg3;
- (unsigned int)GetSayHelloStatus:(id)arg1 LocalID:(unsigned int)arg2;
- (void)updateBlackContactHelloUnreadStatus:(unsigned int)arg1;
- (void)asyncUpdateBlackContactHelloUnreadStatus:(unsigned int)arg1;
- (void)OnUnReadCountChange:(id)arg1;
- (void)OnAddMsgForSpecialSession:(id)arg1 MsgList:(id)arg2;
- (void)OnMsgNotAddDBSession:(id)arg1 MsgList:(id)arg2;
- (void)moveOldData;
- (void)onSessionUpgrade;
- (void)onDeleteContact:(id)arg1;
- (void)onRemoveContactFromAddressBook:(id)arg1;
- (void)onNewContact:(id)arg1;
- (void).cxx_destruct;
@end

