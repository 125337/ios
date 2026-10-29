@interface TemplateContactSelectViewController : MMUIViewController <WCSearchDelegate, MMTableViewDelegate, UITableViewDelegate, UITableViewDataSource, UISearchBarDelegate, NewContactsSearchPanelViewDelegate, ChatRoomMemberGridViewDelegate, MMTableViewInfoDelegate, NewChatRoomMemberItemViewDelegate, IContactMgrExt>
{
    MMTableView * m_tableView; // +0x70
    NSMutableArray * m_arrRoomMembers; // +0x78
    NSMutableArray * m_arrKeys; // +0x80
    NSMutableDictionary * m_dicRoomMembers; // +0x88
    CBaseContact * m_roomContact; // +0x90
    NSMutableArray * m_arrFilterdFriends; // +0x98
    NSMutableSet * m_setFilteredFriends; // +0xa0
    NSMutableDictionary * m_dicMatchTips; // +0xa8
    id <TemplateContactSelectDelegate> m_delegate; // +0xb0
    NewContactsSearchPanelView * m_panelView; // +0xb8
    unsigned long long m_commonSearchScene; // +0xc0
    NSIndexPath * m_oSelectIndexPath; // +0xc8
    SearchHelpDataItem * m_searchHelpDataItem; // +0xd0
    UILabel * m_groupTipLabel; // +0xd8
    BOOL _m_bHideSearchBar; // +0xe0
    BOOL _m_bSortByTime; // +0xe1
    BOOL _m_bSortByNameWithoutIndex; // +0xe2
    BOOL _m_bCustomMakeCell; // +0xe3
    BOOL _m_bEnableEdit; // +0xe4
    BOOL _useBarButtonStyleBack; // +0xe5
    WCSearcher * _searcher; // +0xe8
    WCColorProxy * _colorProxy; // +0xf0
    NSString * _beginSearchText; // +0xf8
    CGPoint m_bContentOffset; // +0x100
}
- (id)init;
- (id)colorProxy;
- (void)makeWhiteCell:(id)arg1 CellInfo:(id)arg2;
- (void)openContactInfo:(id)arg1;
- (void)onModifyContact:(id)arg1;
- (id)GetCompareStrByContact:(id)arg1;
- (id)addSectionKey:(id)arg1;
- (void)addContact:(id)arg1;
- (id)getContactWith:(id)arg1;
- (void)initData;
- (void)reloadView;
- (void)reloadMemberListAndView;
- (id)getMemberList;
- (void)initTableView;
- (void)initSearchBar;
- (Class)getNewContactsSearchPanelViewClass;
- (void)initView;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidLayoutSubviews;
- (id)getSearchMatchTip:(id)arg1;
- (id)getCachedSearchHelpDataItem;
- (BOOL)hasNoSearchResult;
- (id)getTableView;
- (id)getArrKeys;
- (id)navigationBarBackgroundColor;
- (BOOL)navigationBarBlurEffect;
- (long long)preferredStatusBarStyle;
- (void)OnDataChange;
- (void)onCancel:(id)arg1;
- (void)onDone;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)makeCell:(id)arg1 contact:(id)arg2 tableView:(id)arg3 indexPath:(id)arg4;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (id)getViewController;
- (void)didSelectContact:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (long long)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (void)wcsWillPresentSearch:(id)arg1;
- (void)wcsDidPresentSearch:(id)arg1;
- (void)wcsDidDismissSearch:(id)arg1;
- (void)doSearch:(id)arg1;
- (void)sortResultContact:(id)arg1 matchTips:(id)arg2;
- (void)wcsSearchBarTextDidBeginEditing:(id)arg1;
- (void)wcsSearchBar:(id)arg1 textDidChange:(id)arg2;
- (void)wcsSearchBarSearchButtonClicked:(id)arg1;
- (void)wcsSearchBarCancelButtonClicked:(id)arg1;
- (void)didClickImageAtIndex:(unsigned int)arg1 withKey:(id)arg2;
- (void)didDeleteLastWithKey:(id)arg1;
- (void)doSearch:(id)arg1 Pre:(BOOL)arg2;
- (id)cellForSearchViewTable:(id)arg1 index:(id)arg2;
- (double)heightForSearchViewTable:(id)arg1;
- (void)didSearchViewTableSelect:(id)arg1;
- (double)heightForPanelResultFooterInSection:(long long)arg1;
- (id)viewForPanelResultFooterInSection:(long long)arg1;
- (id)m_roomContact;
- (void)setM_roomContact:(id)arg1;
- (id)m_delegate;
- (void)setM_delegate:(id)arg1;
- (id)m_panelView;
- (void)setM_panelView:(id)arg1;
- (CGPoint)m_bContentOffset;
- (void)setM_bContentOffset:(CGPoint)arg1;
- (BOOL)m_bHideSearchBar;
- (void)setM_bHideSearchBar:(BOOL)arg1;
- (BOOL)m_bSortByTime;
- (void)setM_bSortByTime:(BOOL)arg1;
- (BOOL)m_bSortByNameWithoutIndex;
- (void)setM_bSortByNameWithoutIndex:(BOOL)arg1;
- (BOOL)m_bCustomMakeCell;
- (void)setM_bCustomMakeCell:(BOOL)arg1;
- (BOOL)m_bEnableEdit;
- (void)setM_bEnableEdit:(BOOL)arg1;
- (BOOL)useBarButtonStyleBack;
- (void)setUseBarButtonStyleBack:(BOOL)arg1;
- (id)searcher;
- (void)setSearcher:(id)arg1;
- (void)setColorProxy:(id)arg1;
- (id)beginSearchText;
- (void)setBeginSearchText:(id)arg1;
- (void).cxx_destruct;
@end
