@interface WCOutCountryCodePicker : MMUIViewController <WCSearchDelegate, UITableViewDelegate, UITableViewDataSource>
{
    id <WCOutCountryCodeDelegate> m_delegate; // +0x68
    NSArray * m_arrData; // +0x70
    unsigned int m_curSelectedSection; // +0x78
    unsigned int m_curSelectedRow; // +0x7c
    MMTableView * m_tableView; // +0x80
    BOOL m_bSearching; // +0x88
    NSMutableArray * m_arrFilteredData; // +0x90
    NSMutableArray * m_arrAllKeys; // +0x98
    NSMutableDictionary * m_dicKeyToCountryCode; // +0xa0
    WCSearcher * _searcher; // +0xa8
}
- (void)initData;
- (id)init;
- (void)initSearchBar;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)OnReturn;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (id)sectionIndexTitlesForTableView:(id)arg1;
- (void)doSearch:(id)arg1;
- (void)wcsSearchBar:(id)arg1 textDidChange:(id)arg2;
- (void)wcsSearchBarSearchButtonClicked:(id)arg1;
- (void)wcsSearchBarCancelButtonClicked:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)searcher;
- (void)setSearcher:(id)arg1;
- (void).cxx_destruct;
@end

