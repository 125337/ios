@interface MultiSelectContactsViewController : MMUILandscapeSheetViewController <SelectTagContactsViewControllerDelegate, ContactSelectViewDelegate, SelectOpenIMContactsViewControllerDelegate, ContactPickerViewDelegate, RoomContactSelectDelegate, IChatRoomHistoryUploadExt, WCSearchDelegate, WCDataSearchDelegate, WCMomentsContactTagListViewControllerDelegate, WCMomentsHistoryGroupSelectViewControllerDelegate, MultiSelectContactsViewControllerDelegate, ContactsSearchControllerDelegate, ContactsSelectionPreviewViewControllerDelegate, MMPageSheetAdapterDelegate, ContactSelectDropDownHalfScreenViewDelegate, MMDropDownHalfScreenViewDelegate, WCActionSheetDelegate, NewContactsSearchPanelViewDelegate, GroupSelectContactsViewControllerDelegate>
{
    id <MultiSelectContactsViewControllerDelegate> m_delegate; // +0x68
    NSDictionary * m_dicExistContact; // +0x70
    NSDictionary * m_dicIgnoreContact; // +0x78
    BOOL m_bShowHistoryGroup; // +0x80
    BOOL m_bShowContactTag; // +0x81
    BOOL m_bShowRadarCreateRoom; // +0x82
    NSMutableDictionary * m_dicMultiSelect; // +0x88
    NSIndexPath * m_indexPathToBeDeleted; // +0x90
    NewContactsSearchPanelView * m_panelView; // +0x98
    UIButton * m_panelBtn; // +0xa0
    UIBarButtonItem * m_panelBtnItem; // +0xa8
    unsigned int m_uiGroupScene; // +0xb0
    unsigned long long m_memberCountLimit; // +0xb8
    ContactSelectView * m_selectView; // +0xc0
    unsigned long long m_commonSearchScene; // +0xc8
    ContactSelectToolView * m_toolView; // +0xd0
    MultiSelectContactsInChatRoomReport * m_multiSelectContactsInChatRoomReport; // +0xd8
    UIView * _tableFooterView; // +0xe0
    NSString * nsCurrentSearchText; // +0xe8
    NSMutableDictionary * m_dicMultiOpenIMContactSelect; // +0xf0
    NSMutableDictionary * m_dicContactSelectFromGroup; // +0xf8
    NSMutableArray * m_wcTimeLineBlackMemListBlock; // +0x100
    NSMutableArray * m_wcTimeLineBlackMemListHide; // +0x108
    NSString * m_historyUploadTaskId; // +0x110
    NSArray * m_selectedMsgList; // +0x118
    ChatRoomHistoryShareStat * m_roomHistoryStat; // +0x120
    double m_baseBottomBarHeight; // +0x128
    double m_keyboardHeight; // +0x130
    NSMutableArray * m_hadSeleteContactBeforSearch; // +0x138
    NSMutableDictionary * m_dicMemberContactFromImportGroup; // +0x140
    WCSearchBar * m_newSearchBar; // +0x148
    BOOL m_updatingView; // +0x150
    BOOL m_needToFixPanelViewLayout; // +0x151
    BOOL m_hadFirstLoadView; // +0x152
    ContactSelectDropDownHalfScreenView * m_contactSelectDropDownView; // +0x158
    UIView * m_searchResultHeaderView; // +0x160
    BOOL _m_bShowBlackListBlockFromTL; // +0x168
    BOOL _m_bShowBlackListHideFromTL; // +0x169
    BOOL _m_bKeepCurViewAfterSelect; // +0x16a
    BOOL _m_onlyChatRoom; // +0x16b
    BOOL _m_hideFavourContact; // +0x16c
    BOOL _hideSelfContact; // +0x16d
    BOOL _m_onlyImportChatRoom; // +0x16e
    BOOL _m_bSecondaryPage; // +0x16f
    BOOL _m_isHiddenSearchShowAllTags; // +0x170
    BOOL _m_bSearchSnsContact; // +0x171
    BOOL _useNewSearchControllerAndBottomBar; // +0x172
    BOOL _isInPageSheetMode; // +0x173
    BOOL _useNewSearchBarInChatRoom; // +0x174
    BOOL _isRemovingMember; // +0x175
    BOOL _bOldHistoryMsgUploadSucc; // +0x176
    BOOL _bNewHistoryMsgUploadFinish; // +0x177
    BOOL _bShouldDelayUpdatePanelBtnAndToolViewSelectedContacts; // +0x178
    BOOL _ifExtendPanel; // +0x179
    unsigned int _reportBizInChatRoomEnterType; // +0x17c
    long long m_rightBarButtonSelectedStyle; // +0x180
    NSString * _existContactSelectToast; // +0x188
    NSDictionary * _m_dicDisabledContact; // +0x190
    unsigned long long _m_scene; // +0x198
    NSString * _customSubTitle; // +0x1a0
    NSString * _overLimitToast; // +0x1a8
    NSString * _overLimitAlert; // +0x1b0
    NSString * _m_presetsQuery; // +0x1b8
    WCColorProxy * _colorProxy; // +0x1c0
    NSString * _m_selectedUsername; // +0x1c8
    NSString * _m_viewcontrllerTitle; // +0x1d0
    NSString * _m_rightBarButtonTitle; // +0x1d8
    NSString * _headerBarText; // +0x1e0
    UIView * _customContactListFooterView; // +0x1e8
    NSString * _noResultTipText; // +0x1f0
    unsigned long long _reportBizType; // +0x1f8
    UIView * _headerBarView; // +0x200
    UIView * _mainContainerView; // +0x208
    SelectOpenIMContactsViewController * _selectOpenIMContactsViewController; // +0x210
    GroupSelectContactsViewController * _groupSelectContactsViewController; // +0x218
    WCSearchBar * _searchBar; // +0x220
    ContactsSearchController * _searchController; // +0x228
    NSMutableArray * _searchControllerSelectedContacts; // +0x230
    ContactsSelectionPreviewViewController * _selectionPreviewViewController; // +0x238
    MMPageSheetAdapter * _pageSheetAdapter; // +0x240
    NSString * _reportSessionId; // +0x248
    long long _bottomPanelOmitCount; // +0x250
    long long _halfPanelOmitCnt; // +0x258
    NSMutableArray * _selectionOperations; // +0x260
    MultiSelectContactsSelectionOperation * _contactSelectViewSelectionOperation; // +0x268
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
- (void)viewWillDisappear:(BOOL)arg1;
- (void)dealloc;
- (void)updateMultiSelectView;
- (id)getContactSelectView;
- (double)getContentViewY;
- (void)resetSelectContactViewAndHistoryButton;
- (void)updateToolViewAnimatedWithToolViewHeight:(double)arg1 viewTop:(double)arg2 subViewTop:(double)arg3;
- (void)updateToolViewWithToolViewHeight:(double)arg1 viewTop:(double)arg2 subViewTop:(double)arg3;
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
- (void)openSelectOpenIMHalfScreen;
- (void)onSelectRadarCreateRoom;
- (BOOL)onFilterContactCandidate:(id)arg1;
- (BOOL)hideFavourContactCandidate;
- (BOOL)getUseMultiSelectContactsNewStyle;
- (void)resetTokenPickLogic;
- (BOOL)isSearchMultiKey;
- (id)makeFiterContactToTagSearchView:(id)arg1;
- (id)cellForSearchViewTable:(id)arg1 index:(id)arg2;
- (double)cellSeparatorLeftInsetForSearchViewTable:(id)arg1;
- (double)heightForSearchViewTable:(id)arg1;
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
- (id)onGetSortedMultiSelectUsrs;
- (void)onExistContactDidSelected:(id)arg1;
- (BOOL)isContactSelectPanelViewSearching;
- (void)onNotifyWillDoAsyncRecommend:(id)arg1;
- (id)getSafeSearchViewController;
- (void)onNotifyPanelViewResignFirstReponder;
- (BOOL)onPanelViewIsExistContact:(id)arg1;
- (void)onPanelViewExistContactDidSelected:(id)arg1;
- (void)onPanelViewTableViewHidden:(BOOL)arg1;
- (BOOL)isCanMultiSelectInDidSelectRow;
- (BOOL)isCanSupportOnTouchesEndedRemoveToken;
- (id)onGetMultiSelectUsrs;
- (void)onSearchControllerViewDidLoad;
- (BOOL)onShouldSelectContactInSearchController:(id)arg1;
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
- (unsigned int)reportBizInChatRoomEnterType;
- (void)setReportBizInChatRoomEnterType:(unsigned int)arg1;
- (unsigned long long)reportBizType;
- (void)setReportBizType:(unsigned long long)arg1;
- (BOOL)isRemovingMember;
- (void)setIsRemovingMember:(BOOL)arg1;
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
- (id)selectionPreviewViewController;
- (void)setSelectionPreviewViewController:(id)arg1;
- (id)pageSheetAdapter;
- (void)setPageSheetAdapter:(id)arg1;
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
- (void).cxx_destruct;
@end

