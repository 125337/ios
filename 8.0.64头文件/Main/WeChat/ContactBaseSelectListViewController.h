@interface ContactBaseSelectListViewController : MMUIViewController <UITableViewDelegate, UITableViewDataSource, WCSearchDelegate, MMTableViewIndexViewDelegate, contactInfoDelegate>
{
    NSMutableArray * m_arrAllKey; // +0x70
    BOOL m_bSearching; // +0x78
    NSMutableArray * m_arrFilteredContacts; // +0x80
    NSMutableDictionary * _dicMatchTip; // +0x88
    BOOL m_isMultiple; // +0x90
    BOOL _m_isHiddenAccessory; // +0x91
    MMTableView * m_tableView; // +0x98
    NSMutableDictionary * m_dicMultiSelect; // +0xa0
    NSDictionary * m_dicExistContact; // +0xa8
    WCSearcher * m_searcher; // +0xb0
    NSMutableDictionary * m_dicAllContacts; // +0xb8
    id <ContactSelectListViewControllerDelegate> _m_delegate; // +0xc0
}
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)initData;
- (void)initTitleArea;
- (void)initTableView;
- (void)initSearchBar;
- (void)initTableHeaderView;
- (void)initView;
- (double)getTableViewHeight;
- (double)getCellHeight;
- (void)processContact:(id)arg1;
- (id)parseContactKey:(id)arg1;
- (void)addContactInternal:(id)arg1;
- (void)processNewContact:(id)arg1;
- (void)tryDeleteContactInSection:(id)arg1;
- (void)reloadDataTablew;
- (void)showContactInfoView:(id)arg1;
- (id)addSectionKey:(id)arg1;
- (void)loadContacts;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)makeCell:(id)arg1 tableCell:(id)arg2 section:(unsigned long long)arg3 row:(unsigned long long)arg4;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (void)loadHeaderViewSelection;
- (void)scrollViewDidScroll:(id)arg1;
- (BOOL)isExisted:(id)arg1;
- (BOOL)isSelected:(id)arg1;
- (id)mmsectionIndexTitlesForTableView:(id)arg1;
- (long long)mmtableView:(id)arg1 sectionForSectionIndexTitle:(id)arg2 atIndex:(long long)arg3;
- (long long)mmcurrentIndexForTableView:(id)arg1;
- (void)doSearch:(id)arg1;
- (void)wcsSearchBar:(id)arg1 textDidChange:(id)arg2;
- (void)wcsSearchBarSearchButtonClicked:(id)arg1;
- (void)wcsSearchBarCancelButtonClicked:(id)arg1;
- (id)m_tableView;
- (void)setM_tableView:(id)arg1;
- (BOOL)m_isMultiple;
- (void)setM_isMultiple:(BOOL)arg1;
- (id)m_dicMultiSelect;
- (void)setM_dicMultiSelect:(id)arg1;
- (id)m_dicExistContact;
- (void)setM_dicExistContact:(id)arg1;
- (id)m_searcher;
- (void)setM_searcher:(id)arg1;
- (id)m_dicAllContacts;
- (void)setM_dicAllContacts:(id)arg1;
- (BOOL)m_isHiddenAccessory;
- (void)setM_isHiddenAccessory:(BOOL)arg1;
- (id)m_delegate;
- (void)setM_delegate:(id)arg1;
- (void).cxx_destruct;
@end
