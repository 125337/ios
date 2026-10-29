@interface MMFinderLiveConnectMicAnchorModeSettingPanel : MMPageSheetBaseView
{
    id <MMFinderLiveConnectMicAnchorModeSettingPanelDelegate> _delegate; // +0x8
    id <MMFinderLiveConnectMicAnchorModeSettingPanelReportDelegate> _reportDelegate; // +0x10
    MMFinderLiveTaskId * _taskId; // +0x18
    MMTableViewInfo * _tableViewInfo; // +0x20
    MMUIButton * _confirmButton; // +0x28
    unsigned long long _originalSelectedMode; // +0x30
    unsigned long long _selectedMode; // +0x38
    double _lastLayoutTableViewWidth; // +0x40
    unsigned long long _switchFlag; // +0x48
}
- (id)initWithTaskId:(id)arg1 switchFlag:(unsigned long long)arg2;
- (void)initSelectedMode;
- (void)reinitTableViewInfo;
- (void)reinitTableViewInfoAndResetHeight:(BOOL)arg1;
- (void)setupPageSheetConfig;
- (void)updateConfirmButtonEnabled;
- (void)layoutSubviews;
- (id)navigationBackButton;
- (void)onConfirm;
- (void)onCancelButtonClicked;
- (void)onSelectConnectMic;
- (void)onSelectDisable;
- (double)getSingleLineLayoutCellHeight;
- (double)getTwoLineLayoutCellHeightWithDesc:(id)arg1;
- (void)updateCellInfoSeperateLine:(id)arg1 needDisplay:(BOOL)arg2 leftInset:(double)arg3;
- (void)makeConnectMicCell:(id)arg1 cellInfo:(id)arg2;
- (void)makeDisableCell:(id)arg1 cellInfo:(id)arg2;
- (void)makeCell:(id)arg1 cellInfo:(id)arg2 title:(id)arg3 desc:(id)arg4 select:(BOOL)arg5;
- (BOOL)isConnectMicSelected;
- (BOOL)isDisableSelected;
- (BOOL)isConnectMicAvailable;
- (id)liveTask;
- (void)reportWithSubElementType:(unsigned int)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)reportDelegate;
- (void)setReportDelegate:(id)arg1;
- (id)taskId;
- (void)setTaskId:(id)arg1;
- (id)tableViewInfo;
- (void)setTableViewInfo:(id)arg1;
- (id)confirmButton;
- (void)setConfirmButton:(id)arg1;
- (unsigned long long)originalSelectedMode;
- (void)setOriginalSelectedMode:(unsigned long long)arg1;
- (unsigned long long)selectedMode;
- (void)setSelectedMode:(unsigned long long)arg1;
- (double)lastLayoutTableViewWidth;
- (void)setLastLayoutTableViewWidth:(double)arg1;
- (unsigned long long)switchFlag;
- (void)setSwitchFlag:(unsigned long long)arg1;
- (void).cxx_destruct;
@end
