@interface MMFinderLiveShopShelfView : UIView <UITableViewDelegate, UITableViewDataSource, MMFinderLiveGoodsCellDelegate, MMFinderLiveShopGoodsManageSectionHeaderViewDelegate, UIGestureRecognizerDelegate, WCFinderLiveExt, MMFinderLiveGoodsBaseCellDelegate, MMFinderLiveShopShelfExtraHeaderCellDelegate, MMFinderLiveShopGoodsSectionHeaderClassifyViewDelegate, MMFinderLiveGoodsManagerViewControllerDelegate, MMFinderLiveGoodsEmptyViewDelegate, MMFinderLiveShopShelfGoodsWithCouponViewDelegate, MMFinderLiveCouponsViewDelegate, WCFinderLiveWeAppWithHotSaleInfosExt, MMFinderLiveShopShelfContainerDelegate, MMFinderLiveShopShelfPagesManageViewEdgeEventDelegate, MMFinderLiveProductsSearchViewDelegate, MMUIViewControllerExt>
{
    BOOL _isOpening; // +0x8
    BOOL _ignoreNextTipsBeforeOpen; // +0x9
    unsigned int _currentGetShopShelfPullScene; // +0xc
    MMFinderLiveCouponsView * _couponsView; // +0x10
    MMFinderLiveTaskId * _taskId; // +0x18
    id <MMFinderLiveShopShelfViewDelegate> _delegate; // +0x20
    NSDate * _lastFetchSuccessTime; // +0x28
    MMFinderLiveShopShelfCoordinator * _coordinator; // +0x30
    MMFinderLiveShopSelfOpenParams * _params; // +0x38
    MMFinderLiveShopShelfContainerView * _containerView; // +0x40
    MMFinderLiveShopShelfPagesManageView * _pagesManageView; // +0x48
    UIView * _mainPageContentView; // +0x50
    MMFinderLiveShopShelfHeaderContainerView * _headerView; // +0x58
    MMFinderLiveShopShelfExtraHeaderCell * _tableHeaderView; // +0x60
    MMTableView * _goodsListTableView; // +0x68
    MMFinderLiveShopShelfTipsView * _tipsView; // +0x70
    MMFinderLiveShopShelfGoodsWithCouponView * _goodsWithCouponView; // +0x78
    MMLoadingView * _loadingView; // +0x80
    UIButton * _addGoodsButton; // +0x88
    MMFinderLiveGoodsManagerViewController * _goodsManagerViewController; // +0x90
    OrderedDictionary * _goodsViewModelOrderedDict; // +0x98
    NSMutableArray * _currentTabGoodsViewModels; // +0xa0
    MMFinderLiveGoodsItem * _currentGoodsItem; // +0xa8
    MMFinderLiveGoodsItem * _currentPromtingGoodsItem; // +0xb0
    NSObject * _currentGetShopShelf; // +0xb8
    NSMutableArray * _classifyInfos; // +0xc0
    FinderShopShelfLabelClassifyInfo * _currentClassifyInfo; // +0xc8
    MMFinderLiveShopGoodsSectionHeaderClassifyView * _classifyView; // +0xd0
    NSMutableSet * _exposedProductIdSet; // +0xd8
    NSMutableArray * _addExposedProductIdArr; // +0xe0
    NSMutableArray * _afterRefreshed; // +0xe8
    FinderDirectAddPreviousLiveProductsPageInfo * _addPreviousLiveProductsPageInfo; // +0xf0
    MMFinderLiveHotSaleInfosView * _hotSaleInfosView; // +0xf8
    MMFinderLiveWithCallbackSet * _hotSaleInfosHiddenReasons; // +0x100
    unsigned long long _draggingTag; // +0x108
    NSDictionary * _hotSaleLikeAnimationMaskViewsWillReuse; // +0x110
    NSDate * _enterCurrentClassifyDate; // +0x118
    NSDate * _enterDate; // +0x120
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
- (void)deviceDidRotate:(id)arg1;
- (void)startLoading;
- (void)stopLoading:(BOOL)arg1;
- (void)stopLoading;
- (void)dismissCouponsView;
- (void)showSearchView;
- (void)onSearchViewBackButtonClicked;
- (void)showCouponsView;
- (id)shopContext;
- (void)beginEditMode;
- (void)reportCurrentPromotionReplaySetting;
- (id)liveTask;
- (BOOL)isAnchorOrAssistant;
- (void)appendGoodsItem:(id)arg1;
- (void)loadDataWithItemList:(id)arg1;
- (void)loadGoodsWithCurrentClassifyInfo;
- (id)buildBaseClassifyInfo;
- (void)openWithCanUseCouponItemList:(id)arg1 coupon:(id)arg2;
- (void)toCanUseCouponItemList:(id)arg1 coupon:(id)arg2;
- (void)toCanUseCouponItemList:(id)arg1 coupon:(id)arg2 backmode:(long long)arg3 animated:(BOOL)arg4;
- (void)updatePromotProductStatusWithGoodsItem:(id)arg1;
- (void)onSendPromoteProductResult:(id)arg1;
- (long long)getPromoteUserType;
- (void)onEndPromoteProductResult:(id)arg1;
- (void)onSetTopFinderShopShelfProduct:(id)arg1 productId:(unsigned long long)arg2;
- (void)onDeleteFinderShopShelfProduct:(id)arg1 productIds:(id)arg2;
- (void)onAddGoodsButtonClicked;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)cell:(id)arg1 didSelectedForModel:(id)arg2;
- (BOOL)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3;
- (void)deleteGoods:(id)arg1;
- (void)commitEditingStyle:(long long)arg1 forProductGoodsViewModel:(id)arg2;
- (BOOL)tableView:(id)arg1 shouldIndentWhileEditingRowAtIndexPath:(id)arg2;
- (BOOL)tableView:(id)arg1 canMoveRowAtIndexPath:(id)arg2;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(BOOL)arg2;
- (void)onScrollViewDidEndScroll;
- (void)hideSecondaryPage:(BOOL)arg1;
- (void)hideSecondaryPage:(BOOL)arg1 duringOpening:(BOOL)arg2;
- (void)updateMainPage;
- (void)onSectionHeaderAddGoodsClicked;
- (void)onSectionHeaderFlashSaleClicked;
- (void)onSectionHeaderManageGoodsClicked;
- (void)onHeaderViewBackButtonClicked:(long long)arg1;
- (void)onHeaderViewBackButtonClicked;
- (void)onAddFromStore;
- (void)onHasUploadedChange;
- (void)onCoupon:(id)arg1 successIssueOrCancel:(BOOL)arg2;
- (void)onActionButtonClicked:(id)arg1 goodsViewModel:(id)arg2 info:(id)arg3;
- (void)cell:(id)arg1 model:(id)arg2 willShowSKUCellForIndex:(unsigned long long)arg3;
- (void)cell:(id)arg1 model:(id)arg2 didSelectSKU:(id)arg3;
- (void)cell:(id)arg1 willShowMoreSKUsTailForModel:(id)arg2;
- (void)cell:(id)arg1 didClickMoreSKUsTailForModel:(id)arg2;
- (void)cell:(id)arg1 didReleaseMoreSKUsTailForModel:(id)arg2;
- (void)onAddToShoppingCartButtonClicked:(id)arg1 goodsViewModel:(id)arg2;
- (void)onAskForPromoteProductButtonClicked:(id)arg1 goodsViewModel:(id)arg2;
- (void)onMayNeedChangeSizeForImageLoaded:(id)arg1;
- (void)onLiveGoodsCellLimitDiscountArriveTime:(id)arg1 goodsViewModel:(id)arg2;
- (void)onStartRecordPromotionReplay:(id)arg1 goodsViewModel:(id)arg2 info:(id)arg3;
- (void)internalStartRecordPromotionReplay:(id)arg1 goodsViewModel:(id)arg2 info:(id)arg3;
- (void)onStopRecordPromotionReplay:(id)arg1 goodsViewModel:(id)arg2 info:(id)arg3;
- (void)onOpenRecordPromotionReplay:(id)arg1 goodsViewModel:(id)arg2 info:(id)arg3;
- (void)onDeleteRecordPromotionReplay:(id)arg1 goodsViewModel:(id)arg2 info:(id)arg3;
- (void)handleContentGestureChangeTo:(double)arg1;
- (void)handleContentGestureEnd;
- (void)handleTableViewPanGesture:(id)arg1;
- (void)closeShopShelfContainerForPanGesture;
- (void)closeShopShelfContainerForTapGesture;
- (void)onEdgeGestureEnded;
- (void)reportAnchorAction:(long long)arg1 productId:(unsigned long long)arg2;
- (void)reportAnchorAction:(long long)arg1 productId:(unsigned long long)arg2 extraParams:(id)arg3;
- (void)reportAnchorAction:(long long)arg1 productId:(unsigned long long)arg2 result:(id)arg3;
- (void)reportHeaderElementsExpose;
- (void)collectExposedProductIds;
- (BOOL)isNormalAudience;
- (BOOL)isAudience;
- (BOOL)isAnchor;
- (void)reportExposedProductIds;
- (void)cell:(id)arg1 willDisplayForModel:(id)arg2;
- (void)reportGoodsExposeForCell:(id)arg1 goods:(id)arg2;
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
- (id)buildExtraHeaderInfos;
- (void)willDisplayClassifyInfo:(id)arg1;
- (void)didSelectClassifyInfo:(id)arg1;
- (void)reportDidSelectClassifyInfoBeforeSwitch:(id)arg1;
- (void)onAddPreviousLiveGoodsClicked;
- (void)onWeAppWithHotSaleInfosLaunchSuccess;
- (void)onWeAppWithHotSaleInfosComplete;
- (id)visibleGoodsCellWithProductID:(unsigned long long)arg1;
- (void)receiveHintAnimationInfo:(id)arg1 withProductID:(unsigned long long)arg2;
- (unsigned long long)willHandleProductHintAnimationFor:(unsigned long long)arg1;
- (double)tryShowAddToShoppingCartAnimationForProduct:(unsigned long long)arg1;
- (id)couponsView;
- (void)setCouponsView:(id)arg1;
- (id)taskId;
- (void)setTaskId:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (BOOL)isOpening;
- (void)setIsOpening:(BOOL)arg1;
- (id)lastFetchSuccessTime;
- (void)setLastFetchSuccessTime:(id)arg1;
- (id)coordinator;
- (void)setCoordinator:(id)arg1;
- (id)params;
- (void)setParams:(id)arg1;
- (id)containerView;
- (void)setContainerView:(id)arg1;
- (id)pagesManageView;
- (void)setPagesManageView:(id)arg1;
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
- (id)goodsViewModelOrderedDict;
- (void)setGoodsViewModelOrderedDict:(id)arg1;
- (id)currentTabGoodsViewModels;
- (void)setCurrentTabGoodsViewModels:(id)arg1;
- (id)currentGoodsItem;
- (void)setCurrentGoodsItem:(id)arg1;
- (id)currentPromtingGoodsItem;
- (void)setCurrentPromtingGoodsItem:(id)arg1;
- (id)currentGetShopShelf;
- (void)setCurrentGetShopShelf:(id)arg1;
- (unsigned int)currentGetShopShelfPullScene;
- (void)setCurrentGetShopShelfPullScene:(unsigned int)arg1;
- (id)classifyInfos;
- (void)setClassifyInfos:(id)arg1;
- (id)currentClassifyInfo;
- (void)setCurrentClassifyInfo:(id)arg1;
- (id)classifyView;
- (void)setClassifyView:(id)arg1;
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
- (id)hotSaleInfosHiddenReasons;
- (void)setHotSaleInfosHiddenReasons:(id)arg1;
- (unsigned long long)draggingTag;
- (void)setDraggingTag:(unsigned long long)arg1;
- (id)hotSaleLikeAnimationMaskViewsWillReuse;
- (void)setHotSaleLikeAnimationMaskViewsWillReuse:(id)arg1;
- (id)enterCurrentClassifyDate;
- (void)setEnterCurrentClassifyDate:(id)arg1;
- (id)enterDate;
- (void)setEnterDate:(id)arg1;
- (void).cxx_destruct;
@end

