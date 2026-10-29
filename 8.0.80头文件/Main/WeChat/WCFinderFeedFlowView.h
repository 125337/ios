@interface WCFinderFeedFlowView : UIView <WCFinderFlowLayoutDelegate, UICollectionViewDataSource, UICollectionViewDelegate, WCFinderStreamLayoutDelegate, WCFinderFeedStaticCoverCollectionViewCellDelegate, WCFinderFlowTopTipsViewDelegate, WCFinderStreamFooterViewActionDelegate, WCFinderEmptyTipsViewDelegate, WCGeneralMonitorDelegate, WCFinderFeedFlowLiveCellDelegate, WCFinderFeedStaticCoverCollectionViewCellDataSource>
{
    BOOL _enableGradientEffect; // +0x8
    BOOL _observeredByPageContainer; // +0x9
    BOOL _enableFooterJumpType; // +0xa
    BOOL _disableLiveAutoPlay; // +0xb
    BOOL _showCheckMark; // +0xc
    BOOL _viewCurrentAppear; // +0xd
    BOOL _forbidAutoPlayCell; // +0xe
    unsigned long long flowFeedViewPreloadIndex; // +0x10
    UICollectionView * _collectionView; // +0x18
    WCFinderStreamLayout * _streamLayout; // +0x20
    WCFinderFlowTopTipsView * _topTipsView; // +0x28
    WCFinderEmptyTipsView * _emptyTipsView; // +0x30
    WCFinderStreamFooterView * _footerView; // +0x38
    id <WCFinderFeedFlowViewDataSource> _dataSource; // +0x40
    id <WCFinderFeedFlowViewDelegate> _delegate; // +0x48
    id <WCFinderFeedFlowViewLayoutDelegate> _layoutDelegate; // +0x50
    id <WCFinderFeedFlowViewMonitorDelegate> _monitorDelegate; // +0x58
    id <WCFinderFeedFlowViewSelectionDelegate> _selectionDelegate; // +0x60
    unsigned long long _consumerType; // +0x68
    NSString * _emptyTipsText; // +0x70
    NSString * _noMoreDataTipsText; // +0x78
    UIView * _topHeaderView; // +0x80
    long long _layoutType; // +0x88
    unsigned long long _topTipsViewLoadingState; // +0x90
    unsigned long long _emptyTipsViewLoadingState; // +0x98
    unsigned long long _footerViewLoadingState; // +0xa0
    NSIndexPath * _appendedIndexPath; // +0xa8
    unsigned long long _state; // +0xb0
    NSMutableDictionary * _exposeTimeDict; // +0xb8
    NSMutableDictionary * _displayingCellPtrDict; // +0xc0
    UIImage * _topLoadingImage; // +0xc8
    UIImage * _centerLoadingImage; // +0xd0
    NSMutableArray * _selectedContentVMs; // +0xd8
    CGPoint _contentOffset; // +0xe0
    UIEdgeInsets _contentInset; // +0xf0
}
+ (id)flowLayoutFeedFlowView;
+ (id)flowLayoutFeedFlowView:(CGRect)arg1;
+ (unsigned long long)defaultColumnCount;
+ (CGSize)defaultCellSpace;
- (void)ls_interuptUserAction;
- (void)ls_recoverUserAction;
- (long long)collectionView:(id)arg1 flowLayout:(id)arg2 columnForSection:(long long)arg3;
- (double)collectionView:(id)arg1 flowLayout:(id)arg2 heightForIndexPath:(id)arg3 width:(double)arg4;
- (double)collectionView:(id)arg1 flowLayout:(id)arg2 itemPaddingForSection:(long long)arg3;
- (double)collectionView:(id)arg1 headerHeight:(long long)arg2;
- (double)collectionView:(id)arg1 footerHeight:(long long)arg2;
- (BOOL)collectionView:(id)arg1 flowLayout:(id)arg2 pinHeader:(long long)arg3;
- (void)collectionView:(id)arg1 insets:(UIEdgeInsets *)arg2 forSection:(long long)arg3;
- (void)GetStreamAutoPlayFirstRowIndexPaths:(id *)arg1 rightIndexPath:(id *)arg2 filterBlock:(id /* block */)arg3;
- (void)GetStreamAutoPlayFirstRowIndexPaths:(id *)arg1 rightIndexPath:(id *)arg2 exposeRatio:(double)arg3 filterBlock:(id /* block */)arg4;
- (void)GetStreamAutoPlayDoubleRowIndexPaths:(id *)arg1 firstRowRight:(id *)arg2 secondRowLeft:(id *)arg3 secondRowRight:(id *)arg4 firstRowExposeRatio:(double)arg5 secondRowExposeRatio:(double)arg6 filterBlock:(id /* block */)arg7;
- (BOOL)isStreamCellFullExpose:(id)arg1;
- (BOOL)isStreamCellExposed:(id)arg1 exposeRatio:(double)arg2;
- (BOOL)isAutoPlayValid:(id)arg1;
- (unsigned long long)autoPlayColumnCountForSection:(unsigned long long)arg1;
- (id)GetStreamAutoPlayFirstRowIndexPathsWithColumnCount:(unsigned long long)arg1 exposeRatio:(double)arg2 maxCount:(unsigned long long)arg3 filterBlock:(id /* block */)arg4;
- (id)getFullyExposedPlayUnits:(id)arg1 horizontalScrollViews:(id)arg2 aggregationAdapters:(id)arg3 autoPlayMode:(unsigned long long)arg4 filterBlock:(id /* block */)arg5;
- (id)filterAndSortVisibleIndexPaths:(id)arg1 filterBlock:(id /* block */)arg2;
- (id)createPlayUnits:(id)arg1 sectionVMs:(id)arg2 horizontalScrollViews:(id)arg3 aggregationAdapters:(id)arg4 autoPlayMode:(unsigned long long)arg5;
- (void)createBannerUnit:(id)arg1 section:(unsigned long long)arg2 sectionVM:(id)arg3 cell:(id)arg4 horizontalScrollViews:(id)arg5;
- (void)createSpecialColumnUnit:(id)arg1 section:(unsigned long long)arg2 sectionVM:(id)arg3 cell:(id)arg4 horizontalScrollViews:(id)arg5;
- (void)createAggregationTabUnit:(id)arg1 section:(unsigned long long)arg2 sectionVM:(id)arg3 cell:(id)arg4 aggregationAdapters:(id)arg5 autoPlayMode:(unsigned long long)arg6;
- (void)createDoubleColumnUnit:(id)arg1 section:(unsigned long long)arg2 sectionVM:(id)arg3 cell:(id)arg4;
- (void)calculateMultiColumnUnit:(id)arg1 exposeRatio:(double)arg2;
- (void)fallbackCalculateIfNeeded:(id)arg1 autoPlayMode:(unsigned long long)arg2;
- (void)calculateWithFallbackExposeRatio:(id)arg1 autoPlayMode:(unsigned long long)arg2;
- (void)calculateExposureAndIndexPaths:(id)arg1 autoPlayMode:(unsigned long long)arg2;
- (void)calculateVerticalUnitsWithHorizontalScroll:(id)arg1;
- (void)calculateVerticalUnitsWithoutHorizontalScroll:(id)arg1 autoPlayMode:(unsigned long long)arg2;
- (id)filterValidPlayUnits:(id)arg1;
- (id)getFullyExposedPlayUnits:(id)arg1 ctx:(id)arg2 filterBlock:(id /* block */)arg3;
- (void)performFeedFlowCollectionView:(id)arg1 beforeSelectedIndexPath:(id)arg2 business:(id /* block */)arg3;
- (id)indexPathForCurrentBrowserFeedTid:(id)arg1;
- (unsigned long long)flowFeedViewPreloadIndex;
- (void)setFlowFeedViewPreloadIndex:(unsigned long long)arg1;
- (id)initWithFrame:(CGRect)arg1;
- (id)initWithFrame:(CGRect)arg1 layoutType:(long long)arg2;
- (void)layoutSubviews;
- (void)setContentInset:(UIEdgeInsets)arg1;
- (void)setContentOffset:(CGPoint)arg1;
- (void)setContentOffset:(CGPoint)arg1 animated:(BOOL)arg2;
- (void)setMinContentSize:(CGSize)arg1;
- (CGSize)minContentSize;
- (void)setConsumerType:(unsigned long long)arg1;
- (void)setLoadingImage:(id)arg1 withTipsType:(unsigned long long)arg2;
- (void)setTopHeaderView:(id)arg1;
- (void)finderFeedFlowViewWillAppear;
- (void)finderFeedFlowViewDidAppear;
- (void)finderFeedFlowViewWillDisappear;
- (void)finderFeedFlowViewDidDisappear;
- (void)updateState;
- (void)appendForOS12From:(long long)arg1 toIndex:(long long)arg2 feedFlowSection:(unsigned long long)arg3;
- (void)appendContentVMFromSectionIndex:(long long)arg1 toSectionIndex:(long long)arg2;
- (void)appendContentVMFromSection:(unsigned long long)arg1 fromIndex:(long long)arg2 toIndex:(long long)arg3;
- (void)batchReplaceAndInsertContentVMsFromSection:(unsigned long long)arg1 replaceRange:(_NSRange)arg2 insertRange:(_NSRange)arg3;
- (void)batchReplaceAndRemoveContentVMsFromSection:(unsigned long long)arg1 replaceRange:(_NSRange)arg2 removeRange:(_NSRange)arg3;
- (void)setTopTipsViewColor:(id)arg1;
- (void)setEmptyTipsViewColor:(id)arg1;
- (void)setEmptyTipsLoadingSize:(double)arg1;
- (void)setFooterViewColor:(id)arg1;
- (void)setTopTipsViewHidden:(BOOL)arg1;
- (void)reset;
- (void)reloadData;
- (void)reloadItemsAtIndexPaths:(id)arg1;
- (void)setState:(unsigned long long)arg1;
- (void)setTopTipsViewState:(unsigned long long)arg1;
- (void)setEmptyTipsViewState:(unsigned long long)arg1;
- (void)setFooterState:(unsigned long long)arg1;
- (void)setEmptyTipsText:(id)arg1;
- (void)onFeedFlowViewEnterForeground;
- (void)onFeedFlowViewEnterBackground;
- (id)collectionView;
- (void)setOuterGestureRecognizer:(id)arg1;
- (id)createStreamLayout;
- (id)createFlowLayout;
- (id)topTipsView;
- (id)emptyTipsView;
- (double)getCurFooterHeight;
- (id)footerView;
- (id)exposeTimeDict;
- (long long)sectionNumber;
- (long long)feedFlowSection;
- (BOOL)isFeedsFlowSection:(long long)arg1;
- (long long)itemNumberAtSection:(long long)arg1;
- (id)getContentVMAtIndexPath:(id)arg1;
- (BOOL)isCustomCellAtIndexPath:(id)arg1;
- (id)getCustomCellAtIndexPath:(id)arg1;
- (BOOL)isCustomSupplementaryViewOfKind:(id)arg1 atSection:(long long)arg2;
- (id)getCustomSupplementaryViewOfKind:(id)arg1 atIndexPath:(id)arg2;
- (id)tipsConfigWithType:(unsigned long long)arg1 inState:(unsigned long long)arg2;
- (void)hiddenTopTipsViewWithCompletion:(id /* block */)arg1 animated:(BOOL)arg2 delay:(double)arg3;
- (UIEdgeInsets)collectionViewContentInsetInTopLoadingState:(BOOL)arg1;
- (BOOL)hasTopLoading;
- (void)forbidAutoPlay;
- (void)triggerCellAutoPlay;
- (void)_autoPlayCell;
- (void)preloadVideoFirstFrame;
- (BOOL)collectionView:(id)arg1 layout:(id)arg2 pinHeaderToVisibleBoundsAtSection:(unsigned long long)arg3;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (void)checkUIDataDistinctWithIndexPath:(id)arg1;
- (void)checkUIDataDistinctWithIndexPaths:(id)arg1;
- (void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 didEndDisplayingCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 willDisplaySupplementaryView:(id)arg2 forElementKind:(id)arg3 atIndexPath:(id)arg4;
- (void)collectionView:(id)arg1 didEndDisplayingSupplementaryView:(id)arg2 forElementOfKind:(id)arg3 atIndexPath:(id)arg4;
- (void)scrollViewDidScroll:(id)arg1;
- (BOOL)scrollViewShouldScrollToTop:(id)arg1;
- (void)scrollViewDidScrollToTop:(id)arg1;
- (void)_refreshHeadOnScrolltoTop;
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(CGPoint)arg2 targetContentOffset:(CGPoint *)arg3;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(BOOL)arg2;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndScrollingAnimation:(id)arg1;
- (void)_endScrolling:(id)arg1;
- (unsigned long long)collectionView:(id)arg1 layout:(id)arg2 columnCountAtSection:(unsigned long long)arg3;
- (CGSize)collectionView:(id)arg1 layout:(id)arg2 cellSpaceAtSection:(unsigned long long)arg3;
- (UIEdgeInsets)collectionView:(id)arg1 layout:(id)arg2 cellEdgeInsetAtSection:(unsigned long long)arg3;
- (double)collectionView:(id)arg1 layout:(id)arg2 cellHeightAtIndexPath:(id)arg3 withWidth:(double)arg4;
- (double)collectionView:(id)arg1 layout:(id)arg2 headerHeightAtSection:(unsigned long long)arg3;
- (double)collectionView:(id)arg1 layout:(id)arg2 footerHeightAtSection:(unsigned long long)arg3;
- (UIEdgeInsets)collectionView:(id)arg1 layout:(id)arg2 headerEdgeInsetAtSection:(unsigned long long)arg3;
- (double)collectionView:(id)arg1 layout:(id)arg2 decorationHeightAtSection:(unsigned long long)arg3;
- (UIEdgeInsets)collectionView:(id)arg1 layout:(id)arg2 decorationEdgeInsetAtSection:(unsigned long long)arg3;
- (id)collectionView:(id)arg1 layout:(id)arg2 decorationLayoutAttributesAtSection:(unsigned long long)arg3;
- (BOOL)isOnLoadingState;
- (int)feedViewControllerScene;
- (id)getCurrentVC;
- (void)onClickCoverContact:(id)arg1 contentVM:(id)arg2;
- (void)onClickFollowReccommendLabel:(id)arg1;
- (void)onLongPress:(id)arg1;
- (void)onClickRemoveAction:(id)arg1;
- (void)onClickAnchorAction:(id)arg1;
- (void)onClickMutiSelectedAction:(id)arg1;
- (void)onClickForwardAction:(id)arg1;
- (void)onClickFavoriteAction:(id)arg1;
- (void)onClickEditTagAction:(id)arg1;
- (void)onClickDeleteAction:(id)arg1 contentVM:(id)arg2;
- (BOOL)isContentVMSelected:(id)arg1;
- (id)selectedItems;
- (void)updateSelectedItems:(id)arg1 selected:(BOOL)arg2;
- (BOOL)onSelectItem:(id)arg1 selected:(BOOL)arg2;
- (id)getSelectedItems;
- (void)setSelectedItems:(id)arg1 selected:(BOOL)arg2;
- (id)selectableContentVMAtIndexPath:(id)arg1;
- (void)setAllItemsSelected:(BOOL)arg1;
- (void)cellNeedsUpdateHeight:(id)arg1;
- (void)finderFlowTopTipsViewDidTriggerRefresh:(id)arg1;
- (BOOL)finderFlowTopTipsViewDataSourceIsLoading:(id)arg1;
- (void)clickNoMoreDataNavToRecBtn:(id)arg1;
- (void)didClickStreamFooterRefresh:(id)arg1;
- (void)finderEmptyTipsView:(id)arg1 didClickOnState:(unsigned long long)arg2;
- (void)finderEmptyTipsView:(id)arg1 didClickLink:(id)arg2;
- (void)resignCollectionViewCells;
- (void)setupCellExposureRateReportWithCell:(id)arg1 indexPath:(id)arg2;
- (void)reportFlowExposeForCell:(id)arg1 atIndexPath:(id)arg2 actionType:(long long)arg3;
- (void)reportFeedStreamClickWithCollectionView:(id)arg1 selectedIndexPath:(id)arg2;
- (void)monitorView:(id)arg1 newExposedItems:(id)arg2 lastExposedItems:(id)arg3;
- (id)onStaticCellLeftTopBadgeContent:(id)arg1;
- (void)checkViewsLoadingState;
- (void)checkTopTipsViewLoadingState;
- (void)checkFooterViewLoadingState;
- (void)checkEmptyTipsViewLoadingState;
- (BOOL)isViewVisibleOnScreen:(id)arg1;
- (void)setTopTipsViewLoadingState:(unsigned long long)arg1;
- (void)setFooterViewLoadingState:(unsigned long long)arg1;
- (void)setEmptyTipsViewLoadingState:(unsigned long long)arg1;
- (void)addLongPressAction;
- (void)setCollectionView:(id)arg1;
- (id)streamLayout;
- (void)setStreamLayout:(id)arg1;
- (void)setTopTipsView:(id)arg1;
- (void)setEmptyTipsView:(id)arg1;
- (void)setFooterView:(id)arg1;
- (id)dataSource;
- (void)setDataSource:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)layoutDelegate;
- (void)setLayoutDelegate:(id)arg1;
- (id)monitorDelegate;
- (void)setMonitorDelegate:(id)arg1;
- (id)selectionDelegate;
- (void)setSelectionDelegate:(id)arg1;
- (UIEdgeInsets)contentInset;
- (CGPoint)contentOffset;
- (unsigned long long)consumerType;
- (BOOL)enableGradientEffect;
- (void)setEnableGradientEffect:(BOOL)arg1;
- (id)emptyTipsText;
- (id)noMoreDataTipsText;
- (void)setNoMoreDataTipsText:(id)arg1;
- (BOOL)observeredByPageContainer;
- (void)setObserveredByPageContainer:(BOOL)arg1;
- (id)topHeaderView;
- (BOOL)enableFooterJumpType;
- (void)setEnableFooterJumpType:(BOOL)arg1;
- (BOOL)disableLiveAutoPlay;
- (void)setDisableLiveAutoPlay:(BOOL)arg1;
- (BOOL)showCheckMark;
- (void)setShowCheckMark:(BOOL)arg1;
- (long long)layoutType;
- (void)setLayoutType:(long long)arg1;
- (unsigned long long)topTipsViewLoadingState;
- (unsigned long long)emptyTipsViewLoadingState;
- (unsigned long long)footerViewLoadingState;
- (id)appendedIndexPath;
- (void)setAppendedIndexPath:(id)arg1;
- (unsigned long long)state;
- (void)setExposeTimeDict:(id)arg1;
- (id)displayingCellPtrDict;
- (void)setDisplayingCellPtrDict:(id)arg1;
- (id)topLoadingImage;
- (void)setTopLoadingImage:(id)arg1;
- (id)centerLoadingImage;
- (void)setCenterLoadingImage:(id)arg1;
- (BOOL)isViewCurrentAppear;
- (void)setViewCurrentAppear:(BOOL)arg1;
- (id)selectedContentVMs;
- (void)setSelectedContentVMs:(id)arg1;
- (BOOL)forbidAutoPlayCell;
- (void)setForbidAutoPlayCell:(BOOL)arg1;
- (void).cxx_destruct;
@end
