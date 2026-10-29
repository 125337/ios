@interface SessionSelectController : MMUIViewController <SessionSelectViewDelegate, NewContactsSearchPanelViewDelegate, SelectTagContactsViewControllerDelegate, MultiSelectContactsViewControllerDelegate, ContactPickerViewDelegate, SelectSubContactViewControllerDelegate, ContactSelectorViewControllerDelegate, ContactSelectDropDownHalfScreenViewDelegate, MMDropDownHalfScreenViewDelegate, MMPageSheetAdapterDelegate, CreateChatLogicDelegate, MMUIViewControllerOverrideOrientationMaskProtocol>
{
    long long m_iSessionType; // +0x68
    id <SessionSelectControllerDelegate> m_delegate; // +0x70
    NSMutableArray * m_selectedContacts; // +0x78
    unsigned long long m_confirmType; // +0x80
    unsigned long long m_barTitleType; // +0x88
    CreateChatLogic * m_createChatLogic; // +0x90
    NSObject * _userData; // +0x98
    MMTipsViewController * selectAlertController; // +0xa0
    unsigned long long m_commonSearchScene; // +0xa8
    NewContactsSearchPanelView * m_panelView; // +0xb0
    BOOL m_bMultiSelect; // +0xb8
    UIEdgeInsets m_UIEdgeInsets; // +0xc0
    CContact * m_fastCreatedGroupContact; // +0xe0
    BOOL m_updatingView; // +0xe8
    BOOL m_needToFixPanelViewLayout; // +0xe9
    UIView * m_searchResultHeaderView; // +0xf0
    BOOL m_hadFirstLoadView; // +0xf8
    ContactSelectDropDownHalfScreenView * m_contactSelectDropDownView; // +0x100
    MultiSelectContactsInChatRoomReport * m_multiSelectContactsInChatRoomReport; // +0x108
    NSString * nsCurrentSearchText; // +0x110
    NSMutableArray * m_hadSeleteContactBeforSearch; // +0x118
    SessionSelectView * m_selectView; // +0x120
    BOOL m_bShowEnterpriseChat; // +0x128
    BOOL m_bShowNewSession; // +0x129
    BOOL m_bFilterMyContact; // +0x12a
    BOOL m_bAllowsMultiSelectEmpty; // +0x12b
    BOOL m_onlySelectSingleWeixChat; // +0x12c
    BOOL m_showsChatroomMembers; // +0x12d
    BOOL _bShowForwardToEnterpriseChat; // +0x12e
    BOOL _disableForwardToLocalWeWork; // +0x12f
    BOOL _m_alignsFilterRulesInSearchResult; // +0x130
    BOOL _m_bKeepCurViewAfterSelect; // +0x131
    BOOL _m_bShowMultiSelectRightBtn; // +0x132
    BOOL _m_hidesMultiSelectedCount; // +0x133
    BOOL _m_showsMultiSelectedRatio; // +0x134
    BOOL _m_showsAlertMessageByFadingSubtitle; // +0x135
    BOOL _m_onlyChatRoom; // +0x136
    BOOL _m_bContainOpenIM; // +0x137
    BOOL _m_bIgnoreChatRoom; // +0x138
    BOOL _m_ignoresChatBox; // +0x139
    BOOL _m_ignoresFileTransfer; // +0x13a
    BOOL _m_bHasCreateNewSession; // +0x13b
    BOOL _m_recentForwardHidden; // +0x13c
    BOOL _m_showsChatroomFriendsOnly; // +0x13d
    BOOL _shouldInSearchStatus; // +0x13e
    BOOL _shouldSelfClose; // +0x13f
    BOOL _ignoreMaxSelectionLimit; // +0x140
    BOOL _disableSingleSelect; // +0x141
    BOOL _isInPageSheetMode; // +0x142
    BOOL _useNewSearchBar; // +0x143
    BOOL _isDismissingForClose; // +0x144
    NSDictionary * _m_ignoredContacts; // +0x148
    NSString * _currentChatName; // +0x150
    NSString * _customTitle; // +0x158
    NSString * _m_directSearchText; // +0x160
    UIColor * _brandColor; // +0x168
    long long _userInterfaceStyle; // +0x170
    unsigned long long _maxSelectionCount; // +0x178
    unsigned long long _overrideOrientationMask; // +0x180
    unsigned long long _m_specificLogicScene; // +0x188
    MultiSelectContactsViewController * _multiSelectContactsVC; // +0x190
}
- (void)setTitleInPageSheetModeIfNeeded:(id)arg1;
- (void)initBarItemInPageSheetModeIfNeeded;
- (void)updateMultiSelectLeftBtnInPageSheetModeIfNeeded;
- (void)updateMultiSelectRightBtnInPageSheetModeIfNeeded;
- (void)onSearchTextFieldEditStateChange:(BOOL)arg1;
- (void)setPageSheetAdapter:(id)arg1;
- (id)pageSheetAdapter;
- (double)getContentViewY;
- (double)getVisibleHeight;
- (void)onCancelInPageSheetMode:(id)arg1;
- (void)onShowMultiSelectInPageSheetMode:(id)arg1;
- (void)onMultiDoneInPageSheetMode;
- (void)onMultiCancelInPageSheetMode:(id)arg1;
- (void)pageSheetWillClose:(id)arg1 closeType:(long long)arg2;
- (void)pageSheetDidClose:(id)arg1 closeType:(long long)arg2;
- (id)init;
- (id)initWithSelectedContacts:(id)arg1;
- (void)initData;
- (void)dealloc;
- (long long)overrideUserInterfaceStyle;
- (unsigned long long)supportedInterfaceOrientations;
- (BOOL)showNavigationBarSepLine;
- (long long)indexForContact:(id)arg1 atSection:(long long)arg2;
- (long long)sectionTypeForSelectedContact:(id)arg1;
- (long long)getTopSessionCount;
- (unsigned long long)getRecentForwardOneLineCount;
- (id)getRecentForwardDeleteList;
- (id)getColorProxy;
- (id)contactSelectionRecords;
- (BOOL)onShouldFilterContact:(id)arg1;
- (void)clearSessionSearch;
- (BOOL)shouldInteractiveDismiss;
- (void)onInteractiveDismissComplete;
- (void)viewDidBePushOrPresent:(BOOL)arg1;
- (void)viewDidBePoped:(BOOL)arg1;
- (void)viewDidBePopedOrDismissed:(BOOL)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)onCancel:(id)arg1;
- (void)respondsToOnSelectSessionCancel;
- (void)onShowMultiSelect:(id)arg1;
- (void)setDisableSingleSelect:(BOOL)arg1;
- (void)initBarItem;
- (void)initTitle;
- (double)getSearchPanelViewHeight;
- (double)getSearchPanelHeadImagesize;
- (double)getSearchPanelInputViewHeight;
- (double)getSearchPanelCellSize;
- (void)initPanelView;
- (void)alignPanelViewToSearchBarView;
- (void)prepareHeadPanelViewAnimation;
- (void)finishHeadPanelViewAnimation;
- (void)updateView;
- (void)animateUpdateView;
- (void)initView;
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)callbackDelegate;
- (id)getSelectedContacts;
- (void)performCallback;
- (void)onSelect:(id)arg1;
- (id)getGroupDispName:(id)arg1;
- (void)cancelForwording;
- (void)confirmForword;
- (void)chatRoomEntryOperateKVReport:(BOOL)arg1;
- (void)showDirectSearchText;
- (id)getViewController;
- (void)OnSelectSession:(id)arg1 SelectView:(id)arg2;
- (void)OnSelectCreateRoomSelectView:(id)arg1;
- (void)onSelectAtChatBoxSession;
- (void)onSelectAtWWKFSession;
- (void)onSelectChatroomMembers:(id)arg1;
- (void)OnSelectForwardToEnterpriseChat:(id)arg1 appType:(long long)arg2;
- (id)createInitLeftBarItem;
- (id)createInitRightBarItem;
- (id)createMultiSelectLeftBarItem;
- (id)createMultiSelectRightBarItem;
- (void)beginMultiSelect;
- (void)cancelMultiSelect;
- (void)endMultiSelect;
- (void)onCreateChatContactReturn:(id)arg1;
- (void)HideSelectAlert;
- (BOOL)onSelectRecommendGroupContact:(id)arg1;
- (void)willAnimateRotationToInterfaceOrientation:(long long)arg1 duration:(double)arg2;
- (void)selectViewWillBeginDragging:(id)arg1;
- (BOOL)checkAndAllowNewSelect:(id)arg1;
- (BOOL)checkAndAllowSelectedContacts:(id)arg1;
- (void)alertForExceedingMaxSelectionCount;
- (BOOL)searchTextFieldShouldBeginEditing;
- (void)updatePanelView:(id)arg1;
- (void)didUpdatePanelViewAnimate:(id)arg1;
- (void)updateSelectViewSize;
- (void)updateMultiSelectLeftBtn;
- (void)updateMultiSelectRightBtn;
- (void)onMultiDone;
- (void)addMultiSelectContacts:(id)arg1 source:(long long)arg2;
- (void)replaceMultiSelectContacts:(id)arg1 source:(long long)arg2;
- (BOOL)checkUseNewSearchBar;
- (void)initContactSelectDropDownView;
- (void)alignPanelViewToNewSearchBarView;
- (void)updateMultiSelectPanelViewResultView;
- (void)didClickImageAtIndexInNewSearchBar;
- (id)getSearchResultHeaderView;
- (id)getSearchSectionHeaderMultiSelectContactButton;
- (void)onSearchSectionHeaderViewMultiSelectBtnChange;
- (BOOL)isMultiSelectInSearchSectionHeaderView;
- (void)doMultiSelectContactsInChatRoomReportWithExitScene:(unsigned int)arg1;
- (void)resetSelectViewContentInsetInNewSearchBar;
- (void)alignSelectViewTableViewToTopNewSearchBar;
- (void)recordContactSearchSelectionWithContact:(id)arg1;
- (void)resetSearchPanelViewAccessibilityInNewSearchBar;
- (void)recordContactSelectionWithContact:(id)arg1;
- (void)recordDeleteBackWordsInSearchCnt;
- (void)recordClkClearAllButtonCnt;
- (void)didClickImageAtIndex:(unsigned int)arg1 withKey:(id)arg2;
- (void)didDeleteLastWithKey:(id)arg1;
- (void)searchTextFieldDidBeginEditing;
- (void)searchTextFieldDidEndEditing;
- (void)doSearch:(id)arg1 Pre:(BOOL)arg2;
- (void)searchTextFieldWillClearText;
- (void)cancelSearch;
- (id)makeFiterContactToTagSearchView:(id)arg1;
- (void)doTagSearch:(id)arg1 arrContacts:(id)arg2;
- (id)cellForSearchViewTable:(id)arg1 index:(id)arg2;
- (double)cellSeparatorLeftInsetForSearchViewTable:(id)arg1;
- (double)heightForSearchViewTable:(id)arg1;
- (void)didSearchViewTableSelect:(id)arg1;
- (double)heightForPanelResultFooterInSection:(long long)arg1;
- (id)viewForPanelResultFooterInSection:(long long)arg1;
- (BOOL)isCanMultiSelectInDidSelectRow;
- (void)onPanelViewTableViewHidden:(BOOL)arg1;
- (double)recentForwardMarginForSelectView:(id)arg1 defaultMargin:(double)arg2;
- (void)onSessionSelectSearch:(id)arg1;
- (void)onSessionSelectSearchSessions:(id)arg1 sectionTitles:(id)arg2 sectionResults:(id)arg3;
- (id)onSessionSelectGetSearchString;
- (void)onMultiSelectContactReturnForSns:(id)arg1;
- (void)onMultiSelectContactCancelForSns;
- (BOOL)onShouldSelectContact:(id)arg1;
- (BOOL)shouldShowTextState;
- (void)OnSelectFromContactSelectView:(id)arg1;
- (BOOL)selectView:(id)arg1 shouldSelectContact:(id)arg2;
- (BOOL)showChatRoomOnly;
- (id)sectionTitleForCurrentSessionView;
- (id)sectionTitleForBizChatSessionView;
- (long long)numberOfRowInBizChatSessionView;
- (id)contactInBizChatSessionViewAtRow:(unsigned long long)arg1;
- (void)contactInBizChatSessionViewDidSelect:(id)arg1;
- (BOOL)isCurrentSession:(id)arg1;
- (void)onSelectDoneWithContacts:(id)arg1;
- (void)onMultiCancel:(id)arg1;
- (void)onSelectChatRoomWithArrKeywords:(id)arg1;
- (void)onCreateChatRoom:(id)arg1;
- (void)onSelectCancel;
- (void)showSubSessionSelection:(id)arg1 pageSheetProvider:(id)arg2;
- (void)didMultiSelectChatBoxContact:(id)arg1;
- (void)didUnMultiSelectChatBoxContact:(id)arg1;
- (void)didSelectChatBoxContact:(id)arg1;
- (BOOL)shouldShowChatroomMembers:(id)arg1;
- (void)selectChatroomMembers:(id)arg1;
- (void)onDropDownHalfScreenViewContactDidSelected:(id)arg1;
- (void)onDropDownHalfScreenViewContactDidHide:(id)arg1;
- (void)onDropDownHalfScreenViewHiddenExpandView;
- (BOOL)contactSelectorViewController:(id)arg1 canSelectContact:(id)arg2;
- (void)contactSelectorViewController:(id)arg1 didSelectContact:(id)arg2;
- (void)contactSelectorViewController:(id)arg1 didFinishMultiplySelectingContacts:(id)arg2;
- (void)contactSelectorViewControllerDidCancel:(id)arg1;
- (BOOL)m_bShowEnterpriseChat;
- (void)setM_bShowEnterpriseChat:(BOOL)arg1;
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
- (BOOL)m_bMultiSelect;
- (void)setM_bMultiSelect:(BOOL)arg1;
- (BOOL)m_bAllowsMultiSelectEmpty;
- (void)setM_bAllowsMultiSelectEmpty:(BOOL)arg1;
- (unsigned long long)m_commonSearchScene;
- (void)setM_commonSearchScene:(unsigned long long)arg1;
- (BOOL)m_onlySelectSingleWeixChat;
- (void)setM_onlySelectSingleWeixChat:(BOOL)arg1;
- (BOOL)m_showsChatroomMembers;
- (void)setM_showsChatroomMembers:(BOOL)arg1;
- (BOOL)bShowForwardToEnterpriseChat;
- (void)setBShowForwardToEnterpriseChat:(BOOL)arg1;
- (BOOL)disableForwardToLocalWeWork;
- (void)setDisableForwardToLocalWeWork:(BOOL)arg1;
- (BOOL)m_alignsFilterRulesInSearchResult;
- (void)setM_alignsFilterRulesInSearchResult:(BOOL)arg1;
- (BOOL)m_bKeepCurViewAfterSelect;
- (void)setM_bKeepCurViewAfterSelect:(BOOL)arg1;
- (BOOL)m_bShowMultiSelectRightBtn;
- (void)setM_bShowMultiSelectRightBtn:(BOOL)arg1;
- (BOOL)m_hidesMultiSelectedCount;
- (void)setM_hidesMultiSelectedCount:(BOOL)arg1;
- (BOOL)m_showsMultiSelectedRatio;
- (void)setM_showsMultiSelectedRatio:(BOOL)arg1;
- (BOOL)m_showsAlertMessageByFadingSubtitle;
- (void)setM_showsAlertMessageByFadingSubtitle:(BOOL)arg1;
- (BOOL)m_onlyChatRoom;
- (void)setM_onlyChatRoom:(BOOL)arg1;
- (BOOL)m_bContainOpenIM;
- (void)setM_bContainOpenIM:(BOOL)arg1;
- (BOOL)m_bIgnoreChatRoom;
- (void)setM_bIgnoreChatRoom:(BOOL)arg1;
- (BOOL)m_ignoresChatBox;
- (void)setM_ignoresChatBox:(BOOL)arg1;
- (BOOL)m_ignoresFileTransfer;
- (void)setM_ignoresFileTransfer:(BOOL)arg1;
- (BOOL)m_bHasCreateNewSession;
- (void)setM_bHasCreateNewSession:(BOOL)arg1;
- (BOOL)m_recentForwardHidden;
- (void)setM_recentForwardHidden:(BOOL)arg1;
- (BOOL)m_showsChatroomFriendsOnly;
- (void)setM_showsChatroomFriendsOnly:(BOOL)arg1;
- (id)m_ignoredContacts;
- (void)setM_ignoredContacts:(id)arg1;
- (id)currentChatName;
- (void)setCurrentChatName:(id)arg1;
- (id)customTitle;
- (void)setCustomTitle:(id)arg1;
- (id)userData;
- (void)setUserData:(id)arg1;
- (BOOL)shouldInSearchStatus;
- (void)setShouldInSearchStatus:(BOOL)arg1;
- (id)m_directSearchText;
- (void)setM_directSearchText:(id)arg1;
- (BOOL)shouldSelfClose;
- (void)setShouldSelfClose:(BOOL)arg1;
- (id)brandColor;
- (void)setBrandColor:(id)arg1;
- (long long)userInterfaceStyle;
- (void)setUserInterfaceStyle:(long long)arg1;
- (unsigned long long)maxSelectionCount;
- (void)setMaxSelectionCount:(unsigned long long)arg1;
- (BOOL)ignoreMaxSelectionLimit;
- (void)setIgnoreMaxSelectionLimit:(BOOL)arg1;
- (BOOL)disableSingleSelect;
- (BOOL)isInPageSheetMode;
- (void)setIsInPageSheetMode:(BOOL)arg1;
- (unsigned long long)overrideOrientationMask;
- (void)setOverrideOrientationMask:(unsigned long long)arg1;
- (BOOL)useNewSearchBar;
- (void)setUseNewSearchBar:(BOOL)arg1;
- (unsigned long long)m_specificLogicScene;
- (void)setM_specificLogicScene:(unsigned long long)arg1;
- (id)multiSelectContactsVC;
- (void)setMultiSelectContactsVC:(id)arg1;
- (BOOL)isDismissingForClose;
- (void)setIsDismissingForClose:(BOOL)arg1;
- (void).cxx_destruct;
@end

