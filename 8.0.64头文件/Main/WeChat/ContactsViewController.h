@interface ContactsViewController : MMTabBarBaseViewController <WCSearchDelegate, WCDataSearchDelegate, FTSHomeViewControllerDelegate, UITableViewDelegate, UITableViewDataSource, WCActionSheetDelegate, ContactsDataLogicDelegate, FriendAsistSessionExt, MainTableDelegate, MMTableViewIndexViewDelegate, IOpenImResourceMgrExt>
{
    MMMainTableView * m_tableView; // +0x70
    UIEdgeInsets m_tableViewInsets; // +0x78
    UILabel * m_countLabel; // +0x98
    ContactsDataLogic * m_contactsDataLogic; // +0xa0
    unsigned int m_uiHelloGroupUnreadCount; // +0xa8
    FTSVoiceSearchBarController * m_mmSearchBar; // +0xb0
    BOOL m_needResetTableViewOffset; // +0xb8
    BOOL m_canSearchAfterInit; // +0xb9
    BOOL m_hadSectionSocialBlackRowInHelloSection; // +0xba
    NSMutableArray * m_brandContactGroupList; // +0xc0
    NSArray * _favourContactArray; // +0xc8
    WCSearchBar * _searchBar; // +0xd0
}
- (id)init;
- (void)openContactInfoView:(long long)arg1;
- (void)showContactInfoView:(id)arg1;
- (void)onShowAddContact:(BOOL)arg1;
- (void)onAddContact;
- (void)initData;
- (void)updateCount;
- (void)initCountLabel:(id)arg1;
- (void)initTableView;
- (void)willAppear;
- (void)viewWillAppear:(BOOL)arg1;
- (void)removeContactsTip;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidPopOrDismiss:(BOOL)arg1;
- (void)viewDidPop:(BOOL)arg1;
- (void)initView;
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (void)didReceiveMemoryWarning;
- (void)dealloc;
- (void)backToSplitViewEmptyViewController:(id)arg1;
- (void)initBarItem;
- (void)initTitleArea;
- (void)initSearchBar;
- (unsigned int)getHelloCellCount;
- (double)getMainTableHeight;
- (void)updateOpenIMAcctTypeWording;
- (BOOL)HasHelloGroup;
- (BOOL)HasOpenIMEntrance;
- (BOOL)HasEnterpriseBrandGroup;
- (BOOL)HasBrandGroup;
- (BOOL)HasServiceBrandGroup;
- (long long)ConvertToNormalContactSection:(long long)arg1;
- (unsigned int)getSectionType:(long long)arg1;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfCellForEnterpriseBrandGroup;
- (long long)numberOfCellForOpenIM;
- (long long)numberOfCellForBrandGroup;
- (void)updateNewContactsItemCell:(id)arg1 contact:(id)arg2;
- (void)updateEnterpriseBrandItemCell:(id)arg1 contact:(id)arg2;
- (void)makeGroupCell:(id)arg1 url:(id)arg2 title:(id)arg3;
- (void)makeGroupCell:(id)arg1 head:(id)arg2 title:(id)arg3;
- (void)makeHelloGroupCell:(id)arg1;
- (void)makeContactSocialBlackCell:(id)arg1;
- (void)makeChatRoomCell:(id)arg1;
- (void)makeContactTagCell:(id)arg1;
- (void)makeEnterpriseBrandCell:(id)arg1 row:(long long)arg2;
- (void)makeCell:(id)arg1 tableCell:(id)arg2 section:(unsigned long long)arg3 row:(unsigned long long)arg4;
- (void)makeHelloGroupCell:(id)arg1 row:(unsigned long long)arg2;
- (void)makeOpenIMEntranceCell:(id)arg1 row:(unsigned long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3;
- (long long)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2;
- (void)handleSelectdHelloGroup;
- (void)handleSelectdChatRoom;
- (void)handleSelectdContactSocialBlack;
- (void)handleSelectdContactTag;
- (void)handleSelectdHelloGroup:(unsigned long long)arg1;
- (void)handleSelectEnterpriseBrand:(unsigned long long)arg1;
- (void)handleSelectOpenIM:(unsigned long long)arg1;
- (void)handleSelectdBrandGroup:(long long)arg1;
- (void)internalHandleSelectdBrandGroup:(long long)arg1;
- (void)handleSelectedBrandServiceGroup:(long long)arg1;
- (void)internalHandleSelectdBrandServiceGroup:(long long)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (void)loadHeaderViewSelection;
- (long long)mmcurrentIndexForTableView:(id)arg1;
- (id)mmsectionIndexTitlesForTableView:(id)arg1;
- (long long)mmtableView:(id)arg1 sectionForSectionIndexTitle:(id)arg2 atIndex:(long long)arg3;
- (void)onContactsDataChange;
- (BOOL)onFilterContactCandidate:(id)arg1;
- (void)onGetOpenImResourceDone:(id)arg1;
- (void)cancelSearch;
- (void)doGlobalSearchPrepareWork;
- (void)SearchBarBecomeActive;
- (BOOL)shouldShowTabbar;
- (void)SearchBarBecomeUnActive;
- (void)setSearchBarActive:(BOOL)arg1;
- (void)OnSayHelloDataChange;
- (id)getViewController;
- (void)updateViewWhenSelectTab:(BOOL)arg1;
- (void)updateHelloGroup;
- (void)updateHadSectionSocialBlackRowInHelloSection;
- (id)getMMKVHadSectionSocialBlackKey;
- (void)updateTabBarBadge;
- (void)onFriendAssistUnreadCountChanged;
- (void)resetViewStatus;
- (void)onFTSSearchEnd;
- (id)getVCWithDeepLinkName:(id)arg1;
- (void)setupDeepLinkConfig;
- (void)registerYReportSdk;
- (id)m_brandContactGroupList;
- (void)setM_brandContactGroupList:(id)arg1;
- (id)favourContactArray;
- (void)setFavourContactArray:(id)arg1;
- (id)searchBar;
- (void)setSearchBar:(id)arg1;
- (void).cxx_destruct;
@end
