@interface FTSMessageMgr : NSObject <FTSMsgSearchTaskDelegate>
{
    FTSMessageDB * _ftsMessageDB; // +0x8
    BOOL _needMonitorReport; // +0x10
    NSMutableDictionary * _dicMsgSearchTask; // +0x18
    NSCache * _tableIdCache; // +0x20
    FTSMsgSearchMgr * _searchMgr; // +0x28
    NSMutableArray * _arrSessionUser; // +0x30
    NSMutableDictionary * _dicLatestSession; // +0x38
    FTSMsgIndexMgr * _indexMgr; // +0x40
}
- (id)init;
- (void)initIndexMgr:(id)arg1;
- (id)safeCopyUnIndexMsgCache;
- (void)makePageTaskIfNil:(id)arg1;
- (BOOL)isDBSearchFinishFor:(id)arg1 taskKey:(id)arg2;
- (BOOL)hasIndexMessageResultFor:(id)arg1 taskKey:(id)arg2;
- (BOOL)hasMemoryMessageResultFor:(id)arg1 taskKey:(id)arg2;
- (void)setNewestQuery:(id)arg1 taskKey:(id)arg2;
- (void)setAgainSearch:(BOOL)arg1 taskKey:(id)arg2;
- (id)getNewestQuery:(id)arg1;
- (id)getTalkerPartFromQuery:(id)arg1 taskKey:(id)arg2;
- (id)getRealQueryPartFromQuery:(id)arg1 taskKey:(id)arg2;
- (unsigned long long)getSessionUserCountForQuery:(id)arg1 taskKey:(id)arg2;
- (unsigned long long)getMsgItemsCountForQuery:(id)arg1 taskKey:(id)arg2;
- (unsigned long long)getTotalSessionUserCountForQuery:(id)arg1 taskKey:(id)arg2;
- (unsigned long long)getTotalMsgItemsCountForQuery:(id)arg1 taskKey:(id)arg2;
- (id)getSessionMsgItemsForQuery:(id)arg1 atIndex:(unsigned long long)arg2 taskKey:(id)arg3;
- (id)getSessionUsernameForQuery:(id)arg1 atIndex:(unsigned long long)arg2 taskKey:(id)arg3;
- (id)getArrLastQuerywords:(id)arg1;
- (id)getLastQueryText:(id)arg1;
- (void)prepareRestrictSearch:(id)arg1 restrictSessionUsr:(id)arg2 restrictTalkerUsr:(id)arg3 restrictTalkerMatchTip:(id)arg4 restrictTalkerQuery:(id)arg5 sessionFirst:(BOOL)arg6 taskKey:(id)arg7;
- (void)asyncSearch:(id)arg1 taskKey:(id)arg2;
- (void)cancelSearch:(id)arg1;
- (BOOL)hasSearchResultFor:(id)arg1 taskKey:(id)arg2;
- (BOOL)hasSearchDoneFor:(id)arg1 taskKey:(id)arg2;
- (BOOL)isLikelyTalkerSearch:(id)arg1 taskKey:(id)arg2;
- (void)onMsgSearchTaskResultChanged:(BOOL)arg1 taskObj:(id)arg2;
- (id)getTaskForkey:(id)arg1;
- (id)getTaskForkey:(id)arg1 queryText:(id)arg2;
- (void)removeTaskForContext:(id)arg1;
- (unsigned int)asyncGetFTSMsgDBInfoWhenComplete:(id /* block */)arg1;
- (unsigned int)getTableIdForMessage:(id)arg1 content:(id *)arg2 UseCache:(BOOL)arg3;
- (void)getIndexProgressForSession:(id)arg1 preCursor:(unsigned long long *)arg2 nextCursor:(unsigned long long *)arg3 fts5Migrated:(BOOL *)arg4;
- (BOOL)hasCreateAllIndex:(id)arg1;
- (unsigned int)getIndexNotReadyCount:(id)arg1;
- (void)asyncMonitorReport;
- (BOOL)needMonitorReport;
- (void)setNeedMonitorReport:(BOOL)arg1;
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
