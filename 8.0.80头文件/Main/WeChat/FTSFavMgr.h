@interface FTSFavMgr : NSObject <FTSFavSearchTaskDelegate>
{
    NSMutableDictionary * _dicFavSearchTask; // +0x8
    FTSFavDB * _ftsFavDB; // +0x10
    FTSFavIndexMgr * _favIndexMgr; // +0x18
}
- (id)init;
- (void)initIndexMgr:(id)arg1;
- (id)getTaskForKey:(id)arg1;
- (void)makeTaskIfNil:(id)arg1;
- (void)removeTaskForKey:(id)arg1;
- (id)getTaskForKey:(id)arg1 queryText:(id)arg2;
- (void)setNewestQuery:(id)arg1 taskKey:(id)arg2;
- (id)getNewestQuery:(id)arg1;
- (id)getArrLastQuerywords:(id)arg1;
- (id)getLastQueryText:(id)arg1;
- (void)asyncSearch:(id)arg1 byType:(long long)arg2 andTags:(id)arg3 taskKey:(id)arg4;
- (void)asyncSearch:(id)arg1 byType:(long long)arg2 andTags:(id)arg3 starredOnly:(BOOL)arg4 recentUsedLocalIds:(id)arg5 taskKey:(id)arg6;
- (void)syncSearch:(id)arg1 byType:(long long)arg2 andTags:(id)arg3 taskKey:(id)arg4;
- (void)syncSearch:(id)arg1 byType:(long long)arg2 andTags:(id)arg3 starredOnly:(BOOL)arg4 recentUsedLocalIds:(id)arg5 taskKey:(id)arg6;
- (void)searchMoreForTask:(id)arg1;
- (void)cancelSearch:(id)arg1;
- (BOOL)hasSearchDoneFor:(id)arg1 taskKey:(id)arg2;
- (BOOL)hasSearchResultFor:(id)arg1 taskKey:(id)arg2;
- (id)getSearchItemFor:(id)arg1 index:(unsigned int)arg2 taskKey:(id)arg3;
- (unsigned int)getSearchItemCountFor:(id)arg1 taskKey:(id)arg2;
- (unsigned int)getSearchItemTotalCountFor:(id)arg1 taskKey:(id)arg2;
- (id)getAllSearchResultFor:(id)arg1 taskKey:(id)arg2;
- (id)peekAllSearchResultIncludingUnloadedFor:(id)arg1 taskKey:(id)arg2;
- (void)onFavSearchTaskResultChanged:(BOOL)arg1 taskObj:(id)arg2;
- (unsigned int)asyncGetFTSFavDBInfoWhenComplete:(id /* block */)arg1;
- (BOOL)haveFTS5Index:(id)arg1;
- (BOOL)updateOldFavTag:(id)arg1 toNewFavTag:(id)arg2;
- (void)clearFavTagsForRecovery;
- (id)getAllFavTag;
- (id)getTagsMatch:(id)arg1;
- (id)getFavItemLocalIdByTag:(id)arg1;
- (unsigned int)countFavItemsByFilterType:(long long)arg1;
- (BOOL)updateTagIndexFor:(id)arg1;
- (BOOL)backfillStarTypeForLocalIds:(id)arg1;
- (void).cxx_destruct;
@end
