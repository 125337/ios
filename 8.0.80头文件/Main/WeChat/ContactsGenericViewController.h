@interface ContactsGenericViewController : MMUIViewController <WCSearchDelegate, MMTableViewIndexViewDelegate, UITableViewDelegate, UITableViewDataSource, contactInfoDelegate, IContactMgrExt>
{
    MMTableView * m_tableView; // +0x70
    NSMutableDictionary * m_dicAllContacts; // +0x78
    NSMutableArray * m_arrAllKey; // +0x80
    BOOL m_bSearching; // +0x88
    WCSearcher * _searcher; // +0x90
    NSMutableArray * m_arrFilteredContacts; // +0x98
    NSMutableDictionary * _dicMatchTip; // +0xa0
    long long m_iViewType; // +0xa8
    NSString * m_nsDomain; // +0xb0
    BOOL m_bPopUp; // +0xb8
    MMUILabel * m_emptyStateLabel; // +0xc0
    MMUIView * m_emptyView; // +0xc8
    id <contactsDelegate> m_delegate; // +0xd0
    NSString * _reportSessionId; // +0xd8
}
- (void)setupReportBlackListData;
- (void)reportClickBlackListContactWithUserName:(id)arg1 contactIndex:(unsigned int)arg2;
- (unsigned int)getPositionWithIndexPath:(id)arg1;
- (void)processContact:(id)arg1;
- (id)parseContactKey:(id)arg1;
- (void)deleteContact:(id)arg1 deleteInDB:(BOOL)arg2;
- (void)tryDeleteContactInSection:(id)arg1;
- (void)addContactInternal:(id)arg1;
- (void)processNewContact:(id)arg1;
- (void)addToContactsFromContactInfo:(id)arg1;
- (void)newMessageFromContactInfo:(id)arg1;
- (void)reloadData;
- (void)showContactInfoView:(id)arg1;
- (id)addSectionKey:(id)arg1;
- (void)loadContacts;
- (void)onDone:(id)arg1;
- (void)initData;
- (void)initTitleArea;
- (void)initTableView;
- (void)initSearchBar;
- (void)initView;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)initEmptyView;
- (void)updateEmptyStateLabelVisibility;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)makeCell:(id)arg1 tableCell:(id)arg2 section:(unsigned long long)arg3 row:(unsigned long long)arg4;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3;
- (long long)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (id)mmsectionIndexTitlesForTableView:(id)arg1;
- (long long)mmtableView:(id)arg1 sectionForSectionIndexTitle:(id)arg2 atIndex:(long long)arg3;
- (long long)mmcurrentIndexForTableView:(id)arg1;
- (void)doSearch:(id)arg1;
- (void)wcsSearchBar:(id)arg1 textDidChange:(id)arg2;
- (void)wcsSearchBarSearchButtonClicked:(id)arg1;
- (void)wcsSearchBarCancelButtonClicked:(id)arg1;
- (BOOL)checkIsEmptyBlackList;
- (void)onModifyContact:(id)arg1;
- (void)onDeleteContact:(id)arg1;
- (double)getVisibleHeight;
- (id)m_delegate;
- (void)setM_delegate:(id)arg1;
- (long long)m_iViewType;
- (void)setM_iViewType:(long long)arg1;
- (id)m_nsDomain;
- (void)setM_nsDomain:(id)arg1;
- (BOOL)m_bPopUp;
- (void)setM_bPopUp:(BOOL)arg1;
- (id)reportSessionId;
- (void)setReportSessionId:(id)arg1;
- (void).cxx_destruct;
@end
