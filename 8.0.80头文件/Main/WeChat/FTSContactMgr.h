@interface FTSContactMgr : NSObject <FTSContactSearchTaskDelegate>
{
    NSMutableDictionary * m_dicContactSearchTask; // +0x8
    FTSContactDB * m_ftsContactDB; // +0x10
    BOOL _needMonitorReport; // +0x18
    FTSContactIndexMgr * _indexMgr; // +0x20
    NSMutableDictionary * _m_dicOriginalSearchText; // +0x28
}
- (id)init;
- (void)initIndexMgr:(id)arg1;
- (void)doInitWorker;
- (id)getTaskForKey:(id)arg1;
- (void)makeTaskIfNil:(id)arg1;
- (void)removeTaskForKey:(id)arg1;
- (id)getTaskForKey:(id)arg1 queryText:(id)arg2;
- (BOOL)isStaleSearchText:(id)arg1 forTask:(id)arg2;
- (void)setNewestQuery:(id)arg1 taskKey:(id)arg2;
- (id)getNewestQuery:(id)arg1;
- (id)getLastQueryText:(id)arg1;
- (void)asyncSearch:(id)arg1 type:(int)arg2 taskKey:(id)arg3;
- (void)asyncSearch:(id)arg1 type:(int)arg2 topHitMgr:(id)arg3 taskKey:(id)arg4;
- (void)asyncSearch:(id)arg1 type:(int)arg2 topHitMgr:(id)arg3 extendSearchContact:(id)arg4 taskKey:(id)arg5;
- (void)asyncSearchWithMixedStrategy:(id)arg1 pinyinText:(id)arg2 type:(int)arg3 topHitMgr:(id)arg4 taskKey:(id)arg5;
- (void)cancelSearchWithTaskKey:(id)arg1;
- (void)selectContact:(id)arg1 taskKey:(id)arg2;
- (unsigned int)getTotalCountWithTaskKey:(id)arg1;
- (id)getAllContactsWithTaskKey:(id)arg1;
- (id)getSingleContactsWithTaskKey:(id)arg1;
- (unsigned int)getSingleContactsCountWithTaskKey:(id)arg1;
- (id)getGroupContactsWithTaskKey:(id)arg1;
- (unsigned int)getGroupContactsCountWithTaskKey:(id)arg1;
- (id)getBrandContactsWithTaskKey:(id)arg1;
- (unsigned int)getBrandContactsCountWithTaskKey:(id)arg1;
- (id)getBrandServiceContactsWithTaskKey:(id)arg1;
- (unsigned int)getBrandServiceContactsCountWithTaskKey:(id)arg1;
- (id)getBrandMergeContactsWithTaskKey:(id)arg1;
- (unsigned int)getBrandMergeContactsCountWithTaskKey:(id)arg1;
- (id)getBrandStickerContactsWithTaskKey:(id)arg1;
- (unsigned int)getBrandStickerContactsCountWithTaskKey:(id)arg1;
- (id)getAllSearchMatchTipWithTaskKey:(id)arg1;
- (id)getMatchTipForUserName:(id)arg1 taskKey:(id)arg2;
- (BOOL)hasSearchDoneFor:(id)arg1 taskKey:(id)arg2;
- (BOOL)hasMatchWechatIDWithTaskKey:(id)arg1;
- (BOOL)isMultiKeyMatchWithTaskKey:(id)arg1;
- (void)setTopHitMgr:(id)arg1 taskKey:(id)arg2;
- (void)onContactSearchTaskFinish:(id)arg1;
- (void)monitorReport;
- (id)syncSearchTextForSingleContact:(id)arg1;
- (void)setOriginalSearchText:(id)arg1 forTaskKey:(id)arg2;
- (void)removeOriginalSearchTextForTaskKey:(id)arg1;
- (id)getOriginalSearchText:(id)arg1;
- (BOOL)needMonitorReport;
- (void)setNeedMonitorReport:(BOOL)arg1;
- (id)indexMgr;
- (void)setIndexMgr:(id)arg1;
- (id)m_dicOriginalSearchText;
- (void)setM_dicOriginalSearchText:(id)arg1;
- (void).cxx_destruct;
@end
