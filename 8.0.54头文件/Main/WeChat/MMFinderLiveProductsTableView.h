@interface MMFinderLiveProductsTableView : UIView <MMFinderLiveGoodsCellDelegate, UITableViewDataSource, UITableViewDelegate>
{
    MMTableView * _tableView; // +0x8
    MMFinderLiveTaskId * _taskID; // +0x10
    id <MMFinderLiveProductsTableViewDelegate> _delegate; // +0x18
    id /* block */ _reprocessGoodsViewModel; // +0x20
    NSArray * _goodsViewModels; // +0x28
}
- (id)initWithFrame:(CGRect)arg1;
- (void)setShopWindowItems:(id)arg1;
- (void)setProducts:(id)arg1;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)onLiveGoodsCellLimitDiscountArriveTime:(id)arg1 goodsViewModel:(id)arg2;
- (void)onActionButtonClicked:(id)arg1 goodsViewModel:(id)arg2 info:(id)arg3;
- (void)onMayNeedChangeSizeForImageLoaded:(id)arg1;
- (void)onAddToShoppingCartButtonClicked:(id)arg1 goodsViewModel:(id)arg2;
- (void)onAskForPromoteProductButtonClicked:(id)arg1 goodsViewModel:(id)arg2;
- (void)onOpenRecordPromotionReplay:(id)arg1 goodsViewModel:(id)arg2 info:(id)arg3;
- (void)cell:(id)arg1 model:(id)arg2 didSelectSKU:(id)arg3;
- (void)cell:(id)arg1 model:(id)arg2 willShowSKUCellForIndex:(unsigned long long)arg3;
- (void)cell:(id)arg1 didReleaseMoreSKUsTailForModel:(id)arg2;
- (void)cell:(id)arg1 didClickMoreSKUsTailForModel:(id)arg2;
- (void)cell:(id)arg1 willShowMoreSKUsTailForModel:(id)arg2;
- (id)visibleGoodsCellWithProductID:(unsigned long long)arg1;
- (id)tableView;
- (void)setTableView:(id)arg1;
- (id)taskID;
- (void)setTaskID:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id /* block */)reprocessGoodsViewModel;
- (void)setReprocessGoodsViewModel:(id /* block */)arg1;
- (id)goodsViewModels;
- (void)setGoodsViewModels:(id)arg1;
- (void).cxx_destruct;
@end

