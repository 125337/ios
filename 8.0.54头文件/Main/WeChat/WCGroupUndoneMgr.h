@interface WCGroupUndoneMgr : MMUserService <IMsgExt, IMsgRevokeExt, IGroupMgrExt, MessageDBExt, RoomToolsAlterTodoDelegate, RoomToolsReplyTodoDelegate, MMServiceProtocol>
{
    ChatRoomToolMessageEventInfo * _checkingUndoneItem; // +0x8
    NSMutableDictionary * _dicMsgRecord; // +0x10
    NSMutableDictionary * _dicRoomDescRecord; // +0x18
    NSDictionary * _nativeWeAppIconUrlDic; // +0x20
    WCGroupUndoneDatabase * _database; // +0x28
}
- (id)init;
- (void)onServiceInit;
- (void)onServiceClearData;
- (void)initData;
- (void)clearData;
- (BOOL)saveMsgRecord;
- (BOOL)saveRoomDescRecord;
- (void)updateUndoneEventInfo:(id)arg1;
- (void)internalUpdateUndoneEventInfo:(id)arg1 updateLocal:(BOOL)arg2;
- (void)disposeUndoneEventInfo:(id)arg1;
- (void)internalRevokeUndoneEventInfo:(id)arg1;
- (BOOL)revokeUndoneEventInfo:(id)arg1 bySvr:(BOOL)arg2;
- (BOOL)completeUndoneEventInfo:(id)arg1;
- (void)disposeUndoneItemByEventId:(id)arg1 groupId:(id)arg2;
- (void)handleMessageClick:(id)arg1 session:(id)arg2;
- (BOOL)clearExpiredEventInfoForChatroom:(id)arg1;
- (void)prepareToCheckUndoneEventInfo:(id)arg1;
- (void)checkPreparingUndoneItemByGroupId:(id)arg1;
- (BOOL)shouldShowUndoneTips;
- (void)didShowUndoneTips;
- (BOOL)shouldShowSettingUndoneTips;
- (void)didShowSettingUndoneTips;
- (id)getUndoneListOfGroup:(id)arg1;
- (id)getCachedEventInfoByCustomLinkInfo:(id)arg1;
- (id)undoneItemUsrnameFromMessage:(id)arg1;
- (id)undoneItemAppIdFromMessage:(id)arg1;
- (id)undoneItemAppPathFromMessage:(id)arg1;
- (id)undoneTitleForMessage:(id)arg1;
- (BOOL)isGroupUndoneMessage:(id)arg1 usr:(id)arg2;
- (id)getTodoEventInfoByMessage:(id)arg1 groupId:(id)arg2;
- (void)applyLocalize:(id)arg1;
- (void)msgDeleteToRemoveUndoneItemByMsgId:(long long)arg1 groupId:(id)arg2;
- (BOOL)hasSetGroupUndoneMsg:(long long)arg1;
- (BOOL)setMessageAsGroupUndone:(long long)arg1;
- (BOOL)clearMessageAsGroupUndone:(long long)arg1;
- (void)OnAddMsg:(id)arg1 MsgWrap:(id)arg2;
- (void)OnModMsg:(id)arg1 MsgWrap:(id)arg2;
- (void)OnDelMsg:(id)arg1 MsgWrap:(id)arg2;
- (void)OnRevokeMsg:(id)arg1 MsgWrap:(id)arg2 ResultCode:(unsigned int)arg3 ResultMsg:(id)arg4 EducationMsg:(id)arg5;
- (void)OnGetNewXmlMsg:(id)arg1 Type:(id)arg2 MsgWrap:(id)arg3;
- (void)OnMsgRevoked:(id)arg1 n64MsgId:(long long)arg2;
- (void)updateRoomDescSvrId:(long long)arg1 room:(id)arg2;
- (void)clearRoomDescSvrIdForroom:(id)arg1;
- (long long)getLatestRoomDescSvrIdForRoom:(id)arg1;
- (void)roomDescWillChangedForRoom:(id)arg1 isClear:(BOOL)arg2;
- (void)clearPreviousRoomDescEventForceForRoom:(id)arg1;
- (void)clearPreviousRoomDescEventForRoom:(id)arg1 newMsgTime:(unsigned int)arg2;
- (void)processNewXMLRoomToolsEvent:(id)arg1 andNsUsrName:(id)arg2;
- (void)handleRoomToolNewXMLTips:(id)arg1 nsScene:(id)arg2 nsOperator:(id)arg3 withEventInfo:(id)arg4;
- (BOOL)isWeAppMsgWithMessageWrap:(id)arg1;
- (BOOL)isNativeWeAppMsgWithMessageWrap:(id)arg1;
- (BOOL)isNativeWeAppWithAppUserName:(id)arg1;
- (id)getIconUrlWithAppUserName:(id)arg1;
- (void)openWeAppWithMessageEventInfo:(id)arg1 andScen:(unsigned int)arg2;
- (BOOL)updateChatRoomToolMessageEventInDB:(id)arg1;
- (id)getChatRoomToolMessageEventList:(id)arg1 fromEventTime:(unsigned int)arg2 limit:(unsigned int)arg3;
- (BOOL)deleteChatRoomToolMessageEventInSameRelatedMesSvrIDInDB:(id)arg1;
- (void)generateLocalSysmsgWhenCompleteTodoSuccess:(id)arg1 creator:(id)arg2;
- (void)generateLocalSysmsgWhenRevokeTodoSuccess:(id)arg1;
- (id)getDisplayNameOfRoomMemberNotSelf:(id)arg1 chatroom:(id)arg2;
- (unsigned int)reportMsgTypeForMsg:(id)arg1;
- (void)OnQuitGroup:(id)arg1;
- (void)onDeleteAllMsgs:(id)arg1;
- (BOOL)setMessageAsGroupUndone:(id)arg1 groupId:(id)arg2;
- (BOOL)revokeMessageAsGroupUndone:(id)arg1 groupId:(id)arg2;
- (BOOL)cgiRevokeEventInfo:(id)arg1;
- (BOOL)cgiReplyEventInfo:(id)arg1;
- (id)requsetTodoModelFromMessage:(id)arg1;
- (id)requsetTodoModelFromEventInfo:(id)arg1;
- (void)RoomToolsAlterTodoSuccess:(id)arg1;
- (void)RoomToolsAlterTodoFail:(id)arg1 error:(id)arg2;
- (void)RoomToolsReplyTodoSuccess:(id)arg1;
- (void)RoomToolsReplyTodoFail:(id)arg1 error:(id)arg2;
- (id)checkingUndoneItem;
- (void)setCheckingUndoneItem:(id)arg1;
- (id)dicMsgRecord;
- (void)setDicMsgRecord:(id)arg1;
- (id)dicRoomDescRecord;
- (void)setDicRoomDescRecord:(id)arg1;
- (id)nativeWeAppIconUrlDic;
- (void)setNativeWeAppIconUrlDic:(id)arg1;
- (id)database;
- (void)setDatabase:(id)arg1;
- (void).cxx_destruct;
@end

