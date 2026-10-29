@interface MMFinderLiveGoodsSelectionPanel : MMPageSheetBaseView <UITableViewDelegate, UITableViewDataSource, MMLiveHalfScreenTitleBarViewDelegate>
{
    long long _openFromSrc; // +0x8
    id <MMFinderLiveGoodsSelectionPanelDelegate> _delegate; // +0x10
    MMFinderLiveTaskId * _taskId; // +0x18
    MMLiveHalfScreenTitleBarView * _mainTitleBar; // +0x20
    UIView * _topSeparatorLine; // +0x28
    MMUIView * _headerView; // +0x30
    MMUIView * _contentView; // +0x38
    MMUILabel * _noSelectLabel; // +0x40
    MMTableView * _goodsListTableView; // +0x48
    NSMutableArray * _goodsViewModels; // +0x50
    MMFinderLiveGoodsViewModel * _selectedGoodsViewModel; // +0x58
    unsigned long long _curAskedProductId; // +0x60
}
- (id)initWithTaskId:(id)arg1 curAskedProductId:(unsigned long long)arg2;
- (void)intUI;
- (void)layoutSubviews;
- (void)layoutUI;
- (void)setupPageSheetConfig;
- (void)showWithAnimated:(BOOL)arg1;
- (double)contentViewHeight;
- (void)updateWithShopWindowItems:(id)arg1;
- (void)pageSheetDidClose:(BOOL)arg1;
- (id)liveTask;
- (id)currSelectGoodsItem;
- (void)onMMLiveHalfScreenTitleBarLeftButtonClicked:(id)arg1;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)handleHeaderViewGestureRecognizer:(id)arg1;
- (long long)openFromSrc;
- (void)setOpenFromSrc:(long long)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)taskId;
- (void)setTaskId:(id)arg1;
- (id)mainTitleBar;
- (void)setMainTitleBar:(id)arg1;
- (id)topSeparatorLine;
- (void)setTopSeparatorLine:(id)arg1;
- (id)headerView;
- (void)setHeaderView:(id)arg1;
- (id)contentView;
- (void)setContentView:(id)arg1;
- (id)noSelectLabel;
- (void)setNoSelectLabel:(id)arg1;
- (id)goodsListTableView;
- (void)setGoodsListTableView:(id)arg1;
- (id)goodsViewModels;
- (void)setGoodsViewModels:(id)arg1;
- (id)selectedGoodsViewModel;
- (void)setSelectedGoodsViewModel:(id)arg1;
- (unsigned long long)curAskedProductId;
- (void)setCurAskedProductId:(unsigned long long)arg1;
- (void).cxx_destruct;
@end

