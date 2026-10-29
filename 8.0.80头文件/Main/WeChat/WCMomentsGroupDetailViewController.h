@interface WCMomentsGroupDetailViewController : ContactBaseSelectListViewController <ContactSelectListViewControllerDelegate, ContactsSearchControllerDelegate>
{
    NSArray * _contactDataList; // +0x70
    NSString * _viewControllerTitle; // +0x78
    MMPageSheetAdapter * _pageSheetAdapter; // +0x80
    ContactsSearchController * _searchController; // +0x88
    NSMutableDictionary * _dicMatchTip; // +0x90
}
- (void)viewDidLoad;
- (void)initSearchBar;
- (void)initTableHeaderView;
- (double)getContentViewY;
- (double)getTableViewHeight;
- (id)getReloadContactDataList;
- (void)doSearch:(id)arg1 Pre:(BOOL)arg2;
- (void)cancelSearch;
- (id)cellForSearchViewTable:(id)arg1 index:(id)arg2;
- (double)cellSeparatorLeftInsetForSearchViewTable:(id)arg1;
- (double)heightForSearchViewTable:(id)arg1;
- (void)didSearchViewTableSelect:(id)arg1;
- (void)onDismissBarButtonPress:(id)arg1;
- (id)contactDataList;
- (void)setContactDataList:(id)arg1;
- (id)viewControllerTitle;
- (void)setViewControllerTitle:(id)arg1;
- (id)pageSheetAdapter;
- (void)setPageSheetAdapter:(id)arg1;
- (id)searchController;
- (void)setSearchController:(id)arg1;
- (id)dicMatchTip;
- (void)setDicMatchTip:(id)arg1;
- (void).cxx_destruct;
@end
