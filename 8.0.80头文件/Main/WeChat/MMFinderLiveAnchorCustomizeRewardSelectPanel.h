@interface MMFinderLiveAnchorCustomizeRewardSelectPanel : MMPageSheetBaseView <UITableViewDelegate, UITableViewDataSource, MMFinderLiveAnchorCustomizeRewardViewModelDelegate, MMFinderLiveFansGroupGiftCustomizationPanelDelegate, MMFinderLiveAnchorCustomizeRewardModifyPanelDelegate>
{
    id /* block */ _didDismissCallback; // +0x8
    MMFinderLiveTaskId * _taskId; // +0x10
    UITableView * _rewardListTableView; // +0x18
    MMFinderLiveAnchorCustomizeRewardViewModel * _viewModel; // +0x20
    MMFinderLiveAnchorCustomizeRewardModifyPanel * _anchorCustomizeRewardModifyPanel; // +0x28
}
- (id)initWithTaskId:(id)arg1;
- (void)initPageSheetConfig;
- (void)initDetailView;
- (void)initReusableComponentsForTableView;
- (void)initViewModel;
- (double)contentWidth;
- (double)contentHeight;
- (double)giftItemRowHeight;
- (void)showWithAnimated:(BOOL)arg1;
- (long long)customizeRewardItemsCount;
- (unsigned long long)getCustomizeRewardItemTypeAtIndex:(long long)arg1;
- (id)getFansGroupCustomizeRewardItemAtIndex:(long long)arg1;
- (id)getAnchorCustomizeRewardItemAtIndex:(long long)arg1;
- (void)onCustomizeRewardDataFetchingBegin;
- (void)onCustomizeRewardDataFetchingEndWithErrorMsg:(id)arg1;
- (void)giftItemUpdated:(id)arg1 byCustomizationPanel:(id)arg2;
- (void)onAnchorCustomizeRewardModifyPanelDismiss;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (id)createFansGroupCustomizeRewardCellWithTableView:(id)arg1 index:(long long)arg2;
- (void)configurationFansGroupCustomizeRewardCell:(id)arg1 atIndex:(long long)arg2;
- (id)createAnchorCustomizeRewardCellWithTableView:(id)arg1 index:(long long)arg2;
- (void)configurationAnchorCustomizeRewardCell:(id)arg1 atIndex:(long long)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)navigateToFansGroupCustomizeRewardPanelForItem:(id)arg1;
- (void)navigateToAnchorCustomizeRewardModifyPanelForItem:(id)arg1;
- (void)pageSheetDidDismiss;
- (id /* block */)didDismissCallback;
- (void)setDidDismissCallback:(id /* block */)arg1;
- (id)taskId;
- (void)setTaskId:(id)arg1;
- (id)rewardListTableView;
- (void)setRewardListTableView:(id)arg1;
- (id)viewModel;
- (void)setViewModel:(id)arg1;
- (id)anchorCustomizeRewardModifyPanel;
- (void)setAnchorCustomizeRewardModifyPanel:(id)arg1;
- (void).cxx_destruct;
@end
