@interface IntelligentMsgBrowseView : MMUIView <MMRefreshTableFooterDelegate, IntelligentMsgImgFigurePageHeaderViewDelegate, IFTSIntelligentMessageMgrExt, IntelligentMsgImgResultListViewDelegate, IntelligentMsgBrowseResultTableViewLogicDelegate, IntelligentMsgImgStartUsingViewControllerDelegate, IntelligentMsgImgNetWorkLogicDelegate, MMAssetDragSelectDelegate, UIGestureRecognizerDelegate, MMAssetPickerSliderDelegate, UITableViewDataSource, UITableViewDelegate, WCSearchDelegate, WCDataSearchDelegate, IntelligentMsgImgLabelListViewDelegate>
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
    unsigned long long m_resultColNum; // +0xa8
    NSMutableArray * m_needLoadArray; // +0xb0
    IntelligentRefreshTableFooterView * m_nextLoadingView; // +0xb8
    IntelligentRefreshTableFooterView * m_preLoadingView; // +0xc0
    NSMutableDictionary * m_dicWeakMedia; // +0xc8
    MMUIView * m_searchResultTableHeaderView; // +0xd0
    IntelligentMsgImgResultListView * m_resultListView; // +0xd8
    IntelligentMsgImgFigurePageHeaderView * m_figurePageHeaderView; // +0xe0
    NSArray * m_arrIntelligentClassification; // +0xe8
    AttributeLabel * m_searchResultCountLabel; // +0xf0
    IntelligentMsgBrowseResultTableViewLogic * m_resultTableViewLogic; // +0xf8
    NSMutableArray * m_arrResultMessagr; // +0x100
    NSMutableDictionary * m_dicLocateOcrTextPoint; // +0x108
    NSMutableDictionary * m_dicLocateOcrMsg; // +0x110
    UIView * m_gestureInterceptView; // +0x118
    MMTimer * m_priorityBuildIndexTimer; // +0x120
    BOOL m_isInitialHadBuildPriorityBuildIndexMsg; // +0x128
    NSNumber * m_queryIsSecureRank; // +0x130
    MMTimer * m_queryIsSecureRankTimer; // +0x138
    IntelligentMsgImgNetWorkLogic * m_msgImgNetWorkLogic; // +0x140
    unsigned long long m_searchIdentifyStartTime; // +0x148
    BOOL m_hadMoreMaxSearchIdentifyCostTime; // +0x150
    MMTimer * m_faceAlbumDisplayTimeOutTimer; // +0x158
    BOOL m_notReportSearchBanner; // +0x160
    BOOL m_reportSearchInputQuery; // +0x161
    NSMutableDictionary * m_dicSearchResultMsg; // +0x168
    NSMutableSet * m_setSearchQueryClassification; // +0x170
    NSString * m_historyImageGroupName; // +0x178
    NSString * m_historyImageExpSessionId; // +0x180
    unsigned int m_historyImageCntAll; // +0x188
    unsigned int m_historyImageCntClassification; // +0x18c
    unsigned int m_historyImageCntOcr; // +0x190
    NSMutableSet * m_historyImageExpTabs; // +0x198
    BOOL m_historyImageTriggerReported; // +0x1a0
    BOOL m_historyImageBrowseCategoryExpReported; // +0x1a1
    double m_historyImageBrowseEnterTime; // +0x1a8
    BOOL m_squareThumbFullAsync; // +0x1b0
    MMAssetDragSelectHelper * m_dragSelectHelper; // +0x1b8
    MMAssetPickerSlider * m_slider; // +0x1c0
    double m_lastGridLayoutWidth; // +0x1c8
    BOOL m_isPinching; // +0x1d0
    BOOL m_isPinchAnimating; // +0x1d1
    unsigned long long m_pinchGeneration; // +0x1d8
    unsigned long long m_pinchAnimatingCommitColNum; // +0x1e0
    double m_pinchStartDistance; // +0x1e8
    double m_pinchStartProgress; // +0x1f0
    double m_pinchProgress; // +0x1f8
    double m_lastValidDistance; // +0x200
    double m_prevValidDistance; // +0x208
    double m_lastPinchTimestamp; // +0x210
    unsigned long long m_pinchStartColNum; // +0x218
    unsigned long long m_pinchTargetColNum; // +0x220
    UIView * m_pinchTargetSnapshot; // +0x228
    UIView * m_pinchCoverSnapshot; // +0x230
    BOOL m_hideSectionHeaderDuringPinch; // +0x238
    BOOL m_pinchFadeInHeaderTitle; // +0x239
    UITableView * m_activePinchTableView; // +0x240
    BOOL m_isPinchingResultTableView; // +0x248
    SimpleImgInfo * m_curLongPressImgInfo; // +0x250
    BOOL m_showCheckMark; // +0x258
    BOOL m_hideSelectAllSection; // +0x259
    BOOL m_bSearching; // +0x25a
    BOOL _m_bNotMainTable; // +0x25b
    BOOL _showNewUI; // +0x25c
    BOOL _hasHighLighted; // +0x25d
    BOOL _m_isUsingSliderGroupedTableView; // +0x25e
    unsigned int m_searchType; // +0x260
    id <IntelligentMsgBrowseViewDelegate> m_browseViewDelegate; // +0x268
    NSMutableArray * m_arrSearchResultMessageLocalId; // +0x270
    NSString * _m_sessionId; // +0x278
    NSString * _m_nsChatName; // +0x280
    NSString * _m_historySearchChatSessionId; // +0x288
    NSString * _m_historySearchTriggerSearchId; // +0x290
    MMTableView * _m_sliderGroupedTableView; // +0x298
    double _m_sliderSwapOffsetPercent; // +0x2a0
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
- (id)activeSliderTableView;
- (void)beginSliderGroupedTableViewSwap;
- (void)endSliderGroupedTableViewSwap;
- (void)tearDownGroupedTV:(id)arg1 plainTV:(id)arg2 attempt:(long long)arg3;
- (void)applySliderGroupedDisplayTweaksForCell:(id)arg1 inTableView:(id)arg2;
- (void)applySliderGroupedDisplayTweaksForHeaderView:(id)arg1 inTableView:(id)arg2;
- (void)handleSliderValueChange:(double)arg1;
- (void)syncPlainOffsetFromGrouped:(id)arg1 plainTV:(id)arg2;
- (id)initWithMsgWrap:(id)arg1 withDelegate:(id)arg2 chatName:(id)arg3 frame:(CGRect)arg4;
- (id)initWithMsgWrap:(id)arg1 withDelegate:(id)arg2 chatName:(id)arg3 frame:(CGRect)arg4 showNewUI:(BOOL)arg5;
- (id)initWithImgInfo:(id)arg1 withDelegate:(id)arg2 chatName:(id)arg3 frame:(CGRect)arg4;
- (id)initWithImgInfo:(id)arg1 withDelegate:(id)arg2 chatName:(id)arg3 frame:(CGRect)arg4 showNewUI:(BOOL)arg5;
- (void)dealloc;
- (void)registerIntelligentMessageMgrExt:(BOOL)arg1;
- (void)reloadData;
- (void)setM_showCheckMark:(BOOL)arg1;
- (void)showImgMsgLocate:(id)arg1 imageScrollView:(id)arg2;
- (void)printIntelligentMessageWithMsgWrap:(id)arg1;
- (void)operateMsgWrapOcrTextPoint:(id)arg1;
- (void)initData;
- (void)resetData;
- (void)initSearchResultTableHeaderView;
- (void)initResultTableViewLogic;
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
- (BOOL)shouldShowPickerSlider;
- (void)updatePickerSliderVisibility;
- (void)scrollViewDidScroll:(id)arg1;
- (double)tableViewScrollContentOffsetYPercent;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(BOOL)arg2;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)relaodCellWhenScrollViewStop;
- (void)_genImgCell:(id)arg1 indexPath:(id)arg2;
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(CGPoint)arg2 targetContentOffset:(CGPoint *)arg3;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)initTableView;
- (void)initPickerSlider;
- (UIEdgeInsets)normalSliderThumbViewEdgeInset;
- (void)syncSliderThumbViewEdgeInsetIfNeeded;
- (void)setM_scrollOffset:(double)arg1;
- (void)adjustContentOffset;
- (void)setTableViewContentInset:(UIEdgeInsets)arg1;
- (void)updateLoadingViewsLayout;
- (void)onTransitionToNewSize;
- (void)endHighLightedCurMsg;
- (void)startHighLightedCurMsg;
- (void)playShineAnimationOnView:(id)arg1 completion:(id /* block */)arg2;
- (id)getIndexPathOfCurMsg;
- (void)setCurMsgHighlighted:(BOOL)arg1 animated:(BOOL)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)tableView:(id)arg1 willDisplayHeaderView:(id)arg2 forSection:(long long)arg3;
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
- (void)onLongPress:(id)arg1;
- (void)onMenuLocate:(id)arg1;
- (void)onMenuTrans:(id)arg1;
- (void)onMenuFavorite:(id)arg1;
- (void)onMenuDelete:(id)arg1;
- (unsigned long long)pinchMinColNum;
- (unsigned long long)pinchMaxColNum;
- (unsigned long long)resultTableViewColNum;
- (void)handlePinchGesture:(id)arg1;
- (void)pinchBegan:(id)arg1;
- (void)pinchChanged:(id)arg1;
- (void)pinchEnded:(id)arg1;
- (void)cancelPinchForWidthChange;
- (void)addPinchGestureToResultTableViewIfNeeded:(id)arg1;
- (id)currentVisibleTableView;
- (void)preparePinchTargetSnapshot;
- (void)cleanupPinchTargetSnapshot;
- (void)restoreSavedTableHeaderView;
- (double)distanceForPinchGesture:(id)arg1;
- (void)applyPinchProgress:(double)arg1;
- (void)animatePinchToProgress:(double)arg1 commitColNum:(unsigned long long)arg2 fastGesture:(BOOL)arg3;
- (BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
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
- (long long)reportImgIndexForImgInfo:(id)arg1;
- (BOOL)historyImageReportEnabled;
- (unsigned int)historyImageHasSearchBtn;
- (unsigned int)historyImageQuerySearchType;
- (id)historyImageTypeText;
- (BOOL)historyImageGroupActive;
- (void)reportHistoryImageInputBoxClick;
- (void)reportHistoryImageGroupClick:(id)arg1;
- (void)reportHistoryImageSearchResultChangedIfNeeded;
- (void)reportHistoryImageBrowseCategoryExposureIfNeeded;
- (void)resetHistoryImageBrowseCategoryExposure;
- (void)reportHistoryImageClickResultWithImgInfo:(id)arg1 msg:(id)arg2;
- (id)historyMenuReportInfoForImgInfo:(id)arg1 msg:(id)arg2;
- (id)historyMenuExtInfoJSONStringFromDict:(id)arg1;
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
- (BOOL)wcsSearchBarShouldBeginEditing:(id)arg1;
- (BOOL)wcsSearchBarShouldEndEditing:(id)arg1;
- (void)wcsSearchBarTextDidBeginEditing:(id)arg1;
- (void)wcsSearchBarTextDidEndEditing:(id)arg1;
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
- (void)doMsgImgLabelListClickedAndShowResult:(id)arg1;
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
- (id)dragSelectIndexPathForRowAtPoint:(CGPoint)arg1;
- (BOOL)dragSelectAssetIsSelectedAtPoint:(CGPoint)arg1;
- (void)dragSelectDoActionForIndexPath:(id)arg1 select:(BOOL)arg2;
- (id)convertThumbIndexPathFromPoint:(CGPoint)arg1;
- (id)convertTableIndexPathFromAssetIndexPath:(id)arg1;
- (id)thumbViewForIndexPath:(id)arg1;
- (void)assetPickerSliderDidBeginMove:(id)arg1;
- (void)assetPickerSliderDidEndMove:(id)arg1;
- (void)assetPickerSlider:(id)arg1 didChangeActiveState:(BOOL)arg2;
- (void)assetPickerSlider:(id)arg1 didChangeValue:(double)arg2;
- (id)m_browseViewDelegate;
- (void)setM_browseViewDelegate:(id)arg1;
- (id)m_curImgInfo;
- (void)setM_curImgInfo:(id)arg1;
- (double)m_scrollOffset;
- (BOOL)m_showCheckMark;
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
- (id)m_preLoadingView;
- (id)m_nextLoadingView;
- (id)m_slider;
- (id)m_sessionId;
- (void)setM_sessionId:(id)arg1;
- (id)m_nsChatName;
- (void)setM_nsChatName:(id)arg1;
- (BOOL)m_bNotMainTable;
- (void)setM_bNotMainTable:(BOOL)arg1;
- (BOOL)showNewUI;
- (void)setShowNewUI:(BOOL)arg1;
- (BOOL)hasHighLighted;
- (void)setHasHighLighted:(BOOL)arg1;
- (id)m_historySearchChatSessionId;
- (void)setM_historySearchChatSessionId:(id)arg1;
- (id)m_historySearchTriggerSearchId;
- (void)setM_historySearchTriggerSearchId:(id)arg1;
- (id)m_sliderGroupedTableView;
- (void)setM_sliderGroupedTableView:(id)arg1;
- (BOOL)m_isUsingSliderGroupedTableView;
- (void)setM_isUsingSliderGroupedTableView:(BOOL)arg1;
- (double)m_sliderSwapOffsetPercent;
- (void)setM_sliderSwapOffsetPercent:(double)arg1;
- (void).cxx_destruct;
- (id).cxx_construct;
@end
