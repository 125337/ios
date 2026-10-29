@interface OpenIMBrandContactListViewController : MMUIViewController <UISearchBarDelegate, UITableViewDataSource, UITableViewDelegate, IOpenImResourceMgrExt>
{
    MMTitleView * _titleView; // +0x68
    MMTableView * _tableView; // +0x70
    ContactsDataLogic * _contactsDataLogic; // +0x78
    NSMutableArray * _sectionKeyArray; // +0x80
    NSDictionary * _allOpenIMContactsDic; // +0x88
    NSString * _openIMAcctype; // +0x90
    UISearchBar * _searchBar; // +0x98
    NSMutableArray * m_arrAccountDeletedOpenIMContact; // +0xa0
}
- (id)initWithOpenIMAcctype:(id)arg1 contactsDataSourceLogic:(id)arg2;
- (void)tryUpdateResource;
- (void)initTitleView;
- (void)initTableView;
- (void)initView;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)arg1;
- (void)dealloc;
- (void)viewDidLayoutSubviews;
- (void)viewWillBePoped:(BOOL)arg1;
- (void)reportEnter;
- (void)reportQuit;
- (void)reloadTableView;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)updateNewContactsItemCell:(id)arg1 contact:(id)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (long long)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 titleForDeleteConfirmationButtonForRowAtIndexPath:(id)arg2;
- (BOOL)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3;
- (id)getCContactUsingIndexPath:(id)arg1;
- (BOOL)isAccountDeletedSession:(long long)arg1;
- (id)getOpenIMContactClassifyInSession:(long long)arg1;
- (void)showContactInfoView:(id)arg1;
- (void)onGetOpenImResourceDone:(id)arg1;
- (void)registerYReportSdk;
- (void).cxx_destruct;
@end

