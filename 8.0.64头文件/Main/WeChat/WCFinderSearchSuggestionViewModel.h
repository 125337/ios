@interface WCFinderSearchSuggestionViewModel : NSObject
{
    id <WCFinderSearchSuggestionViewModelDelegate> _delegate; // +0x8
    NSMutableArray * _allSearchHistory; // +0x10
    NSString * _searchKeyWord; // +0x18
    WCFinderSearchSuggestionCGI * _currentCgi; // +0x20
}
- (id)allSearchHistory;
- (void)loadLatestHistoryData;
- (long long)numberOfRows;
- (id)searchSuggestionAtIndex:(long long)arg1;
- (int)getSearchScene;
- (void)fetchSuggestion:(id)arg1;
- (void)cancelFetchSuggestion;
- (void)preFetchProcess:(id)arg1;
- (void)throttleFetchProcess;
- (void)clearAllCurrentData;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (void)setAllSearchHistory:(id)arg1;
- (id)searchKeyWord;
- (void)setSearchKeyWord:(id)arg1;
- (id)currentCgi;
- (void)setCurrentCgi:(id)arg1;
- (void).cxx_destruct;
@end
