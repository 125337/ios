@interface MMFinderLiveMusicSettingSearchTableViewModel : NSObject <UITableViewDelegate, UITableViewDataSource, UIScrollViewDelegate>
{
    id <MMFinderLiveMusicSettingSearchTableDelegate> _searchTableDelegate; // +0x8
    NSMutableArray * _musicSearchDataItemArray; // +0x10
    UITableView * _searchTableView; // +0x18
}
- (id)initWithTableView:(id)arg1;
- (void)appendSearchResults:(id)arg1;
- (void)resetSearchResults:(id)arg1;
- (BOOL)hasSearchResult;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (id)musicSearchDataItemArray;
- (id)searchTableDelegate;
- (void)setSearchTableDelegate:(id)arg1;
- (void)setMusicSearchDataItemArray:(id)arg1;
- (id)searchTableView;
- (void)setSearchTableView:(id)arg1;
- (void).cxx_destruct;
@end
