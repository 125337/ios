@interface MMFinderLiveShopSettingsView : MMPageSheetBaseView
{
    id <MMFinderLiveShopSettingsViewDelegate> _delegate; // +0x8
    MMFinderLiveShopSettingAskForPromotingAdapter * _askForPromotingAdapter; // +0x10
    MMFinderLiveTaskId * _taskId; // +0x18
    WCTableViewManager * _tableViewManager; // +0x20
    long long _disappearReason; // +0x28
}
+ (BOOL)shouldShowSettingViewForTaskID:(id)arg1;
- (id)initWithTaskId:(id)arg1;
- (void)setupPageSheetConfig;
- (void)initViews;
- (void)reportForItemsExpose;
- (void)layoutSubviews;
- (void)layoutUI;
- (void)configureOptionTableView;
- (void)addSettingSections;
- (void)addRecordReplayToSection:(id)arg1;
- (void)addPreHotToSection:(id)arg1;
- (void)addAskForPromotingCellToSection:(id)arg1;
- (id)createSwitchCellForSEL:(SEL)arg1 title:(id)arg2 value:(BOOL)arg3;
- (void)addRecordCellsToSection:(id)arg1;
- (void)addPresenterTipsSectionIfNeed;
- (void)addOperatorEntityInfoSectionIfNeed;
- (void)openOperatorEntityInfoInPlace;
- (void)refreshShelfDataAndReloadInPlace;
- (void)addFlashSaleSectionIfNeed;
- (void)addGoodsRankWaySection;
- (void)addNewGoodsPositionSection;
- (id)commonSelectIcon;
- (void)pageSheetDidDisappear;
- (void)onReplaySwitchClick:(id)arg1;
- (void)onReplaySwitchValueChangedTo:(BOOL)arg1;
- (void)onReplayTypeValueChangedTo:(int)arg1;
- (void)onPreHotSwitchClick:(id)arg1;
- (void)onFlashSaleSwitchClick:(id)arg1;
- (void)onFlashSaleOrderClicked;
- (void)onClickRankFromBottom;
- (void)onClickRankFromTop;
- (void)onClickAddFromBottom;
- (void)onClickAddFromTop;
- (void)updateOrderAscFlagTo:(int)arg1;
- (void)updateOrderEndInsertFlagTo:(int)arg1;
- (void)updateReplaySwitch:(int)arg1 replayType:(int)arg2;
- (void)onAskForPromotingClick:(id)arg1;
- (void)reportAnchorAction:(long long)arg1 replaySwitch:(int)arg2 replayType:(int)arg3;
- (id)getCurrentLeftButton;
- (void)leftButtonAction;
- (double)fixedHeight;
- (id)currentOrderSetting;
- (id)liveTask;
- (int)replayType;
- (int)replaySwitch;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)askForPromotingAdapter;
- (void)setAskForPromotingAdapter:(id)arg1;
- (id)taskId;
- (void)setTaskId:(id)arg1;
- (id)tableViewManager;
- (void)setTableViewManager:(id)arg1;
- (long long)disappearReason;
- (void)setDisappearReason:(long long)arg1;
- (void).cxx_destruct;
@end
