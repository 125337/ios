@interface MMFinderLiveKTVAudioEffectOperatingPanel : MMPageSheetBaseView <MMFinderLiveKSKitAudioEffectSettingExt, MMLiveTaskMgrExt, MMTableViewInfoDelegate>
{
    MMFinderLiveTaskId * _taskId; // +0x8
    UIView * _contentView; // +0x10
    WCTableViewManager * _tableViewManager; // +0x18
    WCFinderLiveAnchorLogReporter * _anchorLogReporter; // +0x20
    MMFinderLiveKTVAudioEffectSettingCell * _humanVolumeSettingCell; // +0x28
    MMFinderLiveKTVAudioEffectSettingCell * _bgmVolumeSettingCell; // +0x30
}
+ (id)showWithTaskId:(id)arg1;
- (id)initWithTaskId:(id)arg1;
- (void)setupPageSheetConfig;
- (void)registerExtensions;
- (void)initSubviews;
- (void)layoutSubviews;
- (void)layoutUI;
- (void)configureOptionTableView;
- (void)layoutTableView;
- (void)showWithAnimated:(BOOL)arg1;
- (void)pageSheetWillClose:(BOOL)arg1;
- (void)addOriginSettingSection;
- (void)addToneSettingSection;
- (void)addUIEffectSection;
- (void)addReverbSettingSection;
- (id)makeHeaderViewWith:(id)arg1 topPading:(double)arg2;
- (void)onLeftButtonTapped;
- (id)leftNavButton;
- (double)contentWidth;
- (double)contentHeight;
- (double)tableWidth;
- (id)liveTask;
- (id)cornerShapeWithSize:(CGSize)arg1 byRoundingCorners:(unsigned long long)arg2;
- (id)anchorLogReporter;
- (id)getAvailableReverbItems;
- (id)getSelectedReverbItem;
- (void)onVoiceEarMonitorEnableChanged:(BOOL)arg1 taskId:(id)arg2;
- (void)onVoiceEarMonitorUsableChanged:(BOOL)arg1 taskId:(id)arg2;
- (void)onClearForExitLiveWithLiveTask:(id)arg1;
- (BOOL)mmTableView:(id)arg1 shouldBeginRecognizeGesture:(id)arg2;
- (void)reportForPanelExpose;
- (void)reportForPanelDismiss;
- (id)taskId;
- (void)setTaskId:(id)arg1;
- (id)contentView;
- (void)setContentView:(id)arg1;
- (id)tableViewManager;
- (void)setTableViewManager:(id)arg1;
- (void)setAnchorLogReporter:(id)arg1;
- (id)humanVolumeSettingCell;
- (void)setHumanVolumeSettingCell:(id)arg1;
- (id)bgmVolumeSettingCell;
- (void)setBgmVolumeSettingCell:(id)arg1;
- (void).cxx_destruct;
@end

