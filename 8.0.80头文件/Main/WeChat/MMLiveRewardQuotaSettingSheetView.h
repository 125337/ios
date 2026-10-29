@interface MMLiveRewardQuotaSettingSheetView : MMPageSheetBaseView <MMLiveHalfScreenTitleBarViewDelegate, MMLiveRewardQuotaSettingViewDelegate>
{
    id <MMLiveRewardQuotaSettingSheetViewDelegate> _operationDelegate; // +0x8
    id /* block */ _closedBlock; // +0x10
    MMFinderLiveTaskId * _taskId; // +0x18
    UIView * _contentView; // +0x20
    MMLiveHalfScreenTitleBarView * _titleBar; // +0x28
    UIView * _topSeparatorLine; // +0x30
    UISwitch * _settingSwitch; // +0x38
    MMUILabel * _titleLabel; // +0x40
    MMUILabel * _descLabel; // +0x48
    UIView * _footerSeparatorLine; // +0x50
    MMMLiveRewardQuotaSettingDetailCell * _detailCell; // +0x58
    unsigned long long _rewardQuota; // +0x60
}
- (id)initWithTaskId:(id)arg1;
- (void)initViews;
- (void)layoutSubviews;
- (void)layoutUI;
- (void)hidePageSheet;
- (void)showPageSheet;
- (void)showWithAnimated:(BOOL)arg1;
- (void)pageSheetDidClose:(BOOL)arg1;
- (void)onSwitchChanged:(id)arg1;
- (void)onIntroductionButtonClicked;
- (void)onDetailCellTapped;
- (void)onMMLiveRewardQuotaSettingViewChooseRewardQuota:(unsigned int)arg1;
- (void)onMMLiveHalfScreenTitleBarLeftButtonClicked:(id)arg1;
- (id)liveTask;
- (double)contentViewHeight;
- (void)updateRewardConsumptionQuota;
- (id)operationDelegate;
- (void)setOperationDelegate:(id)arg1;
- (id /* block */)closedBlock;
- (void)setClosedBlock:(id /* block */)arg1;
- (id)taskId;
- (void)setTaskId:(id)arg1;
- (id)contentView;
- (void)setContentView:(id)arg1;
- (id)titleBar;
- (void)setTitleBar:(id)arg1;
- (id)topSeparatorLine;
- (void)setTopSeparatorLine:(id)arg1;
- (id)settingSwitch;
- (void)setSettingSwitch:(id)arg1;
- (id)titleLabel;
- (void)setTitleLabel:(id)arg1;
- (id)descLabel;
- (void)setDescLabel:(id)arg1;
- (id)footerSeparatorLine;
- (void)setFooterSeparatorLine:(id)arg1;
- (id)detailCell;
- (void)setDetailCell:(id)arg1;
- (unsigned long long)rewardQuota;
- (void)setRewardQuota:(unsigned long long)arg1;
- (void).cxx_destruct;
@end
