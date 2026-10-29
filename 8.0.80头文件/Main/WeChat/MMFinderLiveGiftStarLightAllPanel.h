@interface MMFinderLiveGiftStarLightAllPanel : MMFinderLiveGiftStarBasePanel <UITableViewDataSource>
{
    NSArray * _lockedUnlockInfos; // +0x8
    UIView * _listContainerView; // +0x10
    UITableView * _tableView; // +0x18
    MMUIButton * _lightAllButton; // +0x20
    CAGradientLayer * _listBottomMaskLayer; // +0x28
}
+ (long long)totalPriceOfUnlockInfos:(id)arg1;
- (id)initWithTaskId:(id)arg1 lockedUnlockInfos:(id)arg2;
- (void)setupContent;
- (void)applyButton;
- (void)layoutContentWithBounds:(CGRect)arg1;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)onClickLightAll;
- (void)reloadData;
- (id)lockedUnlockInfos;
- (void)setLockedUnlockInfos:(id)arg1;
- (id)listContainerView;
- (void)setListContainerView:(id)arg1;
- (id)tableView;
- (void)setTableView:(id)arg1;
- (id)lightAllButton;
- (void)setLightAllButton:(id)arg1;
- (id)listBottomMaskLayer;
- (void)setListBottomMaskLayer:(id)arg1;
- (void).cxx_destruct;
@end
