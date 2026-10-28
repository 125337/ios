@interface MemberListViewController : MMUIViewController <UITableViewDataSource, UITableViewDelegate, WCSearchDelegate, WCDataSearchDelegate>
{
    MMTableView * m_tableView; // +0x70
    UIView * m_viewLabel; // +0x78
    UILabel * m_countLabel; // +0x80
    NSObject<MemberDataLogicProtocol> * m_memberData; // +0x88
    WCDataSearcher * _searcher; // +0x90
    BOOL m_needIndexBar; // +0x98
}
- (void)viewDidLoad;
- (BOOL)isSeachActive;
- (void)updateCount;
- (void)initCountLabel:(id)arg1;
- (void)initTableView;
- (void)initSearchBar;
- (void)reloadTable;
- (void)setMemberLogic:(id)arg1;
- (void)showContactInfoView:(id)arg1;
- (long long)getEditingStyleForIndexPath:(id)arg1;
- (double)cellHeight;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)sectionIndexTitlesForTableView:(id)arg1;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)makeResultCell:(id)arg1 contact:(id)arg2;
- (id)cellForHandleVoiceSearchViewTable:(id)arg1 index:(id)arg2;
- (id)cellForSearchViewTable:(id)arg1 index:(id)arg2;
- (double)heightForSearchViewTable:(id)arg1;
- (void)didSearchViewTableSelect:(id)arg1;
- (double)heightForFooterInSection:(long long)arg1 ForSearchViewTable:(id)arg2;
- (id)viewForFooterInSection:(long long)arg1 ForSearchViewTable:(id)arg2;
- (BOOL)hasNoSearchResult;
- (void)doSearch:(id)arg1 Pre:(BOOL)arg2;
- (void)cancelSearch;
- (id)usrNameConvertToOContacts:(id)arg1;
- (long long)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2;
- (void).cxx_destruct;
@end
