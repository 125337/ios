@interface MMFinderLivePaymentTrialModeSettingView : MMPageSheetBaseView <MMLiveHalfScreenTitleBarViewDelegate, MMFinderLivePaymentTrialModeCellDelegate>
{
    id <MMFinderLivePaymentTrialModeSettingViewDelegate> _delegate; // +0x8
    MMFinderLiveTaskId * _taskId; // +0x10
    UIView * _contentView; // +0x18
    MMLiveHalfScreenTitleBarView * _titleBar; // +0x20
    UIView * _separatorLine; // +0x28
    MMFinderLivePaymentTrialModeCell * _durationFromFirstJoinCell; // +0x30
    MMFinderLivePaymentTrialModeCell * _durationFromLiveStartCell; // +0x38
    long long _purchaseLivePreviewType; // +0x40
}
- (id)initWithPurchaseLivePreviewType:(long long)arg1;
- (void)initViews;
- (void)layoutSubviews;
- (void)layoutUI;
- (double)contentViewHeight;
- (void)updatePurchaseLivePreviewType:(long long)arg1;
- (void)updateCellSelectedStatus;
- (void)onMMLiveHalfScreenTitleBarLeftButtonClicked:(id)arg1;
- (id)liveTask;
- (void)pageSheetDidCloseWithType:(long long)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)taskId;
- (void)setTaskId:(id)arg1;
- (id)contentView;
- (void)setContentView:(id)arg1;
- (id)titleBar;
- (void)setTitleBar:(id)arg1;
- (id)separatorLine;
- (void)setSeparatorLine:(id)arg1;
- (id)durationFromFirstJoinCell;
- (void)setDurationFromFirstJoinCell:(id)arg1;
- (id)durationFromLiveStartCell;
- (void)setDurationFromLiveStartCell:(id)arg1;
- (long long)purchaseLivePreviewType;
- (void)setPurchaseLivePreviewType:(long long)arg1;
- (void).cxx_destruct;
@end

