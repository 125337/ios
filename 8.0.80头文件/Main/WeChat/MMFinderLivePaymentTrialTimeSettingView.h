@interface MMFinderLivePaymentTrialTimeSettingView : MMPageSheetBaseView <MMPageSheetBottomViewDelegate, MMCommonActionSheetPickerDelegate>
{
    unsigned int _curTrialTimeHour; // +0x8
    unsigned int _curTrialTimeMinute; // +0xc
    MMFinderLiveTaskId * _taskId; // +0x10
    id /* block */ _didDismissCallback; // +0x18
    UIView * _contentView; // +0x20
    MMUILabel * _titleLabel; // +0x28
    UITapGestureRecognizer * _tapGesture; // +0x30
    MMFinderLivePaymentTrialTimeSettingCell * _durationSettingCell; // +0x38
    long long _purchaseLivePreviewType; // +0x40
    MMCommonActionSheetPicker * _startTimePicker; // +0x48
}
- (id)initWithLiveTaskId:(id)arg1 purchaseLivePreviewType:(long long)arg2 trialDurationTime:(unsigned int)arg3;
- (void)initViews;
- (void)layoutSubviews;
- (void)layoutUI;
- (double)contentViewHeight;
- (void)onSelectTrialTime;
- (id)getDatePickerData;
- (id)getHourDataWithDayComponent:(long long)arg1;
- (id)getMinuteDataWithDayComponent:(long long)arg1 hourComponent:(long long)arg2;
- (id)getMinuteArrWithDayComponent:(long long)arg1 hourComponent:(long long)arg2;
- (id)getHourArrWithDayComponent:(long long)arg1;
- (void)dismissStartTimePicker;
- (void)commonPickerConfirm:(id)arg1 selectedRows:(id)arg2;
- (void)commonActionSheetPicker:(id)arg1 didSelectRow:(long long)arg2 inComponent:(long long)arg3 pickItem:(id)arg4;
- (void)onClickPageSheetConfirmButton;
- (void)onClickPageSheetCancelButton;
- (id)titleForPageSheetConfirmButton;
- (double)bottomViewBottomMargin;
- (void)pageSheetDidDismiss;
- (id)liveTask;
- (id)taskId;
- (void)setTaskId:(id)arg1;
- (id /* block */)didDismissCallback;
- (void)setDidDismissCallback:(id /* block */)arg1;
- (id)contentView;
- (void)setContentView:(id)arg1;
- (id)titleLabel;
- (void)setTitleLabel:(id)arg1;
- (id)tapGesture;
- (void)setTapGesture:(id)arg1;
- (id)durationSettingCell;
- (void)setDurationSettingCell:(id)arg1;
- (long long)purchaseLivePreviewType;
- (void)setPurchaseLivePreviewType:(long long)arg1;
- (unsigned int)curTrialTimeHour;
- (void)setCurTrialTimeHour:(unsigned int)arg1;
- (unsigned int)curTrialTimeMinute;
- (void)setCurTrialTimeMinute:(unsigned int)arg1;
- (id)startTimePicker;
- (void)setStartTimePicker:(id)arg1;
- (void).cxx_destruct;
@end
