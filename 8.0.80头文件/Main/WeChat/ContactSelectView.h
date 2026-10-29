@interface ContactSelectView : UIView <MMTableViewDelegate, ContactsSearchGroupDataLogicDelegate, MMTableViewIndexViewDelegate, WCSearchDelegate, WCDataSearchDelegate, UITableViewDelegate, UITableViewDataSource, WCActionSheetDelegate, ContactsDataLogicDelegate, VoIPRecentInviteScrollViewDelegate>
{
    id <ContactSelectViewDelegate> m_delegate; // +0x8
    MMTableView * m_tableView; // +0x10
    NSDictionary * m_dicExistContact; // +0x18
    BOOL m_bShowHistoryGroup; // +0x20
    BOOL m_bShowContactTag; // +0x21
    BOOL m_bShowRadarCreateRoom; // +0x22
    BOOL m_bMultiSelect; // +0x23
    BOOL m_bMakeTopCell; // +0x24
    NSMutableDictionary * m_dicMultiSelect; // +0x28
    ContactsDataLogic * m_contactsDataLogic; // +0x30
    ContactsSearchGroupDataLogic * m_contactsSearchGroupDataLogic; // +0x38
    unsigned int m_uiGroupScene; // +0x40
    unsigned int m_uiCommonSearchScene; // +0x44
    MMTableViewInfo * m_hadGroupTableViewInfo; // +0x48
    UIView * _tableFooterView; // +0x50
    NSString * nsCurrentSearchText; // +0x58
    WCDataSearcher * _searcher; // +0x60
    BOOL m_bShowOpenIMContactGroup; // +0x68
    unsigned long long m_selectedOpenIMContactNumber; // +0x70
    NSMutableArray * m_dicHistorySelectedGroupContact; // +0x78
    BOOL m_bShowRecommendContacts; // +0x80
    BOOL _isSearchingRecommends; // +0x81
    BOOL _lastResultHasRecommendGroups; // +0x82
    NSMutableDictionary * m_dicChatRoomMyFriendCount; // +0x88
    NSMutableArray * m_arrChatRoomSelectValue; // +0x90
    BOOL m_bSearchSnsContact; // +0x98
    BOOL m_bShowSelectFromGroup; // +0x99
    BOOL _m_bHideSearchBar; // +0x9a
    BOOL _m_bShowMomentStatus; // +0x9b
    BOOL _m_bShowBlackListBlockFromTL; // +0x9c
    BOOL _m_bShowBlackListHideFromTL; // +0x9d
    BOOL _m_bShowContactRecommend; // +0x9e
    BOOL _bDragToDismissKeyboard; // +0x9f
    BOOL _m_onlyImportChatRoom; // +0xa0
    BOOL _showRecentInvite; // +0xa1
    BOOL _m_bUseSystemIndexBar; // +0xa2
    BOOL _useNewSearchBar; // +0xa3
    BOOL _isCheckAllSameGroups; // +0xa4
    NSDictionary * _m_dicDisabledContact; // +0xa8
    NSMutableDictionary * _m_dicMultiOpenIMContactSelect; // +0xb0
    NSMutableArray * _multiSelectOrderKey; // +0xb8
    CContact * _belongingContact; // +0xc0
    WCColorProxy * _colorProxy; // +0xc8
    NSString * _m_selectedUsername; // +0xd0
    NSMutableDictionary * _dicRecommendSelectHelper; // +0xd8
    NSMutableDictionary * _dicUsrSourceHelper; // +0xe0
    VoIPRecentInviteScrollView * _recentInviteScrollView; // +0xe8
    UIView * _customFooterView; // +0xf0
    UILabel * _emptyLabel; // +0xf8
    NSArray * _searchReportSectionKeys; // +0x100
    NSDictionary * _searchReportSectionResults; // +0x108
}
- (void)reportCreatGroupSameRecommendReportExposure:(unsigned int)arg1 groupListNum:(unsigned int)arg2;
- (void)beginSelectionSearchReportSessionWithView:(id)arg1;
- (void)endSelectionSearchReportSession;
- (void)clearSelectionSearchReportResults;
- (void)updateSearchReportWithSectionKeys:(id)arg1 sectionResults:(id)arg2;
- (void)saveSelectionSearchReportSnapshotWithSectionKeys:(id)arg1 sectionResults:(id)arg2;
- (void)reportSelectionSearchResults;
- (void)reportSelectionSearchResultClick:(id)arg1 atRow:(unsigned long long)arg2 results:(id)arg3;
- (BOOL)checkIsOpenRecommendAlreadyHadGroupSwitch;
- (BOOL)checkShowHistoryGroupCell;
- (BOOL)checkIsShowRecommendGroup;
- (BOOL)checkIsShowRecommendAlreadyHadGroup;
- (BOOL)checkIsSearchRecommendGroup;
- (void)updateSelectContactDataChangeForRecommendAlreadyHadGroup:(id)arg1;
- (void)onRecommendDataChangeExpand:(BOOL)arg1;
- (void)postRecommendScrollExpand;
- (UIEdgeInsets)getTableViewSeparatorInset;
- (void)modifyTableViewSectionLastSeparatorInset:(id)arg1 imageOffsetX:(double)arg2;
- (void)makeRecommendAlreadyHadGroupCell:(id)arg1 ForRowAtIndexPath:(id)arg2;
- (void)makeRecommendAlreadyHadGroupCell:(id)arg1 groupContact:(id)arg2 matchTip:(id)arg3;
- (void)makeRecommendAlreadyHadGroupMoreCell:(id)arg1;
- (id)getSearchMatchTipForRecommendAlreadyHadGroup;
- (double)heightForRecommendAlreadyHadGroupRowAtIndexPath:(id)arg1;
- (long long)numberOfRecommendAlreadyHadGroupRows;
- (void)didSelectRecommendAlreadyHadGroupRowAtIndexPath:(id)arg1;
- (double)heightForRecommendAlreadyHadGroupHeader;
- (id)viewForRecommendAlreadyHadGroupHeaderInSection:(long long)arg1 title:(id)arg2;
- (id)genRecommendAlreadyHadGroupHeaderView;
- (void)makeRecommendAlreadyHadGroupHeaderViewCell:(id)arg1 CellInfo:(id)arg2;
- (void)didSelectRecommendAlreadyHadGroup:(id)arg1;
- (void)makeRecommendAlreadyHadGroupHeaderViewMoreCell:(id)arg1 CellInfo:(id)arg2;
- (void)didSelectRecommendAlreadyHadGroupMoreCell:(id)arg1;
- (id)initWithFrame:(CGRect)arg1 delegate:(id)arg2;
- (id)colorProxy;
- (id)multiSelectOrderKey;
- (void)removeSelect:(id)arg1;
- (id)getMatchTipForUsername:(id)arg1;
- (void)multiSelectWithSearchResult:(id)arg1;
- (BOOL)isExisted:(id)arg1;
- (BOOL)isSelected:(id)arg1;
- (BOOL)isDisabled:(id)arg1;
- (BOOL)isHadChatRoomGroup;
- (BOOL)canShowContactTagWithoutTagData;
- (id)getCellImage:(id)arg1;
- (void)addSelect:(id)arg1;
- (BOOL)updateMultiSelect:(id)arg1;
- (BOOL)updateMultiSelect:(id)arg1 fromInputView:(BOOL)arg2;
- (BOOL)updateMultiSelect:(id)arg1 fromRecommendSection:(BOOL)arg2 fromInputView:(BOOL)arg3;
- (BOOL)updateMultiSelect:(id)arg1 fromRecommendSection:(BOOL)arg2 fromInputView:(BOOL)arg3 needReloadTableView:(BOOL)arg4;
- (void)setSelectAll:(BOOL)arg1;
- (unsigned int)getContactCount;
- (BOOL)isSelectAll;
- (void)updateMultiSelectView;
- (void)removeContact:(id)arg1 index:(id)arg2;
- (void)asyncSearchRecommends;
- (void)asyncSearchRecommendsUseOnlySeachGroup:(BOOL)arg1 searchGroups:(BOOL)arg2 recUseLastMem:(BOOL)arg3;
- (void)panelSearchRecommends:(id)arg1;
- (id)getRecommendContacts;
- (id)getRecommendGroups;
- (void)updateRecommendContacts:(id)arg1;
- (BOOL)isRecommendContact:(id)arg1;
- (BOOL)isJumpableResultSection:(long long)arg1;
- (void)setBDragToDismissKeyboard:(BOOL)arg1;
- (void)asyncCheckSearchAllSameGroup;
- (void)setCustomFooterToContactList:(id)arg1;
- (void)removeCustomFooterFromContactList;
- (void)mmTableView:(id)arg1 dragTriggerNotifyWithOffset:(double)arg2;
- (void)initData:(unsigned int)arg1;
- (void)setExtraCellLineHidden:(id)arg1;
- (void)setTableFooterLoading;
- (void)initSearchBar;
- (void)initTableView;
- (void)updateEmptyView;
- (void)initView;
- (void)layoutSubviews;
- (void)dealloc;
- (id)getCurrentSearchText;
- (void)setIsSearchingRecommends:(BOOL)arg1;
- (BOOL)getLastResultHasRecommendGroups;
- (void)setLastResultHasRecommendGroups:(BOOL)arg1;
- (id)getNormalContactWithoutLatestHistory:(id)arg1;
- (long long)getNormalContactSection;
- (int)getSectionType:(long long)arg1;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)makeCell:(id)arg1 contact:(id)arg2;
- (void)makeCell:(id)arg1 contact:(id)arg2 showMatchTip:(BOOL)arg3;
- (void)makeCell:(id)arg1 contact:(id)arg2 showMatchTip:(BOOL)arg3 clickable:(BOOL)arg4;
- (void)makeCell:(id)arg1 contact:(id)arg2 showMatchTip:(BOOL)arg3 clickable:(BOOL)arg4 indexPath:(id)arg5;
- (void)makeCell:(id)arg1 contact:(id)arg2 showMatchTip:(BOOL)arg3 clickable:(BOOL)arg4 indexPath:(id)arg5 multiSelect:(BOOL)arg6;
- (void)makeWhatEverCell:(id)arg1;
- (void)showInfo:(id)arg1;
- (void)makeGroupCell:(id)arg1 head:(id)arg2 title:(id)arg3;
- (void)makeCell:(id)arg1 tableCell:(id)arg2 section:(unsigned long long)arg3 row:(unsigned long long)arg4;
- (void)makeTopCell:(id)arg1;
- (void)makeSpecialCell:(id)arg1 Title:(id)arg2;
- (void)makeOpenIMContactCell:(id)arg1;
- (void)updateOpenImGroupSelectedNumber:(unsigned long long)arg1;
- (void)makeImportFromTLBlackListCell:(id)arg1 row:(unsigned long long)arg2;
- (void)makeHistoryGroupCell:(id)arg1;
- (void)makeContactTagCell:(id)arg1;
- (void)makeStartOfNormalContactCell:(id)arg1;
- (void)makeCell:(id)arg1 ForRowAtIndexPath:(id)arg2;
- (void)makeRecentInviteCell:(id)arg1;
- (void)recentInviteScrollView:(id)arg1 didSelectContact:(id)arg2;
- (void)recentInviteScrollViewNeedsRelayout:(id)arg1;
- (void)makeCreateChatRoomCell:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2;
- (void)handleSelectHistoryGroup;
- (void)handleSelectContactTag;
- (void)handleSelectWowBlackListHide;
- (void)handleSelectWowBlackListBlock;
- (void)handleSelectRadarCreateRoom;
- (void)handleSelectOpenIMGroup;
- (void)handleSelectTopCell;
- (void)handleSelectWhatEverCell;
- (void)handleSelectContactFromGroup;
- (unsigned long long)getTotalSelectCount;
- (void)reloadTableView;
- (id)getTableView;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (void)loadHeaderViewSelection;
- (long long)mmcurrentIndexForTableView:(id)arg1;
- (id)sectionIndexTitlesForTableView:(id)arg1;
- (id)mmsectionIndexTitlesForTableView:(id)arg1;
- (id)mmindexViewColor;
- (long long)tableView:(id)arg1 sectionForSectionIndexTitle:(id)arg2 atIndex:(long long)arg3;
- (long long)mmtableView:(id)arg1 sectionForSectionIndexTitle:(id)arg2 atIndex:(long long)arg3;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)reloadContacts;
- (unsigned long long)sectionForType:(int)arg1;
- (void)onContactsDataChange;
- (void)onContactsDataNeedChange;
- (BOOL)onFilterContactCandidate:(id)arg1;
- (BOOL)hideFavourContactCandidate;
- (BOOL)shouldFilterChatBot;
- (void)onContactAsynSearchSectionResultChanged:(id)arg1 sectionTitles:(id)arg2 sectionResults:(id)arg3;
- (BOOL)isUserSearchBarInView;
- (void)onContactSearchReportStateChanged;
- (void)updateSearchResult:(id)arg1;
- (void)onContactUpdatePickDataSection:(long long)arg1 added:(BOOL)arg2 deleted:(BOOL)arg3 sections:(id)arg4 sectionTitles:(id)arg5 sectionResults:(id)arg6;
- (id)onContactGetDicExistContactsOutOfPickLogic;
- (void)onRecommendDataChange:(BOOL)arg1;
- (void)postRecommendScroll;
- (void)doSearch:(id)arg1 Pre:(BOOL)arg2;
- (void)delaySearchImp:(id)arg1;
- (void)updateSearchingState:(id)arg1;
- (void)cancelSearch;
- (void)searchTextFieldDidBeginEditing;
- (void)wcsWillPresentSearch:(id)arg1;
- (void)wcsDidPresentSearch:(id)arg1;
- (void)wcsDidDismissSearch:(id)arg1;
- (id)cellForSearchViewTable:(id)arg1 index:(id)arg2;
- (double)heightForSearchViewTable:(id)arg1;
- (void)didSearchViewTableSelect:(id)arg1;
- (BOOL)shouldExtraMemberMatch;
- (BOOL)shouldExtraMemberMatchWithGroup;
- (id)getDicSelectedContacts;
- (void)makeMoreCell:(id)arg1 description:(id)arg2 image:(id)arg3;
- (void)onContactAsynSearchSectionGroupResultChanged;
- (void)onCheckContactAsynSearchAllSameGroupChanged:(id)arg1;
- (id)m_delegate;
- (void)setM_delegate:(id)arg1;
- (id)m_tableView;
- (void)setM_tableView:(id)arg1;
- (id)m_dicExistContact;
- (void)setM_dicExistContact:(id)arg1;
- (id)m_contactsDataLogic;
- (void)setM_contactsDataLogic:(id)arg1;
- (BOOL)m_bShowHistoryGroup;
- (void)setM_bShowHistoryGroup:(BOOL)arg1;
- (BOOL)m_bShowContactTag;
- (void)setM_bShowContactTag:(BOOL)arg1;
- (BOOL)m_bShowRadarCreateRoom;
- (void)setM_bShowRadarCreateRoom:(BOOL)arg1;
- (unsigned int)m_uiGroupScene;
- (void)setM_uiGroupScene:(unsigned int)arg1;
- (id)m_dicMultiSelect;
- (void)setM_dicMultiSelect:(id)arg1;
- (BOOL)m_bMultiSelect;
- (void)setM_bMultiSelect:(BOOL)arg1;
- (BOOL)m_bSearchSnsContact;
- (void)setM_bSearchSnsContact:(BOOL)arg1;
- (BOOL)m_bMakeTopCell;
- (void)setM_bMakeTopCell:(BOOL)arg1;
- (unsigned int)m_uiCommonSearchScene;
- (void)setM_uiCommonSearchScene:(unsigned int)arg1;
- (BOOL)m_bShowSelectFromGroup;
- (void)setM_bShowSelectFromGroup:(BOOL)arg1;
- (id)m_dicDisabledContact;
- (void)setM_dicDisabledContact:(id)arg1;
- (BOOL)m_bHideSearchBar;
- (void)setM_bHideSearchBar:(BOOL)arg1;
- (BOOL)m_bShowMomentStatus;
- (void)setM_bShowMomentStatus:(BOOL)arg1;
- (BOOL)m_bShowBlackListBlockFromTL;
- (void)setM_bShowBlackListBlockFromTL:(BOOL)arg1;
- (BOOL)m_bShowBlackListHideFromTL;
- (void)setM_bShowBlackListHideFromTL:(BOOL)arg1;
- (BOOL)m_bShowContactRecommend;
- (void)setM_bShowContactRecommend:(BOOL)arg1;
- (id)m_dicMultiOpenIMContactSelect;
- (void)setM_dicMultiOpenIMContactSelect:(id)arg1;
- (void)setMultiSelectOrderKey:(id)arg1;
- (id)belongingContact;
- (void)setBelongingContact:(id)arg1;
- (BOOL)bDragToDismissKeyboard;
- (BOOL)m_onlyImportChatRoom;
- (void)setM_onlyImportChatRoom:(BOOL)arg1;
- (BOOL)showRecentInvite;
- (void)setShowRecentInvite:(BOOL)arg1;
- (void)setColorProxy:(id)arg1;
- (id)m_selectedUsername;
- (void)setM_selectedUsername:(id)arg1;
- (BOOL)m_bUseSystemIndexBar;
- (void)setM_bUseSystemIndexBar:(BOOL)arg1;
- (BOOL)useNewSearchBar;
- (void)setUseNewSearchBar:(BOOL)arg1;
- (id)dicRecommendSelectHelper;
- (void)setDicRecommendSelectHelper:(id)arg1;
- (id)dicUsrSourceHelper;
- (void)setDicUsrSourceHelper:(id)arg1;
- (id)recentInviteScrollView;
- (void)setRecentInviteScrollView:(id)arg1;
- (id)customFooterView;
- (void)setCustomFooterView:(id)arg1;
- (id)emptyLabel;
- (void)setEmptyLabel:(id)arg1;
- (BOOL)isCheckAllSameGroups;
- (void)setIsCheckAllSameGroups:(BOOL)arg1;
- (id)searchReportSectionKeys;
- (void)setSearchReportSectionKeys:(id)arg1;
- (id)searchReportSectionResults;
- (void)setSearchReportSectionResults:(id)arg1;
- (void).cxx_destruct;
@end
