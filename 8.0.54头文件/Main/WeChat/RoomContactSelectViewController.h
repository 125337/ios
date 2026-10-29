@interface RoomContactSelectViewController : MMUIViewController <AddMemLogicDelegate, DelMemLogicDelegate, WCSearchDelegate, MMTableViewIndexViewDelegate, MMTableViewDelegate, UITableViewDelegate, UITableViewDataSource, UISearchBarDelegate, NewContactsSearchPanelViewDelegate, ChatRoomMemberGridViewDelegate, MMTableViewInfoDelegate, NewChatRoomMemberItemViewDelegate, IContactMgrExt>
{
    MMTableView * m_tableView; // +0x68
    NSMutableArray * m_arrRoomMembers; // +0x70
    NSMutableArray * m_arrKeys; // +0x78
    NSMutableDictionary * m_dicRoomMembers; // +0x80
    CBaseContact * m_roomContact; // +0x88
    NSMutableArray * m_arrFilterdFriends; // +0x90
    NSMutableSet * m_setFilteredFriends; // +0x98
    NSMutableDictionary * m_dicMatchTips; // +0xa0
    id <RoomContactSelectDelegate> m_delegate; // +0xa8
    NewContactsSearchPanelView * m_panelView; // +0xb0
    unsigned long long m_commonSearchScene; // +0xb8
    unsigned int m_scene; // +0xc0
    NSArray * m_customMemberList; // +0xc8
    MMTableViewInfo * m_tableViewInfo; // +0xd0
    CContact * m_chatRoomContact; // +0xd8
    unsigned long long m_nCellCnt; // +0xe0
    unsigned long long m_nCellCol; // +0xe8
    NSArray * m_arrMemberList; // +0xf0
    BOOL m_bDeleteStatus; // +0xf8
    AddMemLogic * m_addMemLogic; // +0x100
    DelMemLogic * m_delMemLogic; // +0x108
    NSIndexPath * m_oSelectIndexPath; // +0x110
    SearchHelpDataItem * m_searchHelpDataItem; // +0x118
    UILabel * m_groupTipLabel; // +0x120
    OrderedDictionary * m_extraCustomMemberInfoDic; // +0x128
    BOOL m_bShowWithGrid; // +0x130
    BOOL _m_bHideSearchBar; // +0x131
    BOOL _m_bShowSelf; // +0x132
    BOOL _m_bHideOpenIM; // +0x133
    BOOL _m_bHideBlack; // +0x134
    BOOL _m_bShowAtAll; // +0x135
    BOOL _m_bSortByTime; // +0x136
    BOOL _m_bSortByNameWithoutIndex; // +0x137
    BOOL _m_bCustomMakeCell; // +0x138
    BOOL _m_bEnableEdit; // +0x139
    BOOL _m_bMultiSelect; // +0x13a
    BOOL _m_bShowIsFriend; // +0x13b
    BOOL _m_bIsFromContactTag; // +0x13c
    BOOL _useBarButtonStyleBack; // +0x13d
    BOOL _m_bShowTitleViewWithMember; // +0x13e
    BOOL _m_bShowImporGroupMemberInfo; // +0x13f
    BOOL _hasClickSearch; // +0x140
    int _contactInfoFromScene; // +0x144
    WCSearcher * _searcher; // +0x148
    NSString * _customHeaderTitle; // +0x150
    WCColorProxy * _colorProxy; // +0x158
    MMPageSheetAdapter * _pageSheetAdapter; // +0x160
    CGPoint m_bContentOffset; // +0x168
}
- (id)colorProxy;
- (void)updateToNormalStatusEx;
- (void)updateMemberView;
- (void)makeMemListCell:(id)arg1 CellInfo:(id)arg2;
- (void)makeWhiteCell:(id)arg1 CellInfo:(id)arg2;
- (void)makeMemListSection:(id)arg1;
- (void)reloadProfileGridTableData;
- (void)resortMemList;
- (void)loadMemberList;
- (id)filterFriends:(id)arg1;
- (void)openContactInfo:(id)arg1;
- (void)onModifyContact:(id)arg1;
- (void)updateTitleView;
- (id)GetCompareStrByContact:(id)arg1;
- (id)addSectionKey:(id)arg1;
- (void)addContact:(id)arg1;
- (id)getContactWith:(id)arg1;
- (void)initData;
- (void)reloadView;
- (void)reloadMemberListAndView;
- (id)getMemberList;
- (void)initTableView;
- (void)initGroupTipLabel;
- (void)initSearchBar;
- (Class)getNewContactsSearchPanelViewClass;
- (void)initView;
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (id)init;
- (id)getSearchMatchTip:(id)arg1;
- (id)getCachedSearchHelpDataItem;
- (BOOL)hasNoSearchResult;
- (BOOL)useTransparentNavibar;
- (double)getContentViewY;
- (id)getTableView;
- (id)getArrKeys;
- (id)getDicMatchTips;
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
- (void)_openContactInfo:(id)arg1;
- (unsigned int)getNormalSectionType:(long long)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (long long)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (id)mmsectionIndexTitlesForTableView:(id)arg1;
- (long long)mmtableView:(id)arg1 sectionForSectionIndexTitle:(id)arg2 atIndex:(long long)arg3;
- (long long)mmcurrentIndexForTableView:(id)arg1;
- (void)addMember;
- (void)onAddMemLogicStop:(BOOL)arg1;
- (void)setShowRemoveMember;
- (void)showDelMemView;
- (void)onDelMemLogicStop:(BOOL)arg1;
- (void)onDeleteMember:(id)arg1;
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
- (void)cancelSearch;
- (void)doSearch:(id)arg1 Pre:(BOOL)arg2;
- (id)cellForSearchViewTable:(id)arg1 index:(id)arg2;
- (double)heightForSearchViewTable:(id)arg1;
- (void)didSearchViewTableSelect:(id)arg1;
- (double)heightForPanelResultFooterInSection:(long long)arg1;
- (id)viewForPanelResultFooterInSection:(long long)arg1;
- (void)onPanelViewTableViewHidden:(BOOL)arg1;
- (id)m_roomContact;
- (void)setM_roomContact:(id)arg1;
- (id)m_delegate;
- (void)setM_delegate:(id)arg1;
- (id)m_panelView;
- (void)setM_panelView:(id)arg1;
- (unsigned long long)m_commonSearchScene;
- (void)setM_commonSearchScene:(unsigned long long)arg1;
- (BOOL)m_bShowWithGrid;
- (void)setM_bShowWithGrid:(BOOL)arg1;
- (CGPoint)m_bContentOffset;
- (void)setM_bContentOffset:(CGPoint)arg1;
- (id)m_chatRoomContact;
- (void)setM_chatRoomContact:(id)arg1;
- (unsigned int)m_scene;
- (void)setM_scene:(unsigned int)arg1;
- (id)m_customMemberList;
- (void)setM_customMemberList:(id)arg1;
- (id)extraCustomMemberInfoDic;
- (void)setExtraCustomMemberInfoDic:(id)arg1;
- (BOOL)m_bHideSearchBar;
- (void)setM_bHideSearchBar:(BOOL)arg1;
- (BOOL)m_bShowSelf;
- (void)setM_bShowSelf:(BOOL)arg1;
- (BOOL)m_bHideOpenIM;
- (void)setM_bHideOpenIM:(BOOL)arg1;
- (BOOL)m_bHideBlack;
- (void)setM_bHideBlack:(BOOL)arg1;
- (BOOL)m_bShowAtAll;
- (void)setM_bShowAtAll:(BOOL)arg1;
- (BOOL)m_bSortByTime;
- (void)setM_bSortByTime:(BOOL)arg1;
- (BOOL)m_bSortByNameWithoutIndex;
- (void)setM_bSortByNameWithoutIndex:(BOOL)arg1;
- (BOOL)m_bCustomMakeCell;
- (void)setM_bCustomMakeCell:(BOOL)arg1;
- (BOOL)m_bEnableEdit;
- (void)setM_bEnableEdit:(BOOL)arg1;
- (BOOL)m_bMultiSelect;
- (void)setM_bMultiSelect:(BOOL)arg1;
- (BOOL)m_bShowIsFriend;
- (void)setM_bShowIsFriend:(BOOL)arg1;
- (BOOL)m_bIsFromContactTag;
- (void)setM_bIsFromContactTag:(BOOL)arg1;
- (BOOL)useBarButtonStyleBack;
- (void)setUseBarButtonStyleBack:(BOOL)arg1;
- (BOOL)m_bShowTitleViewWithMember;
- (void)setM_bShowTitleViewWithMember:(BOOL)arg1;
- (BOOL)m_bShowImporGroupMemberInfo;
- (void)setM_bShowImporGroupMemberInfo:(BOOL)arg1;
- (int)contactInfoFromScene;
- (void)setContactInfoFromScene:(int)arg1;
- (id)searcher;
- (void)setSearcher:(id)arg1;
- (id)customHeaderTitle;
- (void)setCustomHeaderTitle:(id)arg1;
- (void)setColorProxy:(id)arg1;
- (BOOL)hasClickSearch;
- (void)setHasClickSearch:(BOOL)arg1;
- (id)pageSheetAdapter;
- (void)setPageSheetAdapter:(id)arg1;
- (void).cxx_destruct;
@end

