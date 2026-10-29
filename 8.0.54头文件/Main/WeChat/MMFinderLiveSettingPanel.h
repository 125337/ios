@interface MMFinderLiveSettingPanel : MMPageSheetBaseView
{
    id /* block */ _pipSwitchChangeCallback; // +0x8
    MMFinderLiveTaskId * _taskId; // +0x10
    UIView * _contentView; // +0x18
    MMTableViewInfo * _settingTableViewInfo; // +0x20
}
+ (BOOL)hasSettingEntranceForLive:(id)arg1;
- (id)initWithTaskId:(id)arg1;
- (void)setupPageSheetConfig;
- (id)getCurrentLeftButton;
- (void)layoutSubviews;
- (void)layoutUI;
- (void)layoutContentView;
- (double)contentWidth;
- (double)contentHeight;
- (void)layoutSettingTable;
- (void)reloadSettingTable;
- (void)addPIPSwitchCellInSection:(id)arg1;
- (void)leftButtonAction;
- (void)onPIPSettingSwitch:(id)arg1;
- (void)pageSheetDidDisappear;
- (id)audienceLogReporter;
- (id /* block */)pipSwitchChangeCallback;
- (void)setPipSwitchChangeCallback:(id /* block */)arg1;
- (id)taskId;
- (void)setTaskId:(id)arg1;
- (id)contentView;
- (void)setContentView:(id)arg1;
- (id)settingTableViewInfo;
- (void)setSettingTableViewInfo:(id)arg1;
- (void).cxx_destruct;
@end

