@interface WCPaySelectBankViewController : WCPayBaseViewController <UISearchBarDelegate, UISearchControllerDelegate, UISearchResultsUpdating, UITableViewDelegate, UITableViewDataSource, WCPaySelectBankSearchResultViewControllerDelegate, MMTableViewIndexViewDelegate>
{
    MMTableView * m_tableView; // +0x90
    id <WCPaySelectBankViewControllerDelegate> _m_delegate; // +0x98
    UISearchController * _searchController; // +0xa0
    WCPaySelectBankSearchResultViewController * _resultsController; // +0xa8
    NSMutableArray * _m_majorBankList; // +0xb0
    NSMutableDictionary * _m_allBankData; // +0xb8
    NSMutableArray * _m_indexArray; // +0xc0
    double _searchBackgroundY; // +0xc8
    double _searchBackgroundHeight; // +0xd0
    NSMutableArray * _m_allBankCardTypeList; // +0xd8
}
- (id)init;
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (void)fixSearchBarBackgroundWhenActive;
- (void)refreshViewWithData:(id)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)reloadSelectBankView:(id)arg1 allBankList:(id)arg2;
- (void)OnGetBankListWithError:(id)arg1 errorCode:(unsigned int)arg2;
- (void)updateView;
- (void)updateSearch;
- (void)updateSearchResultsForSearchController:(id)arg1;
- (void)onWCPaySelectBankSearchResultViewControllerDidSelectBankItem:(id)arg1;
- (void)didSelectBankItem:(id)arg1;
- (void)willPresentSearchController:(id)arg1;
- (void)didPresentSearchController:(id)arg1;
- (void)didDismissSearchController:(id)arg1;
- (void)updateTableView;
- (void)updateNavigationBar;
- (void)OnCancel;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)layoutCell:(id)arg1 bankItem:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (long long)mmtableView:(id)arg1 sectionForSectionIndexTitle:(id)arg2 atIndex:(long long)arg3;
- (id)mmsectionIndexTitlesForTableView:(id)arg1;
- (long long)mmcurrentIndexForTableView:(id)arg1;
- (id)parseBankNameKey:(id)arg1;
- (void)OnWCPaySelectBankViewControllerDidSelectItem:(id)arg1;
- (id)m_delegate;
- (void)setM_delegate:(id)arg1;
- (id)searchController;
- (void)setSearchController:(id)arg1;
- (id)resultsController;
- (void)setResultsController:(id)arg1;
- (id)m_majorBankList;
- (void)setM_majorBankList:(id)arg1;
- (id)m_allBankData;
- (void)setM_allBankData:(id)arg1;
- (id)m_indexArray;
- (void)setM_indexArray:(id)arg1;
- (double)searchBackgroundY;
- (void)setSearchBackgroundY:(double)arg1;
- (double)searchBackgroundHeight;
- (void)setSearchBackgroundHeight:(double)arg1;
- (id)m_allBankCardTypeList;
- (void)setM_allBankCardTypeList:(id)arg1;
- (void).cxx_destruct;
@end

