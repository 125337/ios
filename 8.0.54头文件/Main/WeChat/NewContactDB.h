@interface NewContactDB : NSObject
{
    WCTDatabase * m_contactDB; // +0x8
    NSRecursiveLock * m_lock; // +0x10
    NSDictionary * m_indexRecord; // +0x18
    WCTTable * _m_tableContact; // +0x20
    WCTTable * _m_tableOpenIMContact; // +0x28
    WCTTable * _m_tableMassSendContact; // +0x30
    WCTTable * _m_tableContactSendMsgTicket; // +0x38
    WCTTable * _m_tableChatRoomToolWeApp; // +0x40
    WCTTable * _m_tableIndexRecord; // +0x48
    WCTTable * _m_tableChatRoomTopMsg; // +0x50
    WCTTable * _m_tableCacheOptimizeStrategy; // +0x58
    WCTTable * _m_tableCacheOptimizeStrategyScore; // +0x60
    WCTTable * _m_tableCacheAccessUserFeatureRecrod; // +0x68
}
+ (unsigned long long)getFTSContactIndexRecordType:(id)arg1;
+ (id)imgStatusToString:(unsigned long long)arg1;
+ (unsigned int)imgStatusToEnum:(id)arg1;
+ (id)contactDBPathWithDocDir:(id)arg1 userName:(id)arg2;
- (id)readIndexRecordFromDB;
- (void)clearAllIndexRecord;
- (id)getIndexRecordOfTypeForFTS:(unsigned long long)arg1;
- (unsigned int)getUnIndexRecordCountOfType:(unsigned long long)arg1;
- (id)getIndexRecordForContact:(id)arg1;
- (id)getIndexRecordOfType:(unsigned long long)arg1;
- (BOOL)markNeedUpdateFTSIndexForContact:(id)arg1;
- (void)tryPurgeIndexRecord:(id)arg1;
- (id)getUnIndexContactOfType:(unsigned long long)arg1 limit:(unsigned int)arg2;
- (id)getValidContact:(id)arg1;
- (BOOL)markIndexUpdatedOfType:(unsigned long long)arg1 success:(BOOL)arg2;
- (BOOL)deleteChatRoomTopMsgWithUserName:(id)arg1 insertNewTopMsgList:(id)arg2;
- (BOOL)removeChatRoomTopMsgLocalWithUserName:(id)arg1 topId:(unsigned int)arg2;
- (BOOL)removeChatRoomTopMsgLocalWithUserName:(id)arg1 msgSvrID:(unsigned long long)arg2;
- (BOOL)addChatRoomTopMsgLocalWithUserName:(id)arg1 topMsgInfo:(id)arg2;
- (id)getChatRoomTopMsgInfoListWithUserName:(id)arg1 isAllResult:(BOOL)arg2;
- (BOOL)setChatRoomTopMsgLocalRevokeWithUserName:(id)arg1 msgSvrID:(unsigned long long)arg2;
- (BOOL)setChatRoomTopMsgExposureTimeWithUserName:(id)arg1 msgSvrID:(unsigned long long)arg2 exposureTime:(unsigned int)arg3;
- (BOOL)insertOrUpdateNewTopMsgListWithUserName:(id)arg1 newTopMsgList:(id)arg2;
- (BOOL)checkIsHadTopMsgWithUserName:(id)arg1 msgSvrID:(unsigned long long)arg2;
- (BOOL)deleteChatRoomToolWeAppWithUserName:(id)arg1 insertNewWeAppItemList:(id)arg2;
- (id)getChatRoomToolWeAppListWithUserName:(id)arg1;
- (void)createContactCacheOptimizeTable;
- (id)getBestCacheOptimizeStrategyFromTime:(double)arg1;
- (unsigned int)getMatchStrategyFeatureRecordCountFromTime:(double)arg1 strategyFeature:(id)arg2;
- (BOOL)addContactCacheAccessUserFeatureRecrods:(id)arg1;
- (BOOL)removeContactCacheAccessUserFeatureRecrodsToTime:(unsigned int)arg1;
- (unsigned int)getFirstRecordCacheOptimizeInfoTime;
- (BOOL)getAllChatRoomMemberRemarkList:(id)arg1 arrNeedLoadChatRoomUser:(id)arg2;
- (Statement)genchatRoomMemberRemarkWithTableName:(id)arg1 arrNeedLoadChatRoomUser:(id)arg2;
- (void)printGetAllChatRoomMemberRemarkErrorSql:(id)arg1;
- (unsigned int)getAllChatRoomMemberCount;
- (unsigned int)getAllChatRoomStrangerCount;
- (id)getChatRoomStrangerRemarkWithUserName:(id)arg1;
- (id)init;
- (id)internalCreateTable:(id)arg1 tableClass:(Class)arg2;
- (void)createContactTable;
- (void)initDBWithDocDir:(id)arg1 userName:(id)arg2;
- (BOOL)runTransaction:(id /* block */)arg1;
- (void)getFriendTableValue:(id)arg1 fromDBObject:(id)arg2;
- (void)getFriendExtTableValue:(id)arg1 fromDBObject:(id)arg2;
- (id)getContact:(id)arg1;
- (BOOL)loadContactExtInfo:(id)arg1;
- (BOOL)getAllUserName:(id)arg1;
- (BOOL)getAllRemarkList:(id)arg1 listType:(unsigned int)arg2;
- (BOOL)getAllContactList:(id)arg1 listType:(unsigned int)arg2;
- (BOOL)getAllContactNoExtInfoList:(id)arg1 listType:(unsigned int)arg2;
- (id)genDBContactFrom:(id)arg1;
- (BOOL)addContact:(id)arg1 log:(BOOL)arg2;
- (BOOL)internalAddContact:(id)arg1 log:(BOOL)arg2;
- (BOOL)addContact:(id)arg1;
- (BOOL)deleteContact:(id)arg1;
- (BOOL)updateContact:(id)arg1;
- (BOOL)internalUpdateContact:(id)arg1;
- (unsigned int)getContactCount;
- (BOOL)ModifyContactEncryptSecret:(id)arg1 withEncryptSecretInfo:(id)arg2;
- (id)m_database;
- (BOOL)insertOrReplaceContactSendMsgTicket:(id)arg1;
- (id)getContactSendMsgTicket:(id)arg1;
- (id)getTableNameContactName;
- (id)getTableNameOpenIMContactName;
- (id)m_tableContact;
- (void)setM_tableContact:(id)arg1;
- (id)m_tableOpenIMContact;
- (void)setM_tableOpenIMContact:(id)arg1;
- (id)m_tableMassSendContact;
- (void)setM_tableMassSendContact:(id)arg1;
- (id)m_tableContactSendMsgTicket;
- (void)setM_tableContactSendMsgTicket:(id)arg1;
- (id)m_tableChatRoomToolWeApp;
- (void)setM_tableChatRoomToolWeApp:(id)arg1;
- (id)m_tableIndexRecord;
- (void)setM_tableIndexRecord:(id)arg1;
- (id)m_tableChatRoomTopMsg;
- (void)setM_tableChatRoomTopMsg:(id)arg1;
- (id)m_tableCacheOptimizeStrategy;
- (void)setM_tableCacheOptimizeStrategy:(id)arg1;
- (id)m_tableCacheOptimizeStrategyScore;
- (void)setM_tableCacheOptimizeStrategyScore:(id)arg1;
- (id)m_tableCacheAccessUserFeatureRecrod;
- (void)setM_tableCacheAccessUserFeatureRecrod:(id)arg1;
- (void).cxx_destruct;
@end

