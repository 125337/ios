@interface MsgSearchHelper : MMObject <MMUIViewControllerDelegate, IntelligentMsgBrowseResultTableViewLogicDelegate, IntelligentMsgBrowseViewDelegate, IntelligentMsgImgFullScreenMsgImgClickLogicDelegate, IntelligentMsgImgResultListViewDelegate, IntelligentMsgImgNetWorkLogicDelegate, IntelligentMsgImgStartUsingViewControllerDelegate, WCC2CMsgImageSquareThumbViewDelegate, WCFinderFeedFlowViewDelegate, WCFinderFeedFlowViewLayoutDelegate, WCFinderFeedFlowViewDataSource, WCFinderBusinessCustomListDetailViewControllerDelegate, WCFinderFeedBaseViewControllerProtocol, WCFinderFeedStaticCoverHighlightCollectionViewCellDelegate, MMMultiMenuAndMemuTableViewCellDelegate, MsgFileBrowseItemViewDelegate, MMUIViewControllerDelegate, IntelligentMsgImgBrowseViewControllerDelegate, RoomContactSelectDelegate, FTSMsgSearchTaskDelegate, WCSearchDelegate, WCDataSearchDelegate, MsgFileBrowseViewControllerDelegate, MMMsgSearchTabPageViewDelegate, IFTSIntelligentMessageMgrExt, IntelligentMsgImgBrowseViewControllerDelegate>
{
    BOOL m_bStartSearch; // +0x8
    BOOL m_bSearchBarBecomeFirstRespones; // +0x9
    BOOL m_bSearchBarCancelBtnDown; // +0xa
    NSMutableArray * m_arrSearchResult; // +0x10
    MMLoadingView * m_oLoadingView; // +0x18
    UIView * searchBarBackgroundColorView; // +0x20
    UIButton * backGroundButton; // +0x28
    UIButton * cancelButton; // +0x30
    int m_eMsgSearchHelperScene; // +0x38
    id <MsgSearchHelperDelegate> m_delegate; // +0x40
    MMMsgSearchTabViewContainer * m_tabViewContainer; // +0x48
    unsigned int m_msgSearchType; // +0x50
    NSMutableDictionary * m_detialContentCellViewCache; // +0x58
    NSMutableArray * m_arrSectionTitle; // +0x60
    NSMutableDictionary * m_dicSearchResultsByTitle; // +0x68
    MMTimer * m_ImageTabHadNotBuildPriorityBuildLodingTimer; // +0x70
    MMTimer * m_ImageTabHadBuildPriorityBuildLodeDoneTimer; // +0x78
    NSMutableArray * m_allMergeArrResultMessagr; // +0x80
    MMMsgFileBrowseMenuAndMemuTableViewCell * m_editingMenuTableCell; // +0x88
    unsigned int m_searchIntelligentType; // +0x90
    NSMutableArray * m_arrSearchResultMessageLocalId; // +0x98
    NSMutableArray * m_arrResultMessagr; // +0xa0
    NSMutableArray * m_arrHadDeleteIntelligentResultMsgLocalId; // +0xa8
    IntelligentMsgBrowseResultTableViewLogic * m_resultTableViewLogic; // +0xb0
    IntelligentMsgImgFullScreenMsgImgClickLogic * m_msgImgFullScreenMsgImgClickLogic; // +0xb8
    MMUIView * m_searchIntelligentResultTipView; // +0xc0
    IntelligentMsgImgResultListView * m_resultListView; // +0xc8
    AttributeLabel * m_searchResultCountLabel; // +0xd0
    unsigned long long m_searchIdentifyStartTime; // +0xd8
    NSSet * m_setSearchIntelligentClassificationId; // +0xe0
    BOOL m_hadMoreMaxSearchIdentifyCostTime; // +0xe8
    BOOL m_hadSelectedIntelligentTab; // +0xe9
    MMUIView * m_searchMaskView; // +0xf0
    unsigned int m_imageIdentify; // +0xf8
    NSMutableDictionary * m_dicLocateOcrTextPoint; // +0x100
    NSMutableDictionary * m_dicLocateOcrMsg; // +0x108
    NSString * m_sessionId; // +0x110
    NSString * m_searchSessionId; // +0x118
    unsigned int m_searchResultCount; // +0x120
    MsgSearchHelperReportCache * m_msgSearchHelperReportCache; // +0x128
    BOOL m_notReportSearchBanner; // +0x130
    BOOL m_reportSearchInputQuery; // +0x131
    unsigned int m_clickMediaResultType; // +0x134
    unsigned int m_clickMediaStartTime; // +0x138
    MMTimer * m_priorityBuildIndexTimer; // +0x140
    NSNumber * m_isHadBuildPriorityBuildIndexMsg; // +0x148
    BOOL m_isInitialHadBuildPriorityBuildIndexMsg; // +0x150
    NSMutableDictionary * m_dicHadBuildPrioritySearchNumber; // +0x158
    NSNumber * m_queryIsSecureRank; // +0x160
    MMTimer * m_queryIsSecureRankTimer; // +0x168
    IntelligentMsgImgNetWorkLogic * m_msgImgNetWorkLogic; // +0x170
    NSMutableDictionary * m_dicWeakMedia; // +0x178
    WCFinderFeedFlowView * m_feedFlowView; // +0x180
    unsigned long long m_feedFlowViewState; // +0x188
    NSMutableArray * m_arrFinderItems; // +0x190
    WCFinderBusinessCustomListDetailViewController * m_feedDetailViewController; // +0x198
    NSMutableDictionary * m_dicFeedSearchResultsByTitle; // +0x1a0
    NSMutableDictionary * m_dicFeedSearchMatchResults; // +0x1a8
    NSHashTable * headerViewHashTable; // +0x1b0
    BOOL m_hadDeleteMessage; // +0x1b8
    NSMutableDictionary * m_dicDataFmtThumbImg; // +0x1c0
    NSMutableArray * m_buttonTitles; // +0x1c8
    NSMutableArray * m_buttons; // +0x1d0
    NSMutableArray * m_divLines; // +0x1d8
    NSMutableArray * m_buttonIndexes; // +0x1e0
    MMUILabel * m_tipLabel; // +0x1e8
    MMUIViewController * m_searchParentVC; // +0x1f0
    MMUIViewController * m_searchCurVC; // +0x1f8
    UITextField * m_txtField; // +0x200
    NSString * m_tagText; // +0x208
    UIButton * m_leftBtn; // +0x210
    BOOL _hasMoving; // +0x218
    double _moveStartOffset; // +0x220
    double _moveCurOffset; // +0x228
    double _moveContentOffsetY; // +0x230
    double _searchTextFieldNormalWidth; // +0x238
    CGSize _searchIconDefaultSize; // +0x240
    FTSMessageDB * _ftsMessageDB; // +0x250
    FTSMsgSearchTask * _ftsTask; // +0x258
    BOOL _hasAction; // +0x260
    BOOL _m_bShowSearchByName; // +0x261
    BOOL _m_bShowSearchByTime; // +0x262
    BOOL _bUsePanCancelGesture; // +0x263
    WCDataSearcher * _searcher; // +0x268
}
+ (id)getMessageWrapWithMappingBusinessId:(id)arg1;
+ (id)genMappingBusinessIdWithMsg:(id)arg1;
- (void)reportMsgSearchActionPresent:(BOOL)arg1;
- (void)reportSessionMsgSearchActionLog:(id)arg1;
- (unsigned int)getReportTabType:(unsigned int)arg1;
- (unsigned int)getReportSubTabType:(unsigned int)arg1;
- (unsigned int)getReportVerticalSearchEntranceType:(unsigned int)arg1;
- (unsigned int)getImageIdentify;
- (void)reportSessionMsgSearchExposureActionLog;
- (void)reportSessionMsgSearchClickTabActionLogWithMsgSearchType:(unsigned int)arg1;
- (void)reportSessionMsgSearchActionLogWithAction:(unsigned int)arg1;
- (void)reportSessionMsgSearchSwapOrLongClcickActionLogWithAction:(unsigned int)arg1;
- (void)reportSessionMsgSearchClickResultActionLogWithMsg:(id)arg1;
- (void)reportSessionMsgSearchClickResultActionLogWithMsg:(id)arg1 clickRow:(unsigned int)arg2;
- (void)asyncReportSessionMsgSearchClickResultActionLogWithMsg:(id)arg1 clickRow:(unsigned int)arg2;
- (unsigned int)getSearchResultSameTypeIndexWithMsg:(id)arg1 clickRow:(unsigned int)arg2;
- (void)reportSessionMsgSearchClickSubTabActionLog;
- (void)reportSessionMsgSearchResult;
- (void)reportSessionMsgSearchCancelSearchAction;
- (void)reportSessionMsgSearchStartUsingActionLogWithAction:(unsigned int)arg1;
- (void)reportSessionMsgDoClickMediaStayTime;
- (void)wcsDidReportPresentSearch:(id)arg1;
- (void)wcsDidReportDismissSearch:(id)arg1;
- (void)doReportSearch:(id)arg1 Pre:(BOOL)arg2;
- (void)reloadReportCostTimeAndResult;
- (void)addReportCostTimeAndResult;
- (void)reportClickTabPageView;
- (void)resetReportClickMediaInfoWithMsg:(id)arg1;
- (void)cleanReportClickMediaInfo;
- (BOOL)isShowMenuAtIndexPath:(id)arg1;
- (void)hiddenMenuInCell;
- (void)showMsgLocationForRowAtIndexPath:(id)arg1;
- (void)showMsgLocationWithMessage:(id)arg1;
- (void)deleteMsgForRowAtIndexPath:(id)arg1;
- (id)getArrMemuItem;
- (void)showMemuItemsInView:(id)arg1;
- (BOOL)wcSearcherModeCanPerformAction:(SEL)arg1;
- (void)wcSearcherModePerformAction:(SEL)arg1 forRowAtIndexPath:(id)arg2;
- (void)wcSearcherModePerformAction:(SEL)arg1 forSquareThumbViewWithSimpleImgInfo:(id)arg2;
- (id)getSearcher;
- (void)didChangeSelectTabPageView;
- (id)getMsgImgNetWorkLogic;
- (unsigned int)getTotalImageMsgItemCount;
- (unsigned int)syncSearchTotalMsgItemCount;
- (id)getSessionIntelligentTotalMsgItem;
- (double)getIntelligentTabTableVisibleHeight;
- (BOOL)getIsHadBuildPriorityBuildIndexMsg;
- (BOOL)getIsInitialHadBuildPriorityBuildIndexMsg;
- (void)resetIsHadBuildPriorityBuildIndexMsg;
- (BOOL)checkIsHadDelayLoadingStatus;
- (id)getDetailTextWithMsgItem:(id)arg1 searchText:(id)arg2;
- (void)genSetSearchIntelligentClassificationId;
- (BOOL)hasSearchDone;
- (void)deleteMsgForRowWithSimpleImgInfo:(id)arg1;
- (void)doSecureRankSearch;
- (BOOL)isNotSecureRankIsClassification:(id)arg1;
- (void)startPriorityBuildIndexTimer;
- (void)cancelPriorityBuildIndexTimer;
- (void)doPriorityBuildIndexTimer;
- (void)startQueryIsSecureRankTimer;
- (void)cancelQueryIsSecureRankTimer;
- (void)doQueryIsSecureRankTimer;
- (void)searchWhenQueryIsSecureRankUnknow;
- (void)doPreIntelligentSearch:(id)arg1;
- (void)doReIntelligentSearch:(unsigned int)arg1;
- (BOOL)checkIsIntelligentDetailContentMode;
- (BOOL)checkIsIntelligentSearchType;
- (void)wcsDidIntelligentPresentSearch:(id)arg1;
- (void)wcsDidIntelligentDismissSearch:(id)arg1;
- (void)resetResultTableViewLogic;
- (void)reloadIntelligentResultTableView;
- (void)reloadSearchIdentifyCostTime:(BOOL)arg1;
- (void)resetIntelligentSearchResultTipView;
- (void)resetSearchTableFooterView;
- (void)didIntelligentChangeSearchText;
- (BOOL)isShowSearchIntelligentResultTipView;
- (id)getIntelligentHadNotStartUsingTipView;
- (void)clickHadNotStartUsingViewStartButton;
- (void)handleShowNoResultView;
- (void)asyncSearchTextIntelligentForHomePage:(id)arg1;
- (void)searchTextIntelligentSecureRankAndSimilarWords:(id)arg1;
- (void)delaySearchImp:(id)arg1;
- (void)doPreSearch:(id)arg1;
- (void)idKeyReportStartSearch:(id)arg1;
- (BOOL)checkAllImageMessageHadBuildIndex;
- (BOOL)checkIsReSearchLastSearchText;
- (void)onFTSDetailPageIntelligentMessageResultChanged:(BOOL)arg1;
- (void)onFTSRestrictIntelligentSearchResultChanged:(id)arg1;
- (void)doFTSResult;
- (void)handlePictureTabMsgSearchTaskResultChanged;
- (void)analyzeMsgSearchResult:(id)arg1;
- (void)onIntelligentMsgBrowseResultTableViewGetMoreMsgWithNext:(BOOL)arg1;
- (void)onSquareImgClicked:(id)arg1 withInfo:(id)arg2 withOffset:(unsigned int)arg3;
- (void)onSquareImgLongClicked:(id)arg1 withInfo:(id)arg2;
- (void)performAction:(SEL)arg1 forSquareThumbViewWithSimpleImgInfo:(id)arg2;
- (CGRect)getMediaFrameWithMsgWrap:(id)arg1;
- (id)getMediaViewWithMsgWrap:(id)arg1;
- (id)getMsgImgFullScreenMsgInView;
- (void)onIntelligentClickShowImgMsgLocate:(id)arg1 imageScrollView:(id)arg2 vc:(id)arg3;
- (void)operateMsgWrapOcrTextPoint:(id)arg1;
- (void)onMsgImgResultListClicked:(unsigned int)arg1;
- (void)onGetSimilarWordsWithQuery:(id)arg1 simWordList:(id)arg2 isSecureRank:(BOOL)arg3 success:(BOOL)arg4 errMsg:(id)arg5;
- (void)IntelligentMsgImgViewExposure;
- (void)OnIntelligentMsgImgMakeSureButtionClick;
- (void)OnIntelligentMsgImgMakeRejectButtionClick;
- (void)OnIntelligentMsgImgProtectButtionClick;
- (void)OnIntelligentMsgImgExplainButtionClick;
- (void)handleFinderMsg:(id)arg1 hasMoreData:(BOOL)arg2;
- (void)initFeedFlowView;
- (id)convertFeedContentVMsToCustomBusinessFeedIDModels:(id)arg1;
- (void)setFeedDetailViewController:(id)arg1;
- (id)genFinderDataItemWithMsg:(id)arg1;
- (id)genFinderDataItemsWithArrMsg:(id)arg1;
- (void)clearFeedFlow;
- (void)saveFinderSearchHighLightItemModel:(id)arg1;
- (UIEdgeInsets)finderFeedFlowView:(id)arg1 edgeInsetsAtSection:(unsigned long long)arg2;
- (BOOL)finderFeedFlowView:(id)arg1 layout:(id)arg2 pinHeaderToVisibleBoundsAtSection:(unsigned long long)arg3;
- (id)finderFeedFlowView:(id)arg1 cellConfigAtIndexPath:(id)arg2;
- (void)finderFeedFlowView:(id)arg1 requestDataWithType:(unsigned long long)arg2;
- (unsigned long long)finderFeedFlowViewState:(id)arg1;
- (void)finderFeedFlowViewDidScroll:(id)arg1;
- (void)finderFeedFlowView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (long long)numberOfSectionsInFinderFeedFlowView:(id)arg1;
- (long long)finderFeedFlowView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (id)finderFeedFlowView:(id)arg1 contentVMAtIndexPath:(id)arg2;
- (BOOL)finderFeedFlowView:(id)arg1 isCustomSupplementaryViewOfKind:(id)arg2 atSection:(long long)arg3;
- (unsigned long long)finderFeedFlowView:(id)arg1 columnCountAtSection:(unsigned long long)arg2;
- (double)finderFeedFlowView:(id)arg1 heightForCustomSupplementaryViewOfKind:(id)arg2 atSection:(long long)arg3;
- (id)finderFeedFlowView:(id)arg1 customSupplementaryViewOfKind:(id)arg2 atIndexPath:(id)arg3;
- (void)updateHeaderViewHashTable:(id)arg1;
- (BOOL)finderFeedFlowView:(id)arg1 isCustomCellAtIndexPath:(id)arg2;
- (void)finderFeedFlowView:(id)arg1 updateCell:(id)arg2 atIndexPath:(id)arg3;
- (void)onFinderFeedFlowViewDelete:(id)arg1 indexPath:(id)arg2;
- (void)onFinderFeedFlowViewAnchor:(id)arg1;
- (void)onClickAnchorAction:(id)arg1;
- (void)onClickDeleteAction:(id)arg1 contentVM:(id)arg2;
- (id)finderFeedFlowView:(id)arg1 customCellAtIndexPath:(id)arg2;
- (double)finderFeedFlowView:(id)arg1 heightForCustomCellAtIndexPath:(id)arg2 itemWidth:(double)arg3;
- (id)getFinderSearchHighLightItemModelAtIndexPath:(id)arg1;
- (void)businessCustomListDetailRemainSection:(long long)arg1;
- (void)businessCustomListDetailDidDisappear;
- (void)handleDeleteMsgActionWithMsg:(id)arg1;
- (void)doDelMsgWithMsg:(id)arg1;
- (BOOL)checkIsDetailContentMode;
- (BOOL)checkCellIndexPathValidInSection:(long long)arg1 Row:(long long)arg2;
- (id)getSearchResultInSection:(long long)arg1 Row:(long long)arg2;
- (id)createCellForModeSearchViewTable:(id)arg1;
- (void)wcSearcherTableViewForMode:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3;
- (void)genAllMergeArrResultMessagr;
- (id)getSearchResultOneBatch;
- (id)genMsgFileBrowseItemViewWithWrap:(id)arg1;
- (double)getMsgFileBrowseItemViewMax;
- (BOOL)checkMsgImgMatch:(id)arg1 msgSearchType:(unsigned int)arg2;
- (id)genArrTabView;
- (id)genMsgSearchTabViewWithTabName:(id)arg1;
- (void)addMsgSearchTabViewWithTabName:(id)arg1 msgSearchType:(unsigned int)arg2 arrTabView:(id)arg3;
- (void)handleSelectMessage:(id)arg1;
- (id)getSearcherViewController;
- (void)openOpenSDKAppBrand:(id)arg1;
- (void)openWeApp:(id)arg1;
- (unsigned long long)getChatType;
- (BOOL)checkIsShowMusicMVWithMessageWrap:(id)arg1;
- (void)showImageTabHadNotBuildPriorityBuildLoding;
- (void)showImageTabHadNotBuildPriorityBuildDone;
- (unsigned int)getImageTabHadNotBuildPriorityBuildDoneloadingAddNumber;
- (void)showImageTabHadNotBuildPriorityBuildDoneAnimation:(unsigned int)arg1;
- (void)startHadNotBuildPriorityBuildLodingTimer;
- (void)cancelHadNotBuildPriorityBuildLodingTimer;
- (void)doHadNotBuildPriorityBuildLodingTimer;
- (void)startHadBuildPriorityBuildLodeDoneTimer;
- (void)cancelHadBuildPriorityBuildLodeDoneTimer;
- (void)doHadBuildPriorityBuildLodeDoneTimer;
- (void)onMenuOptionsShowOnCell:(id)arg1;
- (BOOL)canPerformAction:(SEL)arg1 forRowAtIndexPath:(id)arg2;
- (void)performAction:(SEL)arg1 forRowAtIndexPath:(id)arg2;
- (void)onMemuShowOnCell:(id)arg1;
- (void)onMemuNotFoucusOnCell:(id)arg1;
- (id)getFileBrowseItemIconImageByFileExt:(id)arg1;
- (id)initWithContentsController:(id)arg1;
- (void)initData;
- (void)initView;
- (void)initSearchBar;
- (void)initFTSDB;
- (void)setBUsePanCancelGesture:(BOOL)arg1;
- (void)searchBarResignFirstResponder;
- (void)initBackGroundView;
- (double)getButtonTitleFontSize;
- (void)onTapButton:(id)arg1;
- (void)logTapButton:(long long)arg1;
- (unsigned int)tranMsgLogTypeForIndex:(long long)arg1;
- (void)logSearch;
- (void)updateSearchFieldText:(id)arg1;
- (void)resetTypingAttributes;
- (void)msgSearchBarSearchByName;
- (void)msgSearchBarSearchByTime;
- (void)msgSearchBarSearchByPicture;
- (void)msgSearchBarSearchByFile;
- (void)msgSearchBarSearchByLink;
- (void)msgSearchBarSearchByMusic;
- (void)msgSearchBarSearchByPay;
- (void)msgSearchBarSearchByWeApp;
- (void)msgSearchBarSearchByFinder;
- (id)createBrowseVCWithType:(unsigned long long)arg1;
- (id)getViewController;
- (void)msgSearchBarWillPushByIndex:(long long)arg1;
- (void)msgSearchBarSearchByIndex:(long long)arg1;
- (void)reloadView;
- (void)resetBackGroundView;
- (BOOL)searchBarShouldBecomeFirstResponse;
- (id)searchBar;
- (void)fillSearchWordingCell:(id)arg1 withSearchText:(id)arg2;
- (void)fillSearcResultCell:(id)arg1 msgItem:(id)arg2 isImageContent:(BOOL)arg3;
- (void)fillSearcLoadMoreCell:(id)arg1;
- (void)fillSearcNoResultCell:(id)arg1;
- (void)startSearch:(id)arg1;
- (void)startSearch:(id)arg1 isLoadMore:(BOOL)arg2;
- (BOOL)resolveSpecialCmd:(id)arg1;
- (void)doExit;
- (void)tryFixSearchBarFrame;
- (void)fixSearchBarFrame;
- (id)getDisplayTextForMsg:(id)arg1;
- (void)clearSearchResult;
- (BOOL)isShowSearchTabSwitch;
- (BOOL)isCanSearchImage;
- (void)handleCancelSearch;
- (void)handleCancelCoreSearch;
- (double)getTableVisibleHeight;
- (double)getSearcherVisibleHeight;
- (BOOL)checkIsIntelligentAndAllTab;
- (unsigned int)getTotalMsgItemCount;
- (id)getChatContactUserName;
- (id)getNoResultSuffixStr;
- (id)getMatchArrKeyword;
- (void)addTabViewContainerToSearchContainerView;
- (void)reloadDataViewAndSetToTop;
- (void)reloadDataView;
- (void)resetTableViewViewContentInsetAndSetToTop;
- (void)resetTableViewViewContentInset;
- (void)hiddenWeakMediaMsgImageSquareThumbView;
- (void)msgSearchViewDidAppear;
- (long long)numberOfSectionsForSearchViewTable:(id)arg1;
- (long long)numberOfRowsInSection:(long long)arg1 ForSearchViewTable:(id)arg2;
- (id)cellForIndex:(id)arg1 ForSearchViewTable:(id)arg2;
- (id)cellForSearchViewTable:(id)arg1 index:(id)arg2;
- (double)heightForSearchViewTable:(id)arg1;
- (double)heightForHeaderInSection:(long long)arg1 ForSearchViewTable:(id)arg2;
- (id)titleForHeaderInSection:(long long)arg1 ForSearchViewTable:(id)arg2;
- (id)viewForHeaderInSection:(long long)arg1 ForSearchViewTable:(id)arg2;
- (void)wcSearchViewTableDidScroll:(id)arg1;
- (void)wcSearchViewTableDidEndDragging:(id)arg1 willDecelerate:(BOOL)arg2;
- (void)wcSearchViewTableDidEndDecelerating:(id)arg1;
- (void)wcSearchViewTableWillEndDragging:(id)arg1 withVelocity:(CGPoint)arg2 targetContentOffset:(CGPoint *)arg3;
- (void)wcSearchViewTableWillBeginDragging:(id)arg1;
- (void)didSearchViewTableSelect:(id)arg1;
- (void)wcSearcherWillDisplayCell:(id)arg1 forRowAtIndexPath:(id)arg2;
- (BOOL)wcSearcherShouldShowMenuForRowAtIndexPath:(id)arg1;
- (BOOL)wcSearcherCanPerformAction:(SEL)arg1 forRowAtIndexPath:(id)arg2 withSender:(id)arg3;
- (void)wcSearcherPerformAction:(SEL)arg1 forRowAtIndexPath:(id)arg2 withSender:(id)arg3;
- (void)wcSearcherTableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3;
- (void)doSearch:(id)arg1 Pre:(BOOL)arg2;
- (void)cancelSearch;
- (void)doClickCleanBtnForClassification;
- (void)finishSearch;
- (void)wcsSearchBarSearchButtonClicked:(id)arg1;
- (void)handlePanGesture:(id)arg1;
- (void)updateSearchVCPosition;
- (void)cancelMoveSearchVC;
- (void)moveSearchVCToRight;
- (void)removeSearchVC;
- (void)wcsSearchBarTextDidEndEditing:(id)arg1;
- (id)getSearchText:(id)arg1;
- (void)wcsSearchBar:(id)arg1 textDidChange:(id)arg2;
- (void)wcsDidPresentSearch:(id)arg1;
- (BOOL)wcsSearchBar:(id)arg1 shouldChangeTextInRange:(_NSRange)arg2 replacementText:(id)arg3;
- (void)cancelBtnDown;
- (void)wcsWillPresentSearch:(id)arg1;
- (void)wcsWillDismissSearch:(id)arg1;
- (void)wcsDidDismissSearch:(id)arg1;
- (void)dealloc;
- (void)startSearch;
- (BOOL)isSearchBarActive;
- (void)wcsSearchBarCancelButtonClicked:(id)arg1;
- (void)onSearchPanGestureMoveRight;
- (void)wcsAccessibilityPerformEscape:(id)arg1;
- (void)onMsgFileVCAccessibilityPerformEscape;
- (void)cancelSearchTextSelected;
- (void)makeHomePageTaskIfNil;
- (void)setHomepageNewestQuery:(id)arg1;
- (void)asyncSearchTextForHomePage:(id)arg1;
- (void)cancelFTSSearch;
- (id)getRealSearchText;
- (id)getSessionTotalMsgItem;
- (void)onMsgSearchTaskResultChanged:(BOOL)arg1 taskObj:(id)arg2;
- (void)handleAllTabMsgSearchTaskResultChanged;
- (void)handleMsgSearchTaskResultChanged;
- (void)stopAndClearLoadingView;
- (void)addSearchLoadMoreCell;
- (void)addSearchNoResultCell;
- (void)mergeIntelligentAndNomalResultReloadTableView;
- (void)doReportSessionMsgSearchResult;
- (void)handleFinderFeedTabMsgSearchTaskResultChanged;
- (BOOL)isMsgSearchResult:(id)arg1;
- (void)checkCellInfo:(id)arg1;
- (void)finderTabPageView:(id)arg1 didSelectIndex:(unsigned long long)arg2 msgSearchType:(unsigned int)arg3;
- (void)IntelligentMsgImgBrowseViewDidBePopedOrDismissed;
- (id)m_delegate;
- (void)setM_delegate:(id)arg1;
- (int)m_eMsgSearchHelperScene;
- (void)setM_eMsgSearchHelperScene:(int)arg1;
- (BOOL)m_bShowSearchByName;
- (void)setM_bShowSearchByName:(BOOL)arg1;
- (BOOL)m_bShowSearchByTime;
- (void)setM_bShowSearchByTime:(BOOL)arg1;
- (id)searcher;
- (void)setSearcher:(id)arg1;
- (BOOL)bUsePanCancelGesture;
- (void).cxx_destruct;
@end

