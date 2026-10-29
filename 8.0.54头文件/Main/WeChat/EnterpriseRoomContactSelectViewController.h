@interface EnterpriseRoomContactSelectViewController : MMUIViewController <WCSearchDelegate, WCDataSearchDelegate, MMTableViewDelegate, UITableViewDelegate, UITableViewDataSource, UISearchBarDelegate>
{
    CEnterpriseContact * _contact; // +0x68
    NSMutableArray * _aryMemberContact; // +0x70
    NSMutableArray * _aryFilteredMemberContact; // +0x78
    MMTableView * _tableView; // +0x80
    WCDataSearcher * _searcher; // +0x88
    id <EnterpriseRoomContactSelectDelegate> delegate; // +0x90
}
- (id)initWithEnterpriseContact:(id)arg1 delegate:(id)arg2;
- (void)initData;
- (void)initTableView;
- (void)initSearchBar;
- (void)initView;
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)doSearch:(id)arg1;
- (void)wcsSearchBarTextDidBeginEditing:(id)arg1;
- (void)wcsSearchBar:(id)arg1 textDidChange:(id)arg2;
- (void)wcsSearchBarSearchButtonClicked:(id)arg1;
- (void)onCancel:(id)arg1;
- (id)GetCompareStrByContact:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (void).cxx_destruct;
@end

