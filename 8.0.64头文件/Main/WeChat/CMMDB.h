@interface CMMDB : NSObject
{
    NSRecursiveLock * m_lockMMDB; // +0x8
    OpLogDB * m_oplogWcdb; // +0x10
    MMTimer * m_backupTimer; // +0x18
    MMDBMigrationInfos * m_migrationInfos; // +0x20
    WCTDatabase * m_mmdb; // +0x28
    NewContactDB * m_contactDB; // +0x30
    NSArray * m_messages; // +0x38
    WCTTable * m_tableContact; // +0x40
    WCTTable * m_tableContactExt; // +0x48
    WCTTable * m_tableContactMeta; // +0x50
    WCTTable * m_tableRevokeMsg; // +0x58
    WCTTable * m_tableSecMsg; // +0x60
    WCTTable * m_tableVoIPCancelMsg; // +0x68
    WCTTable * m_tableMassSendContact; // +0x70
    WCTDatabase * _m_brandMsgDB; // +0x78
    WCTDatabase * _m_finderMsgDB; // +0x80
    WCTDatabase * _m_chatbotMsgDB; // +0x88
    WCTDatabase * _m_gamelifeMsgDB; // +0x90
    WCTDatabase * _m_brandFansMsgDB; // +0x98
    WCTDatabase * _m_w1wPersonalMsgDB; // +0xa0
    WCTTable * _m_tableQQContact; // +0xa8
    WCTTable * _m_tableMessageBizExt; // +0xb0
    WCTTable * _m_tableMessageOfAppExt; // +0xb8
    WCTTable * _m_tableRoomHistory; // +0xc0
    WCDBSharedLockCenter * _lockCenter; // +0xc8
    unsigned long long _state; // +0xd0
}
+ (BOOL)isSpecialUserNames:(id)arg1;
+ (id)messageDBPathWithDocDir:(id)arg1 userName:(id)arg2 index:(int)arg3;
+ (id)brandMsgDBPathWithDocDir:(id)arg1 userName:(id)arg2;
+ (id)bypMsgDBPathWithDocDir:(id)arg1 userName:(id)arg2 path:(id)arg3;
+ (id)dbPathWithDocDir:(id)arg1 userName:(id)arg2;
+ (id)messageTableName:(id)arg1;
+ (id)messageExtTableName:(id)arg1;
+ (id)helloMessageTableName:(id)arg1;
+ (id)md5StringFromUserName:(id)arg1;
+ (BOOL)tableShouldBeBackedUp:(id)arg1;
- (void)SetupOplogDBWithDocDir:(id)arg1 userName:(id)arg2;
- (void)CloseOplogDB;
- (id)oplogDBDirWithDocDir:(id)arg1 userName:(id)arg2;
- (BOOL)InsertOplog:(id)arg1;
- (id)GetOplogsAfterOplogId:(unsigned int)arg1 limit:(int)arg2;
- (BOOL)DeleteOplog:(unsigned int)arg1;
- (void)tryMigrate;
- (void)asyncMigrate:(id)arg1;
- (void)stepMigrate:(id)arg1;
- (void)startMigrate:(id)arg1;
- (void)startMigrateBrand:(id)arg1;
- (void)autoMigrateBrand:(id)arg1;
- (void)lazyCreateBrand:(id)arg1;
- (void)startMigrateMessage:(id)arg1;
- (void)autoMigrateMessage:(id)arg1 atIndex:(unsigned int)arg2;
- (void)lazyCreateMessage:(id)arg1 atIndex:(int)arg2;
- (void)lazyVacuum:(id)arg1;
- (void)finishMigration;
- (unsigned long long)getTableLocation:(id)arg1;
- (id)getTargetingDatabaseWithUserName:(id)arg1;
- (void)tryFixExtMsgTable;
- (void)checkMMDBMigrateAllFinish:(id)arg1;
- (BOOL)hasEnoughFreeSpaceToMigrate;
- (optional<bool>)lazyCreateBrandTable:(id)arg1;
- (int)indexOfDatabaseForMD5UserName:(id)arg1;
- (int)indexOfDatabaseForUserName:(id)arg1;
- (optional<bool>)lazyCreateMessageTable:(id)arg1;
- (optional<bool>)shouldCreateTable:(id)arg1 inDatabase:(id)arg2;
- (id)getOrCreateMigrationInfos:(id)arg1;
- (void)markMigrationAsStarted:(unsigned long long)arg1;
- (void)checkMigrationNoFinish:(unsigned long long)arg1;
- (void)markMigrationAsFinished:(unsigned long long)arg1 migrationStatus:(id)arg2;
- (double)migrationSpendTime;
- (BOOL)canSkipMigration:(unsigned long long)arg1;
- (id)getMMDBMigrationInfo:(unsigned long long)arg1;
- (id)migrationInfoPath;
- (BOOL)InsertVoIPCancelMessage:(id)arg1;
- (BOOL)IsVoIPCancelMsgExistByRoomID:(unsigned long long)arg1 isFromNewSync:(BOOL *)arg2;
- (BOOL)IsVoIPCancelMsgExistByRoomID:(unsigned long long)arg1;
- (id)GetRoomHistoryByChatName:(id)arg1 historyId:(unsigned long long)arg2;
- (BOOL)InsertOrUpdateRoomHistoryMsg:(id)arg1 historyId:(unsigned long long)arg2 svrId:(long long)arg3;
- (id)GetSecMsgBySvrId:(long long)arg1;
- (BOOL)InsertSecMessage:(id)arg1;
- (unsigned int)GetSecMessageCount;
- (void)RemoveSecMessageById:(long long)arg1;
- (BOOL)RemoveOldSecMessagesBefore:(unsigned int)arg1;
- (BOOL)InsertRevokeMessage:(id)arg1;
- (id)GetRevokeMsgBySvrId:(long long)arg1;
- (BOOL)RemoveOldRevokeMessagesBefore:(unsigned int)arg1;
- (unsigned int)InsertHelloMessage:(id)arg1 withChatName:(id)arg2 onProperty:(const void *)arg3;
- (unsigned int)GetMaxCreateTimeInHelloMessage:(id)arg1;
- (id)GetHelloMessageByChatName:(id)arg1 onProperty:(const void *)arg2 where:(const void *)arg3 order:(const void *)arg4;
- (id)GetHelloMessagesByChatName:(id)arg1 onProperty:(const void *)arg2 where:(const void *)arg3 order:(const void *)arg4 limit:(int)arg5;
- (id)GetHelloMessagesByChatName:(id)arg1 onProperty:(const void *)arg2 where:(const void *)arg3 order:(const void *)arg4 groupBy:(const void *)arg5 limit:(int)arg6;
- (BOOL)DeleteAllHelloMessageByChatName:(id)arg1 helloUser:(id)arg2;
- (BOOL)UpdateHelloMessage:(id)arg1 byChatName:(id)arg2 onProperty:(const void *)arg3 where:(const void *)arg4;
- (unsigned int)GetHelloMessageCountByChatName:(id)arg1 withProperty:(const void *)arg2 Where:(const void *)arg3;
- (BOOL)IsMessageExistWithChatName:(id)arg1 localId:(unsigned int)arg2;
- (unsigned int)InsertMessage:(id)arg1 withChatName:(id)arg2 onProperty:(const void *)arg3;
- (unsigned int)replaceMessage:(id)arg1 withChatName:(id)arg2 onProperty:(const void *)arg3;
- (id)InsertBackupMessages:(id)arg1 withChatName:(id)arg2 onProperty:(const void *)arg3;
- (unsigned int)GetMaxCreateTimeInMessage:(id)arg1;
- (unsigned int)GetMinCreateTimeInMessage:(id)arg1;
- (unsigned int)GetMinCreateTimeInMessage:(id)arg1 where:(const void *)arg2;
- (id)GetMessageByChatName:(id)arg1 OnProperty:(const void *)arg2 where:(const void *)arg3;
- (id)GetMessagesByChatName:(id)arg1 onProperty:(const void *)arg2 where:(const void *)arg3 order:(const void *)arg4 limit:(int)arg5;
- (id)GetMessagesByChatName:(id)arg1 onProperty:(const void *)arg2 where:(const void *)arg3 order:(const void *)arg4 limit:(int)arg5 hasError:(BOOL *)arg6;
- (unsigned int)GetChatSqliteSeq:(id)arg1;
- (BOOL)UpdateMessageByChatName:(id)arg1 localId:(unsigned int)arg2 withDBMessage:(id)arg3 OnProperty:(const void *)arg4;
- (BOOL)UpdateMessageByChatName:(id)arg1 OnPropertys:(const void *)arg2 toValues:(id)arg3 where:(const void *)arg4;
- (BOOL)UpdateMessageByChatName:(id)arg1 OnPropertys:(const void *)arg2 toValues:(id)arg3 where:(const void *)arg4 limit:(int)arg5;
- (BOOL)UpdateMessageStatus:(unsigned int)arg1 byChatName:(id)arg2 localId:(unsigned int)arg3;
- (BOOL)DeleteMessageByChatName:(id)arg1 localId:(unsigned int)arg2;
- (unsigned int)GetMessageCountByChatName:(id)arg1 where:(const void *)arg2;
- (id)GetMinMessageLocalIdByChatName:(id)arg1 where:(const void *)arg2 groupBy:(const void *)arg3;
- (BOOL)IsMessageExtExistWithChatName:(id)arg1 localId:(unsigned int)arg2;
- (BOOL)InsertMessageExt:(id)arg1 withChatName:(id)arg2 onProperty:(const void *)arg3;
- (BOOL)InsertBackupMessageExts:(id)arg1 withChatName:(id)arg2 onProperty:(const void *)arg3;
- (id)GetMsgSourceInMessageExt:(id)arg1 localId:(unsigned int)arg2;
- (id)GetMsgSourceInMessageExtWithTable:(id)arg1 chatName:(id)arg2 localId:(unsigned int)arg3;
- (id)GetMessageExtyChatName:(id)arg1 OnProperty:(const void *)arg2 where:(const void *)arg3;
- (id)GetMsgExtInMessageExtWithTable:(id)arg1 chatName:(id)arg2 localId:(unsigned int)arg3;
- (BOOL)UpdateMessageExtSource:(id)arg1 byChatName:(id)arg2 localId:(unsigned int)arg3;
- (BOOL)UpdateMessageExtFlag:(unsigned int)arg1 byChatName:(id)arg2 localId:(unsigned int)arg3;
- (BOOL)DeleteMessageExtByChatName:(id)arg1 localId:(unsigned int)arg2;
- (BOOL)isNewWCPayBizExtExistWithChatname:(id)arg1 localId:(unsigned int)arg2 type:(unsigned int)arg3;
- (BOOL)insertWCPayMessageBizExt:(id)arg1 onProperty:(const void *)arg2 type:(unsigned int)arg3;
- (id)getWCPayMessageBizExtArrayOnProperty:(const void *)arg1 where:(const void *)arg2 OnType:(unsigned int)arg3;
- (BOOL)UpdateWCPayMessageBizStatus:(unsigned int)arg1 byChatName:(id)arg2 byMsgLocalId:(unsigned int)arg3 bizType:(unsigned int)arg4;
- (BOOL)deleteNewWCPayBizExtMsg:(const void *)arg1 OnType:(unsigned int)arg2;
- (BOOL)deleteWCPayMessageBizExtWithChatname:(id)arg1 OnType:(unsigned int)arg2;
- (BOOL)deleteWCPayMessageBizExtWithChatname:(id)arg1 bizId:(id)arg2 onType:(unsigned int)arg3;
- (unsigned int)GetCountOfNewWCPayBizExtOnDistinctProperty:(const void *)arg1 Where:(const void *)arg2 bizType:(unsigned int)arg3;
- (BOOL)isWCPayMessageBizExtExistWithChatname:(id)arg1 localId:(unsigned int)arg2;
- (BOOL)insertWCPayMessageBizExt:(id)arg1 onProperty:(const void *)arg2;
- (id)getWCPayMessageBizExtArrayOnProperty:(const void *)arg1 where:(const void *)arg2;
- (BOOL)deleteWCPayMessageBizExtWithChatname:(id)arg1;
- (BOOL)checkSqliteMasterExistFor:(id)arg1;
- (BOOL)insertAppMessageExt:(id)arg1 onProperty:(const void *)arg2;
- (BOOL)isAppMessageExtWithChatName:(id)arg1 localId:(unsigned int)arg2;
- (BOOL)deleteAppMessageExtWithChatname:(id)arg1;
- (BOOL)deleteAppMessageExtWithChatname:(id)arg1 localId:(unsigned int)arg2;
- (id)getAppMessageExtOnProperty:(const void *)arg1 where:(const void *)arg2;
- (id)GetContactByUserName:(id)arg1 property:(const void *)arg2;
- (id)GetContactsWhere:(const void *)arg1 onProperty:(const void *)arg2 getError:(id *)arg3;
- (BOOL)getAllUserName:(id)arg1;
- (BOOL)getAllRemarkList:(id)arg1 listType:(unsigned int)arg2;
- (BOOL)DeleteContactByUserName:(id)arg1;
- (BOOL)IsContactExtExist:(id)arg1;
- (id)GetContactExtByUserName:(id)arg1 property:(const void *)arg2;
- (BOOL)DeleteContactExtByUserName:(id)arg1;
- (BOOL)DeleteContactAndExtByUserNames:(id)arg1;
- (id)ContactTableName;
- (id)ContactExtTableName;
- (unsigned int)getContactCount;
- (id)GetContactAndExtWithContactProperty:(const void *)arg1 contactExtProperty:(const void *)arg2 fromTables:(id)arg3 where:(const void *)arg4 getError:(id *)arg5 limit:(int)arg6;
- (unsigned int)GetLastUpdateTimeOfUser:(id)arg1;
- (unsigned int)GetFriendMetaFlag:(id)arg1;
- (void)tryConfigCompressionForBrand:(id)arg1;
- (void)tryConfigCompressionForMMDB:(id)arg1;
- (void)configAutoCompressionIfNeed:(id)arg1 usingNewDict:(BOOL)arg2;
- (id)getCompressedKey:(int)arg1 usingNewDict:(BOOL)arg2;
- (BOOL)isCleanUpFinished;
- (void)continueCleanUp;
- (void)cleanOneTable:(id)arg1;
- (id)GetAllMassSendContact;
- (id)init;
- (void)dealloc;
- (void)InitMMDB:(id)arg1 UsrName:(id)arg2 NewUser:(BOOL *)arg3;
- (void)Close;
- (id)dbPath;
- (id)dbPaths;
- (void)closeDBBeforeInit;
- (void)clearTables;
- (void)createTables;
- (void)createContactTable;
- (void)createMessagesTable;
- (void)createVoIPTable;
- (void)createEmoticonTable;
- (void)createOtherTable;
- (id)internalCreateTable:(id)arg1 tableClass:(Class)arg2;
- (BOOL)runTransaction:(id /* block */)arg1 forMessageOfUser:(id)arg2;
- (BOOL)runTransaction:(id /* block */)arg1 ifExistMessageOfUser:(id)arg2;
- (BOOL)CreateMessageTable:(id)arg1;
- (id)GetMessageTable:(id)arg1;
- (void)DropMessageTable:(id)arg1;
- (BOOL)CreateMessageExtTable:(id)arg1;
- (id)GetMessageExtTable:(id)arg1;
- (void)DropMessageExtTable:(id)arg1;
- (BOOL)runTransaction:(id /* block */)arg1 forHelloMessageOfUser:(id)arg2;
- (BOOL)CreateHelloMessageTable:(id)arg1;
- (id)GetHelloMessageTable:(id)arg1;
- (id)GetNewWCPayBizExtTable:(unsigned int)arg1;
- (void)CreateNewWCPayBizExtTable:(unsigned int)arg1;
- (void)CreateWCPayMessageBizExtTable;
- (void)CreateAppMessageExtTable;
- (id)m_mmdb;
- (void)setM_mmdb:(id)arg1;
- (id)m_contactDB;
- (void)setM_contactDB:(id)arg1;
- (id)m_messages;
- (void)setM_messages:(id)arg1;
- (id)m_tableContact;
- (void)setM_tableContact:(id)arg1;
- (id)m_tableContactExt;
- (void)setM_tableContactExt:(id)arg1;
- (id)m_tableContactMeta;
- (void)setM_tableContactMeta:(id)arg1;
- (id)m_tableRevokeMsg;
- (void)setM_tableRevokeMsg:(id)arg1;
- (id)m_tableSecMsg;
- (void)setM_tableSecMsg:(id)arg1;
- (id)m_tableVoIPCancelMsg;
- (void)setM_tableVoIPCancelMsg:(id)arg1;
- (id)m_tableMassSendContact;
- (void)setM_tableMassSendContact:(id)arg1;
- (id)m_oplogWcdb;
- (void)setM_oplogWcdb:(id)arg1;
- (id)m_brandMsgDB;
- (void)setM_brandMsgDB:(id)arg1;
- (id)m_finderMsgDB;
- (void)setM_finderMsgDB:(id)arg1;
- (id)m_chatbotMsgDB;
- (void)setM_chatbotMsgDB:(id)arg1;
- (id)m_gamelifeMsgDB;
- (void)setM_gamelifeMsgDB:(id)arg1;
- (id)m_brandFansMsgDB;
- (void)setM_brandFansMsgDB:(id)arg1;
- (id)m_w1wPersonalMsgDB;
- (void)setM_w1wPersonalMsgDB:(id)arg1;
- (id)m_tableQQContact;
- (void)setM_tableQQContact:(id)arg1;
- (id)m_tableMessageBizExt;
- (void)setM_tableMessageBizExt:(id)arg1;
- (id)m_tableMessageOfAppExt;
- (void)setM_tableMessageOfAppExt:(id)arg1;
- (id)m_tableRoomHistory;
- (void)setM_tableRoomHistory:(id)arg1;
- (id)lockCenter;
- (unsigned long long)state;
- (void)setState:(unsigned long long)arg1;
- (void).cxx_destruct;
@end
