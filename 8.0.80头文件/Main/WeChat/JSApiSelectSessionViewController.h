@interface JSApiSelectSessionViewController : WCPayBaseViewController <WCSearchDelegate, WCDataSearchDelegate, UITableViewDelegate, UITableViewDataSource, ContactsDataLogicDelegate>
{
    id <JSApiSelectSessionViewControllerDelegate> m_delegate; // +0x98
    MMTableView * m_tableView; // +0xa0
    UIView * m_titleView; // +0xa8
    ContactsDataLogic * m_contactsDataLogic; // +0xb0
    NSMutableDictionary * m_dicContactsData; // +0xb8
    WCDataSearcher * _searcher; // +0xc0
    unsigned int m_uiScene; // +0xc8
    BOOL m_isSession; // +0xcc
    BOOL m_bSupportSectionIndex; // +0xcd
    NSString * _navTitle; // +0xd0
}
- (id)initWithDelegate:(id)arg1;
- (void)onCancelBack:(id)arg1;
- (void)initData;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)initTitleArea;
- (void)setExtraCellLineHidden:(id)arg1;
- (void)initTableView;
- (void)initSearchBar;
- (void)initView;
- (void)dealloc;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)makeNewSessionCell:(id)arg1;
- (void)makeCell:(id)arg1 contact:(id)arg2;
- (void)makeCell:(id)arg1 tableCell:(id)arg2 section:(unsigned long long)arg3 row:(unsigned long long)arg4;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2;
- (BOOL)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
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
- (BOOL)m_isSession;
- (void)setM_isSession:(BOOL)arg1;
- (id)navTitle;
- (void)setNavTitle:(id)arg1;
- (void).cxx_destruct;
@end
