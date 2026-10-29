@interface FTSIntelligentMessageMgr : NSObject <FTSIntelligentMsgSearchTaskDelegate>
{
    FTSIntelligentMessageDB * _ftsMessageDB; // +0x8
    NSMutableDictionary * _dicMsgSearchTask; // +0x10
    unsigned int m_intelligentSearchType; // +0x18
    FTSIntelligentMsgSearchMgr * _searchMgr; // +0x20
    NSMutableArray * _arrSessionUser; // +0x28
    NSMutableDictionary * _dicLatestSession; // +0x30
    FTSIntelligentMsgIndexMgr * _indexMgr; // +0x38
}
- (id)init;
- (void)initIndexMgr:(id)arg1;
- (id)safeCopyUnIndexMsgCache;
- (void)makePageTaskIfNil:(id)arg1;
- (BOOL)isDBSearchFinishFor:(id)arg1 taskKey:(id)arg2;
- (BOOL)hasIndexMessageResultFor:(id)arg1 taskKey:(id)arg2;
- (BOOL)hasMemoryMessageResultFor:(id)arg1 taskKey:(id)arg2;
- (void)setNewestQuery:(id)arg1 searchType:(unsigned int)arg2 taskKey:(id)arg3;
- (id)getArrLastQuerywords:(id)arg1;
- (void)prepareRestrictSearch:(id)arg1 taskKey:(id)arg2;
- (void)asyncSearch:(id)arg1 searchType:(unsigned int)arg2 taskKey:(id)arg3;
- (void)cancelSearch:(id)arg1;
- (BOOL)hasSearchResultFor:(id)arg1 taskKey:(id)arg2;
- (BOOL)hasSearchDoneFor:(id)arg1 taskKey:(id)arg2;
- (id)getLastQueryText:(id)arg1;
- (id)getNewestQuery:(id)arg1;
- (BOOL)checkValidIntelligentIndexItemByUserName:(id)arg1;
- (id)queryIntelligentMsg:(id)arg1 msgLocalId:(unsigned int)arg2;
- (id)getAllNeedBuildIndexSessionUserNameAr;
- (id)getReportIntelligentMsgEveryDay;
- (BOOL)checkCanDoIntelligent;
- (BOOL)checkCanDoIntelligentInRAM;
- (unsigned int)syncSearchCount:(id)arg1 limitUsrname:(id)arg2 searchType:(unsigned int)arg3;
- (id)searchIntelligentClassification:(id)arg1 limitUserName:(id)arg2 forceUpdate:(BOOL)arg3;
- (BOOL)checkIntelligentSynonymClassificationHadImageMessage:(id)arg1 limitUserName:(id)arg2;
- (id)getHadMessageClassificationListWithLimitUserName:(id)arg1;
- (BOOL)updateFaceClusterItemFaceFeatureWithId:(unsigned int)arg1 arrFaceFeature:(id)arg2;
- (id)getAllFaceClusterList;
- (long long)getLastIntelligentFaceClusterFaceLabelId;
- (id)queryIntelligentFaceClusterMsgLocalIdListWithLimitUsrname:(id)arg1 faceLabelId:(unsigned int)arg2;
- (id)getIntelligentFaceClusterWithFaceLabelId:(long long)arg1;
- (BOOL)repairFaceClusterLabelId:(unsigned int)arg1 arrRepeatFaceClusterLabelId:(id)arg2;
- (BOOL)completionUpdateL2NormFaceClusterWithFaceClusterLabelId:(unsigned int)arg1 arrL2NormFaceFeature:(id)arg2;
- (void)insertSecureRank:(id)arg1;
- (BOOL)checkQueryIsSecureRank:(id)arg1;
- (id)querySimilarWordsSearch:(id)arg1 limitUserName:(id)arg2;
- (void)priorityBuildIndexMsgWithUserName:(id)arg1;
- (void)cancelPriorityBuildIndexMsgWithUserName:(id)arg1;
- (BOOL)checkPriorityHadFinishOperate:(id)arg1;
- (BOOL)checkPriorityImageMessageHadBuildIndex:(id)arg1;
- (BOOL)checkAllImageMessageHadBuildIndex:(id)arg1;
- (void)onIntelligentMsgSearchTaskResultChanged:(BOOL)arg1 taskObj:(id)arg2;
- (id)getTaskForkey:(id)arg1;
- (id)getTaskForkey:(id)arg1 queryText:(id)arg2;
- (void)removeTaskForContext:(id)arg1;
- (unsigned int)asyncGetFTSIntelligentMsgDBInfoWhenComplete:(id /* block */)arg1;
- (void)asyncCheckAndRepairIntelligent:(id)arg1;
- (BOOL)forceRepairIntelligent:(id)arg1;
- (void)getIndexProgressForSession:(id)arg1 preCursor:(unsigned long long *)arg2 nextCursor:(unsigned long long *)arg3;
- (id)ftsMessageDB;
- (void)setFtsMessageDB:(id)arg1;
- (id)searchMgr;
- (void)setSearchMgr:(id)arg1;
- (id)arrSessionUser;
- (void)setArrSessionUser:(id)arg1;
- (id)dicLatestSession;
- (void)setDicLatestSession:(id)arg1;
- (id)indexMgr;
- (void)setIndexMgr:(id)arg1;
- (void).cxx_destruct;
@end

