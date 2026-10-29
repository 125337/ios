@interface WXGRoamChooseRangeTimeDetailView : MMPageSheetBaseView <MMPageSheetBottomViewDelegate>
{
    BOOL _isStartTime; // +0x8
    UIDatePicker * _datePicker; // +0x10
    UILabel * _dateLabel; // +0x18
    UILabel * _dateTipsLabel; // +0x20
}
- (id)initWithIsStartTime:(BOOL)arg1;
- (void)setupView;
- (void)datePickerValueChanged:(id)arg1;
- (void)updateDate;
- (void)onClickPageSheetCancelButton;
- (void)onClickPageSheetConfirmButton;
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

