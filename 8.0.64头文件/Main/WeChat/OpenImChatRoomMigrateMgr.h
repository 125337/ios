@interface OpenImChatRoomMigrateMgr : MMObject <ContactsDataLogicDelegate>
{
    OpenImChatRoomMigrateDataPB * m_openImChatRoomMigrateData; // +0x8
    NSOperationQueue * m_queue; // +0x10
    NSRecursiveLock * m_lock; // +0x18
    NSMutableDictionary * m_dicMigrateOpenImChatRoom; // +0x20
    NSMutableDictionary * m_dicOpenImMigrateOpenImChatRoom; // +0x28
    ContactsDataLogic * m_contactsDataLogic; // +0x30
    BOOL m_bIsOpenImMigrateOpenImChatRoomWorking; // +0x38
}
+ (void)reportOpenImChatRoomMigrateWithOpenIMChatRoomUserName:(id)arg1 andAssociateChatRoomUserName:(id)arg2 andOpenImChatRoomMigrateAction:(unsigned int)arg3;
- (id)init;
- (void)initData;
- (BOOL)isNeedStopChatRoomMigrateWithOpenIMChatRoomUserName:(id)arg1;
- (void)addOpenImChatRoomMigrateWithOpenIMChatRoomUserName:(id)arg1 andAssociateChatRoomUserName:(id)arg2;
- (void)doOpenImChatRoomMigrateWithOpenIMChatRoomUserName:(id)arg1 andAssociateChatRoomUserName:(id)arg2;
- (void)DeleteSessionWithUserName:(id)arg1;
- (void)startUpAllOpenImChatRoomMigrate;
- (void)checkChatRoomExitSessionOpenImChatRoomMigrateAssociateChatRoom:(id)arg1;
- (void)removeActiveUserWaitForOpenImMigrateWithUsrName:(id)arg1;
- (void)checkEnterOpenChatRoomNeedSendInsertWarningSystemMessage:(id)arg1;
- (void)sendOpenImChatRoomMigrateInsertWarningSystemMessageWithGroupUserName:(id)arg1 andMessageContent:(id)arg2;
- (void)startUpGetAllNeedOpenImChatRoomMigrateAssociateChatRoom;
- (void)addHadGetContactDetialMigrateAssociateChatRoom:(id)arg1;
- (void)checkGetNeedOpenImChatRoomMigrateAssociateChatRoom:(id)arg1;
- (BOOL)isOpenImMigrateOpenImChatRoomWorking;
- (void)onContactsDataChange;
- (BOOL)onFilterContactCandidate:(id)arg1;
- (void)reportOpenImChatRoomMigrateClickSameNameChatRoomWithOpenIMChatRoomUserName:(id)arg1 andAssociateChatRoomUserName:(id)arg2;
- (id)p_getOpenImChatRoomMigrateDataFilePath;
- (void)p_saveOpenImChatRoomMigrateToDataFileInternal;
- (void)p_loadOpenImChatRoomMigrateInternal;
- (void).cxx_destruct;
@end
