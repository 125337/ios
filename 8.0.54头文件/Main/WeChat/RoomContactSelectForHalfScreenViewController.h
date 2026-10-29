@interface RoomContactSelectForHalfScreenViewController : MMPageSheetBaseViewController <UITableViewDelegate, UITableViewDataSource, UISearchBarDelegate, MMTableViewIndexViewDelegate, MMPageSheetGestureRecognizerDelegate, NewContactsSearchPanelViewDelegate>
{
    id <RoomContactSelectDelegate> m_delegate; // +0x68
    SearchHelpDataItem * m_searchHelpDataItem; // +0x70
    MMUISearchBar * m_searchBar; // +0x78
    UIView * m_lineView; // +0x80
    UIView * m_searchBarContainer; // +0x88
    NSMutableArray * m_arrRoomMembers; // +0x90
    NSMutableArray * m_arrKeys; // +0x98
    NSMutableDictionary * m_dicRoomMembers; // +0xa0
    NSMutableArray * m_arrFilterdFriends; // +0xa8
    NSMutableDictionary * m_dicMatchTips; // +0xb0
    BOOL m_hasSearch; // +0xb8
    int m_actionType; // +0xbc
    NewContactsSearchPanelView * m_panelView; // +0xc0
    BOOL m_bMultiSelect; // +0xc8
    BOOL m_updatingView; // +0xc9
    BOOL m_needToFixPanelViewLayout; // +0xca
    BOOL m_searchPanelHidden; // +0xcb
    MMUIButton * m_rightMultiSelectButton; // +0xd0
    MMUIButton * m_leftCancelButton; // +0xd8
    MMUIButton * m_rightMultiSelectConfirmButton; // +0xe0
    ContactsItemView * m_chatRoomAllMemberView; // +0xe8
    UIView * m_searchResultHeaderView; // +0xf0
    BOOL m_hadFirstLoadView; // +0xf8
    MultiSelectContactsInChatRoomReport * m_multiSelectContactsInChatRoomReport; // +0x100
    NSString * nsCurrentSearchText; // +0x108
    NSMutableArray * m_hadSeleteContactBeforSearch; // +0x110
    BOOL _m_canSupportMultiSelect; // +0x118
    BOOL _showTextState; // +0x119
    BOOL _isInSearchState; // +0x11a
    unsigned int m_showSourceType; // +0x11c
    int _windowLevel; // +0x120
    OrderedDictionary * m_dicMultiSelect; // +0x128
    MMTableView * m_tableView; // +0x130
    CContact * m_referMsgContact; // +0x138
    CContact * _roomContact; // +0x140
    _TtC6WeChat13DNDReportItem * _dndReportItem; // +0x148
    WCSearchBar * _searchBarNew; // +0x150
}
- (id)getContactWith:(id)arg1;
- (void)initData;
- (void)addContact:(id)arg1;
- (void)initChatRoomAllMemberView;
- (void)initSearchBar;
- (void)initTableView;
- (void)initPageSheet;
- (void)pageSheetDidClose:(BOOL)arg1;
- (void)initView;
- (void)viewDidLoad;
- (void)viewDidBePopedOrDismissed:(BOOL)arg1;
- (id)getCachedSearchHelpDataItem;
- (BOOL)hasNoSearchResult;
- (BOOL)supportAtAll;
- (double)pageSheetContentHeight;
- (void)viewDidLayoutSubviews;
- (void)viewDidTransitionToNewSize;
- (double)getSearchPanelViewHeight;
- (double)getSearchPanelHeadImagesize;
- (double)getSearchPanelInputViewHeight;
- (double)getSearchPanelCellSize;
- (BOOL)isReferMsgContactSection:(unsigned long long)arg1;
- (BOOL)isSupportAtAllSection:(unsigned long long)arg1;
- (CGRect)getChatRoomAllMemberCellRect;
- (void)initPanelView;
- (void)alignPanelViewToSearchBarView;
- (void)prepareViewAnimation;
- (void)prepareHeadPanelViewAnimation;
- (void)finishHeadPanelViewAnimation;
- (void)prepareChatRoomAllMemberAnimation;
- (void)finishChatRoomAllMemberAnimation;
- (void)finishViewAnimation;
- (void)updateView;
- (void)animateUpdateView;
- (void)prepareUpdateMultiSelectView;
- (void)updateMultiSelectView;
- (void)makeCell:(id)arg1;
- (void)updatePanelBtn;
- (void)initLeftCancelButton;
- (void)initRightMultiSelectConfirmButton;
- (void)initRightMultiSelectButton;
- (void)onMultiCancel;
- (void)onConfirmed;
- (void)onClickMultiSelectButton;
- (void)updatePanelView:(id)arg1;
- (double)getPanelViewWidth;
- (double)getPanelViewTop;
- (void)updateMultiSelect:(id)arg1;
- (void)clearAllFiltered;
- (void)makeFocusFirstResponder;
- (double)getMultiSelectTableViewTop;
- (BOOL)checkUseNewSearchBar;
- (BOOL)isCanMultiSelectInDidSelectRow;
- (void)alignPanelViewToNewSearchBarView;
- (void)handleViewDidLayoutSubviewsInNewSearchBar;
- (void)updateMultiSelectPanelViewResultView;
- (id)getSearchResultHeaderView;
- (id)getSearchSectionHeaderMultiSelectContactButton;
- (void)onSearchSectionHeaderViewMultiSelectBtnChange;
- (BOOL)isMultiSelectInSearchSectionHeaderView;
- (void)doMultiSelectContactsInChatRoomReportWithExitScene:(unsigned int)arg1;
- (void)scrollViewToTopInNewSearchBar;
- (void)recordContactSelectionWithContact:(id)arg1;
- (void)recordDeleteBackWordsInSearchCnt;
- (void)recordClkClearAllButtonCnt;
- (void)didClickImageAtIndex:(unsigned int)arg1 withKey:(id)arg2;
- (void)didDeleteLastWithKey:(id)arg1;
- (void)searchTextFieldDidBeginEditing;
- (BOOL)searchTextFieldShouldBeginEditing;
- (void)searchTextFieldWillClearText;
- (void)onPanelViewTableViewHidden:(BOOL)arg1;
- (void)resetNavRightButton;
- (void)doSearch:(id)arg1 Pre:(BOOL)arg2;
- (void)cancelSearch;
- (BOOL)isSelected:(id)arg1;
- (void)reportAction:(int)arg1;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (void)makeCell:(id)arg1 contact:(id)arg2 tableView:(id)arg3;
- (BOOL)isShouldDisableSelectContactCellWithContact:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)updateLineViewForCell:(id)arg1 atIndexPath:(id)arg2;
- (void)didSelectContact:(id)arg1;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (long long)mmcurrentIndexForTableView:(id)arg1;
- (id)mmsectionIndexTitlesForTableView:(id)arg1;
- (long long)mmtableView:(id)arg1 sectionForSectionIndexTitle:(id)arg2 atIndex:(long long)arg3;
- (void)makeMoreCell:(id)arg1 description:(id)arg2 image:(id)arg3;
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(CGPoint)arg2 targetContentOffset:(CGPoint *)arg3;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2;
- (void)searchBarTextDidBeginEditing:(id)arg1;
- (void)doSearch:(id)arg1;
- (void)sortResultContact:(id)arg1 matchTips:(id)arg2;
- (void)searchBar:(id)arg1 textDidChange:(id)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (void)updateSearchBarColor;
- (id)searchFieldBGColor;
- (id)getRealSearchText;
- (BOOL)onContainerPanGestureRecognizer:(id)arg1 shouldRequireFailureOfGestureRecognizer:(id)arg2;
- (id)m_delegate;
- (void)setM_delegate:(id)arg1;
- (id)m_dicMultiSelect;
- (void)setM_dicMultiSelect:(id)arg1;
- (id)m_tableView;
- (void)setM_tableView:(id)arg1;
- (id)m_referMsgContact;
- (void)setM_referMsgContact:(id)arg1;
- (unsigned int)m_showSourceType;
- (void)setM_showSourceType:(unsigned int)arg1;
- (id)roomContact;
- (void)setRoomContact:(id)arg1;
- (BOOL)m_canSupportMultiSelect;
- (void)setM_canSupportMultiSelect:(BOOL)arg1;
- (BOOL)showTextState;
- (void)setShowTextState:(BOOL)arg1;
- (int)windowLevel;
- (void)setWindowLevel:(int)arg1;
- (BOOL)isInSearchState;
- (void)setIsInSearchState:(BOOL)arg1;
- (id)dndReportItem;
- (void)setDndReportItem:(id)arg1;
- (id)searchBarNew;
- (void)setSearchBarNew:(id)arg1;
- (void).cxx_destruct;
@end

