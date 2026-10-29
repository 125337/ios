@interface MMFinderLiveGoodsManagerViewController : MMCPUIViewController <UITableViewDelegate, UITableViewDataSource, MMFinderLiveGoodsCellDelegate, MMFinderLiveGoodsBaseCellDelegate, MMFinderLiveGoodsManagerViewBottomActionViewDelegate>
{
    id <MMFinderLiveGoodsManagerViewControllerDelegate> _delegate; // +0x68
    MMFinderLiveTaskId * _taskId; // +0x70
    MMTableView * _managerGoodsListTableView; // +0x78
    NSMutableArray * _selectedGoodsViewModels; // +0x80
    NSMutableArray * _goodsViewModels; // +0x88
    MMFinderLiveGoodsManagerViewBottomActionView * _bottomEdittingView; // +0x90
}
+ (void)loadWithTaskId:(id)arg1 completion:(id /* block */)arg2;
- (id)initWithTaskId:(id)arg1;
- (void)updateWithShopWindowItems:(id)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewDidLoad;
- (id)navigationBarBackgroundColor;
- (long long)overrideUserInterfaceStyle;
- (BOOL)showNavigationBarSepLine;
- (long long)preferredStatusBarStyle;
- (void)viewDidLayoutSubviews;
- (void)initSubviews;
- (double)getBottomEditingBarHeight;
- (void)addFromStore;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (BOOL)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2;
- (BOOL)tableView:(id)arg1 canMoveRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 targetIndexPathForMoveFromRowAtIndexPath:(id)arg2 toProposedIndexPath:(id)arg3;
- (void)tableView:(id)arg1 moveRowAtIndexPath:(id)arg2 toIndexPath:(id)arg3;
- (void)onLiveGoodsCellSelected:(id)arg1 goodsViewModel:(id)arg2 info:(id)arg3;
- (BOOL)isInMultiSelectEditingMode;
- (void)onFinderLiveGoodsManagerViewSetTop;
- (void)uploadNewOrderNeedsToast:(BOOL)arg1;
- (void)onFinderLiveGoodsManagerViewDelete;
- (void)deleteGoods;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)taskId;
- (void)setTaskId:(id)arg1;
- (id)managerGoodsListTableView;
- (void)setManagerGoodsListTableView:(id)arg1;
- (id)selectedGoodsViewModels;
- (void)setSelectedGoodsViewModels:(id)arg1;
- (id)goodsViewModels;
- (void)setGoodsViewModels:(id)arg1;
- (id)bottomEdittingView;
- (void)setBottomEdittingView:(id)arg1;
- (void).cxx_destruct;
@end

