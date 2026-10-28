@interface FTSDB : NSObject
{
    WCTDatabase * m_db; // +0x8
    BOOL m_hasStartMigrateMsgToFTS5; // +0x10
    WCTTable * m_migrateRecordTable; // +0x18
    FTS5MigrateRecord * m_migrateRecord; // +0x20
    NSRecursiveLock * m_lock; // +0x28
    NSMutableDictionary * m_dicInvalidUserNameId; // +0x30
    NSMutableDictionary * m_dicValidUserName; // +0x38
    NSMutableDictionary * m_dicValidUserNameId; // +0x40
    WCTTable * m_contactSearchItemTable; // +0x48
    WCTTable * m_contactPinyinSearchItemTable; // +0x50
    NSDictionary * m_dicTableMessage; // +0x58
    WCTTable * m_tableMsgUserNameID; // +0x60
    WCTTable * m_tableDeleteRecord; // +0x68
    WCTTable * m_fts5RowidIndexTable; // +0x70
    WCTTable * m_FavFTS5SearchItemTable; // +0x78
    WCTTable * m_FavFTS5RowIdIndexTable; // +0x80
    WCTTable * m_FavFTS5TagTable; // +0x88
    WCTTable * m_tableIntelligentMsgUserNameID; // +0x90
    WCTTable * m_tableIntelligentMsg; // +0x98
    WCTTable * m_fts5RowidIndexIntelligentMsgTable; // +0xa0
    WCTTable * m_fts5RowidIndexClassificationIntelligentMsgTable; // +0xa8
    WCTTable * m_tableIntelligentFaceCluster; // +0xb0
    WCTTable * m_tableIntelligentFaceClusterMessage; // +0xb8
    WCTTable * m_tableIntelligentSecureRank; // +0xc0
    NSMutableDictionary * m_dicInvalidIntelligentUserNameId; // +0xc8
    NSMutableDictionary * m_dicValidIntelligentUserName; // +0xd0
    NSMutableDictionary * m_dicValidIntelligentUserNameId; // +0xd8
    WCTTable * m_weshopExtItemTable; // +0xe0
    WCTTable * m_weshopRowidIndexItemTable; // +0xe8
    WCTTable * m_weshopSearchItemTable; // +0xf0
    WCTTable * m_weshopPinyinSearchItemTable; // +0xf8
}
- (BOOL)createWeShopTables;
- (BOOL)clearWeShopTables;
- (BOOL)existWeShopTables;
- (long long)getWeShopLastSyncUpdateSeq;
- (BOOL)insertOrUpdateWeShopLastSyncUpdateSeq:(long long)arg1;
- (BOOL)modifyRowsTransactionInWeShopTablesWithInsertOrUpdateItems:(id)arg1 deleteItems:(id)arg2 syncUpdateSeq:(long long)arg3;
- (BOOL)insertOrUpdateRowsInWeShopTablesWithItems:(id)arg1 handle:(id)arg2;
- (BOOL)deleteRowsInWeShopTablesWithItems:(id)arg1;
- (id)queryTextInWeShopTables:(id)arg1 limit:(unsigned long long)arg2 cancelBlock:(id /* block */)arg3;
- (id)queryTextInWeShopOriginTable:(id)arg1 limit:(unsigned long long)arg2 cancelBlock:(id /* block */)arg3;
- (id)queryTextInWeShopPinyinTable:(id)arg1 limit:(unsigned long long)arg2 cancelBlock:(id /* block */)arg3;
- (BOOL)dropWeShopTable:(id)arg1;
- (id)rowidIndexItemInWeShopTablesWithLocalId:(long long)arg1;
- (id)searchItemInWeShopTablesWithRowid:(long long)arg1;
- (id)pinyinSearchItemInWeShopTablesWithRowid:(long long)arg1;
- (BOOL)containsRowidIndexItemInWeShopTablesWithLocalId:(long long)arg1;
- (BOOL)containsSearchItemInWeShopTablesWithRowid:(long long)arg1;
- (BOOL)containsPinyinSearchItemInWeShopTablesWithRowid:(long long)arg1;
- (id)getValidLocalItemsFromRowids:(id)arg1 limit:(unsigned long long)arg2 cancelBlock:(id /* block */)arg3;
- (BOOL)insertOrUpdateRowInWeShopTablesWithItem:(id)arg1 handle:(id)arg2;
- (BOOL)insertSearchItemInWeShopTablesWithShopName:(id)arg1;
- (BOOL)insertPinyinSearchItemInWeShopTablesWithShopName:(id)arg1;
- (BOOL)insertRowidIndexItemInWeShopTablesWithLocalId:(long long)arg1 searchItemRowid:(long long)arg2 pinyinSearchItemRowid:(long long)arg3 updateTime:(long long)arg4;
- (BOOL)updateRowidIndexItemInWeShopTablesWithLocalId:(long long)arg1 updateTime:(long long)arg2;
- (BOOL)updateSearchItemInWeShopTablesWithRowid:(long long)arg1 shopName:(id)arg2;
- (BOOL)updatePinyinSearchItemInWeShopTablesWithRowid:(long long)arg1 shopName:(id)arg2;
- (BOOL)deleteRowInWeShopTablesWithItem:(id)arg1;
- (BOOL)deleteSearchItemInWeShopTablesWithRowid:(long long)arg1;
- (BOOL)deletePinyinSearchItemInWeShopTablesWithRowid:(long long)arg1;
- (BOOL)deleteRowidIndexItemInWeShopTablesWithLocalId:(long long)arg1;
- (id)mergeQueryResultsInWeShopTablesWithOriginResultItems:(id)arg1 pinyinResultItems:(id)arg2;
- (BOOL)CreateMessageTable;
- (BOOL)DropMessageTable;
- (void)preloadCacheUser;
- (id)getValidIndexItemByUserName:(id)arg1;
- (id)getValidIndexItemByUserNameId:(unsigned int)arg1;
- (id)getUserNameIdWithLimit:(unsigned int)arg1 where:(const void *)arg2;
- (BOOL)hasInvalidRowsInChatTable;
- (id)getOneInvalidateIndexItem;
- (BOOL)insertNewRowInUserNameIDTable:(id)arg1 lastLocalId:(unsigned int)arg2;
- (BOOL)updateUserNameInvalid:(id)arg1;
- (BOOL)updateUserNextCursorMesId:(unsigned int)arg1 cursorMesId:(unsigned int)arg2 withHandle:(id)arg3;
- (BOOL)updateUserPreCursorMesId:(unsigned int)arg1 cursorMesId:(unsigned int)arg2 withHandle:(id)arg3;
- (BOOL)deleteInvalidRowInUserNameIDTable:(unsigned int)arg1;
- (BOOL)createUserNameIdTable;
- (unsigned int)getRandomFTS5TableId;
- (BOOL)batchInsertMsgToFTSTable:(id)arg1 forbidLog:(BOOL)arg2;
- (BOOL)insertFTS5MsgContentItem:(id)arg1 intoTable:(unsigned int)arg2 withUserNameIdItem:(id)arg3 withHandle:(id)arg4;
- (BOOL)deleteInvalidRowsInChatTable:(id)arg1 limit:(int)arg2 cancelBlock:(id /* block */)arg3;
- (BOOL)migrateToFTS5WithLimit:(int)arg1 isFinish:(BOOL *)arg2 cancelBlock:(id /* block */)arg3;
- (void)clearUserNameIdCacheOfTable:(int)arg1;
- (id)queryText:(id)arg1 limitUsrname:(id)arg2 cancelBlock:(id /* block */)arg3;
- (id)internalQuery:(id)arg1 inTableId:(int)arg2 limitUsrId:(id)arg3 minRowId:(id)arg4 cancelBlock:(id /* block */)arg5;
- (id)processInternalQueryResult:(id)arg1;
- (id)qualifyQuery:(id)arg1 isFTS5:(BOOL)arg2;
- (BOOL)createAllMsgTable;
- (id)fts3MsgTableNameWithIndex:(unsigned int)arg1;
- (id)fts5MsgTableNameWithIndex:(unsigned int)arg1;
- (id)msgTableWithIndex:(unsigned int)arg1;
- (BOOL)createTableForFts5;
- (unsigned int)getFTSSessionCount;
- (unsigned int)getMsgIndexCount;
- (unsigned int)getIndexCountInChatTable:(id)arg1;
- (unsigned int)getIndexTableIdForSession:(id)arg1 msgLocalId:(unsigned int)arg2 content:(id *)arg3;
- (unsigned long long)calculateAllInvalidMsg;
- (BOOL)createDeleteRecordTable;
- (BOOL)updateToDeleteLocalIds:(id)arg1 inChatTable:(id)arg2;
- (BOOL)deleteFts5MsgContent:(id)arg1 withHandle:(id)arg2;
- (BOOL)removeDeleteRecordForUsrId:(unsigned int)arg1;
- (BOOL)deleteMsgsFromRecordLimit:(unsigned int)arg1 finish:(BOOL *)arg2 operateCnt:(unsigned int *)arg3 cancelBlock:(id /* block */)arg4;
- (BOOL)CreateIntelligentMessageTable;
- (BOOL)ClearAllIntelligentMessageTable;
- (void)preloadIntelligentCacheUser;
- (id)queryIntelligentClassificationWithLimitUsrname:(id)arg1 arrClassificationLabelId:(id)arg2;
- (id)queryIntelligentClassification:(unsigned int)arg1 arrClassificationLabelId:(id)arg2;
- (id)getValidIntelligentIndexItemByUserName:(id)arg1;
- (id)getValidIntelligentIndexItemByUserNameId:(unsigned int)arg1;
- (BOOL)hasInvalidIntelligentRowsInChatTable;
- (id)getOneInvalidateIntelligentIndexItem;
- (BOOL)insertNewRowInIntelligentUserNameIDTable:(id)arg1 lastLocalId:(unsigned int)arg2;
- (BOOL)updateIntelligentUserNameInvalid:(id)arg1;
- (BOOL)updateIntelligentUserNextCursorMesId:(unsigned int)arg1 cursorMesId:(unsigned int)arg2 withHandle:(id)arg3;
- (BOOL)updateIntelligentUserPreCursorMesId:(unsigned int)arg1 cursorMesId:(unsigned int)arg2 withHandle:(id)arg3;
- (BOOL)updateIntelligentRowidIndexItem:(unsigned int)arg1 msgLocalId:(unsigned int)arg2 validFlag:(BOOL)arg3 hasDownLoadFlag:(BOOL)arg4 withHandle:(id)arg5;
- (BOOL)updateIntelligentRowidIndexItem:(unsigned int)arg1 msgLocalId:(unsigned int)arg2 validFlag:(BOOL)arg3 hasDownLoadFlag:(BOOL)arg4 withHandle:(id)arg5 ocrTime:(unsigned int)arg6 classificationTime:(unsigned int)arg7 faceClusterTime:(unsigned int)arg8;
- (BOOL)deleteInvalidIntelligentRowInUserNameIDTable:(unsigned int)arg1;
- (BOOL)batchInsertIntelligentMsgToFTSTable:(id)arg1;
- (id)getIntelligentClassificationLabels:(id)arg1;
- (BOOL)batchInsertIntelligentHadDownloadInValidMsgToFTSTable:(id)arg1 rowidIndexResult:(id)arg2;
- (BOOL)batchInsertIntelligentHadDownloadInValidMsgToFTSTableWithlimitUsrname:(id)arg1 limit:(int)arg2 rowidIndexResult:(id)arg3;
- (BOOL)batchInsertIntelligentHadDownloadInValidMsgToFTSTable:(id)arg1 limitUsrname:(id)arg2 limit:(int)arg3 rowidIndexResult:(id)arg4;
- (id)getInsertIntelligentHadDownloadInValidMsgToFTSTableWithLimitUsrname:(id)arg1 limit:(int)arg2;
- (unsigned int)getInsertIntelligentHadDownloadInValidMsgCount:(id)arg1;
- (BOOL)insertFTS5IntelligentMsgItem:(id)arg1 withHandle:(id)arg2;
- (BOOL)insertFTS5IntelligentMsgItemAndIndex:(id)arg1 withUserNameIdItem:(id)arg2 withHandle:(id)arg3 validFlag:(BOOL)arg4;
- (BOOL)insertFTS5IntelligentMsgItemAndIndex:(id)arg1 withUserNameIdItem:(id)arg2 withHandle:(id)arg3 validFlag:(BOOL)arg4 ocrTime:(unsigned int)arg5 classificationTime:(unsigned int)arg6 faceClusterTime:(unsigned int)arg7;
- (BOOL)insertFTS5IntelligentMsgRowidIndexClassificationItem:(unsigned int)arg1 msgLocalId:(unsigned int)arg2 arrClassificationLabelId:(id)arg3 faceClusterFlag:(BOOL)arg4 withHandle:(id)arg5;
- (BOOL)insertFTS5IntelligentFaceClusterMessageItem:(id)arg1 withHandle:(id)arg2;
- (BOOL)deleteInvalidIntelligentRowsInChatTable:(id)arg1 limit:(int)arg2 cancelBlock:(id /* block */)arg3;
- (id)queryIntelligentWithText:(id)arg1 limitUsrname:(id)arg2 searchType:(unsigned int)arg3 cancelBlock:(id /* block */)arg4;
- (id)internalQueryIntelligent:(id)arg1 limitUsrId:(id)arg2 searchType:(unsigned int)arg3 cancelBlock:(id /* block */)arg4;
- (id)processInternalQueryIntelligentResult:(id)arg1;
- (id)qualifyQuery:(id)arg1;
- (unsigned int)getHadBuildIntelligentMsgCount:(id)arg1;
- (id)GetFirstIntelligentMsgIndexItem:(id)arg1;
- (id)queryIntelligentMsg:(id)arg1 msgLocalId:(unsigned int)arg2;
- (id)queryIntelligentMsgWithSimilarWord:(id)arg1 arrClassificationLabelId:(id)arg2;
- (BOOL)checkIntelligentMsgNameIdIllegal:(id)arg1;
- (BOOL)checkIntelligentMsgHadInsert:(unsigned int)arg1 msgLocalId:(unsigned int)arg2;
- (id)getReportIntelligentMsgEveryDay;
- (id)parseReportEveryDay:(id)arg1;
- (BOOL)createIntelligentMsgTable;
- (BOOL)createIntelligentTableForFts5;
- (BOOL)createIntelligentMediaTable;
- (BOOL)createIntelligentUserNameIdTable;
- (unsigned int)getFTSIntelligentSessionCount;
- (unsigned int)getFTSIntelligentIndexCount;
- (unsigned int)getIntelligentIndexCountInChatTable:(id)arg1;
- (BOOL)updateToDeleteIntelligentLocalIds:(id)arg1 inChatTable:(id)arg2;
- (BOOL)deleteFts5IntelligentMsgContent:(id)arg1 withHandle:(id)arg2;
- (BOOL)updateFts5IntelligentMsgContentHasDownLoadFlagWithUserName:(id)arg1 msgLocalId:(unsigned int)arg2;
- (id)insertOrReplaceFaceClusterItem:(id)arg1 withHandle:(id)arg2;
- (BOOL)updateFaceClusterItemFaceFeatureWithId:(unsigned int)arg1 arrFaceFeature:(id)arg2;
- (id)getAllFaceClusterList;
- (id)queryIntelligentFaceClusterWithLimitUsrname:(id)arg1 arrMsgItem:(id)arg2 searchQuery:(id)arg3;
- (id)queryIntelligentFaceClusterMsgLocalIdListWithLimitUsrname:(id)arg1 faceLabelId:(unsigned int)arg2;
- (long long)getLastIntelligentFaceClusterFaceLabelId;
- (id)getIntelligentFaceClusterWithFaceLabelId:(long long)arg1;
- (BOOL)repairFaceClusterLabelId:(unsigned int)arg1 arrRepeatFaceClusterLabelId:(id)arg2;
- (BOOL)completionUpdateL2NormFaceClusterWithFaceClusterLabelId:(unsigned int)arg1 arrL2NormFaceFeature:(id)arg2;
- (void)insertSecureRank:(id)arg1;
- (BOOL)checkQueryIsSecureRank:(id)arg1;
- (BOOL)createFavFTS5Table;
- (BOOL)existFavFTS5Table;
- (BOOL)clearFavFTS5Table;
- (BOOL)clearFavFTS3Table;
- (unsigned int)getMaxFavFts5UpdateSeq;
- (unsigned int)getMaxUnsyncLocalId;
- (BOOL)insertOrUpdateRowsInFavFTS5Table:(id)arg1 updateCount:(unsigned int *)arg2;
- (BOOL)insertIndexOfFavItem:(id)arg1 withHandle:(id)arg2;
- (BOOL)updateIndexOfFavItem:(id)arg1 withRowid:(long long)arg2 withHandle:(id)arg3;
- (BOOL)deleteRowsInFavFTS5Table:(id)arg1;
- (const void *)selectRowidStatement;
- (BOOL)haveFTS5Index:(id)arg1;
- (BOOL)updateOldFavTag:(id)arg1 toNewFavTag:(id)arg2;
- (BOOL)updateTagIndexFor:(id)arg1;
- (id)getAllFavTag;
- (id)getTagsMatch:(id)arg1;
- (id)getFavItemLocalIdByTag:(id)arg1;
- (unsigned int)getAllFavFTS5ObjectsCount;
- (BOOL)updateLocalId:(unsigned int)arg1 toTags:(id)arg2 withHandle:(id)arg3;
- (BOOL)deleteLocald:(unsigned int)arg1 fromTags:(id)arg2 withHandle:(id)arg3;
- (const void *)updateFavTagLocalIdStatement;
- (BOOL)getTagMatch:(id)arg1 isPrecise:(BOOL)arg2 withHandle:(id)arg3 toResult:(id)arg4;
- (BOOL)getTagsWithLocalId:(unsigned int)arg1 withHandle:(id)arg2 toResult:(id)arg3;
- (id)getLocalIdStringWithSet:(id)arg1;
- (id)getLocalIdSetWithString:(id)arg1;
- (id)queryTextInFavFTS5Table:(id)arg1 byType:(long long)arg2 tags:(id)arg3 cancelBlock:(id /* block */)arg4;
- (id)internalQueryText:(id)arg1 cancelBlock:(id /* block */)arg2;
- (id)internalFilterType:(long long)arg1 cancelBlock:(id /* block */)arg2;
- (id)internalQueryTags:(id)arg1 cancelBlock:(id /* block */)arg2;
- (id)getInternalQuaryResultFromLocalIds:(id)arg1 withHandle:(id)arg2 cancelBlock:(id /* block */)arg3;
- (BOOL)createContactFTSTable;
- (BOOL)dropAllIndex;
- (unsigned int)getIndexCount;
- (BOOL)existValidIndexOfContact:(id)arg1;
- (BOOL)existIndex;
- (BOOL)insertOrUpdateIndexForContacts:(id)arg1 updateCount:(unsigned int *)arg2 indexRecord:(id)arg3;
- (BOOL)insertIndex:(id)arg1 withHandle:(id)arg2 indexRecord:(id)arg3;
- (BOOL)updateIndex:(id)arg1 withRowid:(long long)arg2 handle:(id)arg3 indexRecord:(id)arg4 oldGroupMember:(id)arg5;
- (unsigned long long)getContactType:(id)arg1;
- (id)getIndexRecord:(id)arg1 forContact:(id)arg2;
- (BOOL)deleteIndexForContacts:(id)arg1 indexRecord:(id)arg2;
- (BOOL)deleteIndexForUsername:(id)arg1 indexRecord:(id)arg2;
- (id)getRowidAndGroupMemberForUserName:(id)arg1 withHandle:(id)arg2;
- (id)getRowidAndAssociateGroupForUserName:(id)arg1 withHandle:(id)arg2;
- (id)getGroupWithMember:(id)arg1 withHandle:(id)arg2;
- (BOOL)updateGroupMemberRelation:(id)arg1 curMembers:(id)arg2 oldMembers:(id)arg3 withIndexRecord:(id)arg4 andHandle:(id)arg5;
- (BOOL)updateGroup:(id)arg1 toMembers:(id)arg2 isAdd:(BOOL)arg3 withIndexRecord:(id)arg4 andHandle:(id)arg5;
- (BOOL)updateAssociateGroups:(id)arg1 toRowId:(long long)arg2 withHandle:(id)arg3;
- (id)searchContact:(id)arg1 contactType:(int)arg2 withHelper:(id)arg3 andCancelBlock:(id /* block */)arg4;
- (id)mergeResultPartOne:(id)arg1 andPartTwo:(id)arg2;
- (id)searchMainContent:(id)arg1 withHelper:(id)arg2;
- (id)searchPinyin:(id)arg1 withHelper:(id)arg2;
- (BOOL)genMatchTipFrom:(id)arg1 To:(id)arg2 withParameter:(id)arg3 helperItem:(id)arg4 inValidContacts:(id)arg5 isPinyin:(BOOL)arg6;
- (id)genCombinedQuery:(id)arg1;
- (id)genMatchInfo:(id)arg1 query:(id)arg2 username:(id)arg3 helpItem:(id)arg4;
- (id)getMatchTypeConfig:(unsigned long long)arg1;
- (id)searchTag:(id)arg1 withHelper:(id)arg2;
- (id)searchZone:(id)arg1 withHelper:(id)arg2;
- (id)searchGroupWithMultiKeyword:(id)arg1 withHelper:(id)arg2 andCancelBlock:(id /* block */)arg3;
- (id)init;
- (void)dealloc;
- (BOOL)initDB;
- (id)getOrCreateTable:(id)arg1 withClass:(Class)arg2 isVirtual:(BOOL)arg3;
- (id)prepareOrResetStatementFrom:(id)arg1 withStatement:(const void *)arg2;
- (unsigned int)getPageCount;
- (unsigned int)getFreeListCount;
- (long long)getFileSize;
- (void)closeDB;
- (void)closeDBBeforeInit;
- (id)m_tableIntelligentMsgUserNameID;
- (void)setM_tableIntelligentMsgUserNameID:(id)arg1;
- (id)m_tableIntelligentMsg;
- (void)setM_tableIntelligentMsg:(id)arg1;
- (id)m_fts5RowidIndexIntelligentMsgTable;
- (void)setM_fts5RowidIndexIntelligentMsgTable:(id)arg1;
- (id)m_fts5RowidIndexClassificationIntelligentMsgTable;
- (void)setM_fts5RowidIndexClassificationIntelligentMsgTable:(id)arg1;
- (id)m_tableIntelligentFaceCluster;
- (void)setM_tableIntelligentFaceCluster:(id)arg1;
- (id)m_tableIntelligentFaceClusterMessage;
- (void)setM_tableIntelligentFaceClusterMessage:(id)arg1;
- (id)m_tableIntelligentSecureRank;
- (void)setM_tableIntelligentSecureRank:(id)arg1;
- (void).cxx_destruct;
@end
