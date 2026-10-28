@interface FTSIntelligentMessageDB : NSObject
{
    FTSDB * _database; // +0x8
    BOOL _isHandlingUsernameFailIdRetry; // +0x10
    BOOL _isHandlingAutoReparing; // +0x11
}
- (BOOL)asyncCheckAndRepairIntelligent:(id)arg1 completion:(id /* block */)arg2;
- (void)logFTSIntelligentIndexStatus:(id)arg1;
- (BOOL)forceRepairIntelligent:(id)arg1;
- (void)dealloc;
- (BOOL)initDB:(id)arg1;
- (BOOL)createAllTable;
- (BOOL)clearAllTable;
- (void)preloadCacheUser;
- (BOOL)insertNewRowInIntelligentUserNameIDTable:(id)arg1 lastLocalId:(unsigned int)arg2;
- (BOOL)batchInsertMsgToFTSTable:(id)arg1;
- (BOOL)batchInsertIntelligentHadDownloadInValidMsgToFTSTableWithlimitUsrname:(id)arg1 limit:(int)arg2 rowidIndexResult:(id)arg3;
- (BOOL)batchInsertIntelligentHadDownloadInValidMsgToFTSTable:(id)arg1 rowidIndexResult:(id)arg2;
- (id)getInsertIntelligentHadDownloadInValidMsgToFTSTableWithLimitUsrname:(id)arg1 limit:(int)arg2;
- (unsigned int)getInsertIntelligentHadDownloadInValidMsgCount:(id)arg1;
- (unsigned int)getHadBuildIntelligentMsgCount:(id)arg1;
- (id)GetFirstIntelligentMsgIndexItem:(id)arg1;
- (BOOL)updateIntelligentUserNameInvalid:(id)arg1;
- (BOOL)updateFts5IntelligentMsgContentHasDownLoadFlagWithUserName:(id)arg1 msgLocalId:(unsigned int)arg2;
- (id)queryIntelligentFaceClusterMsgLocalIdListWithLimitUsrname:(id)arg1 faceLabelId:(unsigned int)arg2;
- (id)getIntelligentFaceClusterWithFaceLabelId:(long long)arg1;
- (BOOL)repairFaceClusterLabelId:(unsigned int)arg1 arrRepeatFaceClusterLabelId:(id)arg2;
- (BOOL)completionUpdateL2NormFaceClusterWithFaceClusterLabelId:(unsigned int)arg1 arrL2NormFaceFeature:(id)arg2;
- (id)queryText:(id)arg1 limitUsrname:(id)arg2 searchType:(unsigned int)arg3 cancelBlock:(id /* block */)arg4;
- (unsigned int)queryCountText:(id)arg1 limitUsrname:(id)arg2 searchType:(unsigned int)arg3;
- (void)updateDirkMsgIfNeededForChatTable:(id)arg1 leftIds:(id)arg2 cmpMsgList:(id)arg3;
- (unsigned int)getNextCursorMesId:(id)arg1;
- (unsigned int)getPreCursorMesId:(id)arg1;
- (id)getAllFaceClusterList;
- (long long)getLastIntelligentFaceClusterFaceLabelId;
- (BOOL)updateFaceClusterItemFaceFeatureWithId:(unsigned int)arg1 arrFaceFeature:(id)arg2;
- (id)queryIntelligentFaceClusterWithLimitUsrname:(id)arg1 arrMsgItem:(id)arg2 searchQuery:(id)arg3;
- (id)queryIntelligentMsgWithSimilarWord:(id)arg1 arrClassificationLabelId:(id)arg2;
- (id)queryIntelligentMsg:(id)arg1 msgLocalId:(unsigned int)arg2;
- (id)getReportIntelligentMsgEveryDay;
- (void)insertSecureRank:(id)arg1;
- (BOOL)checkQueryIsSecureRank:(id)arg1;
- (BOOL)hasInvalidIntelligentRowsInChatTable;
- (BOOL)deleteInvalidIntelligentRowsInChatTable:(unsigned int)arg1 outUsr:(id *)arg2 outRemains:(unsigned int *)arg3 cancelBlock:(id /* block */)arg4;
- (BOOL)updateToDeleteIntelligentLocalIds:(id)arg1 usr:(id)arg2;
- (void)getAllSessions:(unsigned int *)arg1 andAllIndexMsg:(unsigned int *)arg2;
- (unsigned int)getIndexCountForUsr:(id)arg1;
- (void)getIndexProgressForSession:(id)arg1 preCursor:(unsigned long long *)arg2 nextCursor:(unsigned long long *)arg3;
- (id)queryIntelligentClassificationWithLimitUsrname:(id)arg1 arrClassificationLabelId:(id)arg2;
- (BOOL)checkValidIntelligentIndexItemByUserName:(id)arg1;
- (void)addUserNameInvalidFail:(id)arg1;
- (void)retrySetUserNameInvalid;
- (id)database;
- (void)setDatabase:(id)arg1;
- (BOOL)isHandlingUsernameFailIdRetry;
- (void)setIsHandlingUsernameFailIdRetry:(BOOL)arg1;
- (BOOL)isHandlingAutoReparing;
- (void)setIsHandlingAutoReparing:(BOOL)arg1;
- (void).cxx_destruct;
@end
