@interface WCRedEnvelopesSessionSelectViewController : MMUIViewController <IFTSContactMgrExt, WCSearchDelegate, WCDataSearchDelegate, UITableViewDelegate, UITableViewDataSource, ContactsDataLogicDelegate>
{
    long long m_iSessionType; // +0x68
    id <WCRedEnvelopesSessionSelectViewControllerDelegate> m_delegate; // +0x70
    MMTableView * m_tableView; // +0x78
    NSMutableArray * m_arrContacts; // +0x80
    NSMutableArray * m_selectedContacts; // +0x88
    unsigned long long m_confirmType; // +0x90
    unsigned long long m_barTitleType; // +0x98
    WCRedEnvelopesMultiSelectContactsViewController * m_oWCRedEnvelopesMultiSelectContactsViewController; // +0xa0
    WCDataSearcher * _searcher; // +0xa8
    NSObject * _userData; // +0xb0
    NSString * _taskKey; // +0xb8
    NSString * nsCurrentSearchText; // +0xc0
    NSMutableArray * arrSearchResultOfContacts; // +0xc8
    NSMutableArray * arrSearchResultOfGroup; // +0xd0
    BOOL m_bShowNewSession; // +0xd8
    BOOL m_bFilterMyContact; // +0xd9
    CreateChatLogic * m_createChatLogic; // +0xe0
    NSString * nsNewSessionCellTitle; // +0xe8
    NSString * _m_backSecondConfirmTitle; // +0xf0
    NSString * _m_backSecondConfirmCancel; // +0xf8
    NSString * _m_backSecondConfirmConfirm; // +0x100
}
+ (id)getGroupDispName:(id)arg1;
- (id)init;
- (void)dealloc;
- (void)initData;
- (void)onContactsDataChange;
- (BOOL)onFilterContactCandidate:(id)arg1;
- (void)onCancel:(id)arg1;
- (void)cancelConfirm;
- (void)initBarItem;
- (void)initTitle;
- (void)initSearchBar;
- (void)initTableView;
- (void)initView;
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (void)viewWillDisappear:(BOOL)arg1;
- (long long)getSectionType:(long long)arg1;
- (long long)changeToAllCantactSection:(long long)arg1;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)makeNewSessionCell:(id)arg1;
- (BOOL)isSelected:(id)arg1;
- (id)getCellImage:(id)arg1;
- (void)makeCell:(id)arg1 contact:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (id)sectionIndexTitlesForTableView:(id)arg1;
- (long long)tableView:(id)arg1 sectionForSectionIndexTitle:(id)arg2 atIndex:(long long)arg3;
- (void)handleSelectNewSession;
- (void)onConfirm;
- (void)switchSelect:(id)arg1 atIndexPath:(id)arg2;
- (void)callbackDelegate;
- (void)performCallback;
- (void)onDone:(id)arg1;
- (void)onSelect:(id)arg1;
- (id)getGroupDispName:(id)arg1;
- (void)handleSelectIndexPath:(id)arg1 tableView:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)didClickImageAtIndex:(unsigned int)arg1 withKey:(id)arg2;
- (void)onCreateChatContactReturn:(id)arg1;
- (id)cellForSearchViewTable:(id)arg1 index:(id)arg2;
- (double)heightForSearchViewTable:(id)arg1;
- (void)didSearchViewTableSelect:(id)arg1;
- (long long)numberOfSectionsForSearchViewTable:(id)arg1;
- (long long)numberOfRowsInSection:(long long)arg1 ForSearchViewTable:(id)arg2;
- (double)heightForHeaderInSection:(long long)arg1 ForSearchViewTable:(id)arg2;
- (id)viewForHeaderInSection:(long long)arg1 ForSearchViewTable:(id)arg2;
- (id)titleForHeaderInSection:(long long)arg1 ForSearchViewTable:(id)arg2;
- (void)SearchBarBecomeActive;
- (void)doSearch:(id)arg1 Pre:(BOOL)arg2;
- (void)delaySearchImp:(id)arg1;
- (void)delaySearch:(id)arg1 slowMode:(BOOL)arg2;
- (void)cancelSearch;
- (void)wcsSearchBar:(id)arg1 textDidChange:(id)arg2;
- (void)addFakeViewWhenAsynSearchNotReturn;
- (void)removeFakeViewWhenAsynSearchIsReturn;
- (void)onFTSContactSearchFinish:(id)arg1;
- (void)FilterSearchResultOfNormalContacts:(id)arg1;
- (BOOL)m_bShowNewSession;
- (void)setM_bShowNewSession:(BOOL)arg1;
- (BOOL)m_bFilterMyContact;
- (void)setM_bFilterMyContact:(BOOL)arg1;
- (id)m_delegate;
- (void)setM_delegate:(id)arg1;
- (unsigned long long)confirmType;
- (void)setConfirmType:(unsigned long long)arg1;
- (unsigned long long)barTitleType;
- (void)setBarTitleType:(unsigned long long)arg1;
- (id)m_createChatLogic;
- (void)setM_createChatLogic:(id)arg1;
- (id)nsNewSessionCellTitle;
- (void)setNsNewSessionCellTitle:(id)arg1;
- (id)userData;
- (void)setUserData:(id)arg1;
- (id)m_backSecondConfirmTitle;
- (void)setM_backSecondConfirmTitle:(id)arg1;
- (id)m_backSecondConfirmCancel;
- (void)setM_backSecondConfirmCancel:(id)arg1;
- (id)m_backSecondConfirmConfirm;
- (void)setM_backSecondConfirmConfirm:(id)arg1;
- (void).cxx_destruct;
@end

