@interface JSApiSelectContactsViewController : WCPayBaseViewController <WCSearchDelegate, WCDataSearchDelegate, UITableViewDelegate, UITableViewDataSource, ContactsDataLogicDelegate>
{
    id <JSApiSelectContactsViewControllerDelegate> m_delegate; // +0x90
    MMTableView * m_tableView; // +0x98
    UIView * m_titleView; // +0xa0
    ContactsDataLogic * m_contactsDataLogic; // +0xa8
    WCDataSearcher * _searcher; // +0xb0
    unsigned int m_uiScene; // +0xb8
    BOOL m_bSupportSectionIndex; // +0xbc
    NSString * _navTitle; // +0xc0
}
- (id)initWithDelegate:(id)arg1;
- (void)onCancelBack:(id)arg1;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)initData;
- (void)initTitleArea;
- (void)setExtraCellLineHidden:(id)arg1;
- (void)initTableView;
- (void)initSearchBar;
- (void)initView;
- (void)dealloc;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)makeCell:(id)arg1 contact:(id)arg2;
- (void)makeCell:(id)arg1 tableCell:(id)arg2 section:(unsigned long long)arg3 row:(unsigned long long)arg4;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (id)sectionIndexTitlesForTableView:(id)arg1;
- (long long)tableView:(id)arg1 sectionForSectionIndexTitle:(id)arg2 atIndex:(long long)arg3;
- (void)onContactsDataChange;
- (BOOL)onFilterContactCandidate:(id)arg1;
- (id)cellForSearchViewTable:(id)arg1 index:(id)arg2;
- (double)heightForSearchViewTable:(id)arg1;
- (void)didSearchViewTableSelect:(id)arg1;
- (void)doSearch:(id)arg1 Pre:(BOOL)arg2;
- (void)cancelSearch;
- (unsigned int)m_uiScene;
- (void)setM_uiScene:(unsigned int)arg1;
- (BOOL)m_bSupportSectionIndex;
- (void)setM_bSupportSectionIndex:(BOOL)arg1;
- (id)navTitle;
- (void)setNavTitle:(id)arg1;
- (void).cxx_destruct;
@end

