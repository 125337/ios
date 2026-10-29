@interface RingToneSearchHistoryViewModel : NSObject
{
    id <RingToneSearchViewModelDelegate> _searchDelegate; // +0x8
    NSMutableArray * _allSearchHistory; // +0x10
    MemoryMappedKV * _slotKv; // +0x18
    NSString * _searchKeyWord; // +0x20
    NSMutableArray * _searchTextArray; // +0x28
}
- (id)init;
- (void)dealloc;
- (id)getHistoryMMKV;
- (id)getLocalRingToneSearchHistory;
- (void)updateLocalRingToneSearchHistory:(id)arg1;
- (void)deleteAllSearchRecord;
- (void)deleteSearchRecord:(id)arg1;
- (void)addSearchContent:(id)arg1;
- (void)initHistorySearchMMKV;
- (id)searchTextArray;
- (id)allSearchHistory;
- (void)loadLatestHistoryData;
- (long long)numberOfRows;
- (id)searchSuggestionAtIndex:(long long)arg1;
- (void)fetchSuggestion:(id)arg1;
- (void)cancelFetchSuggestion;
- (void)preFetchProcess:(id)arg1;
- (void)throttleFetchProcess;
- (void)clearAllCurrentData;
- (id)searchDelegate;
- (void)setSearchDelegate:(id)arg1;
- (void)setAllSearchHistory:(id)arg1;
- (id)slotKv;
- (void)setSlotKv:(id)arg1;
- (id)searchKeyWord;
- (void)setSearchKeyWord:(id)arg1;
- (void)setSearchTextArray:(id)arg1;
- (void).cxx_destruct;
@end
