@interface WXGRoamChooseRangeTimeDetailView : MMPageSheetBaseView <MMPageSheetBottomViewDelegate>
{
    BOOL _isStartTime; // +0x8
    id /* block */ _completionBlock; // +0x10
    UIDatePicker * _datePicker; // +0x18
    UILabel * _dateLabel; // +0x20
    UILabel * _dateTipsLabel; // +0x28
}
- (id)initWithIsStartTime:(BOOL)arg1;
- (void)setupView;
- (void)datePickerValueChanged:(id)arg1;
- (void)updateDate;
- (void)onClickPageSheetCancelButton;
- (void)onClickPageSheetConfirmButton;
- (id /* block */)completionBlock;
- (void)setCompletionBlock:(id /* block */)arg1;
- (id)datePicker;
- (void)setDatePicker:(id)arg1;
- (id)dateLabel;
- (void)setDateLabel:(id)arg1;
- (id)dateTipsLabel;
- (void)setDateTipsLabel:(id)arg1;
- (BOOL)isStartTime;
- (void)setIsStartTime:(BOOL)arg1;
- (void).cxx_destruct;
@end
