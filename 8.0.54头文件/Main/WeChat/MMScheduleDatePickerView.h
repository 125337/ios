@interface MMScheduleDatePickerView : UIPickerView <UIPickerViewDelegate, UIPickerViewDataSource, MMActionSheetCustomPickerPotocol>
{
    NSDate * _currentDate; // +0x8
    NSDate * _preferredDate; // +0x10
    NSMutableArray * _dayComponents; // +0x18
    NSMutableArray * _hourComponents; // +0x20
    NSMutableArray * _minuteComponents; // +0x28
    NSMutableArray * _firstDayHourComponents; // +0x30
    NSMutableArray * _firstHourMinuteComponents; // +0x38
    NSMutableArray * _normalHourComponents; // +0x40
    NSMutableArray * _normalMinuteComponents; // +0x48
}
- (id)initWithPreferredDate:(id)arg1;
- (void)didAddSubview:(id)arg1;
- (void)initData;
- (id)getDayStringAfterDay:(unsigned int)arg1;
- (long long)numberOfComponentsInPickerView:(id)arg1;
- (long long)pickerView:(id)arg1 numberOfRowsInComponent:(long long)arg2;
- (double)pickerView:(id)arg1 widthForComponent:(long long)arg2;
- (double)pickerView:(id)arg1 rowHeightForComponent:(long long)arg2;
- (id)titleForRow:(long long)arg1 forComponent:(long long)arg2;
- (id)pickerView:(id)arg1 viewForRow:(long long)arg2 forComponent:(long long)arg3 reusingView:(id)arg4;
- (void)pickerView:(id)arg1 didSelectRow:(long long)arg2 inComponent:(long long)arg3;
- (id)selectedDate;
- (id)currentDate;
- (void)setCurrentDate:(id)arg1;
- (id)preferredDate;
- (void)setPreferredDate:(id)arg1;
- (id)dayComponents;
- (void)setDayComponents:(id)arg1;
- (id)hourComponents;
- (void)setHourComponents:(id)arg1;
- (id)minuteComponents;
- (void)setMinuteComponents:(id)arg1;
- (id)firstDayHourComponents;
- (void)setFirstDayHourComponents:(id)arg1;
- (id)firstHourMinuteComponents;
- (void)setFirstHourMinuteComponents:(id)arg1;
- (id)normalHourComponents;
- (void)setNormalHourComponents:(id)arg1;
- (id)normalMinuteComponents;
- (void)setNormalMinuteComponents:(id)arg1;
- (void).cxx_destruct;
@end

