@interface MMFinderLiveMusicSettingSearchViewModel : NSObject <UISearchBarDelegate>
{
    BOOL _beginSearching; // +0x8
    id <MMFinderLiveMusicSettingSearchDelegate> _searchDelegate; // +0x10
    MMFinderLiveTaskId * _taskId; // +0x18
    NSString * _currentSearchText; // +0x20
    NSData * _lastBuffer; // +0x28
}
- (id)initWithTaskId:(id)arg1;
- (void)searchBarCancelButtonClicked:(id)arg1;
- (void)searchBarTextDidBeginEditing:(id)arg1;
- (void)searchBarTextDidEndEditing:(id)arg1;
- (void)searchBarSearchButtonClicked:(id)arg1;
- (void)doSearchWithText:(id)arg1;
- (void)innerSearchWithText:(id)arg1 lastBuffer:(id)arg2;
- (void)onSearchResultReturnWithSearchText:(id)arg1 resultCode:(int)arg2 resultArray:(id)arg3 conintueFlag:(unsigned int)arg4 preLastBuffer:(id)arg5 newLastBuffer:(id)arg6;
- (BOOL)continueSearch;
- (id)searchDelegate;
- (void)setSearchDelegate:(id)arg1;
- (id)taskId;
- (void)setTaskId:(id)arg1;
- (BOOL)beginSearching;
- (void)setBeginSearching:(BOOL)arg1;
- (id)currentSearchText;
- (void)setCurrentSearchText:(id)arg1;
- (id)lastBuffer;
- (void)setLastBuffer:(id)arg1;
- (void).cxx_destruct;
@end
