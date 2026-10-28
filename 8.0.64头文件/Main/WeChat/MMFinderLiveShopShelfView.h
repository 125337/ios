@interface MMFinderLiveShopShelfView : UIView <UITableViewDelegate, UITableViewDataSource, UIGestureRecognizerDelegate, WCFinderLiveExt, MMFinderLiveShopGoodsSectionHeaderClassifyViewDelegate, MMFinderLiveGoodsManagerViewControllerDelegate, MMFinderLiveGoodsEmptyViewDelegate, MMFinderLiveShopShelfGoodsWithCouponViewDelegate, MMFinderLiveCouponsViewDelegate, WCFinderLiveWeAppWithHotSaleInfosExt, MMFinderLiveShopShelfContainerDelegate, MMFinderLiveShopShelfPagesManageViewEdgeEventDelegate, MMFinderLiveProductsSearchViewDelegate, MMFinderLiveShopShelfGroupedProductsAdapterDelegate, MMUIViewControllerExt, MMFinderLiveAudienceGoodsCellDelegate, MMFinderLiveGoodsCellResizeDelegate, MMFinderLiveGoodsCellLimitDiscountDelegate>
{
    BOOL _isOpening; // +0x8
    BOOL _ignoreNextTipsBeforeOpen; // +0x9
    unsigned int _currentGetShopShelfPullScene; // +0xc
    MMFinderLiveShopShelfPagesManageView * _pagesManageView; // +0x10
    MMFinderLiveCouponsView * _couponsView; // +0x18
    MMFinderLiveTaskId * _taskId; // +0x20
    id <MMFinderLiveShopShelfViewDelegate> _delegate; // +0x28
    FinderShopShelfLabelClassifyInfo * _currentClassifyInfo; // +0x30
    OrderedDictionary * _commonItemViewModels; // +0x38
    NSMutableArray * _currentTabItemViewModels; // +0x40
    NSDate * _lastFetchSuccessTime; // +0x48
    unsigned long long _productsCount; // +0x50
    MMFinderLiveShopShelfCoordinator * _coordinator; // +0x58
    MMFinderLiveShopSelfOpenParams * _params; // +0x60
    MMFinderLiveShopShelfContainerView * _containerView; // +0x68
    UIView * _mainPageContentView; // +0x70
    MMFinderLiveShopShelfHeaderContainerView * _headerView; // +0x78
    MMFinderLiveShopShelfExtraHeaderCell * _tableHeaderView; // +0x80
    MMTableView * _goodsListTableView; // +0x88
    MMFinderLiveShopShelfTipsView * _tipsView; // +0x90
    MMFinderLiveShopShelfGoodsWithCouponView * _goodsWithCouponView; // +0x98
    MMLoadingView * _loadingView; // +0xa0
    UIButton * _addGoodsButton; // +0xa8
    MMFinderLiveGoodsManagerViewController * _goodsManagerViewController; // +0xb0
    NSObject * _currentGetShopShelf; // +0xb8
    NSMutableArray * _classifyInfos; // +0xc0
    MMFinderLiveShopGoodsSectionHeaderClassifyView * _classifyView; // +0xc8
    MMGradientView * _groupedProductsBackgroundView; // +0xd0
    NSMutableSet * _exposedProductIdSet; // +0xd8
    NSMutableArray * _addExposedProductIdArr; // +0xe0
    NSMutableArray * _afterRefreshed; // +0xe8
    FinderDirectAddPreviousLiveProductsPageInfo * _addPreviousLiveProductsPageInfo; // +0xf0
    MMFinderLiveHotSaleInfosView * _hotSaleInfosView; // +0xf8
    NSArray * _cellAdapters; // +0x100
    MMFinderLiveWithCallbackSet * _hotSaleInfosHiddenReasons; // +0x108
    unsigned long long _draggingTag; // +0x110
    MMFinderLiveShopShelfGroupedProductsAdapter * _groupedProductsAdapter; // +0x118
    NSDate * _enterCurrentClassifyDate; // +0x120
    NSDate * _enterDate; // +0x128
}
- (id)initWithTaskId:(id)arg1 frame:(CGRect)arg2;
- (void)dealloc;
- (void)registerExtension;
- (void)unRegisterExtension;
- (void)initView;
- (void)checkAndInitAddGoodsButton;
- (void)initAddGoodsButton;
- (void)layoutAddGoodsButton;
- (void)layoutContentView;
- (void)layoutMainPage;
- (void)layoutSubviews;
- (void)closeWithAnimation:(BOOL)arg1;
- (void)closeWithAnimation:(BOOL)arg1 completion:(id /* block */)arg2;
- (id)closeWithAnimation:(BOOL)arg1 reason:(long long)arg2;
- (void)closeWithAnimation:(BOOL)arg1 reason:(long long)arg2 completion:(id /* block */)arg3;
- (void)manullyCloseWithAnimation:(BOOL)arg1;
- (void)cleanOpenWithAnimation:(BOOL)arg1 completeBlock:(id /* block */)arg2;
- (void)openWithAnimation:(BOOL)arg1 params:(id)arg2;
- (void)fetchData;
- (void)fetchDataInPullScene:(unsigned int)arg1;
- (void)fetchDataInPullScene:(unsigned int)arg1 completion:(id /* block */)arg2;
- (void)fetchDataInPullScene:(unsigned int)arg1 force:(BOOL)arg2 completion:(id /* block */)arg3;
- (void)loadClassifyInfos:(id)arg1;
- (BOOL)showClassifyInfoSwitchOpen;
- (void)checkShoppingAnchorStatusItem;
- (void)reloadData;
- (void)startLoading;
- (void)stopLoading:(BOOL)arg1;
- (void)stopLoading:(BOOL)arg1 wording:(id)arg2;
- (void)stopLoading;
- (void)dismissCouponsView;
- (void)showSearchView;
- (void)onSearchViewBackButtonClicked;
- (void)showCouponsView;
- (id)shopContext;
- (void)showGoodsManagerViewController;
- (void)reportCurrentPromotionReplaySetting;
- (double)contentWidth;
- (double)contentHeight;
- (id)liveTask;
- (BOOL)isAnchorOrAssistant;
- (void)tryAppendGoodsItem:(id)arg1;
- (void)tryAppendBulkBuyItem:(id)arg1;
- (void)loadDataWithItemList:(id)arg1;
- (void)loadGoodsWithCurrentClassifyInfo;
- (void)loadCellAdapters;
- (id)buildBaseClassifyInfo;
- (void)openWithCanUseCouponItemList:(id)arg1 coupon:(id)arg2;
- (void)toCanUseCouponItemList:(id)arg1 coupon:(id)arg2;
- (void)toCanUseCouponItemList:(id)arg1 coupon:(id)arg2 backmode:(long long)arg3 animated:(BOOL)arg4;
- (void)onSetTopFinderShopShelfProduct:(id)arg1 idUnit:(id)arg2;
- (void)onDeleteFinderShopShelfProduct:(id)arg1 idUnits:(id)arg2;
- (void)onAddGoodsButtonClicked;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)cell:(id)arg1 didSelectedForModel:(id)arg2;
- (void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3;
- (BOOL)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2;
- (void)deleteItem:(id)arg1;
- (void)commitEditingStyle:(long long)arg1 forViewModel:(id)arg2;
- (BOOL)tableView:(id)arg1 shouldIndentWhileEditingRowAtIndexPath:(id)arg2;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(BOOL)arg2;
- (void)onScrollViewDidEndScroll;
- (void)scrollViewDidScroll:(id)arg1;
- (void)setNeedsLayoutIfNeedUpdateGroupedProductsBackground;
- (void)hideSecondaryPage:(BOOL)arg1;
- (void)hideSecondaryPage:(BOOL)arg1 duringOpening:(BOOL)arg2;
- (void)updateMainPage;
- (void)onHeaderViewBackButtonClicked:(long long)arg1;
- (void)onHeaderViewBackButtonClicked;
- (void)onAddFromStore;
- (void)onHasUploadedChange;
- (long long)getPromoteUserType;
- (void)onCoupon:(id)arg1 successIssueOrCancel:(BOOL)arg2;
- (void)onGetNewGroupedProducts;
- (void)onPurchaseButtonClicked:(id)arg1;
- (void)onPresentButtonClicked:(id)arg1;
- (void)cell:(id)arg1 model:(id)arg2 willShowSKUCellForIndex:(unsigned long long)arg3;
- (void)cell:(id)arg1 model:(id)arg2 didSelectSKU:(id)arg3;
- (void)cell:(id)arg1 willShowMoreSKUsTailForModel:(id)arg2;
- (void)cell:(id)arg1 didClickMoreSKUsTailForModel:(id)arg2;
- (void)cell:(id)arg1 didReleaseMoreSKUsTailForModel:(id)arg2;
- (void)onAddToShoppingCartOrFavoriteButtonExposed:(id)arg1 goodsViewModel:(id)arg2;
- (void)onAddToShoppingCartButtonClicked:(id)arg1 goodsViewModel:(id)arg2;
- (void)onAddToFavoriteButtonClicked:(id)arg1 goodsViewModel:(id)arg2;
- (void)onAddToLikeButtonClicked:(id)arg1 goodsViewModel:(id)arg2;
- (void)onAskForPromoteProductButtonClicked:(id)arg1 goodsViewModel:(id)arg2;
- (void)onMayNeedChangeSizeForImageLoaded:(id)arg1;
- (void)onLiveGoodsCellLimitDiscountArriveTime:(id)arg1 goodsViewModel:(id)arg2;
- (void)onOpenRecordPromotionReplay:(id)arg1 goodsViewModel:(id)arg2 info:(id)arg3;
- (void)handleContentGestureChangeTo:(double)arg1;
- (void)handleContentGestureEnd;
- (void)handleTableViewPanGesture:(id)arg1;
- (void)closeShopShelfContainerForPanGesture;
- (void)closeShopShelfContainerForTapGesture;
- (void)onEdgeGestureEnded;
- (void)reportHeaderElementsExpose;
- (void)collectExposedProductIds;
- (BOOL)isNormalAudience;
- (BOOL)isAudience;
- (BOOL)isAnchor;
- (void)reportExposedProductIds;
- (void)cell:(id)arg1 willDisplayForModel:(id)arg2;
- (void)reportGoodsExposeForCell:(id)arg1 goods:(id)arg2;
- (void)reportAddToShoppingCartOrFavoriteButtonExposeForCell:(id)arg1;
- (void)reportAddToFavoriteButtonClickForCell:(id)arg1;
- (void)reportPresentButtonForCell:(id)arg1 isExpose:(BOOL)arg2;
- (BOOL)accessibilityPerformEscape;
- (void)MMUIViewControllerWillAppear:(id)arg1;
- (void)MMUIViewControllerDidAppear:(id)arg1;
- (void)MMUIViewControllerWillDisppear:(id)arg1;
- (void)MMUIViewControllerDidDisappear:(id)arg1;
- (void)willAppear;
- (void)didCompletelyAppear;
- (void)mainPageWillAppear;
- (void)mainPageDidCompletelyAppear;
- (void)mainPageDidCompletelyAppearAndFetch;
- (void)onWillJumpToMiniAppAfterBackNativeWithContext:(id)arg1;
- (void)showHintInfoIfNeeded;
- (void)showTipsViewWithHintInfo:(id)arg1 onWillShow:(id /* block */)arg2;
- (void)willDisplayClassifyInfo:(id)arg1;
- (void)didSelectClassifyInfo:(id)arg1;
- (void)reportDidSelectClassifyInfoBeforeSwitch:(id)arg1;
- (void)onAddPreviousLiveGoodsClicked;
- (void)onWeAppWithHotSaleInfosLaunchSuccess;
- (void)onWeAppWithHotSaleInfosComplete;
- (unsigned long long)indexWithIDUnit:(id)arg1;
- (id)visibleGoodsCellWithProductID:(unsigned long long)arg1;
- (void)receiveHintAnimationInfo:(id)arg1 withProductID:(unsigned long long)arg2;
- (unsigned long long)willHandleProductHintAnimationFor:(unsigned long long)arg1;
- (double)tryShowAddProductAnimationForProduct:(unsigned long long)arg1 type:(unsigned int)arg2 withPagFile:(id)arg3;
- (id)pagesManageView;
- (void)setPagesManageView:(id)arg1;
- (id)couponsView;
- (void)setCouponsView:(id)arg1;
- (id)taskId;
- (void)setTaskId:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (BOOL)isOpening;
- (void)setIsOpening:(BOOL)arg1;
- (id)currentClassifyInfo;
- (void)setCurrentClassifyInfo:(id)arg1;
- (id)commonItemViewModels;
- (void)setCommonItemViewModels:(id)arg1;
- (id)currentTabItemViewModels;
- (void)setCurrentTabItemViewModels:(id)arg1;
- (id)lastFetchSuccessTime;
- (void)setLastFetchSuccessTime:(id)arg1;
- (unsigned long long)productsCount;
- (void)setProductsCount:(unsigned long long)arg1;
- (id)coordinator;
- (void)setCoordinator:(id)arg1;
- (id)params;
- (void)setParams:(id)arg1;
- (id)containerView;
- (void)setContainerView:(id)arg1;
- (id)mainPageContentView;
- (void)setMainPageContentView:(id)arg1;
- (id)headerView;
- (void)setHeaderView:(id)arg1;
- (id)tableHeaderView;
- (void)setTableHeaderView:(id)arg1;
- (id)goodsListTableView;
- (void)setGoodsListTableView:(id)arg1;
- (id)tipsView;
- (void)setTipsView:(id)arg1;
- (id)goodsWithCouponView;
- (void)setGoodsWithCouponView:(id)arg1;
- (id)loadingView;
- (void)setLoadingView:(id)arg1;
- (id)addGoodsButton;
- (void)setAddGoodsButton:(id)arg1;
- (id)goodsManagerViewController;
- (void)setGoodsManagerViewController:(id)arg1;
- (id)currentGetShopShelf;
- (void)setCurrentGetShopShelf:(id)arg1;
- (unsigned int)currentGetShopShelfPullScene;
- (void)setCurrentGetShopShelfPullScene:(unsigned int)arg1;
- (id)classifyInfos;
- (void)setClassifyInfos:(id)arg1;
- (id)classifyView;
- (void)setClassifyView:(id)arg1;
- (id)groupedProductsBackgroundView;
- (void)setGroupedProductsBackgroundView:(id)arg1;
- (id)exposedProductIdSet;
- (void)setExposedProductIdSet:(id)arg1;
- (id)addExposedProductIdArr;
- (void)setAddExposedProductIdArr:(id)arg1;
- (id)afterRefreshed;
- (void)setAfterRefreshed:(id)arg1;
- (BOOL)ignoreNextTipsBeforeOpen;
- (void)setIgnoreNextTipsBeforeOpen:(BOOL)arg1;
- (id)addPreviousLiveProductsPageInfo;
- (void)setAddPreviousLiveProductsPageInfo:(id)arg1;
- (id)hotSaleInfosView;
- (void)setHotSaleInfosView:(id)arg1;
- (id)cellAdapters;
- (void)setCellAdapters:(id)arg1;
- (id)hotSaleInfosHiddenReasons;
- (void)setHotSaleInfosHiddenReasons:(id)arg1;
- (unsigned long long)draggingTag;
- (void)setDraggingTag:(unsigned long long)arg1;
- (id)groupedProductsAdapter;
- (void)setGroupedProductsAdapter:(id)arg1;
- (id)enterCurrentClassifyDate;
- (void)setEnterCurrentClassifyDate:(id)arg1;
- (id)enterDate;
- (void)setEnterDate:(id)arg1;
- (void).cxx_destruct;
@end
