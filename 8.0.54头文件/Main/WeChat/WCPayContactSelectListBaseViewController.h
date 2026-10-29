@interface WCPayContactSelectListBaseViewController : WCPayBaseViewController <UITableViewDelegate, UITableViewDataSource, WCSearchDelegate, MMTableViewIndexViewDelegate, contactInfoDelegate>
{
    NSMutableArray * m_arrAllKey; // +0x90
    BOOL m_bSearching; // +0x98
    NSMutableArray * m_arrFilteredContacts; // +0xa0
    NSMutableDictionary * _dicMatchTip; // +0xa8
    BOOL m_isMultiple; // +0xb0
    BOOL _m_isHiddenAccessory; // +0xb1
    BOOL _shouldSeparateEnterpriseContact; // +0xb2
    MMTableView * m_tableView; // +0xb8
    NSMutableDictionary * m_dicMultiSelect; // +0xc0
    NSDictionary * m_dicExistContact; // +0xc8
    WCSearcher * m_searcher; // +0xd0
    NSMutableDictionary * m_dicAllContacts; // +0xd8
    id <WCPayContactSelectListBaseViewControllerDelegate> _m_delegate; // +0xe0
    CContact * _chatroomContact; // +0xe8
}
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)initData;
- (void)initTitleArea;
- (void)initTableView;
- (void)initSearchBar;
- (void)initTableHeaderView;
- (void)initView;
- (void)setupContentView;
- (double)getTableViewHeight;
- (double)getCellHeight;
- (long long)compareByContactKey:(id)arg1 withKey:(id)arg2;
- (long long)compareContact:(id)arg1 withContact:(id)arg2;
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
- (id)mmimageTableView:(id)arg1 sectionForSectionIndexTitle:(id)arg2 atIndex:(long long)arg3;
- (id)mmsectionIndexTitlesForTableView:(id)arg1;
- (id)mmtableView:(id)arg1 accessibilityValueForSectionIndexTitle:(id)arg2;
- (long long)mmtableView:(id)arg1 sectionForSectionIndexTitle:(id)arg2 atIndex:(long long)arg3;
- (long long)mmcurrentIndexForTableView:(id)arg1;
- (void)doSearch:(id)arg1;
- (void)sortResultContact:(id)arg1 matchTips:(id)arg2;
- (void)wcsSearchBar:(id)arg1 textDidChange:(id)arg2;
- (void)wcsSearchBarSearchButtonClicked:(id)arg1;
- (void)wcsSearchBarCancelButtonClicked:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
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
- (BOOL)shouldSeparateEnterpriseContact;
- (void)setShouldSeparateEnterpriseContact:(BOOL)arg1;
- (id)m_delegate;
- (void)setM_delegate:(id)arg1;
- (id)chatroomContact;
- (void)setChatroomContact:(id)arg1;
- (void).cxx_destruct;
@end

