@interface MultiSelectContactsViewController : MMUILandscapeSheetViewController <_TtP4Hero26HeroViewControllerDelegate_, RecommendAlreadyHadGroupPageSheetViewDelegate, MessagePageSheetAdapterDelegate, SameRecommendRoomMsgContentViewDelegate, SelectTagContactsViewControllerDelegate, ContactSelectViewDelegate, SelectOpenIMContactsViewControllerDelegate, ContactPickerViewDelegate, RoomContactSelectDelegate, IChatRoomHistoryUploadExt, WCSearchDelegate, WCDataSearchDelegate, WCMomentsContactTagListViewControllerDelegate, WCMomentsHistoryGroupSelectViewControllerDelegate, MultiSelectContactsViewControllerDelegate, ContactsSearchControllerDelegate, ContactsSelectionPreviewViewControllerDelegate, MMPageSheetAdapterDelegate, ContactSelectDropDownHalfScreenViewDelegate, MMDropDownHalfScreenViewDelegate, RecommendAlreadyHadGroupListViewControllerDelegate, WCSearchBarDelegate, UITableViewDelegate, UITableViewDataSource, WCActionSheetDelegate, NewContactsSearchPanelViewDelegate, GroupSelectContactsViewControllerDelegate>
{
    id <MultiSelectContactsViewControllerDelegate> m_delegate; // +0x70
    NSDictionary * m_dicExistContact; // +0x78
    NSDictionary * m_dicIgnoreContact; // +0x80
    BOOL m_bShowHistoryGroup; // +0x88
    BOOL m_bShowContactTag; // +0x89
    BOOL m_bShowRadarCreateRoom; // +0x8a
    NSMutableDictionary * m_dicMultiSelect; // +0x90
    NSIndexPath * m_indexPathToBeDeleted; // +0x98
    NewContactsSearchPanelView * m_panelView; // +0xa0
    UIButton * m_panelBtn; // +0xa8
    UIBarButtonItem * m_panelBtnItem; // +0xb0
    unsigned int m_uiGroupScene; // +0xb8
    unsigned long long m_memberCountLimit; // +0xc0
    ContactSelectView * m_selectView; // +0xc8
    unsigned long long m_commonSearchScene; // +0xd0
    ContactSelectToolView * m_toolView; // +0xd8
    MultiSelectContactsInChatRoomReport * m_multiSelectContactsInChatRoomReport; // +0xe0
    UIView * _tableFooterView; // +0xe8
    NSString * nsCurrentSearchText; // +0xf0
    NSMutableDictionary * m_dicMultiOpenIMContactSelect; // +0xf8
    NSMutableDictionary * m_dicContactSelectFromGroup; // +0x100
    NSMutableArray * m_wcTimeLineBlackMemListBlock; // +0x108
    NSMutableArray * m_wcTimeLineBlackMemListHide; // +0x110
    NSString * m_historyUploadTaskId; // +0x118
    NSArray * m_selectedMsgList; // +0x120
    ChatRoomHistoryShareStat * m_roomHistoryStat; // +0x128
    double m_baseBottomBarHeight; // +0x130
    double m_keyboardHeight; // +0x138
    NSMutableArray * m_hadSeleteContactBeforSearch; // +0x140
    NSMutableDictionary * m_dicMemberContactFromImportGroup; // +0x148
    WCSearchBar * m_newSearchBar; // +0x150
    BOOL m_updatingView; // +0x158
    BOOL m_needToFixPanelViewLayout; // +0x159
    BOOL m_hadFirstLoadView; // +0x15a
    ContactSelectDropDownHalfScreenView * m_contactSelectDropDownView; // +0x160
    UIView * m_searchResultHeaderView; // +0x168
    BOOL _m_bShowBlackListBlockFromTL; // +0x170
    BOOL _m_bShowBlackListHideFromTL; // +0x171
    BOOL _m_bKeepCurViewAfterSelect; // +0x172
    BOOL _m_onlyChatRoom; // +0x173
    BOOL _m_bShowSelectFromGroup; // +0x174
    BOOL _enableTagSelectMemberCountLimit; // +0x175
    BOOL _m_hideFavourContact; // +0x176
    BOOL _hideSelfContact; // +0x177
    BOOL _m_onlyImportChatRoom; // +0x178
    BOOL _m_bSecondaryPage; // +0x179
    BOOL _m_isHiddenSearchShowAllTags; // +0x17a
    BOOL _m_bSearchSnsContact; // +0x17b
    BOOL _useNewSearchControllerAndBottomBar; // +0x17c
    BOOL _isInPageSheetMode; // +0x17d
    BOOL _useNewSearchBarInChatRoom; // +0x17e
    BOOL _enableSearchPanelLayoutAdaptation; // +0x17f
    BOOL _isRemovingMember; // +0x180
    BOOL _embeddedInContainer; // +0x181
    BOOL _bOldHistoryMsgUploadSucc; // +0x182
    BOOL _bNewHistoryMsgUploadFinish; // +0x183
    BOOL _bShouldDelayUpdatePanelBtnAndToolViewSelectedContacts; // +0x184
    BOOL _isInlineSearching; // +0x185
    BOOL _ifExtendPanel; // +0x186
    BOOL _toolViewInSearchTransition; // +0x187
    BOOL _toolViewWaitingForTransitionCompletion; // +0x188
    unsigned int _reportBizInChatRoomEnterType; // +0x18c
    unsigned int _pushPageSheetMsgControllerAppearType; // +0x190
    unsigned int _pushPageSheetMsgControllerSelectGroupMemberCount; // +0x194
    long long m_rightBarButtonSelectedStyle; // +0x198
    NSString * _existContactSelectToast; // +0x1a0
    NSDictionary * _m_dicDisabledContact; // +0x1a8
    unsigned long long _searchReportScene; // +0x1b0
    unsigned long long _m_scene; // +0x1b8
    NSString * _customSubTitle; // +0x1c0
    NSString * _overLimitToast; // +0x1c8
    NSString * _overLimitAlert; // +0x1d0
    NSString * _m_presetsQuery; // +0x1d8
    WCColorProxy * _colorProxy; // +0x1e0
    NSString * _m_selectedUsername; // +0x1e8
    NSString * _m_viewcontrllerTitle; // +0x1f0
    NSString * _m_rightBarButtonTitle; // +0x1f8
    NSString * _headerBarText; // +0x200
    UIView * _customContactListFooterView; // +0x208
    NSString * _noResultTipText; // +0x210
    unsigned long long _reportBizType; // +0x218
    id /* block */ _selectedContactsDidChangeBlock; // +0x220
    UIView * _headerBarView; // +0x228
    UIView * _mainContainerView; // +0x230
    SelectOpenIMContactsViewController * _selectOpenIMContactsViewController; // +0x238
    GroupSelectContactsViewController * _groupSelectContactsViewController; // +0x240
    WCSearchBar * _searchBar; // +0x248
    ContactsSearchController * _searchController; // +0x250
    NSMutableArray * _searchControllerSelectedContacts; // +0x258
    MMTableView * _inlineSearchResultTableView; // +0x260
    NSArray * _inlineSearchResults; // +0x268
    NSArray * _inlineSearchSectionKeys; // +0x270
    NSDictionary * _inlineSearchSectionResults; // +0x278
    NSDictionary * _inlineSearchSectionTitles; // +0x280
    ContactsSelectionPreviewViewController * _selectionPreviewViewController; // +0x288
    MMPageSheetAdapter * _pageSheetAdapter; // +0x290
    NSDictionary * _selectionSearchReportSectionUsernames; // +0x298
    NSString * _reportSessionId; // +0x2a0
    long long _bottomPanelOmitCount; // +0x2a8
    long long _halfPanelOmitCnt; // +0x2b0
    NSMutableArray * _selectionOperations; // +0x2b8
    MultiSelectContactsSelectionOperation * _contactSelectViewSelectionOperation; // +0x2c0
    RecommendAlreadyHadGroupPageSheetView * _alreadyHadGroupPageSheetView; // +0x2c8
    RecommendAlreadyHadGroupListViewController * _alreadyHadGroupListViewController; // +0x2d0
    NSString * _pushPageSheetMsgControllerSelectGroupUserName; // +0x2d8
    UIColor * _toolViewBackgroundColorBeforeSearchTransition; // +0x2e0
    unsigned long long _toolViewSearchTransitionGeneration; // +0x2e8
}
- (void)setTitleInPageSheetModeIfNeeded:(id)arg1;
- (void)setSubTitleInPageSheetModeIfNeeded:(id)arg1;
- (void)initLeftBarItemInPageSheetModeIfNeeded:(BOOL)arg1;
- (void)initRightBarItemInPageSheetModeIfNeeded;
- (void)updateMultiSelectRightBarItemInPageSheetModeIfNeeded;
- (void)updateRightBarItemEnabledInPageSheetModeIfNeeded:(BOOL)arg1;
- (void)setPageSheetAdapter:(id)arg1;
- (id)pageSheetAdapter;
- (double)getContentViewYInPageSheetMode;
- (double)getVisibleHeight;
- (void)onCancelInPageSheetMode:(id)arg1;
- (void)onDoneInPageSheetMode:(id)arg1;
- (void)prepareToolViewForSearchTransitionWithViewController:(id)arg1;
- (void)restoreToolViewBackgroundAfterSearchTransition:(unsigned long long)arg1;
- (void)heroWillStartAnimatingToViewController:(id)arg1;
- (void)heroWillStartAnimatingFromViewController:(id)arg1;
- (void)heroDidEndTransition;
- (void)heroDidCancelTransition;
- (unsigned int)getMsgPageSheetMoreOptionMask;
- (void)customPushOtherLogicController:(id)arg1 fromViewController:(id)arg2 animated:(BOOL)arg3 complete:(id /* block */)arg4;
- (void)pushPageSheetMsgControllerInRecommendAlreadyHadGroupCell:(id)arg1 groupIndex:(unsigned int)arg2 appearType:(unsigned int)arg3 groupListNum:(unsigned int)arg4;
- (void)onClickFullscreenSameRecommendChatRoom:(id)arg1;
- (id)getViewController;
- (void)clickContinuCreateGroupInAlreadyHadGroupPageSheetView;
- (void)pushPageSheeteMsgControllerInRecommendAlreadyHadGroupPageSheet:(id)arg1 tagetViewController:(id)arg2 groupIndex:(unsigned int)arg3;
- (void)pushPageSheetMsgControllerInRecommendAlreadyHadGroup:(id)arg1 groupIndex:(unsigned int)arg2;
- (BOOL)checkAllSameRecommendAlreadyHadGroup;
- (BOOL)CheckIsNewGroupCreateGroupSelectGroupNewStype;
- (BOOL)CheckIsShowCreateChatSectionHeadViewInCreateGroup;
- (void)showCheckAllSameRecommendAlreadyHadGroupPageSheetView:(id)arg1;
- (void)pushPageSheetMsgControllerForClickHadMMGroupList:(id)arg1 tagetViewController:(id)arg2;
- (void)pushPageSheetMsgController:(id)arg1 tagetViewController:(id)arg2 appearType:(unsigned int)arg3;
- (id)getCurrentTopViewController;
- (void)hidePanelViewKeyboard;
- (void)setupSelectionSearchReport;
- (void)beginSelectionSearchReportSessionWithView:(id)arg1;
- (void)endSelectionSearchReportSession;
- (void)clearSelectionSearchReportQuery;
- (void)onContactSearchReportSectionsUpdated:(id)arg1 sectionResults:(id)arg2;
- (void)reportSelectionSearchResultClickAtIndexPath:(id)arg1;
- (void)reportSelectionSearchResultClick:(id)arg1 sectionKey:(id)arg2 atIndex:(unsigned long long)arg3;
- (void)startDataReportSession;
- (void)recordContactSelectionWithType:(unsigned long long)arg1 selectionCount:(unsigned long long)arg2 selectionFriCount:(unsigned long long)arg3;
- (void)recordContactSelectViewSelection;
- (void)recordBottomPanelDeselectContact;
- (void)recordPreviewHalfScreenExposed;
- (void)recordPreviewHalfScreenDeselectContact;
- (void)endDataReportSessionWithDone:(BOOL)arg1 originCount:(unsigned long long)arg2 submitCount:(unsigned long long)arg3;
- (void)reportSearchOperationWithDone:(BOOL)arg1 objectType:(unsigned long long)arg2 selectedCount:(unsigned long long)arg3 querySplitCount:(unsigned long long)arg4 multiSelectedFlag:(BOOL)arg5;
- (void)doMultiSelectContactsInChatRoomReportWithExitScene:(unsigned int)arg1;
- (void)recordContactSearchSelectionWithContact:(id)arg1;
- (void)recordContactSelectionWithContact:(id)arg1;
- (void)recordDeleteBackWordsInSearchCnt;
- (void)recordClkClearAllButtonCnt;
- (void)recordContactSelectionWithType:(unsigned int)arg1 arrSelectionContact:(id)arg2;
- (void)initReportCreateGroup;
- (void)reportCreatGroupSameRecommendReportExposure:(unsigned int)arg1 groupListNum:(unsigned int)arg2;
- (void)reportCreatGroupSameRecommendReporSameAddNewGroup:(unsigned int)arg1;
- (void)reportCreatGroupSameRecommendReportClickHadMMGroupList:(id)arg1;
- (void)reportCreatGroupSameRecommendReportClick:(unsigned int)arg1 groupListNum:(unsigned int)arg2 nsUserName:(id)arg3 groupIndex:(unsigned int)arg4;
- (void)reportCreatGroupSameRecommend:(id)arg1;
- (id)init;
- (void)initData;
- (id)colorProxy;
- (long long)overrideUserInterfaceStyle;
- (id)getSearchPanelOrSearchController;
- (BOOL)shouldShowSelectContactViewInBottomToolView;
- (void)UpdateForChatGroup:(id)arg1;
- (void)onGroupSelectContactReturn:(id)arg1;
- (void)onGroupMultiSelectContactReturn:(id)arg1;
- (void)popGroupSelectContactsViewController:(id)arg1 animated:(BOOL)arg2;
- (BOOL)contactTagListViewController:(id)arg1 shouldSelectContactTag:(id)arg2;
- (void)contactTagListViewController:(id)arg1 didSelectContactTag:(id)arg2;
- (void)contactTagListViewControllerDidEndSearchWithDone:(BOOL)arg1 selectedCount:(unsigned long long)arg2 multiSelectedFlag:(BOOL)arg3;
- (void)historyGroupSelectViewController:(id)arg1 didSeletedContacts:(id)arg2;
- (void)handleSelectedHistoryGroupContacts:(id)arg1;
- (BOOL)isIgnore:(id)arg1;
- (BOOL)isExisted:(id)arg1;
- (void)updatePanelBtn;
- (unsigned int)getContactFromImportGroup:(id)arg1;
- (void)updatePanelBtnAndToolViewSelectedContacts;
- (void)updatePanelView:(id)arg1;
- (void)updateToolViewSelectedContacts;
- (void)updateMultiSelect:(id)arg1;
- (void)updateMultiSelect:(id)arg1 fromInputView:(BOOL)arg2;
- (void)updateMultiSelect:(id)arg1 fromRecommendSection:(BOOL)arg2 fromInputView:(BOOL)arg3 needReloadTableView:(BOOL)arg4;
- (BOOL)checkIsShowRecommendAlreadyHadGroup;
- (void)updateSelectContactDataChange;
- (id)getCurrentGroupSelectContactsViewController;
- (void)onCancel:(id)arg1;
- (void)actionCancel;
- (void)onDone:(id)arg1;
- (void)actionDone;
- (void)initTitleArea;
- (void)initTitleAreaInPageSheetMode;
- (id)createInitRightBarItem;
- (id)createInitLeftBarItem:(BOOL)arg1;
- (void)updateRightBarItemEnabled:(BOOL)arg1;
- (BOOL)checkUseNewSearchBarInChatRoom;
- (void)initContactSelectDropDownView;
- (void)handleViewDidLayoutSubviewsInNewSearchBar;
- (void)didClickImageAtIndexInNewSearchBar;
- (id)getSearchResultHeaderView;
- (id)getSearchSectionHeaderMultiSelectContactButton;
- (void)onSearchSectionHeaderViewMultiSelectBtnChange;
- (BOOL)isMultiSelectInSearchSectionHeaderView;
- (void)updateMultiSelectPanelViewResultView;
- (void)resetSearchPanelViewAccessibilityInNewSearchBar;
- (void)onDropDownHalfScreenViewContactDidSelected:(id)arg1;
- (void)onDropDownHalfScreenViewContactDidHide:(id)arg1;
- (void)handleHalfScreenViewContactDidHideSearchMultiKey:(id)arg1;
- (void)onDropDownHalfScreenViewHiddenExpandView;
- (void)initHeaderBar;
- (void)updateHeaderBar;
- (double)getHeaderBarViewHeight;
- (double)getVisibleHeightExcludeHeaderBar;
- (void)initBottomArea;
- (void)fireSmartGroupLogic;
- (void)fireSmartGroup;
- (void)onNavigationBarBackgroundColorChange;
- (BOOL)showNavigationBarSepLine;
- (void)initView;
- (long long)maxCountSearchPanelShow;
- (void)alignPanelViewToNewSearchBarView;
- (void)onUpdateEmptyViewHidden:(BOOL)arg1;
- (void)viewDidLoad;
- (void)updateSelectedHeadImgView;
- (void)removeSelectedHeadImgView:(id)arg1;
- (void)viewWillBePushOrPresent:(BOOL)arg1;
- (void)viewDidBePushOrPresent:(BOOL)arg1;
- (void)viewDidBePopedOrDismissed:(BOOL)arg1;
- (void)viewDidPopOrDismiss:(BOOL)arg1;
- (void)viewDidLayoutSubviews;
- (void)willAnimateRotationToInterfaceOrientation:(long long)arg1 duration:(double)arg2;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)dealloc;
- (void)updateMultiSelectView;
- (id)getContactSelectView;
- (double)getContentViewY;
- (void)resetSelectContactViewAndHistoryButton;
- (void)updateToolViewAnimatedWithToolViewHeight:(double)arg1 viewTop:(double)arg2 subViewTop:(double)arg3;
- (void)updateToolViewWithToolViewHeight:(double)arg1 viewTop:(double)arg2 subViewTop:(double)arg3;
- (Class)getContactSelectViewClass;
- (void)modifySearchController:(id)arg1;
- (id)getPageSheetAdapter;
- (double)heightForPushedPageSheet;
- (double)getSearchPanelViewHeight;
- (double)getSearchPanelHeadImagesize;
- (double)getSearchPanelInputViewHeight;
- (double)getSearchPanelCellSize;
- (id)navigationBarBackgroundColor;
- (BOOL)navigationBarBlurEffect;
- (long long)preferredStatusBarStyle;
- (unsigned long long)getTotalSelectCount;
- (unsigned long long)getTotalSelectCountInSearchController;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)onContactSelectSearchSections:(id)arg1 sectionTitles:(id)arg2 sectionResults:(id)arg3;
- (void)onContactUpdatePickDataSection:(long long)arg1 added:(BOOL)arg2 deleted:(BOOL)arg3 sections:(id)arg4 sectionTitles:(id)arg5 sectionResults:(id)arg6;
- (void)onSelectHistoryGroup;
- (void)openChatRoomlistHalfScreen;
- (void)onSelectContactTag;
- (void)onSelectWowBlackListHide;
- (void)selectWowBlackListHide;
- (void)onSelectWowBlackListBlock;
- (void)selectWowBlackListBlock;
- (void)importWCTimeLineBlackList:(id)arg1 selectionType:(unsigned long long)arg2;
- (void)onSelectOpenIMGroup;
- (void)openSelectOpenIMHalfScreenWithConfigBlock:(id /* block */)arg1;
- (void)onSelectRadarCreateRoom;
- (void)onSelectContactFromGroup;
- (BOOL)onFilterContactCandidate:(id)arg1;
- (BOOL)hideFavourContactCandidate;
- (BOOL)getUseMultiSelectContactsNewStyle;
- (void)resetTokenPickLogic;
- (BOOL)isSearchMultiKey;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2 sesseionType:(unsigned int)arg3;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2 sesseionType:(unsigned int)arg3;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2;
- (void)onCheckContactAsynSearchAllSameGroupChanged:(id)arg1;
- (id)loadNewSearchPanelViewWithFrame:(CGRect)arg1 andContentView:(id)arg2 andAtContentViewYPos:(double)arg3 andCellSize:(double)arg4 andMaxShowCount:(double)arg5 andColorProxy:(id)arg6;
- (id)getMainContainerView;
- (id)makeFiterContactToTagSearchView:(id)arg1;
- (id)cellForSearchViewTable:(id)arg1 index:(id)arg2;
- (double)cellSeparatorLeftInsetForSearchViewTable:(id)arg1;
- (double)heightForSearchViewTable:(id)arg1;
- (void)onContactSearchResultWillSelectAtIndexPath:(id)arg1;
- (void)didSearchViewTableSelect:(id)arg1;
- (void)didSearchPanelSelectContact:(id)arg1 indexPath:(id)arg2;
- (void)didSearchControllerSelectContact:(id)arg1 indexPath:(id)arg2;
- (void)onContactSearchControllerDidFinishMultiSelect;
- (void)onContactSearchControllerDidSwitchMultiSelectMode:(BOOL)arg1;
- (void)onContactSearchControllerDidCancelItemClick;
- (double)heightForPanelResultFooterInSection:(long long)arg1;
- (id)viewForPanelResultFooterInSection:(long long)arg1;
- (void)showExistContactTip:(id)arg1;
- (void)doTagSearch:(id)arg1 arrContacts:(id)arg2;
- (BOOL)onShouldSelectContact:(id)arg1;
- (BOOL)onShouldSelectContact:(id)arg1 originSelectCount:(unsigned long long)arg2;
- (void)onSelectContact:(id)arg1;
- (void)onViewContact:(id)arg1;
- (void)onCancelSelectContact;
- (void)onSelectSearchSnsContact:(id)arg1;
- (void)onSelectNormalContact:(id)arg1;
- (void)onSelectRecommendGroup:(id)arg1;
- (void)onSelectClickMoreRecommendAlreadyHadGroup:(id)arg1 searchMatchTip:(id)arg2 dicSearchMatchTip:(id)arg3 appearType:(unsigned int)arg4;
- (id)onGetSortedMultiSelectUsrs;
- (void)onExistContactDidSelected:(id)arg1;
- (BOOL)isContactSelectPanelViewSearching;
- (void)onNotifyWillDoAsyncRecommend:(id)arg1;
- (id)getSafeSearchViewController;
- (void)onNotifyPanelViewResignFirstReponder;
- (BOOL)onPanelViewIsExistContact:(id)arg1;
- (void)onPanelViewExistContactDidSelected:(id)arg1;
- (void)onPanelViewTableViewHidden:(BOOL)arg1;
- (void)onClearSearchInAlwaysShowSearchTable;
- (BOOL)isCanMultiSelectInDidSelectRow;
- (BOOL)isCanSupportOnTouchesEndedRemoveToken;
- (id)onGetMultiSelectUsrs;
- (void)onSearchControllerViewDidLoad;
- (void)onContactSearchControllerDidBeginEditing:(id)arg1;
- (void)onContactSearchControllerDidEndSearch:(id)arg1;
- (void)onContactSearchPanelDidEndSearch;
- (void)onContactSearchPanelDidClearQuery;
- (BOOL)onShouldSelectContactInSearchController:(id)arg1;
- (id)getSearchText;
- (id)cellForSelectionPreviewViewTable:(id)arg1 contact:(id)arg2;
- (double)heightForSelectionPreviewViewTable;
- (void)didSelectionPreviewViewTableSelectContact:(id)arg1;
- (void)onSelectionPreviewDone;
- (void)onSelectionPreviewViewControllerDidSelectAll;
- (void)onSelectionPreviewViewControllerDidDeselectAll;
- (BOOL)isSelectionPreviewAllSelected;
- (void)pageSheetWillClose:(id)arg1 isManualTrigger:(BOOL)arg2;
- (void)didClickImageAtIndex:(unsigned int)arg1 withKey:(id)arg2;
- (void)didDeleteLastWithKey:(id)arg1;
- (void)searchTextFieldDidBeginEditing;
- (void)searchTextFieldWillClearText;
- (void)doSearch:(id)arg1 Pre:(BOOL)arg2;
- (void)cancelSearch;
- (void)onPanelViewAsyncGetRecommends:(id)arg1;
- (void)onShowSearchContactTagViews;
- (BOOL)onShouldTagSelectContact:(id)arg1 withDicMultiSelect:(id)arg2 andDicExistContact:(id)arg3;
- (void)onSelectDoneWithContacts:(id)arg1;
- (BOOL)onShouldSelectOpenIMContact:(id)arg1;
- (void)onSelectOpenIMContactReturn:(id)arg1;
- (void)onSelectOpenIMDidEndSearchWithDone:(BOOL)arg1 selectedCount:(unsigned long long)arg2 multiSelectedFlag:(BOOL)arg3;
- (void)popSelectOpenIMContactsVC:(id)arg1 animated:(BOOL)arg2;
- (void)onMultiSelectContactReturnForSns:(id)arg1;
- (void)onMultiSelectContactCancelForSns;
- (BOOL)shouldShowTextState;
- (void)openMessageContentView:(id)arg1;
- (id)getRoomHistoryStat;
- (void)onCreateChatRoom:(id)arg1;
- (void)onSelectCancel;
- (void)reportRecommendInfo:(int)arg1;
- (long long)findUsr:(id)arg1 inContactArray:(id)arg2;
- (id)getSessionContact;
- (BOOL)canSelectMsgHistory;
- (BOOL)shouldUseBottomToolView;
- (void)viewSessionHistory;
- (void)uploadMsgList:(id)arg1;
- (id)generateTaskIdForMsgList:(id)arg1;
- (BOOL)preAsyncUploadHistory;
- (void)onFailToUploadHistory:(id)arg1;
- (void)onHistoryUploadFinish:(id)arg1 uploadInfo:(id)arg2 errMsg:(id)arg3;
- (void)onHistoryUploadProgressChanged:(id)arg1 total:(unsigned long long)arg2 remain:(unsigned long long)arg3;
- (void)onNewHistoryUploadFinish:(id)arg1 uploadInfo:(id)arg2;
- (BOOL)hasFocusedSearchInput;
- (void)resetToolViewPositionIfNeeded;
- (void)keyboardWillShow:(id)arg1;
- (void)keyboardWillHide:(id)arg1;
- (void)onKeyboardNotification:(id)arg1;
- (void)registerYReportSdk;
- (id)getContactsFromGroupContact:(id)arg1;
- (void)appendContact:(id)arg1 intoSet:(id)arg2;
- (id)genHadSelectContactSet;
- (BOOL)canSelectContactWithoutMemberCountLimit:(id)arg1;
- (BOOL)canSelectContactTagWithoutMemberCountLimit:(id)arg1 selectedTag:(id)arg2;
- (BOOL)checkNewTokenPickSearch;
- (void)reloadContactList;
- (void)onInlineContactSearchTextFieldDidBeginEditing:(id)arg1;
- (void)initInlineSearchResultTableView;
- (void)showInlineContactSearchResults;
- (void)hideInlineContactSearchResults;
- (void)onInlineContactSearchTextFieldChanged:(id)arg1;
- (void)mmInputBoxTextChanged:(id)arg1 text:(id)arg2;
- (void)mmInputBoxClear;
- (long long)inlineSearchNumberOfSections;
- (id)inlineSearchSectionKeyAtIndex:(long long)arg1;
- (id)inlineSearchResultsAtSection:(long long)arg1;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (id)m_delegate;
- (void)setM_delegate:(id)arg1;
- (id)m_dicExistContact;
- (void)setM_dicExistContact:(id)arg1;
- (id)m_dicIgnoreContact;
- (void)setM_dicIgnoreContact:(id)arg1;
- (BOOL)m_bShowHistoryGroup;
- (void)setM_bShowHistoryGroup:(BOOL)arg1;
- (BOOL)m_bShowContactTag;
- (void)setM_bShowContactTag:(BOOL)arg1;
- (BOOL)m_bShowRadarCreateRoom;
- (void)setM_bShowRadarCreateRoom:(BOOL)arg1;
- (unsigned int)m_uiGroupScene;
- (void)setM_uiGroupScene:(unsigned int)arg1;
- (id)m_panelBtn;
- (void)setM_panelBtn:(id)arg1;
- (id)m_panelBtnItem;
- (void)setM_panelBtnItem:(id)arg1;
- (unsigned long long)m_memberCountLimit;
- (void)setM_memberCountLimit:(unsigned long long)arg1;
- (id)m_dicMultiSelect;
- (void)setM_dicMultiSelect:(id)arg1;
- (unsigned long long)m_commonSearchScene;
- (void)setM_commonSearchScene:(unsigned long long)arg1;
- (long long)m_rightBarButtonSelectedStyle;
- (void)setM_rightBarButtonSelectedStyle:(long long)arg1;
- (id)existContactSelectToast;
- (void)setExistContactSelectToast:(id)arg1;
- (id)m_dicDisabledContact;
- (void)setM_dicDisabledContact:(id)arg1;
- (BOOL)m_bShowBlackListBlockFromTL;
- (void)setM_bShowBlackListBlockFromTL:(BOOL)arg1;
- (BOOL)m_bShowBlackListHideFromTL;
- (void)setM_bShowBlackListHideFromTL:(BOOL)arg1;
- (BOOL)m_bKeepCurViewAfterSelect;
- (void)setM_bKeepCurViewAfterSelect:(BOOL)arg1;
- (BOOL)m_onlyChatRoom;
- (void)setM_onlyChatRoom:(BOOL)arg1;
- (BOOL)m_bShowSelectFromGroup;
- (void)setM_bShowSelectFromGroup:(BOOL)arg1;
- (BOOL)enableTagSelectMemberCountLimit;
- (void)setEnableTagSelectMemberCountLimit:(BOOL)arg1;
- (unsigned long long)searchReportScene;
- (void)setSearchReportScene:(unsigned long long)arg1;
- (unsigned long long)m_scene;
- (void)setM_scene:(unsigned long long)arg1;
- (BOOL)m_hideFavourContact;
- (void)setM_hideFavourContact:(BOOL)arg1;
- (id)customSubTitle;
- (void)setCustomSubTitle:(id)arg1;
- (id)overLimitToast;
- (void)setOverLimitToast:(id)arg1;
- (id)overLimitAlert;
- (void)setOverLimitAlert:(id)arg1;
- (BOOL)hideSelfContact;
- (void)setHideSelfContact:(BOOL)arg1;
- (BOOL)m_onlyImportChatRoom;
- (void)setM_onlyImportChatRoom:(BOOL)arg1;
- (BOOL)m_bSecondaryPage;
- (void)setM_bSecondaryPage:(BOOL)arg1;
- (BOOL)m_isHiddenSearchShowAllTags;
- (void)setM_isHiddenSearchShowAllTags:(BOOL)arg1;
- (id)m_presetsQuery;
- (void)setM_presetsQuery:(id)arg1;
- (void)setColorProxy:(id)arg1;
- (BOOL)m_bSearchSnsContact;
- (void)setM_bSearchSnsContact:(BOOL)arg1;
- (id)m_selectedUsername;
- (void)setM_selectedUsername:(id)arg1;
- (id)m_viewcontrllerTitle;
- (void)setM_viewcontrllerTitle:(id)arg1;
- (id)m_rightBarButtonTitle;
- (void)setM_rightBarButtonTitle:(id)arg1;
- (id)headerBarText;
- (void)setHeaderBarText:(id)arg1;
- (id)customContactListFooterView;
- (void)setCustomContactListFooterView:(id)arg1;
- (id)noResultTipText;
- (void)setNoResultTipText:(id)arg1;
- (BOOL)useNewSearchControllerAndBottomBar;
- (void)setUseNewSearchControllerAndBottomBar:(BOOL)arg1;
- (BOOL)isInPageSheetMode;
- (void)setIsInPageSheetMode:(BOOL)arg1;
- (BOOL)useNewSearchBarInChatRoom;
- (void)setUseNewSearchBarInChatRoom:(BOOL)arg1;
- (BOOL)enableSearchPanelLayoutAdaptation;
- (void)setEnableSearchPanelLayoutAdaptation:(BOOL)arg1;
- (unsigned int)reportBizInChatRoomEnterType;
- (void)setReportBizInChatRoomEnterType:(unsigned int)arg1;
- (unsigned long long)reportBizType;
- (void)setReportBizType:(unsigned long long)arg1;
- (BOOL)isRemovingMember;
- (void)setIsRemovingMember:(BOOL)arg1;
- (BOOL)embeddedInContainer;
- (void)setEmbeddedInContainer:(BOOL)arg1;
- (id /* block */)selectedContactsDidChangeBlock;
- (void)setSelectedContactsDidChangeBlock:(id /* block */)arg1;
- (BOOL)bOldHistoryMsgUploadSucc;
- (void)setBOldHistoryMsgUploadSucc:(BOOL)arg1;
- (BOOL)bNewHistoryMsgUploadFinish;
- (void)setBNewHistoryMsgUploadFinish:(BOOL)arg1;
- (BOOL)bShouldDelayUpdatePanelBtnAndToolViewSelectedContacts;
- (void)setBShouldDelayUpdatePanelBtnAndToolViewSelectedContacts:(BOOL)arg1;
- (id)headerBarView;
- (void)setHeaderBarView:(id)arg1;
- (id)mainContainerView;
- (void)setMainContainerView:(id)arg1;
- (id)selectOpenIMContactsViewController;
- (void)setSelectOpenIMContactsViewController:(id)arg1;
- (id)groupSelectContactsViewController;
- (void)setGroupSelectContactsViewController:(id)arg1;
- (id)searchBar;
- (void)setSearchBar:(id)arg1;
- (id)searchController;
- (void)setSearchController:(id)arg1;
- (id)searchControllerSelectedContacts;
- (void)setSearchControllerSelectedContacts:(id)arg1;
- (id)inlineSearchResultTableView;
- (void)setInlineSearchResultTableView:(id)arg1;
- (id)inlineSearchResults;
- (void)setInlineSearchResults:(id)arg1;
- (id)inlineSearchSectionKeys;
- (void)setInlineSearchSectionKeys:(id)arg1;
- (id)inlineSearchSectionResults;
- (void)setInlineSearchSectionResults:(id)arg1;
- (id)inlineSearchSectionTitles;
- (void)setInlineSearchSectionTitles:(id)arg1;
- (BOOL)isInlineSearching;
- (void)setIsInlineSearching:(BOOL)arg1;
- (id)selectionPreviewViewController;
- (void)setSelectionPreviewViewController:(id)arg1;
- (id)pageSheetAdapter;
- (void)setPageSheetAdapter:(id)arg1;
- (id)selectionSearchReportSectionUsernames;
- (void)setSelectionSearchReportSectionUsernames:(id)arg1;
- (id)reportSessionId;
- (void)setReportSessionId:(id)arg1;
- (long long)bottomPanelOmitCount;
- (void)setBottomPanelOmitCount:(long long)arg1;
- (BOOL)ifExtendPanel;
- (void)setIfExtendPanel:(BOOL)arg1;
- (long long)halfPanelOmitCnt;
- (void)setHalfPanelOmitCnt:(long long)arg1;
- (id)selectionOperations;
- (void)setSelectionOperations:(id)arg1;
- (id)contactSelectViewSelectionOperation;
- (void)setContactSelectViewSelectionOperation:(id)arg1;
- (id)alreadyHadGroupPageSheetView;
- (void)setAlreadyHadGroupPageSheetView:(id)arg1;
- (id)alreadyHadGroupListViewController;
- (void)setAlreadyHadGroupListViewController:(id)arg1;
- (unsigned int)pushPageSheetMsgControllerAppearType;
- (void)setPushPageSheetMsgControllerAppearType:(unsigned int)arg1;
- (id)pushPageSheetMsgControllerSelectGroupUserName;
- (void)setPushPageSheetMsgControllerSelectGroupUserName:(id)arg1;
- (unsigned int)pushPageSheetMsgControllerSelectGroupMemberCount;
- (void)setPushPageSheetMsgControllerSelectGroupMemberCount:(unsigned int)arg1;
- (id)toolViewBackgroundColorBeforeSearchTransition;
- (void)setToolViewBackgroundColorBeforeSearchTransition:(id)arg1;
- (BOOL)toolViewInSearchTransition;
- (void)setToolViewInSearchTransition:(BOOL)arg1;
- (BOOL)toolViewWaitingForTransitionCompletion;
- (void)setToolViewWaitingForTransitionCompletion:(BOOL)arg1;
- (unsigned long long)toolViewSearchTransitionGeneration;
- (void)setToolViewSearchTransitionGeneration:(unsigned long long)arg1;
- (void).cxx_destruct;
@end
