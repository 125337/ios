@interface MMMailContactSelectViewController : MMUIViewController <WCSearchDelegate, UITableViewDelegate, UITableViewDataSource>
{
    NSMutableArray * arrMailContact; // +0x68
    NSMutableArray * arrKeys; // +0x70
    NSMutableDictionary * dicContacts; // +0x78
    NSMutableArray * arrSelection; // +0x80
    BOOL m_bSearching; // +0x88
    MMTableView * m_tableView; // +0x90
    NSMutableArray * m_arrFilteredContacts; // +0x98
    NSMutableSet * setSelectedContacts; // +0xa0
    id <MMMailContactSelectViewDelegate> _delegate; // +0xa8
    id _userInfo; // +0xb0
    WCSearcher * _searcher; // +0xb8
}
- (id)init;
- (id)initWithMailContacts:(id)arg1;
- (void)viewDidLoad;
- (void)initData;
- (void)initView;
- (void)initTableView;
- (void)initSearchBar;
- (void)onCancel:(id)arg1;
- (void)onDone:(id)arg1;
- (void)makeCell:(id)arg1 tableCell:(id)arg2 section:(unsigned long long)arg3 row:(unsigned long long)arg4;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (id)sectionIndexTitlesForTableView:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)doSearch:(id)arg1;
- (void)wcsSearchBar:(id)arg1 textDidChange:(id)arg2;
- (void)wcsSearchBarTextDidBeginEditing:(id)arg1;
- (void)wcsSearchBarSearchButtonClicked:(id)arg1;
- (id)setSelectedContacts;
- (void)setSetSelectedContacts:(id)arg1;
- (id)m_delegate;
- (void)setM_delegate:(id)arg1;
- (id)userInfo;
- (void)setUserInfo:(id)arg1;
- (id)searcher;
- (void)setSearcher:(id)arg1;
- (void).cxx_destruct;
@end

