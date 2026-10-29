@interface FavBaseListViewController : MMUIViewController <FavSearchBarDelegate, FavSearchExtendFilterPanelDelegate, FavSearchTopFilterViewDelegate, FavRelatedTagDelegate, WCFinderFeedFlowViewDataSource, WCFinderFeedFlowViewDelegate, WCFinderBusinessCustomListDetailViewControllerDelegate, WCFinderFeedBaseViewControllerProtocol, WCFinderFeedFlowViewLayoutDelegate, FavAIAskButtonControllerDataSource, UIGestureRecognizerDelegate, WALocationGetterDelegate, FavBaseTableDataControllerDelegate, IFavoritesExt, FavBrowseCollectionViewDelegate, MMFavCellComponentDelegate, FavAddressDataControllerDelegate, FavFullScreenImageViewControllerDelegate>
{
    unsigned int m_curMinItemUpdateTime; // +0x70
    unsigned int m_curMinItemPinTopTime; // +0x74
    NSString * m_searchTaskKey; // +0x78
    unsigned long long m_cellStyle; // +0x80
    MMTableView * m_tableView; // +0x88
    UIView * m_emptyView; // +0x90
    UIView * m_loadingView; // +0x98
    MMUILabel * m_emptySearchLabel; // +0xa0
    WCFinderFeedFlowView * m_feedFlowView; // +0xa8
    NSMutableArray * m_arrFinderItems; // +0xb0
    unsigned long long m_feedFlowViewState; // +0xb8
    WCFinderBusinessCustomListDetailViewController * m_feedDetailViewController; // +0xc0
    FavBaseTableDataController * m_dataController; // +0xc8
    FavAddressDataController * m_addressDataController; // +0xd0
    FavSearchBar * m_searchBar; // +0xd8
    FavSearchTopFilterView * m_topFilter; // +0xe0
    FavSearchExtendFilterPanel * m_filterExtendPanel; // +0xe8
    MMUIView * m_containView; // +0xf0
    MMUIView * m_maskView; // +0xf8
    BOOL m_hasItemUpdate; // +0x100
    UIView * m_navigationBarBackground; // +0x108
    UIView * m_navigationSep; // +0x110
    BOOL m_duringAnimation; // +0x118
    BOOL m_bReceiveSearchResult; // +0x119
    NSMutableArray * m_toCheckTypes; // +0x120
    NSMutableArray * m_checkedTypes; // +0x128
    NSDictionary * m_filterTypeToName; // +0x130
    NSMutableDictionary * m_typeCount; // +0x138
    NSDictionary * m_filterNameToType; // +0x140
    NSString * m_checkFilterSearchKey; // +0x148
    MMUIActivityIndicatorView * m_searchLoadingView; // +0x150
    int m_preResultCount; // +0x158
    NSMutableSet * m_searchTagsFromCard; // +0x160
    unsigned long long showFinderTime; // +0x168
    BOOL m_hasSelectedTypeSinceInit; // +0x170
    id /* block */ m_afterPresectHandler; // +0x178
    UIView * m_foldTopView; // +0x180
    UILabel * m_foldTopLabel; // +0x188
    MMUIButton * m_foldTopButton; // +0x190
    BOOL m_isAnimatingToVisible; // +0x198
    BOOL m_isAnimatingToHidden; // +0x199
    FavServerSearchAdapter * m_serverSearchAdapter; // +0x1a0
    BOOL m_isServerSearch; // +0x1a8
    UIView * m_serverSearchHintView; // +0x1b0
    int m_indexFinishRetryCount; // +0x1b8
    NSMutableArray * m_flatPOIDataWraps; // +0x1c0
    WALocationGetter * m_flatPOILocationGetter; // +0x1c8
    CLLocation * m_flatPOICurrentLocation; // +0x1d0
    BOOL m_flatPOIDataComplete; // +0x1d8
    FavDebugFloatingView * m_debugFloatingView; // +0x1e0
    BOOL _hasReportedFoldableStatus; // +0x1e8
    BOOL _suppressNextConvertedNoteAutoScroll; // +0x1e9
    BOOL _starredOnly; // +0x1ea
    BOOL _lastStarredOnly; // +0x1eb
    BOOL _recentUsedOnly; // +0x1ec
    BOOL _lastRecentUsedOnly; // +0x1ed
    BOOL _lastPanelTransientTypeSelected; // +0x1ee
    BOOL _panelTransientTypeSelected; // +0x1ef
    unsigned int _enterPageTimeInS; // +0x1f0
    long long _selectedType; // +0x1f8
    NSArray * _selectedTags; // +0x200
    NSString * _searchText; // +0x208
    NSString * _defaultTitle; // +0x210
    UIColor * _backgroundColor; // +0x218
    unsigned long long _reportEnterFrom; // +0x220
    NSString * _favHomepageSessionid; // +0x228
    NSArray * _displayItemTypes; // +0x230
    FavBrowseCollectionView * _favBrowseCollectionView; // +0x238
    NSMutableArray * _arrImgInfo; // +0x240
    long long _tabMode; // +0x248
    FavSearchTopFilterViewV2 * _topFilterRedesign; // +0x250
    FavSearchExtendFilterPanelV2 * _filterExtendPanelRedesign; // +0x258
    NSString * _panelTransientType; // +0x260
    NSMutableArray * _panelTransientTags; // +0x268
    NSMutableSet * _panelSelectedTransientTags; // +0x270
    FavAIAskButtonController * _aiAskButtonController; // +0x278
    UIImageView * _longPressNoteConversionSnapshot; // +0x280
}
- (BOOL)usesFilterRedesignUI;
- (id)activeTopFilterView;
- (id)activeExtendFilterPanelView;
- (void)activeTopFilter_updateWithWidth:(double)arg1;
- (void)activeTopFilter_setTypes:(id)arg1;
- (void)activeTopFilter_setTags:(id)arg1;
- (void)activeTopFilter_setSelectedTypeNames:(id)arg1 selectedTagNames:(id)arg2;
- (void)activeExtendPanel_updateWithWidth:(double)arg1;
- (void)activeExtendPanel_clearSelection;
- (void)clearRedesignActiveFiltersKeepDisplayedChips;
- (void)resetRedesignFilterSession;
- (void)activeExtendPanel_setTag:(id)arg1 selected:(BOOL)arg2;
- (void)activeExtendPanel_setTags:(id)arg1 withTitle:(id)arg2;
- (void)activeExtendPanel_selectType:(id)arg1;
- (void)activeExtendPanel_cancelType;
- (void)activeExtendPanel_setTypes:(id)arg1 withTitle:(id)arg2;
- (void)activeExtendPanel_setQuickFilters:(id)arg1;
- (void)activeExtendPanel_setQuickFilterSelectedNames:(id)arg1;
- (void)activeExtendPanel_resetScrollPosition;
- (id)init;
- (BOOL)isDualTabMode;
- (id)initWithFilterTypeDic:(id)arg1;
- (void)preSetSelectedType:(id)arg1;
- (id)itemTypeBitForPresetFilter:(long long)arg1;
- (void)preSetSelectedFilter:(long long)arg1;
- (void)scrollToTop;
- (id)beginLongPressNoteConversionSnapshot;
- (void)finishLongPressNoteConversionSnapshot:(id)arg1 completed:(BOOL)arg2;
- (void)prepareFlatPOILocationForDisplayType:(long long)arg1;
- (double)distanceFromCurrentLocationForFlatPOIDataWrap:(id)arg1;
- (id)sortedFlatPOIDataWraps:(id)arg1;
- (void)reloadFlatPOIData;
- (void)updateData;
- (void)updateReport;
- (unsigned int)entranceScene;
- (unsigned int)getTagSearchScene;
- (BOOL)itemEditable;
- (void)viewDidLoad;
- (void)setupAIAskButtonIfNeeded;
- (void)refreshAIAskButton;
- (void)traitCollectionDidChange:(id)arg1;
- (BOOL)favAIAskButtonIsOnSearch;
- (BOOL)favAIAskButtonIsSearchBarFirstResponder;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (BOOL)shouldPreloadVisibleFavMPArticles;
- (void)schedulePreloadVisibleFavMPArticles;
- (void)onScrollViewDidBecomeIdle:(id)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewDidBePushed:(BOOL)arg1;
- (void)viewDidBeDismissed:(BOOL)arg1;
- (void)viewDidBePoped:(BOOL)arg1;
- (void)cancelServerSearch;
- (void)clearSearch;
- (void)viewDidTransitionToNewSize;
- (void)viewDidLayoutSubviews;
- (BOOL)keepsSearchHeaderInMultiSelect;
- (BOOL)usesNewFavMultiSelectCheckBoxStyle;
- (double)feedFlowViewContentTop;
- (void)updateFeedFlowViewFrame;
- (void)updateContentFrame;
- (BOOL)isEnableShowPinTop;
- (void)didReceiveMemoryWarning;
- (void)dealloc;
- (void)initNavigationBar;
- (void)initTableView;
- (void)applyRedesignTableViewSectionLayoutIfNeeded;
- (void)initSearchType;
- (void)initSearchHeader;
- (void)updateSearchHeader;
- (void)updateSearchHeaderPreservingVisualOffset:(double)arg1;
- (void)updateRedesignSearchHeaderLayout;
- (double)getRedesignFilterVerticalGap;
- (double)getRedesignListContentTopY;
- (double)getFavoritesListHeaderAnchorY;
- (double)getRedesignNavigationHeaderHeight;
- (double)getExtendPanelBottomCornerRadius;
- (void)applyDuoFixedHeightToExtendPanel:(id)arg1 panelTop:(double)arg2;
- (void)syncRedesignExtendPanelLayoutAnchor;
- (double)getHeaderContentInset;
- (double)getSearchBarBottom;
- (double)favNavigationBottom;
- (double)getSearchBarTop;
- (void)initLoadingView;
- (void)initEmptyView;
- (BOOL)isExtendFilterPanelShowing;
- (void)hideSearchOverlaysForExtendFilterPanel;
- (void)restoreSearchOverlaysAfterExtendFilterPanelDismiss;
- (void)showSearchLoading;
- (void)setSearchLoading:(BOOL)arg1;
- (void)initEmptySearchLabel;
- (void)setSearchEmpty:(BOOL)arg1;
- (void)initFilterDataWithFilterTypeDic:(id)arg1;
- (void)prefetchFilterDataSynchronously;
- (BOOL)applyCachedFilterDataIfPossible:(id)arg1;
- (void)checkFilterData;
- (void)onCheckTypeWithResultCount:(int)arg1;
- (id)getCheckedTypes;
- (BOOL)useBlackStatusbar;
- (BOOL)showNavigationBarSepLine;
- (BOOL)useTransparentNavibar;
- (BOOL)shouldResignSearchBarOnExtendFilter;
- (void)extendFilter;
- (BOOL)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (void)dismissFilterPanel;
- (void)dismissFilterPanelWithAnimation:(BOOL)arg1;
- (void)dismissFilterPanelEnd;
- (void)dismissFilterPanelComplete;
- (void)bringTopFilterBarToFront;
- (void)setSearchHeaderHidden:(BOOL)arg1;
- (double)getSearchBarHeight;
- (BOOL)isSearchBarEditing;
- (void)updateTypeFilterWith:(id)arg1;
- (void)updateTagFilter;
- (BOOL)isOnSearch;
- (BOOL)isStarredOnlyFilterActive;
- (double)getContentOffsetAfterAdd:(id)arg1;
- (double)getHeightForItem:(id)arg1;
- (void)addItemList:(id)arg1;
- (void)addItemList:(id)arg1 withAutoScrollToAddPositon:(BOOL)arg2;
- (void)reloadContent;
- (void)hideLoadingView;
- (BOOL)shouldUseRecentFavoritesList;
- (long long)activeCategoryTypeBitForFilter;
- (int)favSearchTypeMaskForItem:(id)arg1;
- (BOOL)favoritesItem:(id)arg1 matchesTypeBit:(long long)arg2;
- (id)filterFavoritesItems:(id)arg1 byTypeBit:(long long)arg2;
- (id)filteredRecentFavoritesItems;
- (void)tearDownCategorySpecificResultViews;
- (BOOL)presentFilteredItems:(id)arg1 append:(BOOL)arg2 hasMoreData:(BOOL)arg3;
- (void)updateSearchEmptyStateAfterPresentingResults;
- (void)updateRecentData;
- (void)initFeedFlowView;
- (id)convertFeedContentVMsToCustomBusinessFeedIDModels:(id)arg1;
- (void)setFeedDetailViewController:(id)arg1;
- (id)getArrFinderItems;
- (id)filterNameForType:(long long)arg1;
- (double)finderFilterContentHorizontalMargin;
- (UIEdgeInsets)finderFeedFlowView:(id)arg1 edgeInsetsAtSection:(unsigned long long)arg2;
- (id)finderFeedFlowViewCurrentViewController:(id)arg1;
- (id)finderFeedFlowView:(id)arg1 cellConfigAtIndexPath:(id)arg2;
- (void)finderFeedFlowView:(id)arg1 requestDataWithType:(unsigned long long)arg2;
- (unsigned long long)finderFeedFlowViewState:(id)arg1;
- (void)finderFeedFlowViewDidScroll:(id)arg1;
- (long long)finderFeedFlowView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (id)finderFeedFlowView:(id)arg1 contentVMAtIndexPath:(id)arg2;
- (void)initFastBrowserView;
- (void)didAddFavBrowseCollectionView;
- (void)initFastBrowserViewFooterView;
- (BOOL)tryOpenBrandMpVideoWithInfo:(id)arg1 thumbView:(id)arg2;
- (void)onShowEmptyView;
- (BOOL)isNewSearchMode;
- (void)onHideEmptyView;
- (void)onUpdateUnexistItem:(id)arg1;
- (void)onSelectRowAtIndexPath:(id)arg1;
- (void)onSelectLocationItemAtIndexPath:(id)arg1;
- (void)onScrollViewDidScroll:(id)arg1;
- (void)onScrollViewWillBeginDragging:(id)arg1;
- (long long)getSelectedType;
- (void)onGetLocationSuccess:(id)arg1;
- (void)onGetLocationFailedWithReason:(unsigned long long)arg1;
- (void)OnHasAnyFavoriteData:(BOOL)arg1;
- (void)OnGetFirstPageFavoritesItemList:(id)arg1 IsSuccess:(BOOL)arg2 HasMoreItems:(BOOL)arg3 tabMode:(long long)arg4;
- (void)OnGetNextPageFavoritesItemList:(id)arg1 IsSuccess:(BOOL)arg2 HasMoreItems:(BOOL)arg3 tabMode:(long long)arg4;
- (void)handleGetFavoritesItemList:(id)arg1 IsSuccess:(BOOL)arg2 HasMoreItems:(BOOL)arg3;
- (void)OnAddNewFavoritesItems:(id)arg1;
- (id)filterItemListByTabMode:(id)arg1;
- (id)filterOutStarItemsIfNeeded:(id)arg1;
- (id)applyStarTypeFilterForDisplay:(id)arg1;
- (void)prefetchRedesignTopFilterQuickItems;
- (id)redesignQuickTypeNames;
- (id)redesignTopFilterTypeNames;
- (void)updateTopFilterQuickItems;
- (id)getExtendPanelQuickFilters;
- (void)updateStarFilterAvailability;
- (id)getExtendPanelTypes;
- (id)currentQuickFilterSelectedNames;
- (void)syncLegacyFilterPanelState;
- (void)syncRedesignTopFilterChips;
- (void)syncTopFilterSelectedState;
- (void)updateExtendPanelTypes;
- (BOOL)isWeNoteMode;
- (long long)getSearchMethodOnReport;
- (void)presentFavSearchFeedbackSheet;
- (void)updateServerSearchHintWithQuery:(id)arg1 resultCount:(long long)arg2;
- (void)removeServerSearchHint;
- (void)OnFavIndexFinished;
- (void)OnSearch:(id)arg1 taskKey:(id)arg2;
- (BOOL)hasTingListenListBar;
- (void)initTingListenListBar;
- (void)openFavMusicListProfile:(id)arg1;
- (id)filterMusicItemBySelectedType:(long long)arg1 resultArr:(id)arg2;
- (id)genFinderDataItemsWith:(id)arg1;
- (BOOL)updateTagSearchResult;
- (void)OnUpdateItems:(id)arg1;
- (void)OnFavItemPartialChanged:(id)arg1 reason:(unsigned long long)arg2;
- (void)OnTagListUpdate;
- (void)OnDelFavoritesItems:(id)arg1;
- (id)getCurrentViewController;
- (void)onLoadMore;
- (void)onReloadData;
- (void)onAddressViewDidScroll:(id)arg1;
- (unsigned long long)cellStyle;
- (unsigned long long)locationSubPageSelectMode;
- (id)getSelectedDic;
- (unsigned long long)getMaxSelectedCount;
- (void)onSearchBarMoved:(id)arg1;
- (void)onDeleteTag:(id)arg1;
- (void)onDeleteType:(id)arg1;
- (void)onDeleteStarFilter;
- (void)onStartSearch:(BOOL)arg1;
- (void)onBeginEditing;
- (void)realSearch;
- (void)onSelectType:(id)arg1;
- (void)onSelectRecentUsedFilter;
- (void)onSelectStarredFilter;
- (void)onSelectTag:(id)arg1;
- (void)onClickExtendBtn;
- (void)onExtendBtnExposed;
- (void)onQuickFilterExposed;
- (void)onQuickFilterClicked:(long long)arg1 tabName:(id)arg2 sessionId:(id)arg3;
- (void)onTotalFilterClicked:(long long)arg1 tabName:(id)arg2;
- (id)getFavHomepageSessionId;
- (void)onSelectTypeFromExtendPanel:(id)arg1;
- (void)onCancelTypeFromExtendPanel:(id)arg1;
- (void)onSelectTagFromExtendPanel:(id)arg1;
- (void)onCancelTagFromExtendPanel:(id)arg1;
- (void)onUpdateTag:(id)arg1 to:(id)arg2 fromFilter:(id)arg3;
- (void)onHideExtendFilterPanel;
- (double)getContentViewY;
- (id)messageWrapsForFavBrowseView:(id)arg1;
- (int)getIndexOfImage:(id)arg1;
- (void)onFavBrowseViewGetMoreMsg:(id)arg1 Last:(BOOL)arg2 Next:(BOOL)arg3;
- (void)checkAndLoadMoreIfNeeded;
- (void)onFavBrowseViewWillBeginDragging:(id)arg1;
- (void)onFavBrowseViewDidScroll:(id)arg1;
- (void)selectTag:(id)arg1 fromFilter:(id)arg2;
- (void)deselectTag:(id)arg1 fromFilter:(id)arg2;
- (void)onClickTagButtonWithTagName:(id)arg1;
- (BOOL)enableTingListMode;
- (void)businessCustomListDetailRemainSection:(long long)arg1;
- (int)feedViewControllerScene;
- (unsigned long long)feedViewerScene;
- (id)getOriginImageViewWithSimpleImgInfo:(id)arg1;
- (void)reportSearchItemClickedAtPosition:(long long)arg1 withFavItem:(id)arg2 listType:(id)arg3;
- (void)initBottomPinTopButton;
- (void)handleFoldTopViewTap;
- (void)handleFoldTopViewPress:(id)arg1;
- (void)autoSetBottomPinTopButtonVisible;
- (void)updateFoldTopViewVisibility:(BOOL)arg1 animated:(BOOL)arg2;
- (void)onFoldButtonStatusDetermined;
- (void)doReport14103;
- (long long)selectedType;
- (id)selectedTags;
- (id)searchText;
- (id)defaultTitle;
- (void)setDefaultTitle:(id)arg1;
- (id)backgroundColor;
- (void)setBackgroundColor:(id)arg1;
- (unsigned int)enterPageTimeInS;
- (void)setEnterPageTimeInS:(unsigned int)arg1;
- (unsigned long long)reportEnterFrom;
- (void)setReportEnterFrom:(unsigned long long)arg1;
- (BOOL)hasReportedFoldableStatus;
- (void)setHasReportedFoldableStatus:(BOOL)arg1;
- (id)favHomepageSessionid;
- (void)setFavHomepageSessionid:(id)arg1;
- (id)displayItemTypes;
- (void)setDisplayItemTypes:(id)arg1;
- (id)favBrowseCollectionView;
- (void)setFavBrowseCollectionView:(id)arg1;
- (id)arrImgInfo;
- (void)setArrImgInfo:(id)arg1;
- (long long)tabMode;
- (void)setTabMode:(long long)arg1;
- (id)topFilterRedesign;
- (void)setTopFilterRedesign:(id)arg1;
- (id)filterExtendPanelRedesign;
- (void)setFilterExtendPanelRedesign:(id)arg1;
- (BOOL)suppressNextConvertedNoteAutoScroll;
- (void)setSuppressNextConvertedNoteAutoScroll:(BOOL)arg1;
- (BOOL)starredOnly;
- (void)setStarredOnly:(BOOL)arg1;
- (BOOL)lastStarredOnly;
- (void)setLastStarredOnly:(BOOL)arg1;
- (BOOL)recentUsedOnly;
- (void)setRecentUsedOnly:(BOOL)arg1;
- (BOOL)lastRecentUsedOnly;
- (void)setLastRecentUsedOnly:(BOOL)arg1;
- (BOOL)lastPanelTransientTypeSelected;
- (void)setLastPanelTransientTypeSelected:(BOOL)arg1;
- (id)panelTransientType;
- (void)setPanelTransientType:(id)arg1;
- (BOOL)panelTransientTypeSelected;
- (void)setPanelTransientTypeSelected:(BOOL)arg1;
- (id)panelTransientTags;
- (void)setPanelTransientTags:(id)arg1;
- (id)panelSelectedTransientTags;
- (void)setPanelSelectedTransientTags:(id)arg1;
- (id)aiAskButtonController;
- (void)setAiAskButtonController:(id)arg1;
- (id)longPressNoteConversionSnapshot;
- (void)setLongPressNoteConversionSnapshot:(id)arg1;
- (void).cxx_destruct;
@end
