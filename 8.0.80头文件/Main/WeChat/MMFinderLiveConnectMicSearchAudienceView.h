@interface MMFinderLiveConnectMicSearchAudienceView : MMPageSheetBaseView <UISearchBarDelegate, UITableViewDelegate, UITableViewDataSource>
{
    id <MMFinderLiveConnectedMicUserCellViewDelegate> _cellActionDelegate; // +0x8
    UIView * _contentView; // +0x10
    UIView * _searchBarContainer; // +0x18
    MMUISearchBar * _searchBar; // +0x20
    UILabel * _tipsLabel; // +0x28
    MMTableView * _tableView; // +0x30
    NSArray * _micAudienceList; // +0x38
    NSMutableArray * _filteredMicAudienceList; // +0x40
    NSString * _currentSearchText; // +0x48
}
- (id)initWithFrame:(CGRect)arg1;
- (void)setupPageSheetConfig;
- (void)layoutContentView;
- (void)layoutSubviews;
- (void)layoutSearchBar;
- (void)traitCollectionDidChange:(id)arg1;
- (void)layoutTableView;
- (void)showTipsLabelWithTips:(id)arg1 topAreaHeight:(double)arg2;
- (void)updateWithConnectMicUserList:(id)arg1;
- (void)updateConnectingUserList:(id)arg1 invalidUserList:(id)arg2;
- (void)tryActiveSearch;
- (void)onCancelSearch;
- (void)doSearchWithText:(id)arg1;
- (void)pageSheetDidAppear;
- (void)pageSheetWillDisappear;
- (void)searchBarTextDidBeginEditing:(id)arg1;
- (void)searchBarTextDidEndEditing:(id)arg1;
- (void)searchBar:(id)arg1 textDidChange:(id)arg2;
- (void)searchBarSearchButtonClicked:(id)arg1;
- (void)searchBarCancelButtonClicked:(id)arg1;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (id)cellActionDelegate;
- (void)setCellActionDelegate:(id)arg1;
- (id)contentView;
- (void)setContentView:(id)arg1;
- (id)searchBarContainer;
- (void)setSearchBarContainer:(id)arg1;
- (id)searchBar;
- (void)setSearchBar:(id)arg1;
- (id)tipsLabel;
- (void)setTipsLabel:(id)arg1;
- (id)tableView;
- (void)setTableView:(id)arg1;
- (id)micAudienceList;
- (void)setMicAudienceList:(id)arg1;
- (id)filteredMicAudienceList;
- (void)setFilteredMicAudienceList:(id)arg1;
- (id)currentSearchText;
- (void)setCurrentSearchText:(id)arg1;
- (void).cxx_destruct;
@end
