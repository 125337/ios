@interface SessionSelectView : UIView <IFTSContactMgrExt, SessionSelectMessageSearchLogicDelegate, RecentForwardScrollViewDelegate, SessionSelectSectionFoldViewDelegate, ForwardToOtherAppPageSheetDelegate, UITableViewDelegate, UITableViewDataSource, WCSearchDelegate, WCDataSearchDelegate, ContactsDataLogicDelegate>
{
    long long m_iSessionType; // +0x8
    id <SessionSelectViewDelegate> m_delegate; // +0x10
    MMTableView * m_tableView; // +0x18
    NSMutableArray * m_arrContacts; // +0x20
    OrderedDictionary * m_dicMultiSelect; // +0x28
    NSMutableDictionary * m_contactSelectionRecords; // +0x30
    unsigned long long m_commonSearchScene; // +0x38
    FTSTopHitMgr * _ftsTopHitMgr; // +0x40
    NSString * _taskKey; // +0x48
    NSString * nsCurrentSearchText; // +0x50
    NSMutableArray * arrSearchResultOfContacts; // +0x58
    NSMutableArray * arrSearchResultOfGroup; // +0x60
    NSMutableArray * arrSearchResultOfTopHit; // +0x68
    NSMutableDictionary * dicSearchResult; // +0x70
    NSMutableArray * arrSectionKey; // +0x78
    NSMutableArray * m_specialCellList; // +0x80
    unsigned int _expandBitSet; // +0x88
    BOOL _chatRoomOnly; // +0x8c
    BOOL _bStartWithActiveSearch; // +0x8d
    NSString * _startActiveSearchText; // +0x90
    BOOL m_bShowEnterpriseChat; // +0x98
    BOOL m_bShowNewSession; // +0x99
    BOOL m_bShowSelectFromContactList; // +0x9a
    BOOL m_bFilterMyContact; // +0x9b
    BOOL m_bMultiSelect; // +0x9c
    BOOL m_bIgnoreChatRoom; // +0x9d
    BOOL m_onlySelectSingleWeixChat; // +0x9e
    BOOL m_showsChatroomMembers; // +0x9f
    BOOL _allowForwardToEnterpriseChat; // +0xa0
    BOOL _disableForwardToLocalWeWork; // +0xa1
    BOOL _m_alignsFilterRulesInSearchResult; // +0xa2
    BOOL _m_bIgnoreOpenIM; // +0xa3
    BOOL _m_ignoresChatBox; // +0xa4
    BOOL _m_ignoresFileTransfer; // +0xa5
    BOOL _m_ignoresChatBotTransfer; // +0xa6
    BOOL _m_recentForwardHidden; // +0xa7
    BOOL _m_searchPanelHidden; // +0xa8
    BOOL _m_disableSearchBar; // +0xa9
    BOOL _useNewSearchBar; // +0xaa
    BOOL _m_isSupportMultipleWordsSearchCreateGroup; // +0xab
    BOOL _isFoldTopSession; // +0xac
    BOOL _canFoldTopSession; // +0xad
    BOOL _hasModifiedSelectedContacts; // +0xae
    BOOL _contactSearchDidFinish; // +0xaf
    BOOL _executingContactSearchReportComplete; // +0xb0
    int _forwardOtherAppEntry; // +0xb4
    int _hasAnyForwardToOtherAppEntryState; // +0xb8
    NSDictionary * m_dicRequiredContact; // +0xc0
    unsigned long long m_specificLogicScene; // +0xc8
    WCDataSearcher * _searcher; // +0xd0
    NSDictionary * _m_disabledContacts; // +0xd8
    NSDictionary * _m_ignoredContacts; // +0xe0
    UIColor * _brandColor; // +0xe8
    WCSearchBar * _searchBarNew; // +0xf0
    NSMutableArray * _sectionTypes; // +0xf8
    NSMutableArray * _recentForwardContacts; // +0x100
    NSMutableDictionary * _multiSelectContactSectionDict; // +0x108
    long long _topSessionCount; // +0x110
    long long _selectedChatBoxSessionCount; // +0x118
    RecentForwardScrollView * _recentForwardScrollView; // +0x120
    UIView * _recentChatHeaderView; // +0x128
    UIView * _bizChatHeaderView; // +0x130
    UIView * _noRecentChatHeaderView; // +0x138
    UIView * _fakeRecentChatHeaderView; // +0x140
    MMUILabel * _noRecentChatLabel; // +0x148
    SessionSelectSectionFoldView * _sessionFoldView; // +0x150
    UIView * _footerBottomView; // +0x158
    double _foldViewFloatingOffset; // +0x160
    double _bizChatHeaderFloatingOffset; // +0x168
    double _recentChatHeaderFloatingOffset; // +0x170
    long long _selectedTopSessionCount; // +0x178
    SessionSelectMessageSearchLogic * _messageSearchLogic; // +0x180
    ForwardToSystemShareDirectHandler * _systemShareDirectHandler; // +0x188
    ContactSelectionSearchReportLogic * _cachedSearchReportLogic; // +0x190
    NSString * _executingSearchReportText; // +0x198
    NSSet * _normalSearchReportUsernames; // +0x1a0
}
- (id)searchReportLogic;
- (void)beginSelectionSearchReportSessionWithView:(id)arg1;
- (void)endSelectionSearchReportSession;
- (void)reportSelectionSearchTextChanged:(id)arg1;
- (void)prepareSelectionSearchReportForQuery:(id)arg1;
- (void)cancelSelectionSearchReport;
- (void)clearSelectionSearchReportNormalResults;
- (void)updateSelectionSearchReportNormalResultsWithTopHitItems:(id)arg1 contacts:(id)arg2 groups:(id)arg3;
- (void)updateSelectionSearchReportResultsWithTopHitItems:(id)arg1 contacts:(id)arg2 groups:(id)arg3 taskKey:(id)arg4 messageSearchLogic:(id)arg5 hasAdditionalVisibleResult:(BOOL)arg6;
- (void)reportSelectionSearchResultClick:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)setFrame:(CGRect)arg1;
- (void)dealloc;
- (void)cleartSearchQueryTest;
- (id)getMatchTipForUsername:(id)arg1;
- (void)multiSelectWithSearchResult:(id)arg1;
- (long long)indexForContact:(id)arg1 atSection:(long long)arg2;
- (long long)sectionTypeForSelectedContact:(id)arg1;
- (long long)getTopSessionCount;
- (unsigned long long)getRecentForwardOneLineCount;
- (id)getRecentForwardDeleteList;
- (void)setM_bMultiSelect:(BOOL)arg1;
- (id)m_contactSelectionRecords;
- (void)initData;
- (BOOL)filterContact:(id)arg1;
- (void)onContactsDataChange;
- (BOOL)onFilterContactCandidate:(id)arg1;
- (void)initSearchBar;
- (void)initRecentForwardView;
- (void)initView;
- (void)setupNoRecentChatView;
- (void)setupFakeRecentChatView;
- (id)initWithFrame:(CGRect)arg1 delegate:(id)arg2;
- (void)layoutSubviews;
- (BOOL)shouldDisplayChatRoomEntry;
- (id)parseSeperatedKeyword:(id)arg1;
- (void)chatRoomEntryConvertionKVReport:(BOOL)arg1;
- (void)idkeyWithResultClick:(BOOL)arg1 withCollapse:(BOOL)arg2;
- (BOOL)shouldShowChatroomMembers:(id)arg1;
- (void)initSectionTypes;
- (long long)sectionTypeFor:(long long)arg1;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (BOOL)isSelected:(id)arg1;
- (BOOL)hasSecondPage:(id)arg1;
- (void)makeCell:(id)arg1 contact:(id)arg2 HightlightedTop:(BOOL)arg3;
- (void)makeCell:(id)arg1 contact:(id)arg2 HightlightedTop:(BOOL)arg3 showMatchTip:(BOOL)arg4;
- (void)makeCell:(id)arg1 contact:(id)arg2 HightlightedTop:(BOOL)arg3 showMatchTip:(BOOL)arg4 descTip:(id)arg5;
- (void)makeCell:(id)arg1 contact:(id)arg2 HightlightedTop:(BOOL)arg3 showMatchTip:(BOOL)arg4 descTip:(id)arg5 multiSelect:(BOOL)arg6;
- (void)makeCell:(id)arg1 contact:(id)arg2;
- (void)makeMoreCell:(id)arg1 description:(id)arg2 image:(id)arg3;
- (void)makeChatRoomEntryCell:(id)arg1;
- (void)updateMultiSelectView;
- (void)makeCell:(id)arg1 ForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (BOOL)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (void)makeBizChatSectionHeaderView:(id)arg1;
- (BOOL)isOpenOtherAppEntry;
- (long long)forwardEntryType;
- (double)getRecentChatSectionHeaderHeight;
- (id)forwardButtonTitle;
- (BOOL)shouldShowWeWorkExposedButton;
- (id)weworkExposedButtonTitle;
- (id)generateWeWorkForwardButton;
- (void)handleForwardToWeWork;
- (BOOL)hasAnyForwardToOtherAppEntry;
- (BOOL)shouldShowForwardOtherAppButton;
- (id)generateForwardButton;
- (id)getForwardParams;
- (void)reportForwardContactClick:(id)arg1;
- (void)makeRecentChatSectionHeaderView:(id)arg1;
- (id)sectionIndexTitlesForTableView:(id)arg1;
- (long long)tableView:(id)arg1 sectionForSectionIndexTitle:(id)arg2 atIndex:(long long)arg3;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (BOOL)updateMultiSelect:(id)arg1 source:(long long)arg2;
- (void)switchSelect:(id)arg1 atIndexPath:(id)arg2 source:(long long)arg3;
- (void)handleSelectEnterpriseChat:(id)arg1;
- (void)handleSelectNewSession;
- (void)handleSelectFromContact;
- (void)handleForwardToOtherApp;
- (void)onSelect:(id)arg1;
- (id)getGroupDispName:(id)arg1;
- (BOOL)isSelectEnabledForContact:(id)arg1;
- (void)handleSelectIndexPath:(id)arg1 tableView:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)updateLineViewOfSectionHeaderView;
- (void)scrollViewDidScroll:(id)arg1;
- (void)tableView:(id)arg1 willDisplayHeaderView:(id)arg2 forSection:(long long)arg3;
- (void)wcsWillPresentSearch:(id)arg1;
- (void)wcsDidPresentSearch:(id)arg1;
- (id)cellForIndex:(id)arg1 ForSearchViewTable:(id)arg2;
- (double)heightForSearchViewTable:(id)arg1;
- (void)didSearchViewTableSelect:(id)arg1;
- (long long)numberOfSectionsForSearchViewTable:(id)arg1;
- (long long)numberOfRowsInSection:(long long)arg1 ForSearchViewTable:(id)arg2;
- (double)heightForHeaderInSection:(long long)arg1 ForSearchViewTable:(id)arg2;
- (id)viewForHeaderInSection:(long long)arg1 ForSearchViewTable:(id)arg2;
- (id)titleForHeaderInSection:(long long)arg1 ForSearchViewTable:(id)arg2;
- (double)heightForFooterInSection:(long long)arg1 ForSearchViewTable:(id)arg2;
- (id)viewForFooterInSection:(long long)arg1 ForSearchViewTable:(id)arg2;
- (void)SearchBarBecomeActive;
- (void)startByActiveSearch:(id)arg1;
- (void)doSearch:(id)arg1 Pre:(BOOL)arg2;
- (void)delaySearchImp:(id)arg1;
- (void)delaySearch:(id)arg1 slowMode:(BOOL)arg2;
- (void)cancelSearch;
- (void)resetCombinedSearchResultForNewQuery;
- (BOOL)shouldCollaseOrExpandSearchResultAtIndex:(long long)arg1;
- (BOOL)isMoreCellAtIndexPath:(id)arg1;
- (BOOL)isChatRoomEntryCellAtSection:(long long)arg1;
- (BOOL)isTopHitSection:(long long)arg1;
- (void)wcsSearchBar:(id)arg1 textDidChange:(id)arg2;
- (void)wcsDidDismissSearch:(id)arg1;
- (void)onFTSContactSearchFinish:(id)arg1;
- (void)FilterSearchResultOfNormalContacts:(id)arg1;
- (BOOL)hasBizChatSession;
- (id)sectionTitleForCurrentSessionView;
- (id)getTitleForBizChatSession;
- (long long)countOfRowForBizChatSession;
- (id)getContactInBizChatSessionAtRow:(unsigned long long)arg1;
- (BOOL)isSpecialSection:(unsigned long long)arg1;
- (BOOL)isBizChatSection:(unsigned long long)arg1;
- (BOOL)isRecentChatSections:(unsigned long long)arg1;
- (BOOL)isRecentChatTopSessionSection:(unsigned long long)arg1;
- (BOOL)isRecentChatNonTopSessionSection:(unsigned long long)arg1;
- (BOOL)isRecentForwardChatSection:(unsigned long long)arg1;
- (unsigned long long)indexOfRecentChatTopSessionSection;
- (long long)contactIndexForRecentChatRowAtIndexPath:(id)arg1;
- (id)contactForRecentChatRowAtIndexPath:(id)arg1;
- (BOOL)hasRecentForwardSessions;
- (id)titleForRecentForwardSection;
- (BOOL)canMultiSelectContact:(id)arg1;
- (void)clickRFItemCallBack:(id)arg1;
- (void)relayoutScrollSheet;
- (void)onSelectAtSectionFoldView;
- (BOOL)shouldShowFoldSectionTopSep;
- (void)updateSessionFoldView;
- (void)updateFoldViewFloatingOffset;
- (void)forwardToOtherAppPageSheet:(id)arg1 didSelectAppType:(long long)arg2;
- (void)forwardToOtherAppPageSheetDidShow:(id)arg1;
- (void)forwardToOtherAppPageSheetDidCloseWithoutSelection:(id)arg1;
- (void)sessionSelectMessageSearchLogicDidUpdate:(id)arg1;
- (BOOL)sessionSelectMessageSearchLogic:(id)arg1 shouldIncludeContact:(id)arg2;
- (void)mergeMessageSearchResultsAndNotify;
- (BOOL)m_bShowEnterpriseChat;
- (void)setM_bShowEnterpriseChat:(BOOL)arg1;
- (BOOL)m_bShowNewSession;
- (void)setM_bShowNewSession:(BOOL)arg1;
- (BOOL)m_bShowSelectFromContactList;
- (void)setM_bShowSelectFromContactList:(BOOL)arg1;
- (BOOL)m_bFilterMyContact;
- (void)setM_bFilterMyContact:(BOOL)arg1;
- (BOOL)m_bMultiSelect;
- (id)m_dicMultiSelect;
- (void)setM_dicMultiSelect:(id)arg1;
- (id)m_dicRequiredContact;
- (void)setM_dicRequiredContact:(id)arg1;
- (id)m_tableView;
- (void)setM_tableView:(id)arg1;
- (unsigned long long)m_commonSearchScene;
- (void)setM_commonSearchScene:(unsigned long long)arg1;
- (BOOL)m_bIgnoreChatRoom;
- (void)setM_bIgnoreChatRoom:(BOOL)arg1;
- (BOOL)m_onlySelectSingleWeixChat;
- (void)setM_onlySelectSingleWeixChat:(BOOL)arg1;
- (BOOL)m_showsChatroomMembers;
- (void)setM_showsChatroomMembers:(BOOL)arg1;
- (unsigned long long)m_specificLogicScene;
- (void)setM_specificLogicScene:(unsigned long long)arg1;
- (BOOL)allowForwardToEnterpriseChat;
- (void)setAllowForwardToEnterpriseChat:(BOOL)arg1;
- (BOOL)disableForwardToLocalWeWork;
- (void)setDisableForwardToLocalWeWork:(BOOL)arg1;
- (BOOL)m_alignsFilterRulesInSearchResult;
- (void)setM_alignsFilterRulesInSearchResult:(BOOL)arg1;
- (BOOL)m_bIgnoreOpenIM;
- (void)setM_bIgnoreOpenIM:(BOOL)arg1;
- (BOOL)m_ignoresChatBox;
- (void)setM_ignoresChatBox:(BOOL)arg1;
- (BOOL)m_ignoresFileTransfer;
- (void)setM_ignoresFileTransfer:(BOOL)arg1;
- (BOOL)m_ignoresChatBotTransfer;
- (void)setM_ignoresChatBotTransfer:(BOOL)arg1;
- (BOOL)m_recentForwardHidden;
- (void)setM_recentForwardHidden:(BOOL)arg1;
- (id)searcher;
- (void)setSearcher:(id)arg1;
- (id)m_disabledContacts;
- (void)setM_disabledContacts:(id)arg1;
- (id)m_ignoredContacts;
- (void)setM_ignoredContacts:(id)arg1;
- (BOOL)m_searchPanelHidden;
- (void)setM_searchPanelHidden:(BOOL)arg1;
- (BOOL)m_disableSearchBar;
- (void)setM_disableSearchBar:(BOOL)arg1;
- (id)brandColor;
- (void)setBrandColor:(id)arg1;
- (BOOL)useNewSearchBar;
- (void)setUseNewSearchBar:(BOOL)arg1;
- (id)searchBarNew;
- (void)setSearchBarNew:(id)arg1;
- (BOOL)m_isSupportMultipleWordsSearchCreateGroup;
- (void)setM_isSupportMultipleWordsSearchCreateGroup:(BOOL)arg1;
- (BOOL)isFoldTopSession;
- (void)setIsFoldTopSession:(BOOL)arg1;
- (BOOL)canFoldTopSession;
- (void)setCanFoldTopSession:(BOOL)arg1;
- (BOOL)hasModifiedSelectedContacts;
- (void)setHasModifiedSelectedContacts:(BOOL)arg1;
- (id)sectionTypes;
- (void)setSectionTypes:(id)arg1;
- (id)recentForwardContacts;
- (void)setRecentForwardContacts:(id)arg1;
- (id)multiSelectContactSectionDict;
- (void)setMultiSelectContactSectionDict:(id)arg1;
- (long long)topSessionCount;
- (void)setTopSessionCount:(long long)arg1;
- (long long)selectedChatBoxSessionCount;
- (void)setSelectedChatBoxSessionCount:(long long)arg1;
- (id)recentForwardScrollView;
- (void)setRecentForwardScrollView:(id)arg1;
- (id)recentChatHeaderView;
- (void)setRecentChatHeaderView:(id)arg1;
- (id)bizChatHeaderView;
- (void)setBizChatHeaderView:(id)arg1;
- (id)noRecentChatHeaderView;
- (void)setNoRecentChatHeaderView:(id)arg1;
- (id)fakeRecentChatHeaderView;
- (void)setFakeRecentChatHeaderView:(id)arg1;
- (id)noRecentChatLabel;
- (void)setNoRecentChatLabel:(id)arg1;
- (id)sessionFoldView;
- (void)setSessionFoldView:(id)arg1;
- (id)footerBottomView;
- (void)setFooterBottomView:(id)arg1;
- (double)foldViewFloatingOffset;
- (void)setFoldViewFloatingOffset:(double)arg1;
- (double)bizChatHeaderFloatingOffset;
- (void)setBizChatHeaderFloatingOffset:(double)arg1;
- (double)recentChatHeaderFloatingOffset;
- (void)setRecentChatHeaderFloatingOffset:(double)arg1;
- (long long)selectedTopSessionCount;
- (void)setSelectedTopSessionCount:(long long)arg1;
- (int)forwardOtherAppEntry;
- (void)setForwardOtherAppEntry:(int)arg1;
- (int)hasAnyForwardToOtherAppEntryState;
- (void)setHasAnyForwardToOtherAppEntryState:(int)arg1;
- (id)messageSearchLogic;
- (void)setMessageSearchLogic:(id)arg1;
- (BOOL)contactSearchDidFinish;
- (void)setContactSearchDidFinish:(BOOL)arg1;
- (id)systemShareDirectHandler;
- (void)setSystemShareDirectHandler:(id)arg1;
- (id)cachedSearchReportLogic;
- (void)setCachedSearchReportLogic:(id)arg1;
- (id)executingSearchReportText;
- (void)setExecutingSearchReportText:(id)arg1;
- (BOOL)executingContactSearchReportComplete;
- (void)setExecutingContactSearchReportComplete:(BOOL)arg1;
- (id)normalSearchReportUsernames;
- (void)setNormalSearchReportUsernames:(id)arg1;
- (void).cxx_destruct;
@end
