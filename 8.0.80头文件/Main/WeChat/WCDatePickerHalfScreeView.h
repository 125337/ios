@interface WCDatePickerHalfScreeView : MMPageSheetBaseView
{
    id /* block */ _confirmCallBack; // +0x8
    NSDate * _minimumDate; // +0x10
    NSDate * _maximumDate; // +0x18
    NSDate * _selectedDate; // +0x20
    UIDatePicker * _curDatePicker; // +0x28
}
- (id)initWithTitle:(id)arg1 minTime:(id)arg2 maxTime:(id)arg3 selectTime:(id)arg4;
- (id)navigationRightButton;
- (void)setupDetailView;
- (void)onDone;
- (id /* block */)confirmCallBack;
- (void)setConfirmCallBack:(id /* block */)arg1;
- (id)minimumDate;
- (void)setMinimumDate:(id)arg1;
- (id)maximumDate;
- (void)setMaximumDate:(id)arg1;
- (id)selectedDate;
- (void)setSelectedDate:(id)arg1;
- (id)curDatePicker;
- (void)setCurDatePicker:(id)arg1;
- (void).cxx_destruct;
@end
