@interface MultiTalkSessionMgr : MMUserService <MMServiceProtocol>
{
    WCTDatabase * _dataBase; // +0x8
    WCTTable * _contactTable; // +0x10
    WCTTable * _messageTable; // +0x18
    WCTTable * _sessionTable; // +0x20
    WCTTable * _bannerTable; // +0x28
}
- (void)dealloc;
- (id)init;
- (void)initDatabase;
- (void)closeDB;
- (void)closeDBBeforeInit;
- (void)clearTables;
- (void)createTables;
- (id)internalCreateTable:(id)arg1 tableClass:(Class)arg2;
- (unsigned int)createNewMultiTalkMessageDataWithGroupData:(id)arg1;
- (BOOL)createNewMultiTalkMessageWithGroupData:(id)arg1 messageID:(unsigned int)arg2 isSelfCaller:(BOOL)arg3 sessionState:(unsigned int)arg4;
- (BOOL)createNewMultiTalkMessageWithGroupData:(id)arg1 messageID:(unsigned int)arg2 isSelfCaller:(BOOL)arg3 sessionState:(unsigned int)arg4 inviteUsername:(id)arg5;
- (BOOL)createNewMultiTalkBannerWithGroupData:(id)arg1;
- (BOOL)deleteMultiTalkBannerItem:(id)arg1;
- (BOOL)updateHasGenMessageWithMessageID:(unsigned int)arg1;
- (id)getAllMultiTalkBannerInfos;
- (BOOL)updateMessageWithMessageID:(unsigned int)arg1 multiTalkGroup:(id)arg2 duration:(unsigned int)arg3;
- (BOOL)insertOrUpdateSessionWithMultiTalkGroupData:(id)arg1;
- (id)genContactItemWithGroupData:(id)arg1;
- (id)genMessageItemWithGroupData:(id)arg1;
- (id)genSessionItemWithGroupData:(id)arg1;
- (void)fillContactItemUpdatePropertiesForContactObject:(void *)arg1;
- (void)fillMessageItemUpdatePropertiesForMessageObject:(void *)arg1;
- (void)fillSessionItemUpdatePropertiesForSessionObject:(void *)arg1;
- (void)fillBannerItemUpdatePropertiesForBannerObject:(void *)arg1;
- (BOOL)insertNewRowInContactTable:(id)arg1;
- (BOOL)insertOrUpdateRowInContactTable:(id)arg1;
- (BOOL)insertNewRowInMessageTable:(id)arg1;
- (BOOL)insertOrUpdateRowInMessageTable:(id)arg1;
- (BOOL)insertNewRowInSessionTable:(id)arg1;
- (BOOL)insertOrUpdateRowInSessionTable:(id)arg1;
- (BOOL)insertNewRowInBannerTable:(id)arg1;
- (BOOL)insertOrUpdateRowInBannerTable:(id)arg1;
- (unsigned int)getSessionLastMessageIDWithGroupData:(id)arg1;
- (void)ChangeSessionUnReadCount:(id)arg1 to:(unsigned int)arg2;
- (BOOL)isGroupDataValid:(id)arg1;
- (BOOL)addNewMultiTalkChatroomMessageWithGroupData:(id)arg1 sessionItem:(id)arg2 msgLocalID:(unsigned int)arg3 isSelfCaller:(BOOL)arg4 sessionState:(unsigned int)arg5 inviteUsername:(id)arg6;
- (id)genMsgJsonContentWithDisplayContentHeader:(id)arg1 subContent:(id)arg2 sessionItem:(id)arg3 msgLocalID:(unsigned int)arg4;
- (id)getHeaderMessageContentWithSessionState:(unsigned int)arg1 inviteUserNickName:(id)arg2;
- (id)getSubMessageContentWithSessionState:(unsigned int)arg1 inviteUserNickName:(id)arg2;
- (id)dataBase;
- (void)setDataBase:(id)arg1;
- (id)contactTable;
- (void)setContactTable:(id)arg1;
- (id)messageTable;
- (void)setMessageTable:(id)arg1;
- (id)sessionTable;
- (void)setSessionTable:(id)arg1;
- (id)bannerTable;
- (void)setBannerTable:(id)arg1;
- (void).cxx_destruct;
@end

