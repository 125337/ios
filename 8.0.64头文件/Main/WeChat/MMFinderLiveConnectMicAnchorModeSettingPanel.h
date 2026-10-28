@interface MMFinderLiveConnectMicAnchorModeSettingPanel : MMPageSheetBaseView <MMFinderLivePaidConnectMicAnchorSettingPanelDelegate, MMFinderLivePaymentPolicyIntroViewDelegate>
{
    BOOL _directOpenPaidMicSettingOnSelection; // +0x8
    id <MMFinderLiveConnectMicAnchorModeSettingPanelDelegate> _delegate; // +0x10
    id <MMFinderLiveConnectMicAnchorModeSettingPanelReportDelegate> _reportDelegate; // +0x18
    MMFinderLiveTaskId * _taskId; // +0x20
    MMTableViewInfo * _tableViewInfo; // +0x28
    MMUIButton * _confirmButton; // +0x30
    unsigned long long _originalSelectedMode; // +0x38
    unsigned long long _selectedMode; // +0x40
    double _lastLayoutTableViewWidth; // +0x48
    MMFinderLivePaidConnectMicAnchorSetting * _paidMicSetting; // +0x50
    MMFinderLivePaidConnectMicAnchorSettingConfig * _paidMicSettingConfig; // +0x58
    unsigned long long _switchFlag; // +0x60
    MicSetting_PurchaseMicSetting * _purchaseMicSetting; // +0x68
    FinderLiveMicInfo * _micInfo; // +0x70
}
- (id)initWithTaskId:(id)arg1 switchFlag:(unsigned long long)arg2 purchaseMicSetting:(id)arg3 micInfo:(id)arg4;
- (void)initPaidMicSettingIfNeeded;
- (void)initSelectedMode;
- (void)reinitTableViewInfo;
- (void)reinitTableViewInfoAndResetHeight:(BOOL)arg1;
- (void)setupPageSheetConfig;
- (void)updateConfirmButtonEnabled;
- (void)layoutSubviews;
- (void)onConfirm;
- (void)onSelectConnectMic;
- (void)onSelectPaidConnectMic;
- (void)_doSelectPaidConnectMic;
- (void)onSelectPaidConnectMicSetting;
- (void)onSelectFreeTalking;
- (void)onSelectDisable;
- (double)getSingleLineLayoutCellHeight;
- (double)getTwoLineLayoutCellHeightWithDesc:(id)arg1;
- (void)updateCellInfoSeperateLine:(id)arg1 needDisplay:(BOOL)arg2 leftInset:(double)arg3;
- (void)makeConnectMicCell:(id)arg1 cellInfo:(id)arg2;
- (void)makePaidConnectMicCell:(id)arg1 cellInfo:(id)arg2;
- (void)makePaidConnectMicSettingCell:(id)arg1 cellInfo:(id)arg2;
- (void)makeFreeTalkingCell:(id)arg1 cellInfo:(id)arg2;
- (void)makeDisableCell:(id)arg1 cellInfo:(id)arg2;
- (void)makeCell:(id)arg1 cellInfo:(id)arg2 title:(id)arg3 desc:(id)arg4 select:(BOOL)arg5;
- (void)makeDescriptionCell:(id)arg1 cellInfo:(id)arg2 title:(id)arg3 desc:(id)arg4 descColor:(id)arg5;
- (CGSize)getDescriptionCellDescSize:(id)arg1;
- (double)getDescriptionCellHeightWithTitle:(id)arg1 desc:(id)arg2;
- (BOOL)isConnectMicSelected;
- (BOOL)isPaidConnectMicSelected;
- (BOOL)isFreeTalkingSelected;
- (BOOL)isDisableSelected;
- (BOOL)isConnectMicAvailable;
- (BOOL)isPaidConnectMicAvailable;
- (BOOL)isFreeTalkingAvailable;
- (void)paidConnectMicAnchorSettingPanel:(id)arg1 didConfirmWithLatestSetting:(id)arg2;
- (BOOL)paidConnectMicAnchorSettingPanelCanChangeMicLayoutMode:(id)arg1;
- (void)onMMFinderLivePaymentPolicyIntroViewConfirmButtonClicked:(id)arg1;
- (id)liveTask;
- (void)reportWithSubElementType:(unsigned int)arg1 micSetting:(id)arg2;
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
- (id)paidMicSetting;
- (void)setPaidMicSetting:(id)arg1;
- (id)paidMicSettingConfig;
- (void)setPaidMicSettingConfig:(id)arg1;
- (unsigned long long)switchFlag;
- (void)setSwitchFlag:(unsigned long long)arg1;
- (id)purchaseMicSetting;
- (void)setPurchaseMicSetting:(id)arg1;
- (id)micInfo;
- (void)setMicInfo:(id)arg1;
- (BOOL)directOpenPaidMicSettingOnSelection;
- (void)setDirectOpenPaidMicSettingOnSelection:(BOOL)arg1;
- (void).cxx_destruct;
@end
