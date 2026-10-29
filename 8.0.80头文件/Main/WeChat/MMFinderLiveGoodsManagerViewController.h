@interface MMFinderLiveGoodsManagerViewController : MMCPUIViewController <UITableViewDelegate, UITableViewDataSource, MMFinderLiveGoodsBaseCellDelegate, MMFinderLiveShopShelfManagedItemDelegate, MMFinderLiveGoodsManagerViewBottomActionViewDelegate>
{
    MMFinderLiveTaskId * _taskId; // +0x70
    MMTableView * _managerGoodsListTableView; // +0x78
    NSMutableArray * _selectedItemViewModels; // +0x80
    NSMutableArray * _itemViewModels; // +0x88
    MMFinderLiveGoodsManagerViewBottomActionView * _bottomEdittingView; // +0x90
}
+ (void)loadWithTaskId:(id)arg1 completion:(id /* block */)arg2;
- (id)initWithTaskId:(id)arg1;
- (void)dealloc;
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
- (void)onShopShelfItemSelected:(id)arg1;
- (BOOL)isInMultiSelectEditingMode;
- (void)onFinderLiveGoodsManagerViewSetTop;
- (void)uploadNewOrderNeedsToast:(BOOL)arg1;
- (void)onFinderLiveGoodsManagerViewDelete;
- (void)deleteGoods;
- (void)onFinderLiveShopShelfDataUpdate:(id)arg1;
- (id)taskId;
- (void)setTaskId:(id)arg1;
- (id)managerGoodsListTableView;
- (void)setManagerGoodsListTableView:(id)arg1;
- (id)selectedItemViewModels;
- (void)setSelectedItemViewModels:(id)arg1;
- (id)itemViewModels;
- (void)setItemViewModels:(id)arg1;
- (id)bottomEdittingView;
- (void)setBottomEdittingView:(id)arg1;
- (void).cxx_destruct;
@end
