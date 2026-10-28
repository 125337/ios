@interface FTSWeShopMgr : NSObject <FTSTopHitDelegate, FTSWeShopSearchTaskDelegate, IEcsWeShopExt>
{
    NSString * _lastQueryText; // +0x8
    NSString * _lastQueryTextForDetail; // +0x10
    NSArray * _lastQueryKeywords; // +0x18
    NSArray * _lastQueryKeywordsForDetail; // +0x20
    FTSWeShopIndexMgr * _indexMgr; // +0x28
    MMLRUCache * _searchTasksCache; // +0x30
    MMLRUCache * _detailSearchTasksCache; // +0x38
}
+ (id)filterTopHitsWithWeShopItems:(id)arg1;
- (BOOL)isTopHitWeShopReady;
- (id)tophit_getWeShopItemForKey:(id)arg1;
- (id)getLastQueryHighlightKeywordsWithShopName:(id)arg1;
- (id)getLastQueryHighlightKeywordsForDetailWithShopName:(id)arg1;
- (id)getHighlightKeywordsWithKeywords:(id)arg1 queryText:(id)arg2 shopName:(id)arg3;
- (void)dealloc;
- (id)init;
- (void)initIndexMgr:(id)arg1;
- (void)asyncSearch:(id)arg1;
- (void)asyncSearchForDetail:(id)arg1;
- (BOOL)hasSearchDone:(id)arg1;
- (BOOL)hasSearchDoneForDetail:(id)arg1;
- (void)cancelAllSearch;
- (void)cancelAllSearchForDetail;
- (id)getResultItems:(id)arg1;
- (id)getResultItemsForDetail:(id)arg1;
- (id)searchTaskForSearchText:(id)arg1 forceNew:(BOOL)arg2;
- (id)detailSearchTaskForSearchText:(id)arg1 forceNew:(BOOL)arg2;
- (void)updateLastQueryKeywords;
- (void)updateLastQueryKeywordsForDetail;
- (void)weShopSearchTask:(id)arg1 didChangeResultItems:(id)arg2;
- (void)onWeShopLocalDataUpdate;
- (id)lastQueryText;
- (void)setLastQueryText:(id)arg1;
- (id)lastQueryTextForDetail;
- (void)setLastQueryTextForDetail:(id)arg1;
- (id)lastQueryKeywords;
- (void)setLastQueryKeywords:(id)arg1;
- (id)lastQueryKeywordsForDetail;
- (void)setLastQueryKeywordsForDetail:(id)arg1;
- (id)indexMgr;
- (void)setIndexMgr:(id)arg1;
- (id)searchTasksCache;
- (void)setSearchTasksCache:(id)arg1;
- (id)detailSearchTasksCache;
- (void)setDetailSearchTasksCache:(id)arg1;
- (void).cxx_destruct;
@end
