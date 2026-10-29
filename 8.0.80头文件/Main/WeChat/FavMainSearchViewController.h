@interface FavMainSearchViewController : FavBaseListViewController <FavSearchBarDelegate, FavSearchTopFilterViewDelegate, FavSearchExtendFilterPanelDelegate, FavItemActionHandlerDelegate, WCNetworkMediaPlayerDelegate, UIGestureRecognizerDelegate>
{
    FavItemActionHandler * m_actionHandler; // +0x120
    BOOL m_hasDefaultExpandedFilter; // +0x128
    MMUIWindow * m_fullScreenWindow; // +0x130
    BOOL m_shouldShowKeyboardOnNextAppear; // +0x138
    NSArray * m_searchMultiSelectScopeItems; // +0x140
    BOOL m_hasLoadedSearchMultiSelectScopeItems; // +0x148
    BOOL m_isLoadingSearchMultiSelectScopeItems; // +0x149
    unsigned long long m_searchMultiSelectScopeRequestId; // +0x150
    unsigned long long m_searchMultiSelectPendingIntent; // +0x158
    UIEdgeInsets m_searchMultiSelectOriginalTableContentInset; // +0x160
    UIEdgeInsets m_searchMultiSelectOriginalFinderContentInset; // +0x180
    UIEdgeInsets m_searchMultiSelectOriginalBrowseContentInset; // +0x1a0
    BOOL m_hasSearchMultiSelectOriginalTableContentInset; // +0x1c0
    BOOL m_hasSearchMultiSelectOriginalFinderContentInset; // +0x1c1
    BOOL m_hasSearchMultiSelectOriginalBrowseContentInset; // +0x1c2
    UIView * _searchBarContainer; // +0x1c8
    FavBatchSaveProgressToastPresenter * _batchSaveProgressToastPresenter; // +0x1d0
    UITapGestureRecognizer * _filterPanelDismissTapGesture; // +0x1d8
}
- (BOOL)shouldPreloadVisibleFavMPArticles;
- (id)init;
- (void)viewDidLoad;
- (void)reInit;
- (void)selectTag:(id)arg1;
- (void)setupActionHandler;
- (void)setupBatchSaveProgressToastPresenterIfNeeded;
- (BOOL)shouldShowBatchSaveProgressToast;
- (void)updateBatchSaveTaskPresentationForCurrentFilter;
- (BOOL)shouldEnableSearchScopeMultiSelect;
- (void)invalidateSearchMultiSelectScopeAndClearSelection:(BOOL)arg1;
- (void)applySearchMultiSelectPendingIntentIfNeeded;
- (void)loadSearchMultiSelectScopeItemsIfNeeded;
- (id)searchMultiSelectAllButtonWithSelected:(BOOL)arg1;
- (void)updateSearchMultiSelectAllButton;
- (void)onSearchMultiSelectSelectAll;
- (void)onSearchMultiSelectCancelAll;
- (void)applySearchMultiSelectLayoutEntering:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)onBeginEditing;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)didAddFavBrowseCollectionView;
- (BOOL)isEnableShowPinTop;
- (void)onTextEditChange:(id)arg1;
- (void)onStartSearch:(BOOL)arg1;
- (void)extendFilter;
- (void)expandFliterWithAnim:(BOOL)arg1;
- (void)favMainSearchAttachFilterPanelDismissTapIfNeeded;
- (BOOL)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (double)getSearchBarHeight;
- (BOOL)keepsSearchHeaderInMultiSelect;
- (void)updateSearchBarLayoutForNewMultiSelectEntering:(BOOL)arg1;
- (void)initNavigationBar;
- (void)initSearchHeader;
- (void)onShowEmptyView;
- (double)getHeaderContentInset;
- (double)getSearchBarBottom;
- (double)getSearchBarTop;
- (BOOL)shouldResignSearchBarOnExtendFilter;
- (void)onUpdateUnexistItem:(id)arg1;
- (BOOL)isNewSearchMode;
- (BOOL)useTransparentNavibar;
- (BOOL)showNavigationBarSepLine;
- (void)onBackClick;
- (unsigned int)entranceScene;
- (void)updateData;
- (BOOL)canPerformAction:(SEL)arg1 forRowAtIndexPath:(id)arg2;
- (void)performAction:(SEL)arg1 forRowAtIndexPath:(id)arg2;
- (void)commitEditingStyle:(long long)arg1 forRowAtIndexPath:(id)arg2;
- (void)actionHandlerDidDeleteItems:(id)arg1;
- (void)actionHandlerDidEditTagForItems:(id)arg1;
- (void)actionHandlerDidForwardItems:(id)arg1;
- (void)actionHandlerShowContextForItem:(id)arg1 dataItem:(id)arg2 indexPath:(id)arg3;
- (void)onExtendFilterPanelDidScroll:(id)arg1;
- (void)setSearchHeaderHidden:(BOOL)arg1;
- (void)actionHandlerWillEnterMultiSelectMode;
- (void)actionHandlerDidEnterMultiSelectMode;
- (void)actionHandlerWillExitMultiSelectMode;
- (void)actionHandlerDidExitMultiSelectMode;
- (void)actionHandlerReportDownloadButtonExposure;
- (void)actionHandlerReportDownloadButtonClickWithParams:(id)arg1;
- (void)actionHandlerRequestStartLoading;
- (void)actionHandlerRequestStopLoading;
- (void)actionHandlerReportHalfScreenButtonExposureWithParams:(id)arg1;
- (void)actionHandlerReportHalfScreenButtonClick:(long long)arg1 params:(id)arg2;
- (void)actionHandlerReportSelectAllButtonExposure;
- (void)actionHandlerReportSelectAllButtonClick;
- (void)actionHandlerReportCancelSelectAllButtonExposure;
- (void)actionHandlerReportCancelSelectAllButtonClick;
- (void)showContextForItem:(id)arg1 dataItem:(id)arg2 fromScene:(unsigned int)arg3 favIndex:(unsigned int)arg4 searchText:(id)arg5 needReport:(BOOL)arg6;
- (void)onShowFavContext:(id)arg1 DataItem:(id)arg2 NeedReport:(BOOL)arg3 FromScene:(unsigned int)arg4 FavIndex:(unsigned int)arg5 SearchText:(id)arg6;
- (void)onLongPressSquareImg:(id)arg1 withInfo:(id)arg2;
- (void)onImageLongPressEnterMultiSelect:(id)arg1;
- (void)onSquareImgClicked:(id)arg1 withInfo:(id)arg2 withOffset:(double)arg3;
- (BOOL)favBrowseView:(id)arg1 willChangeCheckMarkTo:(BOOL)arg2 withMsgInfo:(id)arg3;
- (void)favBrowseView:(id)arg1 didChangeCheckMarkTo:(BOOL)arg2 withMsgInfo:(id)arg3;
- (void)onMultiSelect;
- (void)onSelectRowAtIndexPath:(id)arg1;
- (void)onSelectFavItem:(id)arg1 tableView:(id)arg2 atIndexPath:(id)arg3 fromScene:(unsigned int)arg4 favIndex:(unsigned int)arg5 searchText:(id)arg6 withCell:(id)arg7;
- (void)onSelectFavItem:(id)arg1 thumbView:(id)arg2 atIndexPath:(id)arg3;
- (void)onSelectFavDataItem:(id)arg1 tableView:(id)arg2 atIndexPath:(id)arg3;
- (void)applyFinderFeedMultiSelectLayoutEntering:(BOOL)arg1;
- (id)selectedFavoriteItemsFromFinderFeedForMultiSelect;
- (void)finderFeedFlowView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (void)finderFeedFlowView:(id)arg1 updateCell:(id)arg2 atIndexPath:(id)arg3;
- (void)onFinderFeedFlowViewMultiSelect:(id)arg1;
- (void)onFinderFeedFlowViewChangeMultiSelect;
- (void)onFinderFeedLongPress:(id)arg1;
- (void)onFinderFeedFlowViewForward:(id)arg1;
- (void)onFinderFeedFlowViewEditTag:(id)arg1;
- (void)onFinderFeedFlowViewDelete:(id)arg1 indexPath:(id)arg2;
- (void)jumpToViewStreamVideo:(id)arg1;
- (BOOL)stopAtLastVideoFrameWhenPlayEnd;
- (void)onClosePlayer;
- (id)searchBarContainer;
- (void)setSearchBarContainer:(id)arg1;
- (id)batchSaveProgressToastPresenter;
- (void)setBatchSaveProgressToastPresenter:(id)arg1;
- (id)filterPanelDismissTapGesture;
- (void)setFilterPanelDismissTapGesture:(id)arg1;
- (void).cxx_destruct;
@end
