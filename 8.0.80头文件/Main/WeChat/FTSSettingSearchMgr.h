@interface FTSSettingSearchMgr : NSObject <FTSTopHitDelegate>
{
    NSMutableArray * _mutableSettingResultItem; // +0x8
    NSMutableArray * _mutableSettingResultItemForDetail; // +0x10
    BOOL _isSearching; // +0x18
    BOOL _isDetailSearching; // +0x19
    BOOL _isCanceled; // +0x1a
    BOOL _isDetailCanceled; // +0x1b
    NSString * _currentQuery; // +0x20
    NSString * _detailPageQuery; // +0x28
    NSMutableDictionary * _dicMatchTip; // +0x30
    NSMutableDictionary * _dicDetailMatchTip; // +0x38
    NSString * _searchDoneQuery; // +0x40
    NSString * _detailSearchDoneQuery; // +0x48
}
- (id)init;
- (id)arrSettingResultItem;
- (id)arrSettingResultItemForDetail;
- (void)setNewestQuery:(id)arg1;
- (void)asyncSearchSetting:(id)arg1;
- (id)getMatchTip:(id)arg1 settingKey:(id)arg2;
- (BOOL)hasSearchDone:(id)arg1;
- (void)cancelSearch;
- (void)setNewestDetailPageQuery:(id)arg1;
- (void)asyncSearchSettingForDetailPage:(id)arg1;
- (id)getDetailMatchTip:(id)arg1 settingKey:(id)arg2;
- (BOOL)hasSearchDoneForDetailPage:(id)arg1;
- (void)cancelSearchForDetailPage;
- (void)onSelectSettingItem:(id)arg1;
- (void)onSelectSettingItem:(id)arg1 fromViewController:(id)arg2;
- (id)searchSettingItemsSynchronously:(id)arg1 matchTipDict:(id)arg2;
- (id)searchSettingWithQuery:(id)arg1 matchTipDict:(id)arg2;
- (id)tophit_getSettingDictionary;
- (BOOL)isTopHitSettingReady;
- (id)tophit_getSettingItemForKey:(id)arg1;
- (id)currentQuery;
- (void)setCurrentQuery:(id)arg1;
- (id)detailPageQuery;
- (void)setDetailPageQuery:(id)arg1;
- (id)dicMatchTip;
- (void)setDicMatchTip:(id)arg1;
- (id)dicDetailMatchTip;
- (void)setDicDetailMatchTip:(id)arg1;
- (BOOL)isSearching;
- (void)setIsSearching:(BOOL)arg1;
- (BOOL)isDetailSearching;
- (void)setIsDetailSearching:(BOOL)arg1;
- (id)searchDoneQuery;
- (void)setSearchDoneQuery:(id)arg1;
- (id)detailSearchDoneQuery;
- (void)setDetailSearchDoneQuery:(id)arg1;
- (BOOL)isCanceled;
- (void)setIsCanceled:(BOOL)arg1;
- (BOOL)isDetailCanceled;
- (void)setIsDetailCanceled:(BOOL)arg1;
- (void).cxx_destruct;
@end
