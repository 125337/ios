@interface WCOutMobleContactViewController : MMUIViewController <UITableViewDataSource, UITableViewDelegate, IWCOutFacadeExt, WCSearchDelegate, WCDataSearchDelegate>
{
    BOOL _isSearching; // +0x70
    NSArray * _fliterContacts; // +0x78
    WCSearcher * _searcher; // +0x80
    NSString * _searchText; // +0x88
    NSMutableArray * _sectionKeyArray; // +0x90
    NSMutableDictionary * _allContactsDic; // +0x98
    UITableView * _tableview; // +0xa0
}
- (void)viewDidLoad;
- (void)didReceiveMemoryWarning;
- (id)init;
- (void)configView;
- (void)configureBackBarButtomItem;
- (void)configTableView;
- (void)configData;
- (void)configSearchDisplayController;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 filtercontactCellAtIndexPath:(id)arg2;
- (id)contactCellAtIndexPath:(id)arg1;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (id)sectionIndexTitlesForTableView:(id)arg1;
- (long long)tableView:(id)arg1 sectionForSectionIndexTitle:(id)arg2 atIndex:(long long)arg3;
- (void)updateWCOutContacts:(id)arg1;
- (void)updateWCOutContactsInfo;
- (id)allContacts;
- (void)search:(id)arg1;
- (void)wcsSearchBar:(id)arg1 textDidChange:(id)arg2;
- (void)wcsSearchBarSearchButtonClicked:(id)arg1;
- (void)wcsSearchBarCancelButtonClicked:(id)arg1;
- (BOOL)wcsSearchBarShouldBeginEditing:(id)arg1;
- (void)wcsWillPresentSearch:(id)arg1;
- (void)showProfileForContact:(id)arg1 AndIsFromLastCallContact:(BOOL)arg2;
- (BOOL)isSearching;
- (void)setIsSearching:(BOOL)arg1;
- (id)fliterContacts;
- (void)setFliterContacts:(id)arg1;
- (id)searcher;
- (void)setSearcher:(id)arg1;
- (id)searchText;
- (void)setSearchText:(id)arg1;
- (id)sectionKeyArray;
- (void)setSectionKeyArray:(id)arg1;
- (id)allContactsDic;
- (void)setAllContactsDic:(id)arg1;
- (id)tableview;
- (void)setTableview:(id)arg1;
- (void).cxx_destruct;
@end
