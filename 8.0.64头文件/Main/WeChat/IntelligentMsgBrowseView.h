@interface IntelligentMsgBrowseView : MMUIView <MMRefreshTableFooterDelegate, IntelligentMsgImgFigurePageHeaderViewDelegate, IFTSIntelligentMessageMgrExt, IntelligentMsgImgResultListViewDelegate, IntelligentMsgBrowseResultTableViewLogicDelegate, IntelligentMsgImgStartUsingViewControllerDelegate, IntelligentMsgImgNetWorkLogicDelegate, UITableViewDataSource, UITableViewDelegate, WCSearchDelegate, WCDataSearchDelegate, IntelligentMsgImgLabelListViewDelegate>
{
    NSNumber * m_isHadBuildPriorityBuildIndexMsg; // +0x8
    OrderedDictionary * m_dicFaceCluster; // +0x10
    NSString * m_searchSessionId; // +0x18
    unsigned int m_searchCost; // +0x20
    unsigned long long m_searchStartTime; // +0x28
    unsigned int m_searchResultCount; // +0x30
    IntelligentMessageReportCostTimeAndResult * m_reportCostTimeAndResult; // +0x38
    SimpleImgInfo * m_curImgInfo; // +0x40
    NSMutableArray * m_arrImgInfo; // +0x48
    double m_scrollOffset; // +0x50
    NSMutableDictionary * m_dicSectionTitle; // +0x58
    NSMutableDictionary * m_dicMsgsByTitle; // +0x60
    NSMutableDictionary * m_dicSectionSelected; // +0x68
    map<NSString *, bool, CompareNSString, std::allocator<std::pair<NSString *const, bool>>> m_dicMsgSelected; // +0x70
    MMTableView * m_tableView; // +0x88
    id <IntelligentMsgBrowseViewDelegate> fastBrowseViewDelegate; // +0x90
    unsigned long long m_colNum; // +0x98
    double m_margin; // +0xa0
    NSMutableArray * m_needLoadArray; // +0xa8
    IntelligentRefreshTableFooterView * m_nextLoadingView; // +0xb0
    IntelligentRefreshTableFooterView * m_preLoadingView; // +0xb8
    NSMutableDictionary * m_dicWeakMedia; // +0xc0
    MMUIView * m_searchResultTableHeaderView; // +0xc8
    IntelligentMsgImgResultListView * m_resultListView; // +0xd0
    IntelligentMsgImgFigurePageHeaderView * m_figurePageHeaderView; // +0xd8
    NSArray * m_arrIntelligentClassification; // +0xe0
    AttributeLabel * m_searchResultCountLabel; // +0xe8
    IntelligentMsgBrowseResultTableViewLogic * m_resultTableViewLogic; // +0xf0
    NSMutableArray * m_arrResultMessagr; // +0xf8
    NSMutableDictionary * m_dicLocateOcrTextPoint; // +0x100
    NSMutableDictionary * m_dicLocateOcrMsg; // +0x108
    MMTimer * m_priorityBuildIndexTimer; // +0x110
    BOOL m_isInitialHadBuildPriorityBuildIndexMsg; // +0x118
    NSNumber * m_queryIsSecureRank; // +0x120
    MMTimer * m_queryIsSecureRankTimer; // +0x128
    IntelligentMsgImgNetWorkLogic * m_msgImgNetWorkLogic; // +0x130
    unsigned long long m_searchIdentifyStartTime; // +0x138
    BOOL m_hadMoreMaxSearchIdentifyCostTime; // +0x140
    MMTimer * m_faceAlbumDisplayTimeOutTimer; // +0x148
    BOOL m_notReportSearchBanner; // +0x150
    BOOL m_reportSearchInputQuery; // +0x151
    NSMutableDictionary * m_dicSearchResultMsg; // +0x158
    NSMutableSet * m_setSearchQueryClassification; // +0x160
    BOOL m_showCheckMark; // +0x168
    BOOL m_hideSelectAllSection; // +0x169
    BOOL m_bSearching; // +0x16a
    BOOL _m_bNotMainTable; // +0x16b
    unsigned int m_searchType; // +0x16c
    id <IntelligentMsgBrowseViewDelegate> m_browseViewDelegate; // +0x170
    NSMutableArray * m_arrSearchResultMessageLocalId; // +0x178
    NSString * _m_sessionId; // +0x180
    NSString * _m_nsChatName; // +0x188
}
- (void)reportIntelligentMsgSearchNotResult;
- (void)reportIntelligentMsgSearchNotResultCore;
- (void)reportIntelligentMsgSearchResultHadResult;
- (void)reportIntelligentMsgSearchClickCategoryWord:(id)arg1;
- (void)reportIntelligentMsgSearchDoSearch:(id)arg1 searchQuery:(id)arg2 searchScene:(unsigned int)arg3;
- (void)reportIntelligentMsgSearchDoCancel;
- (void)reportIntelligentMsgSearchDoClickTab;
- (void)reportIntelligentMsgSearchDoClickFigure;
- (void)reportIntelligentMsgSearchDoClickPicture:(unsigned int)arg1 intelligentMsgTab:(unsigned int)arg2 intelligentMsgMatchType:(unsigned int)arg3;
- (id)getReportIntelligentMsgSearchDoClickPictureInfo;
- (id)initWithMsgWrap:(id)arg1 withDelegate:(id)arg2 chatName:(id)arg3 frame:(CGRect)arg4;
- (id)initWithImgInfo:(id)arg1 withDelegate:(id)arg2 chatName:(id)arg3 frame:(CGRect)arg4;
- (void)dealloc;
- (void)registerIntelligentMessageMgrExt:(BOOL)arg1;
- (void)reloadData;
- (void)showImgMsgLocate:(id)arg1 imageScrollView:(id)arg2;
- (void)printIntelligentMessageWithMsgWrap:(id)arg1;
- (void)operateMsgWrapOcrTextPoint:(id)arg1;
- (void)initData;
- (void)resetData;
- (void)initSearchResultTableHeaderView;
- (void)resetSearchResultTableHeaderView:(BOOL)arg1;
- (void)rebuildMsgData;
- (void)updateLoading:(BOOL)arg1 NextMore:(BOOL)arg2;
- (void)updatePreMore:(BOOL)arg1 NextMore:(BOOL)arg2;
- (void)resetNoMoreNextLoadingView;
- (void)MMRefreshTableFooterDidTriggerRefresh:(id)arg1;
- (void)showIntelligentMsgImgStartUsing;
- (void)clearSearchResult;
- (void)genSearchCost;
- (id)getSearcher;
- (void)reloadStartTime;
- (void)reloadSearchIdentifyCostTime:(BOOL)arg1;
- (void)reloadReportCostTimeAndResult;
- (BOOL)checkIsReSearchLastSearchText;
- (void)doSecureRankSearch;
- (BOOL)isNotSecureRankIsClassification:(id)arg1;
- (void)startPriorityBuildIndexTimer;
- (void)cancelPriorityBuildIndexTimer;
- (void)doPriorityBuildIndexTimer;
- (void)startQueryIsSecureRankTimer;
- (void)cancelQueryIsSecureRankTimer;
- (void)doQueryIsSecureRankTimer;
- (void)searchWhenQueryIsSecureRankUnknow;
- (void)doReSearch:(unsigned int)arg1;
- (void)startFaceAlbumDisplayTimeOutTimer;
- (void)cancelFaceAlbumDisplayTimeOutTimer;
- (void)doFaceAlbumDisplayTimeOutTimer;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(BOOL)arg2;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)relaodCellWhenScrollViewStop;
- (void)_genImgCell:(id)arg1 indexPath:(id)arg2;
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(CGPoint)arg2 targetContentOffset:(CGPoint *)arg3;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)initTableView;
- (void)setM_scrollOffset:(double)arg1;
- (void)adjustContentOffset;
- (void)setTableViewContentInset:(UIEdgeInsets)arg1;
- (void)onTransitionToNewSize;
- (void)endHighLightedCurMsg;
- (void)startHighLightedCurMsg;
- (id)getIndexPathOfCurMsg;
- (void)setCurMsgHighlighted:(BOOL)arg1 animated:(BOOL)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)calcImgItemIndex:(long long)arg1 num:(long long)arg2;
- (void)genImgCell:(id)arg1 indexPath:(id)arg2;
- (id)getMsgImageSquareThumbView:(unsigned int)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (BOOL)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2;
- (void)onClickMsgSquareThumb:(id)arg1;
- (BOOL)onSelectMessage:(id)arg1;
- (void)onSelectSection:(id)arg1;
- (void)updateSectionHeaderCheckMark:(id)arg1 to:(BOOL)arg2;
- (void)updateSectionHeaderCheckMarkBtn:(id)arg1 isSelected:(BOOL)arg2;
- (id)getSelectedMessages;
- (BOOL)checkMessageHadSelected:(unsigned int)arg1;
- (void)setMessageSelectedTrigger:(unsigned int)arg1;
- (void)selectAllMessages;
- (void)unSelectAllMessages;
- (CGRect)getMediaFrameWithMsgWrap:(id)arg1;
- (id)getMediaViewWithMsgWrap:(id)arg1;
- (unsigned int)getReportIntelligentMsgMatchType:(id)arg1 LocalID:(unsigned int)arg2;
- (BOOL)hasSearchDone;
- (id)getSessionArrFaceClusterItem;
- (unsigned int)getCategoryDisplayType;
- (id)getRealSearchText;
- (void)reloadResultTableView;
- (void)handleDelMsgWithMsgWrap:(id)arg1;
- (id)getSessionIntelligentTotalMsgItem;
- (double)heightForHeaderInSection:(long long)arg1 ForSearchViewTable:(id)arg2;
- (id)viewForHeaderInSection:(long long)arg1 ForSearchViewTable:(id)arg2;
- (id)titleForHeaderInSection:(long long)arg1 ForSearchViewTable:(id)arg2;
- (id)cellForIndex:(id)arg1 ForSearchViewTable:(id)arg2;
- (void)didSearchViewTableSelect:(id)arg1;
- (void)doTableSelectWithClassification:(id)arg1 isLabelListClicked:(BOOL)arg2;
- (double)heightForSearchViewTable:(id)arg1;
- (long long)numberOfRowsInSection:(long long)arg1 ForSearchViewTable:(id)arg2;
- (long long)numberOfSectionsForSearchViewTable:(id)arg1;
- (void)wcSearchViewTableDidScroll:(id)arg1;
- (void)wcSearchViewTableDidEndDragging:(id)arg1 willDecelerate:(BOOL)arg2;
- (void)wcSearchViewTableDidEndDecelerating:(id)arg1;
- (void)wcSearchViewTableWillEndDragging:(id)arg1 withVelocity:(CGPoint)arg2 targetContentOffset:(CGPoint *)arg3;
- (void)wcSearchViewTableWillBeginDragging:(id)arg1;
- (void)doSearch:(id)arg1;
- (void)delaySearchImp:(id)arg1;
- (void)doPreSearch:(id)arg1;
- (void)wcsSearchBar:(id)arg1 textDidChange:(id)arg2;
- (void)wcsSearchBarSearchButtonClicked:(id)arg1;
- (void)wcsSearchBarCancelButtonClicked:(id)arg1;
- (void)wcsDidPresentSearch:(id)arg1;
- (void)wcsWillDismissSearch:(id)arg1;
- (void)wcsDidDismissSearch:(id)arg1;
- (void)wcsAccessibilityPerformEscape:(id)arg1;
- (void)resetSearchTableFooterView;
- (void)onMsgFigureImgClicked:(id)arg1;
- (void)onFTSDetailPageIntelligentMessageResultChanged:(BOOL)arg1;
- (void)onFTSRestrictIntelligentSearchResultChanged:(id)arg1;
- (void)doFTSResult;
- (void)handlePictureTabMsgSearchTaskResultChanged;
- (void)analyzeOneBatchMsgSearchResult:(id)arg1 arrFaceClusterItem:(id)arg2;
- (void)analyzeMsgSearchResult:(id)arg1;
- (void)onMsgImgResultListClicked:(unsigned int)arg1;
- (void)onMsgImgLabelListClicked:(id)arg1;
- (void)doMsgImgLabelListClicked:(id)arg1;
- (void)onIntelligentMsgBrowseResultTableViewGetMoreMsgWithNext:(BOOL)arg1;
- (BOOL)getIsHadBuildPriorityBuildIndexMsg;
- (BOOL)getIsInitialHadBuildPriorityBuildIndexMsg;
- (BOOL)checkIsHadDelayLoadingStatus;
- (void)resetIsHadBuildPriorityBuildIndexMsg;
- (void)IntelligentMsgImgViewExposure;
- (void)OnIntelligentMsgImgMakeSureButtionClick;
- (void)doIntelligentMsgImgMakeSureButtionClick;
- (void)OnIntelligentMsgImgMakeRejectButtionClick;
- (void)OnIntelligentMsgImgProtectButtionClick;
- (void)OnIntelligentMsgImgExplainButtionClick;
- (void)onGetSimilarWordsWithQuery:(id)arg1 simWordList:(id)arg2 isSecureRank:(BOOL)arg3 success:(BOOL)arg4 errMsg:(id)arg5;
- (id)m_browseViewDelegate;
- (void)setM_browseViewDelegate:(id)arg1;
- (id)m_curImgInfo;
- (void)setM_curImgInfo:(id)arg1;
- (double)m_scrollOffset;
- (BOOL)m_showCheckMark;
- (void)setM_showCheckMark:(BOOL)arg1;
- (BOOL)m_hideSelectAllSection;
- (void)setM_hideSelectAllSection:(BOOL)arg1;
- (id)m_tableView;
- (void)setM_tableView:(id)arg1;
- (id)m_arrSearchResultMessageLocalId;
- (void)setM_arrSearchResultMessageLocalId:(id)arg1;
- (BOOL)m_bSearching;
- (void)setM_bSearching:(BOOL)arg1;
- (unsigned int)m_searchType;
- (void)setM_searchType:(unsigned int)arg1;
- (id)m_isHadBuildPriorityBuildIndexMsg;
- (void)setM_isHadBuildPriorityBuildIndexMsg:(id)arg1;
- (id)m_sessionId;
- (void)setM_sessionId:(id)arg1;
- (id)m_nsChatName;
- (void)setM_nsChatName:(id)arg1;
- (BOOL)m_bNotMainTable;
- (void)setM_bNotMainTable:(BOOL)arg1;
- (void).cxx_destruct;
- (id).cxx_construct;
@end
