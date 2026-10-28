@interface MMFinderLiveConnectMicAnchorMicModeSettingsPanel : MMPageSheetBaseView <UITableViewDelegate, UITableViewDataSource>
{
    id <MMFinderLiveConnectMicAnchorMicModeSettingsPanelDelegate> _delegate; // +0x8
    UIView * _contentView; // +0x10
    MMTableView * _tableView; // +0x18
    MMFinderLiveTaskId * _taskId; // +0x20
    unsigned long long _originalCondition; // +0x28
    unsigned long long _targetCondition; // +0x30
    MMFinderLiveConnectMicAnchorContainerReporterExtInfo * _anchorContainerReporterExtInfo; // +0x38
}
- (id)initWithTaskId:(id)arg1;
- (void)updateAnchorContainerReporterExtInfo:(id)arg1;
- (void)pageSheetDidClose:(BOOL)arg1;
- (void)layoutSubviews;
- (void)createUI;
- (void)layoutUI;
- (void)setupPageSheetConfig;
- (id)createLeftButton;
- (id)createRightButton;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)contentViewHeight;
- (double)getTableHeight;
- (id)tableView;
- (id)contentView;
- (id)liveTask;
- (void)doneButtonAction;
- (void)cancelButtonAction;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (void)setContentView:(id)arg1;
- (void)setTableView:(id)arg1;
- (id)taskId;
- (void)setTaskId:(id)arg1;
- (unsigned long long)originalCondition;
- (void)setOriginalCondition:(unsigned long long)arg1;
- (unsigned long long)targetCondition;
- (void)setTargetCondition:(unsigned long long)arg1;
- (id)anchorContainerReporterExtInfo;
- (void)setAnchorContainerReporterExtInfo:(id)arg1;
- (void).cxx_destruct;
@end
