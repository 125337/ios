@interface MMFinderLiveGameSearchViewModel : NSObject <UISearchBarDelegate>
{
    BOOL _beginSearching; // +0x8
    BOOL _hasNext; // +0x9
    id <MMFinderLiveGameSearchDelegate> _searchDelegate; // +0x10
    NSString * _nextOffset; // +0x18
    MMFinderLiveTaskId * _taskId; // +0x20
    NSString * _currentSearchText; // +0x28
    NSMutableArray * _mostRecentlyPlayGames; // +0x30
    NSMutableArray * _searchGames; // +0x38
}
- (id)initWithTaskId:(id)arg1;
- (void)searchBarTextDidBeginEditing:(id)arg1;
- (void)searchBar:(id)arg1 textDidChange:(id)arg2;
- (void)searchBarCancelButtonClicked:(id)arg1;
- (void)searchBarSearchButtonClicked:(id)arg1;
- (void)getMostRecentlyPlayGames;
- (void)doSearchWithText:(id)arg1;
- (void)innerSearchWithText:(id)arg1 nextOffset:(id)arg2;
- (void)onSearchResultReturnWithSearchText:(id)arg1 resultArray:(id)arg2 hasNext:(BOOL)arg3 nextOffset:(id)arg4;
- (void)appendSearchResults:(id)arg1;
- (BOOL)continueSearch;
- (void)resetSearchResults:(id)arg1;
- (BOOL)hasSearchResult;
- (id)getSearchResult;
- (id)mostRecentlyPlayGames;
- (id)searchGames;
- (id)searchDelegate;
- (void)setSearchDelegate:(id)arg1;
- (id)nextOffset;
- (void)setNextOffset:(id)arg1;
- (id)taskId;
- (void)setTaskId:(id)arg1;
- (BOOL)beginSearching;
- (void)setBeginSearching:(BOOL)arg1;
- (id)currentSearchText;
- (void)setCurrentSearchText:(id)arg1;
- (BOOL)hasNext;
- (void)setHasNext:(BOOL)arg1;
- (void)setMostRecentlyPlayGames:(id)arg1;
- (void)setSearchGames:(id)arg1;
- (void).cxx_destruct;
@end
