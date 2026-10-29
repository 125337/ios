@interface ChatBoxMgr : MMUserService <IGroupMgrExt, IMMNewSessionMgrExt, IContactMgrExt, IMainSessionMgrExt, IMsgExt, INewSyncExt, MMServiceProtocol>
{
    BOOL _isChatBoxEnable; // +0x8
    NSMutableSet * _chatboxSessionUsernames; // +0x10
    NSMutableSet * _addChatboxPendding; // +0x18
    NSMutableArray * _chatBoxSessions; // +0x20
    MMSessionInfo * _chatBoxSession; // +0x28
}
- (void)onServiceInit;
- (void)onServiceClearData;
- (BOOL)isChatBoxEnable;
- (id)getChatBoxSession;
- (long long)chatBoxSessionCount;
- (id)getSessionAtIndex:(long long)arg1;
- (void)removeSessionWithUsername:(id)arg1;
- (void)updateChatBoxSessionUnread:(BOOL)arg1;
- (void)setChatBoxUnreadLocal:(BOOL)arg1;
- (id)sessionEnumerator;
- (void)deleteAllChatBoxSessions;
- (BOOL)isContactInChatBox:(id)arg1;
- (void)onChangeChatRoomBox:(id)arg1 inChatBox:(BOOL)arg2;
- (void)onModifyContact:(id)arg1;
- (void)onHideSessionWithUserName:(id)arg1;
- (void)onDeleteSession:(unsigned int)arg1 withUser:(id)arg2;
- (void)onSessionUnreadCountChanged:(id)arg1 prevUnreadCount:(long long)arg2;
- (void)onNewSyncClearUnread:(id)arg1;
- (void)OnAddMsgListForSession:(id)arg1 NotifyUsrName:(id)arg2;
- (void)OnModMsg:(id)arg1 MsgWrap:(id)arg2;
- (void)onMainFrameBeginReload;
- (void)onMainFrameHandleSession:(id)arg1;
- (void)onMainFrameEndReload;
- (void)updateSession:(id)arg1 isInChatBox:(BOOL)arg2 createIfNotExist:(BOOL)arg3;
- (void)updateChatBoxSession;
- (void)updateChatBoxSessionWithSortTime:(unsigned int)arg1;
- (id)generateSessionForUsername:(id)arg1;
- (void)updateChatBoxSessionDesc;
- (unsigned int)genLastTimeForChatBoxSession;
- (id)lastMsgForChatBoxSession;
- (BOOL)shouldShowNotifyForMessage:(id)arg1;
- (BOOL)isChatBoxSessionUnread;
- (void)handleUserDeleteOrHideSession:(id)arg1;
- (void)setIsChatBoxEnable:(BOOL)arg1;
- (id)chatboxSessionUsernames;
- (void)setChatboxSessionUsernames:(id)arg1;
- (id)addChatboxPendding;
- (void)setAddChatboxPendding:(id)arg1;
- (id)chatBoxSessions;
- (void)setChatBoxSessions:(id)arg1;
- (id)chatBoxSession;
- (void)setChatBoxSession:(id)arg1;
- (void).cxx_destruct;
@end

