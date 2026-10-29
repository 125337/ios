@interface MMLiveGenerateReplaySettingPanel : MMLandscapeDragBarPageSheet <UITableViewDelegate, UITableViewDataSource, ILinkEventExt, MMLiveGenerateReplaySettingSwitchCellDelegate>
{
    BOOL _hasCheckedSettingResult; // +0x8
    id <MMLiveGenerateReplaySettingPanelDelegate> _actionDelegate; // +0x10
    MMLiveReplaySetting * _originalSetting; // +0x18
    MMLiveReplaySetting * _currentSetting; // +0x20
    MMLiveGenerateReplaySettingSwitchItem * _mainSwitchItem; // +0x28
    MMLiveGenerateReplaySettingSwitchItem * _highlightSwitchItem; // +0x30
    MMLiveGenerateReplaySettingSwitchItem * _barrageSwitchItem; // +0x38
    NSMutableArray * _settingSwitchItemList; // +0x40
    UITableView * _tableView; // +0x48
    RichTextView * _bottomTipView; // +0x50
    WCFinderLiveAnchorLogReporter * _anchorReporter; // +0x58
    MMFinderLiveTask * _liveTask; // +0x60
    WCFinderLiveStarterReporter * _starterReporter; // +0x68
}
- (id)initWithReplaySetting:(id)arg1 anchorReporter:(id)arg2 liveTask:(id)arg3 starterReporter:(id)arg4;
- (void)initSettingSwitchItems;
- (id)generateSettingSwitchItemWithTitle:(id)arg1 desc:(id)arg2 isMainSwitch:(BOOL)arg3 isEnabled:(BOOL)arg4;
- (double)pageDetailViewHeight;
- (void)configPageSheetAndDetailView;
- (void)layoutSubviews;
- (void)layoutUI;
- (void)layoutBottomTipView;
- (void)layoutTableView;
- (void)pageSheetWillClose:(BOOL)arg1;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)onLinkClicked:(id)arg1 withRect:(CGRect)arg2;
- (void)onLiveGenerateReplaySettingSwitchCellSwitchValueChanged:(BOOL)arg1 settingSwitchItem:(id)arg2;
- (void)reportDataWithType:(unsigned long long)arg1 action:(unsigned long long)arg2;
- (id)actionDelegate;
- (void)setActionDelegate:(id)arg1;
- (id)originalSetting;
- (void)setOriginalSetting:(id)arg1;
- (id)currentSetting;
- (void)setCurrentSetting:(id)arg1;
- (BOOL)hasCheckedSettingResult;
- (void)setHasCheckedSettingResult:(BOOL)arg1;
- (id)mainSwitchItem;
- (void)setMainSwitchItem:(id)arg1;
- (id)highlightSwitchItem;
- (void)setHighlightSwitchItem:(id)arg1;
- (id)barrageSwitchItem;
- (void)setBarrageSwitchItem:(id)arg1;
- (id)settingSwitchItemList;
- (void)setSettingSwitchItemList:(id)arg1;
- (id)tableView;
- (void)setTableView:(id)arg1;
- (id)bottomTipView;
- (void)setBottomTipView:(id)arg1;
- (id)anchorReporter;
- (void)setAnchorReporter:(id)arg1;
- (id)liveTask;
- (void)setLiveTask:(id)arg1;
- (id)starterReporter;
- (void)setStarterReporter:(id)arg1;
- (void).cxx_destruct;
@end
