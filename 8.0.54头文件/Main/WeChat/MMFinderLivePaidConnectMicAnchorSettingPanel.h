@interface MMFinderLivePaidConnectMicAnchorSettingPanel : MMPageSheetBaseView <MMFinderLiveGenericPickerViewDelegate, MMFinderLiveConnectMicModePageSheetViewDelegate>
{
    BOOL _isDismissedByConfirm; // +0x8
    id <MMFinderLivePaidConnectMicAnchorSettingPanelDelegate> _delegate; // +0x10
    MMTableViewInfo * _tableViewInfo; // +0x18
    MMUILabel * _titleLabel; // +0x20
    MMUIButton * _ratingButton; // +0x28
    MMUIButton * _historyButton; // +0x30
    UIButton * _confirmButton; // +0x38
    MMUIMaskContainerView * _maskContainerView; // +0x40
    MMFinderLiveGenericPickerView * _pickerView; // +0x48
    MMFinderLivePaidConnectMicAnchorSetting * _initialSetting; // +0x50
    MMFinderLivePaidConnectMicAnchorSetting * _latestSetting; // +0x58
    MMFinderLivePaidConnectMicAnchorSettingConfig * _settingConfig; // +0x60
    MMFinderLivePaidConnectMicAnchorInfo * _anchorInfo; // +0x68
    MMFinderLiveTaskId * _taskId; // +0x70
}
- (id)initWithSetting:(id)arg1 settingConfig:(id)arg2 info:(id)arg3 taskId:(id)arg4;
- (void)initUI;
- (void)reinitTableInfo;
- (void)setupPageSheetConfig;
- (void)layoutSubviews;
- (void)onPageSheetContainerBgTapped;
- (void)showWithAnimated:(BOOL)arg1;
- (void)showWithAnimated:(BOOL)arg1 complete:(id /* block */)arg2;
- (void)dismissWithAnimated:(BOOL)arg1;
- (void)dismissWithAnimated:(BOOL)arg1 completion:(id /* block */)arg2;
- (void)makeConnectMicDurationCell:(id)arg1 cellInfo:(id)arg2;
- (void)makeConnectMicCloseModeCell:(id)arg1 cellInfo:(id)arg2;
- (void)makeConnectMicFocusModeCell:(id)arg1 cellInfo:(id)arg2;
- (void)makeConnectMicPriceCell:(id)arg1 cellInfo:(id)arg2;
- (double)audienceBidCellHeight;
- (void)makeAudienceBidCell:(id)arg1 cellInfo:(id)arg2;
- (void)makeAudienceBidPriceCell:(id)arg1 cellInfo:(id)arg2;
- (void)makeTitleDetailCellWithCell:(id)arg1 title:(id)arg2 detail:(id)arg3;
- (void)makeTitleDetailCellWithCell:(id)arg1 title:(id)arg2 detail:(id)arg3 showLeadingLine:(BOOL)arg4 isWecoinDesc:(BOOL)arg5;
- (void)onAudienceBidDidChange:(id)arg1;
- (void)onSelectConnectMicPriceCell;
- (void)onSelectAudienceBidPriceCell;
- (void)onSelectConnectMicCloseModeCell;
- (void)onSelectConnectMicFocusModeCell;
- (void)onSelectConnectMicDurationCell;
- (void)onClose;
- (void)onTapRatingButton;
- (void)onConfirm;
- (void)onTapHistory;
- (void)showGenericPickerViewWithConfig:(id)arg1 pickerType:(unsigned long long)arg2;
- (void)reloadTableViewMask;
- (void)pushLiteAppWithJumpInfo:(id)arg1;
- (void)internalSetupAndOpenLiteAppVC:(id)arg1;
- (id)latestSetting;
- (void)livePickerView:(id)arg1 didSelectItem:(id)arg2 index:(unsigned long long)arg3;
- (void)onConnectMicModeOrFocusChangeConfirmed:(unsigned long long)arg1 focusedUserId:(id)arg2 userIndices:(id)arg3;
- (id)liveTask;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)tableViewInfo;
- (void)setTableViewInfo:(id)arg1;
- (id)titleLabel;
- (void)setTitleLabel:(id)arg1;
- (id)ratingButton;
- (void)setRatingButton:(id)arg1;
- (id)historyButton;
- (void)setHistoryButton:(id)arg1;
- (id)confirmButton;
- (void)setConfirmButton:(id)arg1;
- (id)maskContainerView;
- (void)setMaskContainerView:(id)arg1;
- (id)pickerView;
- (void)setPickerView:(id)arg1;
- (id)initialSetting;
- (void)setInitialSetting:(id)arg1;
- (void)setLatestSetting:(id)arg1;
- (id)settingConfig;
- (void)setSettingConfig:(id)arg1;
- (id)anchorInfo;
- (void)setAnchorInfo:(id)arg1;
- (id)taskId;
- (void)setTaskId:(id)arg1;
- (BOOL)isDismissedByConfirm;
- (void)setIsDismissedByConfirm:(BOOL)arg1;
- (void).cxx_destruct;
@end

